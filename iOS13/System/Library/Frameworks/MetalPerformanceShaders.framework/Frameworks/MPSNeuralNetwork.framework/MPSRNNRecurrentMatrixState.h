/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSCore/MPSState.h>

@interface MPSRNNRecurrentMatrixState : MPSState {

	id* recurrentMatrices;
	id* cellMatrices;
	int nLayers;
	BOOL _isTemporary;

}
-(void)dealloc;
-(void)setReadCount:(unsigned long long)arg1 ;
-(BOOL)isTemporary;
-(id)getRecurrentOutputMatrixForLayerIndex:(unsigned long long)arg1 ;
-(id)getMemoryCellMatrixForLayerIndex:(unsigned long long)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 recurrentMatrixDescriptors:(id*)arg2 cellMatrixDescriptors:(id*)arg3 isTemporary:(BOOL)arg4 layerCount:(int)arg5 ;
@end

