#ifndef STEREO_RECONSTRUCTION_DISPARITY_H
#define STEREO_RECONSTRUCTION_DISPARITY_H
#include <opencv2/opencv.hpp>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include "defs.h"

cv::Mat calcDisparity(const cv::Mat& left_img, const cv::Mat& right_img, Algorithm matching_algorithm);
pcl::PointCloud<pcl::PointXYZI> disparity2PointCloud(const cv::Mat& disp_img, cv::Mat K, float baseline, const cv::Mat& left_img);
pcl::PointCloud<pcl::PointXYZRGB> disparity2PointCloudRGB(const cv::Mat& disp_img, cv::Mat K, float baseline, const cv::Mat& left_img);

#endif //STEREO_RECONSTRUCTION_DISPARITY_H
