/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNBlock.h>

@interface VCPCNNFullConnectionBlock : VCPCNNBlock {

	float* _weight;
	float* _bias;
	int _numNeurons;
	int _neuronType;

}
+(id)fcBlockWithNumNeurons:(int)arg1 NeuronType:(int)arg2 ;
-(int)loadWeights:(_sFILE*)arg1 inputDim:(int)arg2 outputDim:(int)arg3 quantFactor:(int)arg4 ;
-(BOOL)supportGPU;
-(BOOL)useGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(void)dealloc;
-(id)initWithParameters:(int)arg1 NeuronType:(int)arg2 ;
-(int)readWeightsBias:(_sFILE*)arg1 weights:(float*)arg2 bias:(float*)arg3 inputDim:(int)arg4 outputDim:(int)arg5 quantFactor:(int)arg6 ;
@end

