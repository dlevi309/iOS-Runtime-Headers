/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol MTLTexture, MTLDevice;
#import <PencilKit/PencilKit-Structs.h>
@interface PKMetalFramebuffer : NSObject {

	BOOL _isPurgeable;
	BOOL _memoryless;
	BOOL _backedByIOSurface;
	id<MTLTexture> _colorTexture;
	id<MTLDevice> _device;
	unsigned long long _pixelFormat;
	unsigned long long _sampleCount;
	IOSurfaceRef _ioSurface;
	CGSize _size;

}

@property (nonatomic,readonly) id<MTLTexture> colorTexture;                 //@synthesize colorTexture=_colorTexture - In the implementation block
@property (nonatomic,readonly) CGSize size;                                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> device;                        //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelFormat;              //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,readonly) BOOL memoryless;                             //@synthesize memoryless=_memoryless - In the implementation block
@property (nonatomic,readonly) BOOL backedByIOSurface;                      //@synthesize backedByIOSurface=_backedByIOSurface - In the implementation block
@property (nonatomic,readonly) unsigned long long sampleCount;              //@synthesize sampleCount=_sampleCount - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef ioSurface;                      //@synthesize ioSurface=_ioSurface - In the implementation block
-(id)init;
-(unsigned long long)pixelFormat;
-(CGSize)size;
-(IOSurfaceRef)createIOSurface;
-(id<MTLDevice>)device;
-(unsigned long long)sampleCount;
-(IOSurfaceRef)ioSurface;
-(void)dealloc;
-(id)initWithSize:(CGSize)arg1 pixelFormat:(unsigned long long)arg2 device:(id)arg3 memoryless:(BOOL)arg4 backedByIOSurface:(BOOL)arg5 sampleCount:(unsigned long long)arg6 ;
-(BOOL)memoryless;
-(BOOL)makeNonPurgeable;
-(id<MTLTexture>)colorTexture;
-(void)makePurgeable;
-(void)createColorTextureIfNecessary;
-(BOOL)backedByIOSurface;
@end

