/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNFastGestureRecognition.h>

@class VCPCNNModelEspresso;

@interface VCPCNNFastGestureRecognitionEspresso : VCPCNNFastGestureRecognition {

	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;

}
-(id)init;
-(void)dealloc;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)createModel:(int)arg1 srcWidth:(int)arg2 ;
-(int)getDetectionScore:(float*)arg1 ;
-(int)planDestroy;
@end

