/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)computePoseScore:(float*)arg1 ;
-(float*)getInputBuffer;
-(void)dealloc;
@end

