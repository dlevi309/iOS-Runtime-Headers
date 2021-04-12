/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNData.h>

@interface VCPCNNDataGPU : VCPCNNData
-(int)allocBuffers:(BOOL)arg1 ;
-(int)reallocGPUTemporalBuffers;
-(int)convertCPUData2GPU;
-(int)convertGPUData2CPU;
-(int)bufferAllocGPU;
@end

