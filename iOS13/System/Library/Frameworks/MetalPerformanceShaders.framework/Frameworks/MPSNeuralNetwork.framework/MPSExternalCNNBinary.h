/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSExternalPluginBase.h>
#import <MPSNeuralNetwork/MPSExternalCNNBinary.h>

@protocol MPSExternalCNNBinary <MPSExternalPluginBase>
@optional
-(unsigned long long)encodeBatchToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 pluginOptions:(unsigned long long)arg4 primaryTextures:(id)arg5 primaryInfo:(const SCD_Struct_MP16*)arg6 secondaryTextures:(id)arg7 secondaryInfo:(const SCD_Struct_MP16*)arg8 destinationTextures:(id)arg9 destinationInfo:(const SCD_Struct_MP17*)arg10 predicationBuffer:(id)arg11 predicationOffset:(unsigned long long)arg12;

@end


@class NSString;

@interface MPSExternalCNNBinary : MPSExternalPluginBase <MPSExternalCNNBinary>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)encodeWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const SCD_Struct_MP22*)arg4 ;
-(unsigned long long)encodeBatchWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const SCD_Struct_MP23*)arg4 ;
-(unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 primaryTexture:(id)arg4 primaryInfo:(const SCD_Struct_MP16*)arg5 secondaryTexture:(id)arg6 secondaryInfo:(const SCD_Struct_MP16*)arg7 destinationTexture:(id)arg8 destinationInfo:(const SCD_Struct_MP17*)arg9 ;
@end

