/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNPoseEstimator.h>

@class VCPCNNModel, VCPCNNData;

@interface VCPCNNPoseEstimatorMPS : VCPCNNPoseEstimator {

	VCPCNNModel* _model;
	VCPCNNData* _input;

}
-(id)init;
-(float*)getInputBuffer;
-(int)computePoseScore:(float*)arg1 ;
@end

