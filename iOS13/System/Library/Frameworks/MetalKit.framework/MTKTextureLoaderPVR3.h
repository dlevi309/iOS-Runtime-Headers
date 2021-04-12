/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/

#import <MetalKit/MetalKit-Structs.h>
#import <MetalKit/MTKTextureLoaderData.h>

@class NSData;

@interface MTKTextureLoaderPVR3 : MTKTextureLoaderData {

	int _pvrCompressedFormat;
	MTLPixelFormatInfo _pixelFormatInfo;
	unsigned _metaDataSize;
	NSData* _imageData;

}
+(BOOL)isPVR3File:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)parseMetadataWithError:(id*)arg1 ;
-(unsigned long long)determineFormat:(unsigned long long)arg1 colorSpace:(unsigned)arg2 channelType:(unsigned)arg3 options:(id)arg4 ;
-(void)determineBlockSize:(unsigned long long*)arg1 blocksWide:(unsigned long long*)arg2 blocksHigh:(unsigned long long*)arg3 bytesPerBlock:(unsigned long long*)arg4 fromFormat:(unsigned)arg5 width:(unsigned long long)arg6 andHeight:(unsigned long long)arg7 ;
-(id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6 ;
@end

