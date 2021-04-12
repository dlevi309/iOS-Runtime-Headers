/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNBlock.h>

@class MPSCNNBinaryConvolution;

@interface VCPCNNConvBlockBinary : VCPCNNBlock {

	int _filterSize;
	int _filterNum;
	unsigned* _filterWeightsBinary;
	int _filterWeightSize;
	float* _filterScaling;
	float* _bias;
	int _padding;
	unsigned long long _convType;
	BOOL _reLU;
	MPSCNNBinaryConvolution* _mpsBinaryConv;

}
-(int)forward;
-(BOOL)supportGPU;
-(BOOL)useGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)fillConvWeightsGPU;
-(int)gpuForward;
-(id)initWithParameters:(int)arg1 filterNum:(int)arg2 convType:(unsigned long long)arg3 reLU:(BOOL)arg4 padding:(BOOL)arg5 ;
-(void)dealloc;
@end

