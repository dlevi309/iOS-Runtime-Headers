/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNFastGestureRecognition : NSObject
+(id)detector;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)createModel:(int)arg1 srcWidth:(int)arg2 ;
-(int)getDetectionScore:(float*)arg1 ;
-(int)planDestroy;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 withChunk:(int)arg3 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 ;
-(int)gestureDetection:(CVBufferRef)arg1 score:(float*)arg2 ;
@end

