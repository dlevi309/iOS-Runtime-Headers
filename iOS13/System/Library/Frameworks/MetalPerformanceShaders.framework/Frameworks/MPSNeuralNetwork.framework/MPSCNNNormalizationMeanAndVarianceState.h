/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSCore/MPSState.h>

@interface MPSCNNNormalizationMeanAndVarianceState : MPSState {

	BOOL _initialized;

}

@property (nonatomic,readonly) id<MTLBuffer> mean; 
@property (nonatomic,readonly) id<MTLBuffer> variance; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 ;
-(id<MTLBuffer>)mean;
-(id<MTLBuffer>)variance;
-(id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(id)initWithMean:(id)arg1 variance:(id)arg2 ;
@end

