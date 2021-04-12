/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModelEspresso;

@interface VCPCNNGazeAnalysis : NSObject {

	float* _inputData;
	VCPCNNModelEspresso* _modelEspresso;

}
+(id)sharedModel:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 faceBounds:(CGRect)arg5 ;
-(int)detectEyeOpennessForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 eyeOpenness:(BOOL*)arg3 ;
@end

