/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNUnaryReductionNode : MPSNNFilterNode {

	SCD_Struct_MP4 _clipRectSource;

}

@property (assign,nonatomic) SCD_Struct_MP4 clipRectSource;              //@synthesize clipRectSource=_clipRectSource - In the implementation block
+(id)nodeWithSource:(id)arg1 ;
-(void)setClipRectSource:(SCD_Struct_MP4)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(SCD_Struct_MP4)clipRectSource;
-(id)gradientFilterWithSource:(id)arg1 ;
@end

