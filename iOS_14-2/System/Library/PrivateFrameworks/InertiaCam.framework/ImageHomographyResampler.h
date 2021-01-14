/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
*/


#import <InertiaCam/InertiaCam-Structs.h>
@interface ImageHomographyResampler : NSObject {

	double homographyMatrix[9];

}
-(id)init;
-(void)setHomographyMatrix:(double*)arg1 ;
-(void)EraseCVPixelBuffer:(CVBufferRef)arg1 ;
-(CGImageRef)ResampleCGImage:(CGImageRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 ;
-(void)ClearOutOfBoundsPixels:(WorkingPixmapRecord*)arg1 ;
-(short)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 toPixelBuffer:(CVBufferRef)arg4 ;
-(CVBufferRef)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 ;
@end

