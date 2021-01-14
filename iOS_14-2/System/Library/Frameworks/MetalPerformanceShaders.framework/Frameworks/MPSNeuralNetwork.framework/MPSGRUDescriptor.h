/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSRNNDescriptor.h>

@protocol MPSCNNConvolutionDataSource;
@interface MPSGRUDescriptor : MPSRNNDescriptor {

	BOOL _flipOutputGates;
	float _gatePnormValue;
	id<MPSCNNConvolutionDataSource> _inputGateInputWeights;
	id<MPSCNNConvolutionDataSource> _inputGateRecurrentWeights;
	id<MPSCNNConvolutionDataSource> _recurrentGateInputWeights;
	id<MPSCNNConvolutionDataSource> _recurrentGateRecurrentWeights;
	id<MPSCNNConvolutionDataSource> _outputGateInputWeights;
	id<MPSCNNConvolutionDataSource> _outputGateInputGateWeights;
	id<MPSCNNConvolutionDataSource> _outputGateRecurrentWeights;

}

@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> inputGateInputWeights;                      //@synthesize inputGateInputWeights=_inputGateInputWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> inputGateRecurrentWeights;                  //@synthesize inputGateRecurrentWeights=_inputGateRecurrentWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> recurrentGateInputWeights;                  //@synthesize recurrentGateInputWeights=_recurrentGateInputWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> recurrentGateRecurrentWeights;              //@synthesize recurrentGateRecurrentWeights=_recurrentGateRecurrentWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> outputGateInputWeights;                     //@synthesize outputGateInputWeights=_outputGateInputWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> outputGateRecurrentWeights;                 //@synthesize outputGateRecurrentWeights=_outputGateRecurrentWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> outputGateInputGateWeights;                 //@synthesize outputGateInputGateWeights=_outputGateInputGateWeights - In the implementation block
@property (assign,nonatomic) float gatePnormValue;                                                       //@synthesize gatePnormValue=_gatePnormValue - In the implementation block
@property (assign,nonatomic) BOOL flipOutputGates;                                                       //@synthesize flipOutputGates=_flipOutputGates - In the implementation block
+(id)createGRUDescriptorWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2 ;
-(id)init;
-(id)initWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2 ;
-(BOOL)flipOutputGates;
-(id<MPSCNNConvolutionDataSource>)inputGateInputWeights;
-(id<MPSCNNConvolutionDataSource>)inputGateRecurrentWeights;
-(id<MPSCNNConvolutionDataSource>)outputGateInputWeights;
-(float)gatePnormValue;
-(id<MPSCNNConvolutionDataSource>)outputGateRecurrentWeights;
-(id<MPSCNNConvolutionDataSource>)recurrentGateInputWeights;
-(void)setRecurrentGateInputWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id<MPSCNNConvolutionDataSource>)recurrentGateRecurrentWeights;
-(void)setRecurrentGateRecurrentWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id<MPSCNNConvolutionDataSource>)outputGateInputGateWeights;
-(void)setGatePnormValue:(float)arg1 ;
-(void)setOutputGateInputGateWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)setFlipOutputGates:(BOOL)arg1 ;
-(void)setInputGateInputWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)setInputGateRecurrentWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)setOutputGateInputWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)setOutputGateRecurrentWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)dealloc;
@end

