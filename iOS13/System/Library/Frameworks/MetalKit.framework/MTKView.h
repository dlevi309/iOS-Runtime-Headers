/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/

#import <MetalKit/MetalKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@protocol CAMetalDrawable, MTLTexture, MTKViewDelegate, MTLDevice;
@class CAMetalLayer, CADisplayLink, MTKOffscreenDrawable, NSString, MTLRenderPassDescriptor;

@interface MTKView : UIView <NSCoding, CALayerDelegate> {

	CAMetalLayer* _metalLayer;
	BOOL _sizeDirty;
	CGSize _drawableScaleFactor;
	BOOL _pausedOnBackgrounding;
	CADisplayLink* _displayLink;
	id<CAMetalDrawable> _currentDrawable;
	/*function pointer*/void* _drawRectSubIMP;
	BOOL _subClassOverridesDrawRect;
	BOOL _deviceReset;
	BOOL _doesNotifyOnRecommendedSizeUpdate;
	id<MTLTexture> _depthStencilTexture;
	id<MTLTexture> _multisampleColorTexture;
	BOOL _framebufferOnly;
	unsigned long long _depthStencilTextureUsage;
	unsigned long long _multisampleColorTextureUsage;
	unsigned long long _drawableAttachmentIndex;
	long long _nominalFramesPerSecond;
	long long _maxValidAttachmentIndex;
	unsigned long long _colorPixelFormats[8];
	id<MTLTexture> _multisampleColorTextures[8];
	id<MTLTexture> _colorTextures[8];
	MTKOffscreenDrawable* _offscreenSwapChain[3];
	unsigned long long _drawableIdx;
	int _renderAttachmentDirtyState;
	unsigned long long _terminateAfterFrame;
	unsigned long long _terminateAfterSeconds;
	unsigned long long _measureAfterFrame;
	unsigned long long _measureAfterSeconds;
	unsigned long long _dumpFrameAtFrame;
	unsigned long long _dumpFrameAtSeconds;
	NSString* _dumpPath;
	BOOL _dumpFirstFrame;
	BOOL _drawOffscreen;
	long long _forceOrientation;
	double _startTime;
	unsigned _frameNum;
	BOOL _enableSetNeedsDisplay;
	BOOL _autoResizeDrawable;
	BOOL _paused;
	unsigned _clearStencil;
	id<MTKViewDelegate> _delegate;
	id<MTLDevice> _device;
	unsigned long long _depthStencilPixelFormat;
	unsigned long long _sampleCount;
	double _clearDepth;
	long long _preferredFramesPerSecond;
	CGSize _drawableSize;
	CGSize _preferredDrawableSize;
	SCD_Struct_MT13 _clearColor;

}

