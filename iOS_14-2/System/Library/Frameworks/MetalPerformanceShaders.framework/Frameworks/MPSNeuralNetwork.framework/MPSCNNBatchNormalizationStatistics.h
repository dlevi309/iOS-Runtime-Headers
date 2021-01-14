/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSCNNBatchNormalizationStatistics : MPSCNNKernel
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(BOOL)appendBatchBarrier;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 batchNormalizationState:(id)arg3 ;
@end

