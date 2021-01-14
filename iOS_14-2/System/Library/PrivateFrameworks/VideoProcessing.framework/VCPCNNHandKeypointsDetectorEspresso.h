/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNHandKeypointsDetector.h>

@class VCPCNNModelEspresso;

@interface VCPCNNHandKeypointsDetectorEspresso : VCPCNNHandKeypointsDetector {

	float* _inputData;
	BOOL _forceCPU;
	VCPCNNModelEspresso* _modelEspresso;

}
-(id)init:(BOOL)arg1 sharedModel:(BOOL)arg2 modelName:(id)arg3 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 offset:(float*)arg5 ;
-(int)generateHandKeypoints:(CGPoint*)arg1 keypointConfidence:(float*)arg2 offset:(float)arg3 ;
-(void)dealloc;
@end