@property (assign,nonatomic,__weak) id<MTKViewDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<MTLDevice> device;                                                   //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<CAMetalDrawable> currentDrawable;                                  //@synthesize currentDrawable=_currentDrawable - In the implementation block
@property (assign,nonatomic) BOOL framebufferOnly; 
@property (assign,nonatomic) unsigned long long depthStencilAttachmentTextureUsage; 
@property (assign,nonatomic) unsigned long long multisampleColorAttachmentTextureUsage; 
@property (assign,nonatomic) BOOL presentsWithTransaction; 
@property (assign,nonatomic) unsigned long long colorPixelFormat; 
@property (assign,nonatomic) unsigned long long depthStencilPixelFormat;                             //@synthesize depthStencilPixelFormat=_depthStencilPixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long sampleCount;                                         //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) SCD_Struct_MT13 clearColor;                                             //@synthesize clearColor=_clearColor - In the implementation block
@property (assign,nonatomic) double clearDepth;                                                      //@synthesize clearDepth=_clearDepth - In the implementation block
@property (assign,nonatomic) unsigned clearStencil;                                                  //@synthesize clearStencil=_clearStencil - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> depthStencilTexture; 
@property (nonatomic,readonly) id<MTLTexture> multisampleColorTexture; 
@property (nonatomic,readonly) MTLRenderPassDescriptor * currentRenderPassDescriptor; 
@property (assign,nonatomic) long long preferredFramesPerSecond;                                     //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (assign,nonatomic) BOOL enableSetNeedsDisplay;                                             //@synthesize enableSetNeedsDisplay=_enableSetNeedsDisplay - In the implementation block
@property (assign,nonatomic) BOOL autoResizeDrawable;                                                //@synthesize autoResizeDrawable=_autoResizeDrawable - In the implementation block
@property (assign,nonatomic) CGSize drawableSize;                                                    //@synthesize drawableSize=_drawableSize - In the implementation block
@property (nonatomic,readonly) CGSize preferredDrawableSize;                                         //@synthesize preferredDrawableSize=_preferredDrawableSize - In the implementation block
@property (readonly) id<MTLDevice> preferredDevice; 
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                            //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) CGColorSpaceRef colorspace; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<MTKViewDelegate>)delegate;
-(void)setDelegate:(id<MTKViewDelegate>)arg1 ;
-(void)setNilValueForKey:(id)arg1 ;
-(BOOL)isPaused;
-(id<MTLDevice>)device;
-(SCD_Struct_MT13)clearColor;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(double)startTime;
-(void)setPaused:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)_canDrawContent;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)setEnableSetNeedsDisplay:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(BOOL)_controlsOwnScaleFactor;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(long long)preferredFramesPerSecond;
-(BOOL)presentsWithTransaction;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(void)setClearColor:(SCD_Struct_MT13)arg1 ;
-(id<MTLDevice>)preferredDevice;
-(void)setDrawableSize:(CGSize)arg1 ;
-(CGSize)drawableSize;
-(BOOL)framebufferOnly;
-(CGColorSpaceRef)colorspace;
-(void)setColorspace:(CGColorSpaceRef)arg1 ;
-(void)setClearDepth:(double)arg1 ;
-(void)setClearStencil:(unsigned)arg1 ;
-(double)clearDepth;
-(unsigned)clearStencil;
-(MTLRenderPassDescriptor *)currentRenderPassDescriptor;
-(unsigned long long)colorPixelFormat;
-(void)setColorPixelFormat:(unsigned long long)arg1 ;
-(id<CAMetalDrawable>)currentDrawable;
-(void)setDepthStencilPixelFormat:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
-(void)draw;
-(void)getEnvironmentSettings;
-(void)_resizeDrawable;
-(void)setColorPixelFormat:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_resizeMetalLayerDrawable;
-(void)createDepthStencilTexture;
-(const id*)multisampleColorTexturesForceUpdate:(BOOL)arg1 ;
-(const id*)colorTextures;
-(const id*)colorTexturesForceUpdate:(BOOL)arg1 ;
-(const id*)multisampleColorTextures;
-(long long)_calculateRefeshesPerSecond;
-(void)setNominalFramesPerSecond:(long long)arg1 ;
-(void)_updateToNativeScale;
-(void)_createDisplayLinkForScreen:(id)arg1 ;
-(void)releaseDrawables;
-(void)__initCommon;
-(void)setDrawableAttachmentIndex:(unsigned long long)arg1 ;
-(void)setAutoResizeDrawable:(BOOL)arg1 ;
-(unsigned long long)drawableAttachmentIndex;
-(id<MTLTexture>)depthStencilTexture;
-(void)_dumpFrameImageWithFilename:(id)arg1 ;
-(void)_dumpFramerate:(double)arg1 withFilename:(id)arg2 ;
-(CGSize)_pixelSizeFromPointSize:(CGSize)arg1 ;
-(BOOL)exportToTargaAtLocation:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 size:(unsigned long long)arg4 bytes:(void*)arg5 ;
-(unsigned long long)drawNumber;
-(id<MTLTexture>)multisampleColorTexture;
-(long long)nominalFramesPerSecond;
-(void)setDepthStencilAttachmentTextureUsage:(unsigned long long)arg1 ;
-(unsigned long long)depthStencilAttachmentTextureUsage;
-(void)setMultisampleColorAttachmentTextureUsage:(unsigned long long)arg1 ;
-(unsigned long long)multisampleColorAttachmentTextureUsage;
-(unsigned long long)depthStencilPixelFormat;
-(BOOL)enableSetNeedsDisplay;
-(BOOL)autoResizeDrawable;
-(CGSize)preferredDrawableSize;
@end

