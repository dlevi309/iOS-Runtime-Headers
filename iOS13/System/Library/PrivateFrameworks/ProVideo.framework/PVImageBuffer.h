/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PVImageBufferImpl;
#import <ProVideo/ProVideo-Structs.h>
@interface PVImageBuffer : NSObject {

	id<PVImageBufferImpl> _imageBufferImpl;
	HGSynchronizable* _lock;

}
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithCVPixelBuffer:(CVBufferRef)arg1 ;
+(id)imageWithUIImage:(id)arg1 ;
+(id)imageWithHGBitmap:(HGRef<HGBitmap>*)arg1 ;
+(id)imageWithHGCVPixelBuffer:(HGRef<HGCVPixelBuffer>*)arg1 ;
-(id)copyOfUIImage;
-(id)copyOfUIImage:(CGRect)arg1 ;
-(id)copyOfUIImageFromRectInPixels:(CGRect)arg1 atSizeInPixels:(CGSize)arg2 ;
-(void)dealloc;
-(id)description;
-(CGSize)size;
-(id)debugQuickLookObject;
-(CGImageRef)cgImage;
-(id)uiImage;
-(CVBufferRef)cvPixelBuffer;
-(BOOL)canCreateCVPixelBuffer;
-(BOOL)cvPixelBufferRequiresCopy;
-(BOOL)canCreateHGBitmap;
-(HGRef<HGBitmap>*)hgBitmap;
-(id)initWithImageBufferImpl:(id)arg1 ;
-(CVBufferRef)cvPixelBufferWithColorSpace:(id)arg1 ;
-(HGRef<HGBitmap>*)hgBitmapWithColorSpace:(id)arg1 ;
@end

