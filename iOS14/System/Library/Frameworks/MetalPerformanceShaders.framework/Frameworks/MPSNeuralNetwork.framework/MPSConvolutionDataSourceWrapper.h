/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)dataType;
-(BOOL)load;
-(void)initialize;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)appendNeuron:(const NeuronInfo*)arg1 ;
-(BOOL)appendBatchNorm:(id)arg1 ;
-(BOOL)hasBatchNorm;
-(id)initWithDataSource:(id)arg1 ;
-(BOOL)appendNeuronDescriptor:(id)arg1 ;
-(NSString *)debugDescription;
-(NeuronInfo)neuronInfo;
-(id)descriptor;
-(void*)weights;
-(float*)biasTerms;
-(1*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(unsigned)weightsQuantizationType;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3 ;
-(BOOL)updateWithGradientState:(id)arg1 sourceState:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)purge;
-(void)dealloc;
@end

