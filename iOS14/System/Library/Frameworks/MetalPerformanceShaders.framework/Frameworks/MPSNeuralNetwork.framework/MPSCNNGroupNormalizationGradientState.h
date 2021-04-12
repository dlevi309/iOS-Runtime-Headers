/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@class MPSCNNGroupNormalization;

@interface MPSCNNGroupNormalizationGradientState : MPSNNGradientState {

	MPSCNNGroupNormalization* _groupNormalization;
	unsigned long long _numberOfFeatureChannels;
	unsigned long long _numberOfGroups;

}

@property (nonatomic,retain,readonly) MPSCNNGroupNormalization * groupNormalization;              //@synthesize groupNormalization=_groupNormalization - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> gamma; 
@property (nonatomic,readonly) id<MTLBuffer> beta; 
@property (nonatomic,readonly) id<MTLBuffer> gradientForGamma; 
@property (nonatomic,readonly) id<MTLBuffer> gradientForBeta; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 groupNormalization:(id)arg3 ;
-(id<MTLBuffer>)beta;
-(id)debugDescription;
-(id<MTLBuffer>)gradientForGamma;
-(id<MTLBuffer>)gradientForBeta;
-(id)initWithDevice:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 groupNormalization:(id)arg3 ;
-(MPSCNNGroupNormalization *)groupNormalization;
-(id<MTLBuffer>)gamma;
-(void)dealloc;
@end

