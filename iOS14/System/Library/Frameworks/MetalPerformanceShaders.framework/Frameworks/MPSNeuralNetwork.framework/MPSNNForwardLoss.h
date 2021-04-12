/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MPSNNLossCallback;
@class MPSMatrix, MPSImage;

@interface MPSNNForwardLoss : MPSCNNKernel {

	BOOL _reduceAcrossBatch;
	id<MPSNNLossCallback> _propertyCallback;
	MPSMatrix* _reductionBuffer;
	MPSImage* _firstLossImage;
	unsigned _lossType;
	int _reductionType;
	float _weight;
	float _labelSmoothing;
	float _epsilon;
	float _delta;
	unsigned long long _numberOfClasses;

}

@property (nonatomic,readonly) unsigned lossType;                               //@synthesize lossType=_lossType - In the implementation block
@property (nonatomic,readonly) int reductionType;                               //@synthesize reductionType=_reductionType - In the implementation block
@property (nonatomic,readonly) BOOL reduceAcrossBatch;                          //@synthesize reduceAcrossBatch=_reduceAcrossBatch - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfClasses;              //@synthesize numberOfClasses=_numberOfClasses - In the implementation block
@property (assign,nonatomic) float weight;                                      //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) float labelSmoothing;                              //@synthesize labelSmoothing=_labelSmoothing - In the implementation block
@property (assign,nonatomic) float epsilon;                                     //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) float delta;                                       //@synthesize delta=_delta - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(void)setEpsilon:(float)arg1 ;
-(unsigned long long)maxBatchSize;
-(void)setWeight:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)lossType;
-(id)debugDescription;
-(float)delta;
-(float)weight;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(void)setDelta:(float)arg1 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(int)reductionType;
-(float)labelSmoothing;
-(BOOL)reduceAcrossBatch;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 weights:(id)arg4 destinationStates:(id)arg5 destinationImages:(id)arg6 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(void)setLabelSmoothing:(float)arg1 ;
-(float)epsilon;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 weights:(id)arg4 destinationStates:(id*)arg5 destinationStateIsTemporary:(BOOL)arg6 ;
-(id)initWithDevice:(id)arg1 lossDescriptor:(id)arg2 ;
-(unsigned long long)numberOfClasses;
-(void)dealloc;
@end

