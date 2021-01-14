/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface InpaintingSinglePassFilter : CIImageProcessorKernel
+(id)performInpaintingAndBlendingOnSRGBImage:(id)arg1 usingThresholdedMask:(id)arg2 blendingRadius:(int)arg3 inpaintingResourceDescriptor:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6 ;
+(id)runInpaintingNeuralNetworkOnSRGBImage:(id)arg1 usingThresholdedMask:(id)arg2 inpaintingResourceDescriptor:(id)arg3 espressoResources:(id)arg4 executionContext:(id)arg5 error:(id*)arg6 ;
+(int)outputFormat;
+(id)performSinglePassInpaintingPipelineOnImage:(id)arg1 usingMask:(id)arg2 boundingBox:(CGRect)arg3 additionalParameters:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6 ;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(BOOL)synchronizeInputs;
+(int)formatForInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(BOOL)allowPartialOutputRegion;
@end

