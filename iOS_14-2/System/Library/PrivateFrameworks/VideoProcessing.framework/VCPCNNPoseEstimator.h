/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNPoseEstimator : NSObject
+(id)estimator;
-(int)detectPoseForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 yaw:(long long*)arg3 ;
-(int)computePoseScore:(float*)arg1 ;
-(float*)getInputBuffer;
@end

