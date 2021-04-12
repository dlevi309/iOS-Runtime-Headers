/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSExternalPluginBase.h>
#import <MPSNeuralNetwork/MPSExternalCNNUnary.h>

@protocol MPSExternalCNNUnary <MPSExternalPluginBase>
@optional
-(unsigned long long)encodeBatchToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 pluginOptions:(unsigned long long)arg4 sourceTextures:(id)arg5 sourceInfo:(const SCD_Struct_MP16*)arg6 destinationTextures:(id)arg7 destinationInfo:(const SCD_Struct_MP17*)arg8 predicationBuffer:(id)arg9 predicationOffset:(unsigned long long)arg10;

@end


@class NSString;

@interface MPSExternalCNNUnary : MPSExternalPluginBase <MPSExternalCNNUnary>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const SCD_Struct_MP16*)arg5 destinationTexture:(id)arg6 destinationInfo:(const SCD_Struct_MP17*)arg7 ;
-(unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 pluginOptions:(unsigned long long)arg4 sourceTexture:(id)arg5 sourceInfo:(const SCD_Struct_MP16*)arg6 destinationTexture:(id)arg7 destinationInfo:(const SCD_Struct_MP17*)arg8 ;
-(unsigned long long)encodeWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const SCD_Struct_MP18*)arg4 ;
-(unsigned long long)encodeBatchWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const SCD_Struct_MP21*)arg4 ;
@end

