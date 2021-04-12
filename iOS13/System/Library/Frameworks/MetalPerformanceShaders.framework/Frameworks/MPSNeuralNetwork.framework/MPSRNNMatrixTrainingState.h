/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSCore/MPSState.h>

@class MPSMatrix;

@interface MPSRNNMatrixTrainingState : MPSState {

	MPSMatrix* singleGateZ;
	BOOL _isTemporary;

}
-(void)dealloc;
-(void)setReadCount:(unsigned long long)arg1 ;
-(BOOL)isTemporary;
-(id)initForSingleGateWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 isTemporary:(BOOL)arg3 ;
@end

