/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNSmileDetector.h>

@class VCPCNNModel, VCPCNNData;

@interface VCPCNNSmileDetectorMPS : VCPCNNSmileDetector {

	VCPCNNModel* _model;
	VCPCNNData* _input;

}
-(id)init;
-(float*)getInputBuffer;
-(int)computeSmileScore:(float*)arg1 ;
@end

