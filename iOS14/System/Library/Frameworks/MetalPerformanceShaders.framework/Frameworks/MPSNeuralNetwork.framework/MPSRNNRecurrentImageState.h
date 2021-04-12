/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSCore/MPSState.h>

@interface MPSRNNRecurrentImageState : MPSState {

	id* recurrentImages;
	id* cellImages;
	int nLayers;
	BOOL _isTemporary;

}
-(BOOL)isTemporary;
-(void)setReadCount:(unsigned long long)arg1 ;
-(id)getRecurrentOutputImageForLayerIndex:(unsigned long long)arg1 ;
-(id)getMemoryCellImageForLayerIndex:(unsigned long long)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 recurrentImageDescriptors:(id*)arg2 cellImageDescriptors:(id*)arg3 isTemporary:(BOOL)arg4 layerCount:(int)arg5 ;
-(void)dealloc;
@end

