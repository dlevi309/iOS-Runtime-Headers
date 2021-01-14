/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNHandKeypointsDetector : NSObject {

	float _std;
	float _mean;

}
+(id)detector:(BOOL)arg1 sharedModel:(BOOL)arg2 modelName:(id)arg3 ;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 offset:(float*)arg5 ;
-(int)generateHandKeypoints:(CGPoint*)arg1 keypointConfidence:(float*)arg2 offset:(float)arg3 ;
-(int)cvtHeatmaps2Keypoints:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 inHeight:(int)arg4 inWidth:(int)arg5 outChannel:(int)arg6 keypoints:(CGPoint*)arg7 keypointConfidence:(float*)arg8 offset:(float)arg9 ;
-(int)handKeypointsDetection:(CVBufferRef)arg1 box:(id)arg2 keypoints:(CGPoint)arg3 keypointConfidence:(float)arg4 forGFT:(BOOL)arg5 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 box:(id)arg5 ;
@end

