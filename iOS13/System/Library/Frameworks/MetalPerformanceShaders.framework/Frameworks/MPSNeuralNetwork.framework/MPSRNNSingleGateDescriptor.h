/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<MPSCNNConvolutionDataSource>)inputWeights;
-(void)setInputWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id)initWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2 ;
-(id<MPSCNNConvolutionDataSource>)recurrentWeights;
-(void)setRecurrentWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
@end

