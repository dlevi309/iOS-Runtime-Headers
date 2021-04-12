/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@class MLCConvolutionDescriptor, MLCTensor, MLCTensorParameter;

@interface MLCConvolutionLayer : MLCLayer {

	int _accumulatorPrecisionOption;
	MLCConvolutionDescriptor* _descriptor;
	MLCTensor* _weights;
	MLCTensor* _biases;
	MLCTensorParameter* _weightsParameter;
	MLCTensorParameter* _biasesParameter;

}

@property (nonatomic,readonly) int accumulatorPrecisionOption;                            //@synthesize accumulatorPrecisionOption=_accumulatorPrecisionOption - In the implementation block
@property (nonatomic,copy,readonly) MLCConvolutionDescriptor * descriptor;                //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * weights;                                //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * biases;                                 //@synthesize biases=_biases - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorParameter * weightsParameter;              //@synthesize weightsParameter=_weightsParameter - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorParameter * biasesParameter;               //@synthesize biasesParameter=_biasesParameter - In the implementation block
+(id)layerWithWeights:(id)arg1 biases:(id)arg2 descriptor:(id)arg3 ;
-(MLCConvolutionDescriptor *)descriptor;
-(id)description;
-(int)accumulatorPrecisionOption;
-(MLCTensor *)weights;
-(MLCTensor *)biases;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(BOOL)allocateDataForOptimizer:(id)arg1 ;
-(unsigned long long)allocatedDataSizeForTraining:(BOOL)arg1 optimizer:(id)arg2 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(id)initWithWeights:(id)arg1 biases:(id)arg2 descriptor:(id)arg3 ;
-(MLCTensorParameter *)weightsParameter;
-(MLCTensorParameter *)biasesParameter;
-(void)allocateGradientsForParameters;
@end

