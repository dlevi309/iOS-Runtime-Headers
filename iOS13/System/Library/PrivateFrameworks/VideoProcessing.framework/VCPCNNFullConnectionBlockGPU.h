/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNFullConnectionBlock.h>

@class MPSCNNFullyConnected;

@interface VCPCNNFullConnectionBlockGPU : VCPCNNFullConnectionBlock {

	MPSCNNFullyConnected* _mpsFullConn;

}
-(int)forward;
-(int)convVCPNeuronTypeToMPS:(int)arg1 ;
-(int)shuffleWeights:(float*)arg1 fromSrc:(float*)arg2 inputChannels:(int)arg3 inputHeight:(int)arg4 inputWidth:(int)arg5 outputChannels:(int)arg6 ;
-(int)setupMPS;
-(int)loadWeights:(_sFILE*)arg1 inputDim:(int)arg2 outputDim:(int)arg3 quantFactor:(int)arg4 ;
@end

