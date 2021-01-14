/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface CIConvolutionProcessor : CIImageProcessorKernel
+(BOOL)canReduceOutputChannels;
+(int)outputFormat;
+(id)applyBoxToImage:(id)arg1 width:(int)arg2 height:(int)arg3 ;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(BOOL)synchronizeInputs;
+(int)formatForInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(id)applyConToImage:(id)arg1 width:(int)arg2 height:(int)arg3 bias:(double)arg4 weights:(id)arg5 ;
@end

