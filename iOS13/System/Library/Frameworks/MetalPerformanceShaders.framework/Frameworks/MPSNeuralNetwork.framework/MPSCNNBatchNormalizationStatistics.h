/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSCNNBatchNormalizationStatistics : MPSCNNKernel
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 batchNormalizationState:(id)arg3 ;
-(BOOL)appendBatchBarrier;
@end

