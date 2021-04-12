/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNFaceLandmarkDetector.h>

@class VCPCNNModelEspresso;

@interface VCPCNNFaceLandmarkDetectorEspresso : VCPCNNFaceLandmarkDetector {

	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;

}
+(id)sharedModel:(id)arg1 ;
-(id)init;
-(float*)getInputBuffer;
-(void)dealloc;
-(int)computeLandmarks:(float*)arg1 ;
@end

