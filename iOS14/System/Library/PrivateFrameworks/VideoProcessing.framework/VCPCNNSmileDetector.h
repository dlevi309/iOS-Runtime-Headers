/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNSmileDetector : NSObject
+(id)detector;
-(int)detectSmileForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 smile:(BOOL*)arg3 ;
-(int)computeSmileScore:(float*)arg1 ;
-(float*)getInputBuffer;
@end

