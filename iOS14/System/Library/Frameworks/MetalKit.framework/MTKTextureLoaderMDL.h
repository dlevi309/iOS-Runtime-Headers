/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/

#import <MetalKit/MetalKit-Structs.h>
#import <MetalKit/MTKTextureLoaderData.h>

@class MDLTexture;

@interface MTKTextureLoaderMDL : MTKTextureLoaderData {

	MDLTexture* _texture;
	MTLPixelFormatInfo _pixelFormatInfo;

}
-(void)dealloc;
-(id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6 ;
-(BOOL)determineFormatFromChannelEncoding:(long long)arg1 channelCount:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithMDLTexture:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

