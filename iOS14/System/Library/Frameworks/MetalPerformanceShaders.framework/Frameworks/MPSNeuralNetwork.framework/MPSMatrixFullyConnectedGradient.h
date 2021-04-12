/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@interface MPSMatrixFullyConnectedGradient : MPSMatrixBinaryKernel {

	unsigned long long _sourceNumberOfFeatureVectors;
	unsigned long long _sourceInputFeatureChannels;
	unsigned long long _sourceOutputFeatureChannels;
	double _alpha;

}

@property (assign,nonatomic) unsigned long long sourceNumberOfFeatureVectors;              //@synthesize sourceNumberOfFeatureVectors=_sourceNumberOfFeatureVectors - In the implementation block
@property (assign,nonatomic) unsigned long long sourceOutputFeatureChannels;               //@synthesize sourceOutputFeatureChannels=_sourceOutputFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long sourceInputFeatureChannels;                //@synthesize sourceInputFeatureChannels=_sourceInputFeatureChannels - In the implementation block
@property (assign,nonatomic) double alpha;                                                 //@synthesize alpha=_alpha - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(double)alpha;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)sourceNumberOfFeatureVectors;
-(unsigned long long)sourceInputFeatureChannels;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setSourceNumberOfFeatureVectors:(unsigned long long)arg1 ;
-(unsigned long long)sourceOutputFeatureChannels;
-(void)setSourceInputFeatureChannels:(unsigned long long)arg1 ;
-(void)setSourceOutputFeatureChannels:(unsigned long long)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)encodeGradientForDataToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 weightMatrix:(id)arg3 resultGradientForDataMatrix:(id)arg4 ;
-(void)encodeGradientForWeightsAndBiasToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 inputMatrix:(id)arg3 resultGradientForWeightMatrix:(id)arg4 resultGradientForBiasVector:(id)arg5 ;
@end

