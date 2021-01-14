/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNFullConnectionBlock.h>

@class MPSCNNFullyConnected;

@interface VCPCNNFullConnectionBlockGPU : VCPCNNFullConnectionBlock {

	MPSCNNFullyConnected* _mpsFullConn;

}
-(int)loadWeights:(_sFILE*)arg1 inputDim:(int)arg2 outputDim:(int)arg3 quantFactor:(int)arg4 ;
-(int)forward;
-(int)setupMPS;
-(int)convVCPNeuronTypeToMPS:(int)arg1 ;
-(int)shuffleWeights:(float*)arg1 fromSrc:(float*)arg2 inputChannels:(int)arg3 inputHeight:(int)arg4 inputWidth:(int)arg5 outputChannels:(int)arg6 ;
@end

