/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/


@protocol CAMetalDrawable, MTLDevice, LAUIRenderLoopDelegate;
#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
@class CAMetalLayer, CADisplayLink, CALayer;

@interface LAUIRenderLoop : NSObject {

	CAMetalLayer* _layer;
	CADisplayLink* _display_link;
	BOOL _effective_paused;
	BOOL _drawable_size_dirty;
	BOOL _invalidated;
	BOOL _background;
	BOOL _drawing;
	id<CAMetalDrawable> _current_drawable;
	BOOL _in_application_context;
	BOOL _paused;
	unsigned long long _pixel_format;
	long long _preferred_fps;
	id<MTLDevice> _device;
	id<LAUIRenderLoopDelegate> _delegate;
	CGSize _drawable_size;

}

@property (nonatomic,readonly) unsigned long long pixelFormat;                        //@synthesize pixel_format=_pixel_format - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> device;                                  //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) CALayer * layer; 
@property (assign,nonatomic) BOOL inApplicationContext;                               //@synthesize in_application_context=_in_application_context - In the implementation block
@property (assign,nonatomic) BOOL framebufferOnly; 
@property (assign,nonatomic) long long preferredFramesPerSecond;                      //@synthesize preferred_fps=_preferred_fps - In the implementation block
@property (assign,nonatomic) BOOL paused;                                             //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) CGSize drawableSize;                                     //@synthesize drawable_size=_drawable_size - In the implementation block
@property (assign,nonatomic,__weak) id<LAUIRenderLoopDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<LAUIRenderLoopDelegate>)delegate;
-(void)setDelegate:(id<LAUIRenderLoopDelegate>)arg1 ;
-(id<MTLDevice>)device;
-(unsigned long long)pixelFormat;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(CALayer *)layer;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(long long)preferredFramesPerSecond;
-(BOOL)isDrawableAvailable;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(void)setDrawableSize:(CGSize)arg1 ;
-(CGSize)drawableSize;
-(BOOL)framebufferOnly;
-(void)setInApplicationContext:(BOOL)arg1 ;
-(void)attachToScreen:(id)arg1 ;
-(id)currentDrawable;
-(BOOL)inApplicationContext;
-(void)_draw:(id)arg1 ;
-(void)_updateEffectivePausedState;
-(id)initWithPixelFormat:(unsigned long long)arg1 forDevice:(id)arg2 ;
@end

