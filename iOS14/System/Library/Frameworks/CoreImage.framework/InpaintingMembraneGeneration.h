/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface InpaintingMembraneGeneration : CIImageProcessorKernel
+(id)fillSmoothMembraneForSRGBImage:(id)arg1 andMask:(id)arg2 error:(id*)arg3 ;
+(int)outputFormat;
+(BOOL)initializeMembraneModelForResolution:(int)arg1 error:(id*)arg2 ;
+(id)getMembraneModelForResolution:(int)arg1 error:(id*)arg2 ;
+(int)selectMembraneProcessingResolutionBasedOnImageSize:(CGSize)arg1 ;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(BOOL)synchronizeInputs;
+(int)formatForInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(BOOL)allowPartialOutputRegion;
@end

