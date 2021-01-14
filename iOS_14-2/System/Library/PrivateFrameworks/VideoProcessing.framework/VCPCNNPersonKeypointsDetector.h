/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModelEspresso;

@interface VCPCNNPersonKeypointsDetector : NSObject {

	int _maxNumRegions;
	float* _inputData;
	VCPCNNModelEspresso* _modelEspresso;
	int _inputWidth;
	int _inputHeight;

}
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 ;
-(void)dealloc;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 box:(id)arg5 ;
-(int)parseKeypoints:(id)arg1 ;
-(id)initWithForceCPU:(BOOL)arg1 sharedModel:(BOOL)arg2 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withBox:(id)arg2 keypoints:(id)arg3 ;
@end

