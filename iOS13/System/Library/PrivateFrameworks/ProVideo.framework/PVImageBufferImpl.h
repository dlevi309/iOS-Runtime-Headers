/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PVImageBufferImpl <NSObject>
@required
-(CGSize*)size;
-(CGImageRef)cgImage;
-(BOOL)canCreateCVPixelBuffer;
-(BOOL)cvPixelBufferRequiresCopy;
-(BOOL)canCreateHGBitmap;
-(HGRef<HGCVPixelBuffer>*)cvPixelBufferWithColorSpace:(id)arg1;
-(HGRef<HGBitmap>*)hgBitmapWithColorSpace:(id)arg1;

@end
