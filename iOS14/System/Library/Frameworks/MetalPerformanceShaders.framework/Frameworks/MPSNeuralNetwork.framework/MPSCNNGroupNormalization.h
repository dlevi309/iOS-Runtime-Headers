/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MPSCNNGroupNormalizationDataSource;
@interface MPSCNNGroupNormalization : MPSCNNKernel {

	MPSAutoBuffer* _gamma;
	MPSAutoBuffer* _beta;
	id<MPSCNNGroupNormalizationDataSource> _dataSource;
	unsigned long long _numberOfFeatureChannels;
	unsigned long long _numberOfGroups;
	float _epsilon;

}

@property (assign,nonatomic) float epsilon;                                                           //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,retain,readonly) id<MPSCNNGroupNormalizationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)setEpsilon:(float)arg1 ;
-(unsigned long long)maxBatchSize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id<MPSCNNGroupNormalizationDataSource>)dataSource;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)reloadGammaAndBetaFromDataSource;
-(void)reloadDataSource:(id)arg1 ;
-(id)initWithDevice:(id)arg1 dataSource:(id)arg2 ;
-(void)reloadGammaAndBetaWithCommandBuffer:(id)arg1 gammaAndBetaState:(id)arg2 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(float)epsilon;
-(void)reloadDataSourceDeprecated:(id)arg1 ;
-(void)dealloc;
@end

