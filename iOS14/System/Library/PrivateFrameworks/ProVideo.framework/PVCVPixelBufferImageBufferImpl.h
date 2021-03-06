/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVImageBufferImpl.h>

@class NSString;

@interface PVCVPixelBufferImageBufferImpl : NSObject <PVImageBufferImpl> {

	HGRef<HGCVPixelBuffer>* _pixelBuffer;
	CGImageRef _generatedCGImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)size;
-(CGImageRef)cgImage;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 ;
-(void)dealloc;
-(BOOL)canCreateCVPixelBuffer;
-(BOOL)cvPixelBufferRequiresCopy;
-(HGRef<HGCVPixelBuffer>*)cvPixelBufferWithColorSpace:(id)arg1 ;
-(BOOL)canCreateHGBitmap;
-(HGRef<HGBitmap>*)hgBitmapWithColorSpace:(id)arg1 ;
-(id)initWithHGCVPixelBuffer:(HGRef<HGCVPixelBuffer>*)arg1 ;
@end

