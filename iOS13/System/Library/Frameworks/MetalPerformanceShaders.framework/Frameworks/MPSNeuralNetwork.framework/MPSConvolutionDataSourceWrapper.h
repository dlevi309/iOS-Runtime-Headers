/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource.h>

@protocol MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionDescriptor, NSObject, MPSNNNeuronDescriptor, NSString;

@interface MPSConvolutionDataSourceWrapper : NSObject <MPSCNNConvolutionDataSource> {

	id<MPSCNNConvolutionDataSource> _dataSource;
	MPSCNNConvolutionDescriptor* _convolution;
	NSObject* _batchNorm;
	MPSNNNeuronDescriptor* _neuron;
	atomic<long> _loadCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapperForDataSource:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSString *)debugDescription;
-(BOOL)load;
-(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(unsigned)dataType;
-(void*)weights;
-(id)initWithDataSource:(id)arg1 ;
-(id)descriptor;
-(float*)biasTerms;
-(void)purge;
-(1*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(unsigned)weightsQuantizationType;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3 ;
-(BOOL)updateWithGradientState:(id)arg1 sourceState:(id)arg2 ;
-(NeuronInfo)neuronInfo;
-(BOOL)appendNeuron:(const NeuronInfo*)arg1 ;
-(BOOL)appendBatchNorm:(id)arg1 ;
-(BOOL)appendNeuronDescriptor:(id)arg1 ;
-(BOOL)hasBatchNorm;
@end

