/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface VNHeatMapUtilities : NSObject
+(BOOL)smoothedFloat32ImageBuffer:(vImage_Buffer*)arg1 fromImageBuffer:(vImage_Buffer*)arg2 originalImageSize:(CGSize)arg3 sigmaX:(float)arg4 sigmaY:(float)arg5 nStd:(float)arg6 ;
+(float)maximumValueFromFloat32ImageBuffer:(vImage_Buffer*)arg1 ;
+(id)significantRegionsFromFloat32ImageBuffer:(vImage_Buffer*)arg1 threshold:(float)arg2 ;
+(id)significantRegionsFromFloat32ImageBuffer:(vImage_Buffer*)arg1 threshold:(float)arg2 relativeToMaximum:(BOOL)arg3 ;
+(id)significantRegionsFromFloat32PixelBuffer:(CVBufferRef)arg1 threshold:(float)arg2 relativeToMaximum:(BOOL)arg3 error:(id*)arg4 ;
+(id)boundingBoxesFromFloat32ImageBuffer:(vImage_Buffer*)arg1 thresholds:(id)arg2 error:(id*)arg3 ;
+(id)boundingBoxesFromFloat32ImageBuffer:(vImage_Buffer*)arg1 thresholds:(id)arg2 relativeToMaximum:(BOOL)arg3 applySmoothing:(BOOL)arg4 originalImageSize:(CGSize)arg5 sigmaX:(float)arg6 sigmaY:(float)arg7 nStd:(float)arg8 error:(id*)arg9 ;
+(id)boundingBoxesFromFloat32PixelBuffer:(CVBufferRef)arg1 thresholds:(id)arg2 relativeToMaximum:(BOOL)arg3 applySmoothing:(BOOL)arg4 originalImageSize:(CGSize)arg5 sigmaX:(float)arg6 sigmaY:(float)arg7 nStd:(float)arg8 error:(id*)arg9 ;
@end

