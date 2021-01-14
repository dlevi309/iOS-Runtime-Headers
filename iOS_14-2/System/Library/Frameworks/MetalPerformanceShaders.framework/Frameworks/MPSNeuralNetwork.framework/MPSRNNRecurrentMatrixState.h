/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSCore/MPSState.h>

@interface MPSRNNRecurrentMatrixState : MPSState {

	id* recurrentMatrices;
	id* cellMatrices;
	int nLayers;
	BOOL _isTemporary;

}
-(BOOL)isTemporary;
-(void)setReadCount:(unsigned long long)arg1 ;
-(id)getMemoryCellMatrixForLayerIndex:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 commandBuffer:(id)arg2 recurrentMatrixDescriptors:(id*)arg3 cellMatrixDescriptors:(id*)arg4 isTemporary:(BOOL)arg5 layerCount:(int)arg6 ;
-(id)getRecurrentOutputMatrixForLayerIndex:(unsigned long long)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 recurrentMatrixDescriptors:(id*)arg2 cellMatrixDescriptors:(id*)arg3 isTemporary:(BOOL)arg4 layerCount:(int)arg5 ;
-(void)dealloc;
@end

