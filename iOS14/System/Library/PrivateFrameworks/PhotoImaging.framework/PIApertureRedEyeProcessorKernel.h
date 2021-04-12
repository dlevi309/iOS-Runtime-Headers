/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface PIApertureRedEyeProcessorKernel : CIImageProcessorKernel
+(int)outputFormat;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(int)formatForInputAtIndex:(int)arg1 ;
+(SCD_Struct_PI6)ROIForCenterPoint:(CGPoint)arg1 radius:(double)arg2 ;
+(void)convertFloat:(const float*)arg1 toFixed16:(unsigned short*)arg2 count:(unsigned long long)arg3 ;
+(void)convertFixed16:(const unsigned short*)arg1 toFloat:(float*)arg2 count:(unsigned long long)arg3 ;
@end

