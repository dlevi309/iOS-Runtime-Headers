/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientState.h>

@interface MPSNNPadGradientState : MPSNNGradientState {

	MPSImageCoordinate _fwdPadBefore;
	MPSImageCoordinate _fwdPadAfter;
	unsigned long long _srcImgFcCount;

}
+(id)temporaryStateWithCommandBuffer:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithResource:(id)arg1 ;
@end

