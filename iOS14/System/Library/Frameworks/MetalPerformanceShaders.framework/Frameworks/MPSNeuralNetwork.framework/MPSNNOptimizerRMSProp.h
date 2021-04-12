/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNOptimizer.h>

@interface MPSNNOptimizerRMSProp : MPSNNOptimizer {

	double _decay;
	double _momentumScale;
	float _epsilon;
	BOOL _centered;

}

@property (nonatomic,readonly) double momentumScale;              //@synthesize momentumScale=_momentumScale - In the implementation block
@property (nonatomic,readonly) BOOL centered;                     //@synthesize centered=_centered - In the implementation block
@property (nonatomic,readonly) double decay;                      //@synthesize decay=_decay - In the implementation block
@property (nonatomic,readonly) float epsilon;                     //@synthesize epsilon=_epsilon - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(double)decay;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(BOOL)centered;
-(id)initWithDevice:(id)arg1 optimizerDescriptor:(id)arg2 ;
-(double)momentumScale;
-(id)initWithDevice:(id)arg1 decay:(double)arg2 epsilon:(float)arg3 momentumScale:(double)arg4 centered:(BOOL)arg5 optimizerDescriptor:(id)arg6 ;
-(id)initWithDevice:(id)arg1 decay:(double)arg2 epsilon:(float)arg3 optimizerDescriptor:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientMatrix:(id)arg2 inputValuesMatrix:(id)arg3 inputSumOfSquaresMatrix:(id)arg4 inputWeightedSumMatrix:(id)arg5 inputMomentumMatrix:(id)arg6 resultValuesMatrix:(id)arg7 ;
-(void)encodeToCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2 inputSumOfSquaresVectors:(id)arg3 resultState:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 inputSumOfSquaresVector:(id)arg4 resultValuesVector:(id)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientMatrix:(id)arg2 inputValuesMatrix:(id)arg3 inputSumOfSquaresMatrix:(id)arg4 resultValuesMatrix:(id)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 inputSumOfSquaresVector:(id)arg4 inputWeightedSumVector:(id)arg5 inputMomentumVector:(id)arg6 resultValuesVector:(id)arg7 ;
-(void)encodeToCommandBuffer:(id)arg1 convolutionGradientState:(id)arg2 convolutionSourceState:(id)arg3 inputSumOfSquaresVectors:(id)arg4 resultState:(id)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 batchNormalizationGradientState:(id)arg2 batchNormalizationSourceState:(id)arg3 inputSumOfSquaresVectors:(id)arg4 resultState:(id)arg5 ;
-(id)initWithDevice:(id)arg1 learningRate:(float)arg2 ;
-(float)epsilon;
@end

