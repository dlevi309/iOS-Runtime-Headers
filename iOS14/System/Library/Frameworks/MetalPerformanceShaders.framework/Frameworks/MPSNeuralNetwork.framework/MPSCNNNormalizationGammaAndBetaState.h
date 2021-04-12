/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<MTLBuffer>)beta;
-(id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(id)initWithGamma:(id)arg1 beta:(id)arg2 ;
-(id<MTLBuffer>)gamma;
@end

