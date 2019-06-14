#include "TrackerHSV.h"

#include <iostream>
#include <opencv2/imgproc.hpp>
#include <opencv2/calib3d.hpp>

using namespace std;
using namespace cv;


TrackerHSV::TrackerHSV(CVCalibration &cvl,  bool showFrame)
    : Tracker(cvl, showFrame) {
 
}

int TrackerHSV::getPose(Mat &frame, Vec3d &tVec, Vec3d &rVec) {
  int detectedBoard = 0;
  
  return detectedBoard;
}

bool TrackerHSV::detectLandingPad(Mat& frame) {
 
  return false;
}

