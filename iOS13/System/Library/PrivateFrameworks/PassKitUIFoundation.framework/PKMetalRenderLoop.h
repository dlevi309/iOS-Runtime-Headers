/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)invalidate;
-(id<MTLDevice>)device;
-(unsigned long long)pixelFormat;
-(CALayer *)layer;
-(BOOL)isDrawableAvailable;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(void)setDrawableSize:(CGSize)arg1 ;
-(CGSize)drawableSize;
-(BOOL)framebufferOnly;
-(id)currentDrawable;
-(id)initWithPixelFormat:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(void)_willDraw;
-(void)_didDraw;
-(BOOL)_subclassPreferredPauseState;
@end

