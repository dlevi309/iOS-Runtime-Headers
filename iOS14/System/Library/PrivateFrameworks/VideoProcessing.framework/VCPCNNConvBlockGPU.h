/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNConvBlock.h>

@class MPSCNNConvolution;

@interface VCPCNNConvBlockGPU : VCPCNNConvBlock {

	float* _batchNormMean;
	float* _batchNormVar;
	float* _batchNormGamma;
	float* _batchNormBeta;
	MPSCNNConvolution* _mpsConv;

}
-(int)forward;
-(void)releaseBatchNormMemory;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)readBatchNormParam:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)fillConvWeightsGPU;
-(int)gpuForward;
-(void)dealloc;
@end

