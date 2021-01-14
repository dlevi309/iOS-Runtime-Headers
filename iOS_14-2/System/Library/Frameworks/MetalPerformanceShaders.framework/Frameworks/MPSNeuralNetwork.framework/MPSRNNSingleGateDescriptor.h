/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSRNNDescriptor.h>

@protocol MPSCNNConvolutionDataSource;
@interface MPSRNNSingleGateDescriptor : MPSRNNDescriptor {

	id<MPSCNNConvolutionDataSource> _inputWeights;
	id<MPSCNNConvolutionDataSource> _recurrentWeights;

}

@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> inputWeights;                  //@synthesize inputWeights=_inputWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> recurrentWeights;              //@synthesize recurrentWeights=_recurrentWeights - In the implementation block
+(id)createRNNSingleGateDescriptorWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2 ;
-(id)init;
-(id<MPSCNNConvolutionDataSource>)recurrentWeights;
-(id)initWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2 ;
-(void)setRecurrentWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id<MPSCNNConvolutionDataSource>)inputWeights;
-(void)setInputWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)dealloc;
@end

