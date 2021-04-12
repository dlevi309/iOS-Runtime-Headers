/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MPSCNNBatchNormalizationDataSource, MTLBuffer;
@class MPSNNNeuronDescriptor;

@interface MPSCNNBatchNormalization : MPSCNNKernel {

	MPSAutoBuffer* _gamma;
	MPSAutoBuffer* _beta;
	MPSAutoBuffer* _meanDS;
	MPSAutoBuffer* _varDS;
	id<MPSCNNBatchNormalizationDataSource> _dataSource;
	BOOL _stateNeedsToLoad;
	MPSNNNeuronDescriptor* _fusedNeuronDescriptor;
	id<MTLBuffer> _preluBuffer;
	float _epsilon;
	unsigned long long _numberOfFeatureChannels;

}

@property (nonatomic,readonly) unsigned long long numberOfFeatureChannels;                            //@synthesize numberOfFeatureChannels=_numberOfFeatureChannels - In the implementation block
@property (assign,nonatomic) float epsilon;                                                           //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,retain,readonly) id<MPSCNNBatchNormalizationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(float)epsilon;
-(void)setEpsilon:(float)arg1 ;
-(id<MPSCNNBatchNormalizationDataSource>)dataSource;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(id)arg3 destinationImages:(id)arg4 ;
-(unsigned long long)numberOfFeatureChannels;
-(id)initWithDevice:(id)arg1 dataSource:(id)arg2 fusedNeuronDescriptor:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(void)reloadDataSourceDeprecated:(id)arg1 doReloadWeights:(BOOL)arg2 doReloadStats:(BOOL)arg3 ;
-(void)reloadGammaAndBetaFromDataSource;
-(void)reloadMeanAndVarianceFromDataSource;
-(id)initWithDevice:(id)arg1 dataSource:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 batchNormalizationState:(id)arg3 destinationImages:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 batchNormalizationState:(id)arg3 ;
-(void)reloadDataSource:(id)arg1 ;
-(void)reloadGammaAndBetaWithCommandBuffer:(id)arg1 gammaAndBetaState:(id)arg2 ;
-(void)reloadMeanAndVarianceWithCommandBuffer:(id)arg1 meanAndVarianceState:(id)arg2 ;
@end

