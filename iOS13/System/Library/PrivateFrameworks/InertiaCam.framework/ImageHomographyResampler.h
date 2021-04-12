/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
*/


#import <InertiaCam/InertiaCam-Structs.h>
@interface ImageHomographyResampler : NSObject {

	double homographyMatrix[9];

}
-(id)init;
-(void)setHomographyMatrix:(double*)arg1 ;
-(CVBufferRef)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 ;
-(void)EraseCVPixelBuffer:(CVBufferRef)arg1 ;
-(CGImageRef)ResampleCGImage:(CGImageRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 ;
-(void)ClearOutOfBoundsPixels:(WorkingPixmapRecord*)arg1 ;
-(short)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 toPixelBuffer:(CVBufferRef)arg4 ;
@end

