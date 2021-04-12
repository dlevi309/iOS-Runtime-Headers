/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(int)forward;
-(void)releaseBatchNormMemory;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)readBatchNormParam:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)fillConvWeightsGPU;
-(int)gpuForward;
@end

