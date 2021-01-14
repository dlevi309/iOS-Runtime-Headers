/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/

#import <MetalKit/MetalKit-Structs.h>
#import <MetalKit/MTKTextureLoaderData.h>

@class NSData;

@interface MTKTextureLoaderImageIO : MTKTextureLoaderData {

	CGImageBlockSetRef _blockSet;
	CFDataRef _cfData;
	MTLPixelFormatInfo _pixelFormatInfo;
	unsigned long long _bytesPerRow;
	NSData* _imageData;
	BOOL _expandRGBToRGBA;

}
-(id)initWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6 ;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)decodeCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(BOOL)decodeCGImageImageProvider:(CGImageRef)arg1 CGImageProvider:(CGImageProviderRef)arg2 options:(id)arg3 ;
-(BOOL)decodeCGImageDataProvider:(CGImageRef)arg1 options:(id)arg2 ;
-(BOOL)determineCGImageBlockFormatWithComponentType:(int)arg1 alphaInfo:(unsigned)arg2 andPixelSizeBytes:(unsigned long long)arg3 andColorSpace:(CGColorSpaceRef)arg4 isOptimized:(BOOL)arg5 options:(id)arg6 ;
@end

