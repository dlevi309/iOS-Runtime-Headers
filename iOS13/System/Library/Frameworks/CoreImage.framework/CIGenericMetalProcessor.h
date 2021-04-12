/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface CIGenericMetalProcessor : CIImageProcessorKernel
+(id)applyWithExtent:(CGRect)arg1 inputs:(id)arg2 arguments:(id)arg3 error:(id*)arg4 ;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(BOOL)synchronizeInputs;
+(int)formatForInputAtIndex:(int)arg1 ;
+(id)applyWithExtent:(CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 roiMethods:(id)arg4 insetRects:(id)arg5 scaleFactors:(id)arg6 arguments:(id)arg7 error:(id*)arg8 ;
+(id)applyWithExtent:(CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 arguments:(id)arg4 error:(id*)arg5 ;
+(BOOL)outputIsOpaque;
+(BOOL)skipFormatChecks;
+(id)applyWithExtent:(CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 insetRects:(id)arg4 arguments:(id)arg5 error:(id*)arg6 ;
+(id)applyWithExtent:(CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 scaleFactors:(id)arg4 arguments:(id)arg5 error:(id*)arg6 ;
+(id)applyWithExtent:(CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 className:(id)arg4 arguments:(id)arg5 error:(id*)arg6 ;
@end

