/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PVImageBufferImpl <NSObject>
@required
-(CGSize*)size;
-(CGImageRef)cgImage;
-(BOOL)canCreateCVPixelBuffer;
-(BOOL)cvPixelBufferRequiresCopy;
-(HGRef<HGCVPixelBuffer>*)cvPixelBufferWithColorSpace:(id)arg1;
-(BOOL)canCreateHGBitmap;
-(HGRef<HGBitmap>*)hgBitmapWithColorSpace:(id)arg1;

@end

