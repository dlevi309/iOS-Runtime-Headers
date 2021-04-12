/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNLogSoftMax, MPSNNReduceUnary, MPSCNNNeuron;

@interface MPSCNNLoss : MPSCNNKernel {

	unsigned _lossType;
	int _reductionType;
	float _weight;
	float _labelSmoothing;
	unsigned long long _numberOfClasses;
	float _epsilon;
	float _delta;
	MPSCNNLogSoftMax* _logSoftMax;
	MPSNNReduceUnary* _reduceRows;
	MPSNNReduceUnary* _reduceColumns;
	MPSNNReduceUnary* _reduceFeatureChannels;
	MPSCNNNeuron* _arithmetic;

}

@property (nonatomic,readonly) unsigned lossType;                               //@synthesize lossType=_lossType - In the implementation block
@property (nonatomic,readonly) int reductionType;                               //@synthesize reductionType=_reductionType - In the implementation block
@property (nonatomic,readonly) float weight;                                    //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) float labelSmoothing;                            //@synthesize labelSmoothing=_labelSmoothing - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfClasses;              //@synthesize numberOfClasses=_numberOfClasses - In the implementation block
@property (nonatomic,readonly) float epsilon;                                   //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) float delta;                                     //@synthesize delta=_delta - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)epsilon;
-(float)weight;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 lossDescriptor:(id)arg2 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 ;
-(unsigned long long)numberOfClasses;
-(unsigned)lossType;
-(float)delta;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(int)reductionType;
-(float)labelSmoothing;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 destinationImages:(id)arg4 ;
-(void)initializeSupportFiltersWithDevice:(id)arg1 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 ;
@end

