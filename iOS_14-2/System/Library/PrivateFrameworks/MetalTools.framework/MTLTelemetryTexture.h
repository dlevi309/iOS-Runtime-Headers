/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsTexture.h>

@class MTLTextureDescriptor, MTLTelemetryDevice;

@interface MTLTelemetryTexture : MTLToolsTexture {

	unsigned long long mipmapClipType;
	MTLTextureDescriptor* _telemetryDescriptor;
	MTLTelemetryDevice* _telemetryDevice;

}
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 swizzle:(SCD_Struct_MT59)arg5 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
-(void)initMipmapClipType;
-(void)accumTextureDistribution:(id)arg1 category:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 baseAddr:(unsigned long long)arg4 rowBytes:(unsigned long long)arg5 isLinear:(BOOL)arg6 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3 plane:(unsigned long long)arg4 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 descriptor:(id)arg4 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4 textureType:(unsigned long long)arg5 levels:(NSRange)arg6 slices:(NSRange)arg7 swizzle:(SCD_Struct_MT59)arg8 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4 ;
@end

