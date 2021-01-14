/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
*/

#import <InertiaCam/InertiaCam-Structs.h>
#import <InertiaCam/ImageHomographyResampler.h>

@class CIContext, CIImage;

@interface CIHomographyResampler : ImageHomographyResampler {

	CIContext* _ctx;
	CIImage* _fillImage;
	CGRect _lastFillRect;
	CGRect hightlightRect;

}

@property (assign) CGRect hightlightRect; 
-(id)init;
-(CVBufferRef)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 pixelBufferPool:(CVPixelBufferPoolRef)arg4 ;
-(short)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 toPixelBuffer:(CVBufferRef)arg4 ;
-(void)updateBackgroundFill:(CGRect)arg1 ;
-(CVBufferRef)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 ;
-(CGRect)hightlightRect;
-(void)setHightlightRect:(CGRect)arg1 ;
@end

