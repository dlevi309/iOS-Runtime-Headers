/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNOptimizer.h>

@interface MPSNNOptimizerStochasticGradientDescent : MPSNNOptimizer {

	float _momentumScale;
	BOOL _useNesterovMomentum;

}

@property (nonatomic,readonly) float momentumScale;                   //@synthesize momentumScale=_momentumScale - In the implementation block
@property (nonatomic,readonly) BOOL useNesterovMomentum;              //@synthesize useNesterovMomentum=_useNesterovMomentum - In the implementation block
@property (nonatomic,readonly) BOOL useNestrovMomentum; 
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 optimizerDescriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg1 momentumScale:(float)arg2 useNesterovMomentum:(BOOL)arg3 optimizerDescriptor:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientMatrix:(id)arg2 inputValuesMatrix:(id)arg3 inputMomentumMatrix:(id)arg4 resultValuesMatrix:(id)arg5 ;
-(BOOL)useNestrovMomentum;
-(BOOL)useNesterovMomentum;
-(void)encodeToCommandBuffer:(id)arg1 convolutionGradientState:(id)arg2 convolutionSourceState:(id)arg3 inputMomentumVectors:(id)arg4 resultState:(id)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 batchNormalizationGradientState:(id)arg2 batchNormalizationSourceState:(id)arg3 inputMomentumVectors:(id)arg4 resultState:(id)arg5 ;
-(float)momentumScale;
-(void)encodeToCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2 inputMomentumVectors:(id)arg3 resultState:(id)arg4 ;
-(id)initWithDevice:(id)arg1 momentumScale:(float)arg2 useNestrovMomentum:(BOOL)arg3 optimizerDescriptor:(id)arg4 ;
-(id)initWithDevice:(id)arg1 learningRate:(float)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 inputMomentumVector:(id)arg4 resultValuesVector:(id)arg5 ;
@end

