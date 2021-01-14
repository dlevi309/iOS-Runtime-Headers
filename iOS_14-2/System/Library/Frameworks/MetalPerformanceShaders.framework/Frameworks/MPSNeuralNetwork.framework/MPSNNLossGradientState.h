/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@class MPSCNNLossLabels;

@interface MPSNNLossGradientState : MPSNNGradientState {

	float _weight;
	float _labelSmoothing;
	float _epsilon;
	float _delta;
	MPSCNNLossLabels* _lossLabels;

}
+(id)temporaryStateWithCommandBuffer:(id)arg1 ;
-(id)debugDescription;
-(id)initWithResource:(id)arg1 ;
-(void)dealloc;
@end

