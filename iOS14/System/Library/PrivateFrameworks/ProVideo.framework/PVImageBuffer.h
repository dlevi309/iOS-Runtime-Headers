/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)debugQuickLookObject;
-(CGSize)size;
-(id)description;
-(id)uiImage;
-(CGImageRef)cgImage;
-(void)dealloc;
-(CVBufferRef)cvPixelBuffer;
-(BOOL)canCreateCVPixelBuffer;
-(BOOL)cvPixelBufferRequiresCopy;
-(CVBufferRef)cvPixelBufferWithColorSpace:(id)arg1 ;
-(BOOL)canCreateHGBitmap;
-(HGRef<HGBitmap>*)hgBitmapWithColorSpace:(id)arg1 ;
-(HGRef<HGBitmap>*)hgBitmap;
-(id)initWithImageBufferImpl:(id)arg1 ;
@end

