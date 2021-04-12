/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSCore/MPSState.h>

@class MPSMatrix;

@interface MPSRNNMatrixTrainingState : MPSState {

	MPSMatrix* singleGateZ;
	BOOL _isTemporary;

}
-(BOOL)isTemporary;
-(void)setReadCount:(unsigned long long)arg1 ;
-(id)initForSingleGateWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 isTemporary:(BOOL)arg3 ;
-(void)dealloc;
@end

