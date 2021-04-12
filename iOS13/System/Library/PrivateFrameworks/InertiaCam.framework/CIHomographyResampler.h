/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
*/

#import <InertiaCam/InertiaCam-Structs.h>
#import <InertiaCam/ImageHomographyResampler.h>

@class CIContext, CIImage;

@interface CIHomographyResampler : ImageHomographyResampler {

	CIContext* _ctx;
	CIImage* _fillImage;
	CGRect _lastFillRect;

}
-(id)init;
-(CVBufferRef)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 ;
-(CVBufferRef)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 pixelBufferPool:(CVPixelBufferPoolRef)arg4 ;
-(short)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 toPixelBuffer:(CVBufferRef)arg4 ;
-(void)updateBackgroundFill:(CGRect)arg1 ;
@end

