/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@class MPSNNReduceUnary;

@interface MPSCNNArithmeticGradient : MPSCNNGradientKernel {

	float _primaryScale;
	float _secondaryScale;
	float _bias;
	float _minimumValue;
	float _maximumValue;
	unsigned long long _secondaryStrideInFeatureChannels;
	int _arithmeticType;
	BOOL _isSecondarySourceFilter;
	MPSNNReduceUnary* _reduceRows;
	MPSNNReduceUnary* _reduceColumns;
	MPSNNReduceUnary* _reduceFeatureChannels;

}

@property (assign,nonatomic) float primaryScale;                                               //@synthesize primaryScale=_primaryScale - In the implementation block
@property (assign,nonatomic) float secondaryScale;                                             //@synthesize secondaryScale=_secondaryScale - In the implementation block
@property (assign,nonatomic) float bias;                                                       //@synthesize bias=_bias - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryStrideInFeatureChannels;              //@synthesize secondaryStrideInFeatureChannels=_secondaryStrideInFeatureChannels - In the implementation block
@property (assign,nonatomic) float minimumValue;                                               //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) float maximumValue;                                               //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) BOOL isSecondarySourceFilter;                                   //@synthesize isSecondarySourceFilter=_isSecondarySourceFilter - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)bias;
-(unsigned long long)maxBatchSize;
-(float)maximumValue;
-(void)setMinimumValue:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(SCD_Struct_MP1*)arg4 secondaryOffset:(SCD_Struct_MP1*)arg5 kernelOffset:(SCD_Struct_MP1*)arg6 ;
-(float)primaryScale;
-(void)setSecondaryStrideInFeatureChannels:(unsigned long long)arg1 ;
-(void)setPrimaryScale:(float)arg1 ;
-(float)secondaryScale;
-(void)setSecondaryScale:(float)arg1 ;
-(unsigned long long)secondaryStrideInFeatureChannels;
-(id)initWithDevice:(id)arg1 arithmeticType:(int)arg2 isSecondarySourceFilter:(BOOL)arg3 ;
-(BOOL)isSecondarySourceFilter;
-(void)setBias:(float)arg1 ;
-(void)setSecondaryStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setSecondaryStrideInPixelsY:(unsigned long long)arg1 ;
-(float)minimumValue;
-(void)setMaximumValue:(float)arg1 ;
-(void)dealloc;
@end

