/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/


@protocol MTLDevice, MTLCommandBuffer, MTLBlitCommandEncoder, OS_dispatch_queue;
#import <MetalKit/MetalKit-Structs.h>
@class NSLock, NSObject;

@interface MTKTextureUploader : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandBuffer> _commandBuffer;
	id<MTLBlitCommandEncoder> _blit;
	NSLock* _lock;
	NSObject*<OS_dispatch_queue> _notifyQueue;

}
-(void)finishWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)generateMipmapsForTexture:(id)arg1 ;
-(void)dealloc;
-(void)copyBytes:(const void*)arg1 toTexture:(id)arg2 bitsPerPixel:(unsigned long long)arg3 pixelComponents:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 region:(SCD_Struct_MT4)arg7 slice:(unsigned long long)arg8 level:(unsigned long long)arg9 flipVertically:(BOOL)arg10 ;
-(void)copyTexture:(id)arg1 toTexture:(id)arg2 ;
-(id)initWithDevice:(id)arg1 commandQueue:(id)arg2 notifyQueue:(id)arg3 ;
-(id)newTextureWithData:(id)arg1 options:(id)arg2 ;
@end

