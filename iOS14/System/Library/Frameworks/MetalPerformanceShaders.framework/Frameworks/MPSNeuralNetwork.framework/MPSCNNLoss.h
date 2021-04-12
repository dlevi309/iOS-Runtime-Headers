/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSMatrix, MPSImage;

@interface MPSCNNLoss : MPSCNNKernel {

	unsigned _lossType;
	int _reductionType;
	BOOL _reduceAcrossBatch;
	float _weight;
	float _labelSmoothing;
	unsigned long long _numberOfClasses;
	float _epsilon;
	float _delta;
	MPSMatrix* _reductionBuffer;
	MPSImage* _firstLossImage;

}

@property (assign,nonatomic) float weight;                                      //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) unsigned lossType;                               //@synthesize lossType=_lossType - In the implementation block
@property (nonatomic,readonly) int reductionType;                               //@synthesize reductionType=_reductionType - In the implementation block
@property (nonatomic,readonly) float labelSmoothing;                            //@synthesize labelSmoothing=_labelSmoothing - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfClasses;              //@synthesize numberOfClasses=_numberOfClasses - In the implementation block
@property (nonatomic,readonly) float epsilon;                                   //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) float delta;                                     //@synthesize delta=_delta - In the implementation block
@property (nonatomic,readonly) BOOL reduceAcrossBatch;                          //@synthesize reduceAcrossBatch=_reduceAcrossBatch - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)maxBatchSize;
-(void)setWeight:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)lossType;
-(id)debugDescription;
-(float)delta;
-(float)weight;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(int)reductionType;
-(float)labelSmoothing;
-(BOOL)reduceAcrossBatch;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 destinationImages:(id)arg4 ;
-(float)epsilon;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 ;
-(id)initWithDevice:(id)arg1 lossDescriptor:(id)arg2 ;
-(unsigned long long)numberOfClasses;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 ;
-(void)dealloc;
@end

