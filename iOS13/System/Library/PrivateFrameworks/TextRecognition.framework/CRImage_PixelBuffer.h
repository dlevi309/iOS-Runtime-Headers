/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <TextRecognition/CRImage.h>

@interface CRImage_PixelBuffer : CRImage
+(void)drawVerticalLineAtXOffset:(double)arg1 image:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)width;
-(unsigned long long)height;
-(CVBufferRef)pixelBuffer;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 ;
-(CGImageRef)cgImage;
-(void)writeToFile:(id)arg1 ;
-(id)imageByRotating180;
-(vImage_Buffer*)vImage;
-(id)imageByRotating90CW;
-(id)imageByCroppingRectangle:(CGRect)arg1 ;
-(id)imageByScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)imageByConvertingToColorSpace:(int)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 toColorSpace:(int)arg2 ;
-(id)imageByCorrectingFromOrientation:(unsigned)arg1 ;
-(CVBufferRef)pixelBufferWithScale:(double)arg1 paddedToSize:(CGSize)arg2 adjustedToSize:(CGSize*)arg3 ;
-(CVBufferRef)pixelBufferWithScale:(double)arg1 paddedToSize:(CGSize)arg2 adjustedToSize:(CGSize*)arg3 mask:(CGImageRef)arg4 ;
-(id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 alignCenter:(BOOL)arg3 ;
-(vImage_Buffer*)createFloatBuffer;
-(CVBufferRef)pixelBufferWithScale:(double)arg1 paddedToSize:(CGSize)arg2 ;
-(id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)imageByPaddingX:(unsigned long long)arg1 paddingY:(unsigned long long)arg2 ;
-(id)imageByDilating;
-(id)imageByApplyingBinaryMask:(id)arg1 ;
-(id)imageByInvertingIntensity;
-(id)imageByOverlayingImage:(id)arg1 opacity:(float)arg2 ;
-(id)imageByOverlayingRects:(CGRect*)arg1 count:(long long)arg2 ;
-(CVBufferRef)_pixelBufferFromUrl:(id)arg1 ;
-(CVBufferRef)pixelBufferWithScale:(double)arg1 paddedToSize:(CGSize)arg2 adjustedToSize:(CGSize*)arg3 mask:(CGImageRef)arg4 format:(unsigned)arg5 ;
-(CVBufferRef)pixelBufferWithFormat:(unsigned)arg1 ;
@end

