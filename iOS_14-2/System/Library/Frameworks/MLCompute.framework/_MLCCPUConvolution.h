/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/_MLCCPULayer.h>

@interface _MLCCPUConvolution : _MLCCPULayer
+(id)layerWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5 ;
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 convolutionTranspose:(BOOL)arg5 ;
+(id)createBNNSNDArrayDescriptorForDescriptor:(id)arg1 weightsDelta:(id)arg2 fullyConnected:(BOOL)arg3 ;
+(id)createBNNSNDArrayDescriptorForDescriptor:(id)arg1 biasDelta:(id)arg2 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5 ;
@end

