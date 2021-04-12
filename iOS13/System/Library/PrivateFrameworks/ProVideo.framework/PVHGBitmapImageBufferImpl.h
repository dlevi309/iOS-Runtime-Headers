/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVImageBufferImpl.h>

@class NSString;

@interface PVHGBitmapImageBufferImpl : NSObject <PVImageBufferImpl> {

	HGRef<HGBitmap>* _bitmap;
	CGImageRef _generatedCGImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGSize)size;
-(CGImageRef)cgImage;
-(BOOL)canCreateCVPixelBuffer;
-(BOOL)cvPixelBufferRequiresCopy;
-(BOOL)canCreateHGBitmap;
-(id)initWithHGBitmap:(HGRef<HGBitmap>*)arg1 ;
-(HGRef<HGCVPixelBuffer>*)cvPixelBufferWithColorSpace:(id)arg1 ;
-(HGRef<HGBitmap>*)hgBitmapWithColorSpace:(id)arg1 ;
@end

