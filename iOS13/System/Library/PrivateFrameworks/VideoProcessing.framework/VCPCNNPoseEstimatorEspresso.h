/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNPoseEstimator.h>

@class VCPCNNModelEspresso;

@interface VCPCNNPoseEstimatorEspresso : VCPCNNPoseEstimator {

	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;

}
+(id)sharedModel:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(float*)getInputBuffer;
-(int)computePoseScore:(float*)arg1 ;
@end

