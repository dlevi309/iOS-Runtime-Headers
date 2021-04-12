/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNOptimizer.h>

@interface MPSNNOptimizerStochasticGradientDescent : MPSNNOptimizer {

	float _momentumScale;
	BOOL _useNestrovMomentum;

}

@property (nonatomic,readonly) float momentumScale;                  //@synthesize momentumScale=_momentumScale - In the implementation block
@property (nonatomic,readonly) BOOL useNestrovMomentum;              //@synthesize useNestrovMomentum=_useNestrovMomentum - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 momentumScale:(float)arg2 useNestrovMomentum:(BOOL)arg3 optimizerDescriptor:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 inputMomentumVector:(id)arg4 resultValuesVector:(id)arg5 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 optimizerDescriptor:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientMatrix:(id)arg2 inputValuesMatrix:(id)arg3 inputMomentumMatrix:(id)arg4 resultValuesMatrix:(id)arg5 ;
-(id)initWithDevice:(id)arg1 learningRate:(float)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 convolutionGradientState:(id)arg2 convolutionSourceState:(id)arg3 inputMomentumVectors:(id)arg4 resultState:(id)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 batchNormalizationGradientState:(id)arg2 batchNormalizationSourceState:(id)arg3 inputMomentumVectors:(id)arg4 resultState:(id)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2 inputMomentumVectors:(id)arg3 resultState:(id)arg4 ;
-(float)momentumScale;
-(BOOL)useNestrovMomentum;
@end

