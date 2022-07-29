# Stereo Reconstruction
## Surya Prabhakaran, Soumya Mondal

## Running Instructions
Command: ./stereo_reconstruction \[algorithm\] \[dataset\] \[number of test images\]

### Examples

#### odometry
./stereo_reconstruction BM ODOMETRY 10

This command runs the stereo reconstruction pipeline using Block Matching algorithm based on the first 10 images in the KITTI odemetry dataset sequences.

The result pose is saved in a txt file.

#### stereo
./stereo_reconstruction BM STEREO 10

This command calculates and saves the disparity map using Block Matching algorithm based on the first 10 images in KITTI stereo dataset.

The result disparity maps are saved as PNG images.

## Eval
./stereo_reconstruction_eval \[evaluation type\]

This command evaluates the different metrics needed for the KITTI benchmark

The results are stored in txt files

#### Pose Evaluation
./stereo_reconstruction_eval POSE

This command goes through all the supported algorithms to find their last resulting pose and compares it with the KITTI ground truth pose of the odometry dataset.

The result of the evaluation is located in the result folder.

#### Disparity Map Evaluation
./stereo_reconstruction_eval DISPARITY

This command goes through all the supported algorithms to find their last result disparity map and compares it with the KITTI ground truth disparity map of the stereo dataset.

The result of the evaluation is located in the result folder.
