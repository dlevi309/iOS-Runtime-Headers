/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIImageProcessorKernel : NSObject
+(int)outputFormat;
+(id)applyWithExtent:(CGRect)arg1 inputs:(id)arg2 arguments:(id)arg3 error:(id*)arg4 ;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(BOOL)synchronizeInputs;
+(BOOL)canReduceOutputChannels;
+(int)formatForInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(BOOL)outputIsOpaque;
+(BOOL)allowPartialOutputRegion;
+(BOOL)skipFormatChecks;
+(unsigned long long)_digestForArgs:(id)arg1 ;
@end

