/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface PercentileClipProcessor_RGBA8_CPU : CIImageProcessorKernel
+(int)outputFormat;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(BOOL)canReduceOutputChannels;
+(int)formatForInputAtIndex:(int)arg1 ;
+(CGPoint)centerInImg:(id)arg1 fromRect:(CGRect)arg2 toRect:(CGRect)arg3 offset:(CGPoint)arg4 ;
+(BOOL)allowPartialOutputRegion;
@end

