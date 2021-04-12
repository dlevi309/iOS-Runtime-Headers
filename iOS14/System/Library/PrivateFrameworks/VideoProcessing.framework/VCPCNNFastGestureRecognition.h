/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModelEspresso;

@interface VCPCNNFastGestureRecognition : NSObject {

	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;

}
+(id)detector;
-(id)init;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)getDetectionScore:(float*)arg1 ;
-(int)createInput:(float*)arg1 keypoints:(CGPoint*)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 ;
-(int)planDestroy;
-(int)gestureDetection:(CGPoint*)arg1 score:(float*)arg2 ;
-(void)dealloc;
@end

