/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNNormalizationNode : MPSNNFilterNode {

	float _alpha;
	float _beta;
	float _delta;

}

@property (assign,nonatomic) float alpha;              //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float beta;               //@synthesize beta=_beta - In the implementation block
@property (assign,nonatomic) float delta;              //@synthesize delta=_delta - In the implementation block
+(id)nodeWithSource:(id)arg1 ;
-(float)alpha;
-(void)setAlpha:(float)arg1 ;
-(float)delta;
-(void)setDelta:(float)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(void)setBeta:(float)arg1 ;
-(float)beta;
@end

