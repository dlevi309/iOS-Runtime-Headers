/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSCore/MPSState.h>

@interface MPSCNNNormalizationGammaAndBetaState : MPSState {

	BOOL _initialized;

}

@property (nonatomic,readonly) id<MTLBuffer> gamma; 
@property (nonatomic,readonly) id<MTLBuffer> beta; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 ;
-(id<MTLBuffer>)gamma;
-(id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(id<MTLBuffer>)beta;
-(id)initWithGamma:(id)arg1 beta:(id)arg2 ;
@end

