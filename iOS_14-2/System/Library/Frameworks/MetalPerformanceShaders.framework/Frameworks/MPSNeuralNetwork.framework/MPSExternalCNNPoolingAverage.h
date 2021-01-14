/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSExternalCNNUnary.h>
#import <MPSNeuralNetwork/MPSExternalCNNPoolingAverage.h>

@protocol MPSExternalCNNPoolingAverage <MPSExternalCNNUnary>
@optional
-(unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const SCD_Struct_MP17*)arg5 destinationTexture:(id)arg6 destinationInfo:(const SCD_Struct_MP18*)arg7 zeroPadSizeX:(unsigned long long)arg8 zeroPadSizeY:(unsigned long long)arg9;
-(unsigned long long)encodeBatchToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTextures:(id)arg4 sourceInfo:(const SCD_Struct_MP17*)arg5 destinationTextures:(id)arg6 destinationInfo:(const SCD_Struct_MP18*)arg7 zeroPadSizeX:(unsigned long long)arg8 zeroPadSizeY:(unsigned long long)arg9 predicationBuffer:(id)arg10 predicationOffset:(unsigned long long)arg11;

@end


@class NSString;

@interface MPSExternalCNNPoolingAverage : MPSExternalCNNUnary <MPSExternalCNNPoolingAverage>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)encodeWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const SCD_Struct_MP19*)arg4 ;
-(unsigned long long)encodeBatchWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const SCD_Struct_MP22*)arg4 ;
-(unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const SCD_Struct_MP17*)arg5 destinationTexture:(id)arg6 destinationInfo:(const SCD_Struct_MP18*)arg7 ;
-(unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const SCD_Struct_MP17*)arg5 destinationTexture:(id)arg6 destinationInfo:(const SCD_Struct_MP18*)arg7 zeroPadSizeX:(unsigned long long)arg8 zeroPadSizeY:(unsigned long long)arg9 ;
@end
