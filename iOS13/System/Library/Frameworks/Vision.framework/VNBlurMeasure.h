/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface VNBlurMeasure : NSObject
+(BOOL)computeBlurScore:(float*)arg1 onGrayscaleImage:(CVBufferRef)arg2 andWithRegionOfInterestInImageCoordinates:(CGRect)arg3 andRegionOfInterestInsetFactor:(float)arg4 error:(id*)arg5 ;
+(BOOL)computeBlurScore:(float*)arg1 onGrayscaleImage:(CVBufferRef)arg2 insetFactor:(float)arg3 error:(id*)arg4 ;
+(BOOL)computeBlurScore:(float*)arg1 usingBlurSignature:(id)arg2 insetFactor:(float)arg3 imageROI:(CGRect)arg4 error:(id*)arg5 ;
+(BOOL)computeEdgeWidthBlurScore:(float*)arg1 onGrayscaleImage:(CVBufferRef)arg2 error:(id*)arg3 ;
+(BOOL)computeApproximateBlurScore:(float*)arg1 onGrayscaleImage:(CVBufferRef)arg2 sampledPixelsCount:(int)arg3 insetFactor:(float)arg4 error:(id*)arg5 ;
+(BOOL)computeApproximateBlurScore:(float*)arg1 onRGBAImage:(CVBufferRef)arg2 sampledPixelsCount:(int)arg3 insetFactor:(float)arg4 error:(id*)arg5 ;
@end

