/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/

#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
#import <LocalAuthenticationPrivateUI/LAUIRenderLoop.h>

@protocol CAMetalDrawable, MTLDevice;
@class CAMetalLayer, CALayer;

@interface LAUIMetalRenderLoop : LAUIRenderLoop {

	CAMetalLayer* _layer;
	BOOL _drawable_size_dirty;
	id<CAMetalDrawable> _current_drawable;
	unsigned long long _pixel_format;
	id<MTLDevice> _device;
	CGSize _drawable_size;

}

@property (nonatomic,readonly) unsigned long long pixelFormat;                             //@synthesize pixel_format=_pixel_format - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> device;                                       //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) CALayer * layer; 
@property (assign,nonatomic) BOOL framebufferOnly; 
@property (assign,nonatomic) CGSize drawableSize;                                          //@synthesize drawable_size=_drawable_size - In the implementation block
@property (assign,nonatomic,__weak) id<LAUIMetalRenderLoopDelegate> delegate; 
-(CALayer *)layer;
-(BOOL)isDrawableAvailable;
-(id)init;
-(void)setDrawableSize:(CGSize)arg1 ;
-(unsigned long long)pixelFormat;
-(id)currentDrawable;
-(id<MTLDevice>)device;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(BOOL)framebufferOnly;
-(CGSize)drawableSize;
-(void)_didDraw;
-(void)_didInvalidate;
-(void)_willDraw;
-(id)initWithPixelFormat:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(BOOL)_preferredPauseState;
@end

