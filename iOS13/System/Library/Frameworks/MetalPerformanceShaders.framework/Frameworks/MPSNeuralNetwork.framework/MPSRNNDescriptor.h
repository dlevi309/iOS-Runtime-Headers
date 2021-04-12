/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/


@protocol MPSCNNConvolutionDataSource;
@interface MPSRNNDescriptor : NSObject {

	BOOL _useLayerInputUnitTransformMode;
	BOOL _useFloat32Weights;
	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	id<MPSCNNConvolutionDataSource> _inputTransform;
	id<MPSCNNConvolutionDataSource> _outputTransform;
	id<MPSCNNConvolutionDataSource> _recurrentOutputTransform;
	unsigned long long _layerSequenceDirection;
	unsigned long long _internalKernelSelector;

}

@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> inputTransform;                        //@synthesize inputTransform=_inputTransform - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> outputTransform;                       //@synthesize outputTransform=_outputTransform - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> recurrentOutputTransform;              //@synthesize recurrentOutputTransform=_recurrentOutputTransform - In the implementation block
@property (assign,nonatomic) unsigned long long internalKernelSelector;                             //@synthesize internalKernelSelector=_internalKernelSelector - In the implementation block
@property (assign,nonatomic) unsigned long long inputFeatureChannels;                               //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long outputFeatureChannels;                              //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (assign,nonatomic) BOOL useLayerInputUnitTransformMode;                                   //@synthesize useLayerInputUnitTransformMode=_useLayerInputUnitTransformMode - In the implementation block
@property (assign,nonatomic) BOOL useFloat32Weights;                                                //@synthesize useFloat32Weights=_useFloat32Weights - In the implementation block
@property (assign,nonatomic) unsigned long long layerSequenceDirection;                             //@synthesize layerSequenceDirection=_layerSequenceDirection - In the implementation block
-(id)init;
-(void)dealloc;
-(id<MPSCNNConvolutionDataSource>)inputTransform;
-(void)setInputTransform:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id<MPSCNNConvolutionDataSource>)outputTransform;
-(unsigned long long)outputFeatureChannels;
-(unsigned long long)inputFeatureChannels;
-(void)setUseFloat32Weights:(BOOL)arg1 ;
-(void)setInputFeatureChannels:(unsigned long long)arg1 ;
-(void)setOutputFeatureChannels:(unsigned long long)arg1 ;
-(void)setOutputTransform:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id<MPSCNNConvolutionDataSource>)recurrentOutputTransform;
-(void)setRecurrentOutputTransform:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(BOOL)useLayerInputUnitTransformMode;
-(void)setUseLayerInputUnitTransformMode:(BOOL)arg1 ;
-(unsigned long long)layerSequenceDirection;
-(void)setLayerSequenceDirection:(unsigned long long)arg1 ;
-(BOOL)useFloat32Weights;
-(unsigned long long)internalKernelSelector;
-(void)setInternalKernelSelector:(unsigned long long)arg1 ;
@end

