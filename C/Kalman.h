  /* ----------------------------------------------- */
 /* kalmanın kullandığı fonksiyonlar burda tanımlı  */
/* ----------------------------------------------- */ 
#ifndef INC_KALMAN_H_
#define INC_KALMAN_H_

#include<stdio.h>

/**
 * @brief Excel'de bize verilen veriler
 * 
 */
typedef struct 
{
    float t;
    float x_true;
    float y_true;
    float gpx_x;
    float gps_y;
    float lidar_x;
    float lidar_y;

}Kalman;

typedef struct 
{
    float konumx_islenmis;
    float konumy_islenmis;
    float vx;
    float vy;
}KalmanOutput;







void KalmanFilter();










#endif 