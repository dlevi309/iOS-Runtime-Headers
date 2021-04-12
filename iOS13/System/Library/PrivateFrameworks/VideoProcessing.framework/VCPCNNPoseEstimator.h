/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNPoseEstimator : NSObject
+(id)estimator;
-(float*)getInputBuffer;
-(int)computePoseScore:(float*)arg1 ;
-(int)detectPoseForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 yaw:(long long*)arg3 ;
@end

