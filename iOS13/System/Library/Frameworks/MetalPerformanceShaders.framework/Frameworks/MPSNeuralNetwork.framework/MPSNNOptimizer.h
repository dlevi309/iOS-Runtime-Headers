/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSNNOptimizer : MPSKernel {

	float _learningRate;
	float _gradientRescale;
	BOOL _applyGradientClipping;
	float _gradientClipMax;
	float _gradientClipMin;
	unsigned long long _regularizationType;
	float _regularizationScale;

}

@property (nonatomic,readonly) float learningRate;                                 //@synthesize learningRate=_learningRate - In the implementation block
@property (nonatomic,readonly) float gradientRescale;                              //@synthesize gradientRescale=_gradientRescale - In the implementation block
@property (assign,nonatomic) BOOL applyGradientClipping;                           //@synthesize applyGradientClipping=_applyGradientClipping - In the implementation block
@property (nonatomic,readonly) float gradientClipMax;                              //@synthesize gradientClipMax=_gradientClipMax - In the implementation block
@property (nonatomic,readonly) float gradientClipMin;                              //@synthesize gradientClipMin=_gradientClipMin - In the implementation block
@property (nonatomic,readonly) float regularizationScale;                          //@synthesize regularizationScale=_regularizationScale - In the implementation block
@property (nonatomic,readonly) unsigned long long regularizationType;              //@synthesize regularizationType=_regularizationType - In the implementation block
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(float)learningRate;
-(float)gradientClipMin;
-(float)gradientClipMax;
-(void)setApplyGradientClipping:(BOOL)arg1 ;
-(void)setLearningRate:(float)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(float)gradientRescale;
-(BOOL)applyGradientClipping;
-(unsigned long long)regularizationType;
-(float)regularizationScale;
-(id)initWithDevice:(id)arg1 optimizerDescriptor:(id)arg2 ;
@end

