//
//  TrackerHSV.hpp
//  tracker_hsv
//
//  Created by Vishnu R Menon on 27/5/19.
//

#ifndef TrackerHSV_h
#define TrackerHSV_h

#include <opencv2/core.hpp>

#include "../tracker-base/Tracker.h"
#include "../camera-calibration/CVCalibration.h"

using namespace std;
using namespace cv;

class TrackerHSV : public Tracker {

public:
  TrackerHSV(CVCalibration& cvl, bool showFrame=true);
  bool detectLandingPad(Mat& frame) override;
  int getPose(Mat& frame, Vec3d& translationVec, Vec3d& rotationVec) override;
};

#endif /* TrackerHSV_h */
