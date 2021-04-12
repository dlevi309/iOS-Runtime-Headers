/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <PassKitUIFoundation/PKRenderLoop.h>

@protocol CAMetalDrawable, MTLDevice;
@class CAMetalLayer, CALayer;

@interface PKMetalRenderLoop : PKRenderLoop {

	CAMetalLayer* _layer;
	BOOL _drawableSizeDirty;
	id<CAMetalDrawable> _currentDrawable;
	unsigned long long _pixelFormat;
	id<MTLDevice> _device;
	CGSize _drawableSize;

}

@property (nonatomic,readonly) unsigned long long pixelFormat;                           //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> device;                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) CALayer * layer; 
@property (assign,nonatomic) BOOL framebufferOnly; 
@property (assign,nonatomic) CGSize drawableSize;                                        //@synthesize drawableSize=_drawableSize - In the implementation block
@property (assign,nonatomic,__weak) id<PKMetalRenderLoopDelegate> delegate; 
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
-(void)invalidate;
-(void)_didDraw;
-(void)_willDraw;
-(BOOL)_subclassPreferredPauseState;
-(id)initWithPixelFormat:(unsigned long long)arg1 forDevice:(id)arg2 ;
@end

