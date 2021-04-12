/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNHandsDetector : NSObject
+(id)detector:(int)arg1 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 ;
-(int)retrieveBoxes:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 anchorBox:(float)arg5 ;
-(void)nonMaxSuppression:(id)arg1 ;
-(int)generateHandsBoxes:(id)arg1 ;
-(int)generateHandsRegions:(const vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t> >*)arg1 boxes:(id)arg2 maxNumRegions:(int)arg3 ;
-(int)handsDetection:(CVBufferRef)arg1 handsRegions:(id)arg2 ;
@end

