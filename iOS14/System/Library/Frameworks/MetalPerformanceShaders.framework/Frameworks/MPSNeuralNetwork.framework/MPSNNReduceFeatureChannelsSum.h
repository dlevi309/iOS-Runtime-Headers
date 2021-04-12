/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNReduceUnary.h>

@interface MPSNNReduceFeatureChannelsSum : MPSNNReduceUnary {

	float _weight;

}

@property (assign,nonatomic) float weight;              //@synthesize weight=_weight - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(void)setWeight:(float)arg1 ;
-(float)weight;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)weight:(float)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP11*)arg4 ;
@end

