/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

