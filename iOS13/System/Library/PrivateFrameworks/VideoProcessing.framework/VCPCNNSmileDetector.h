/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNSmileDetector : NSObject
+(id)detector;
-(float*)getInputBuffer;
-(int)computeSmileScore:(float*)arg1 ;
-(int)detectSmileForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 smile:(BOOL*)arg3 ;
@end

