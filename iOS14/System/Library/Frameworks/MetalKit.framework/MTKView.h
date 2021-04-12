/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAutoResizeDrawable:(BOOL)arg1 ;
-(void)_createDisplayLinkForScreen:(id)arg1 ;
-(void)_resizeMetalLayerDrawable;
-(unsigned)clearStencil;
-(id)initWithFrame:(CGRect)arg1 ;
-(const id*)multisampleColorTexturesForceUpdate:(BOOL)arg1 ;
-(void)setDrawableSize:(CGSize)arg1 ;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(id<MTKViewDelegate>)delegate;
-(BOOL)_canDrawContent;
-(unsigned long long)drawableAttachmentIndex;
-(void)createDepthStencilTexture;
-(id<CAMetalDrawable>)currentDrawable;
-(void)_resizeDrawable;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(BOOL)presentsWithTransaction;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)drawNumber;
-(void)setPaused:(BOOL)arg1 ;
-(MTLRenderPassDescriptor *)currentRenderPassDescriptor;
-(unsigned long long)depthStencilAttachmentTextureUsage;
-(BOOL)autoResizeDrawable;
-(void)_dumpFrameImageWithFilename:(id)arg1 ;
-(long long)_calculateRefeshesPerSecond;
-(void)setContentScaleFactor:(double)arg1 ;
-(unsigned long long)multisampleColorAttachmentTextureUsage;
-(unsigned long long)colorPixelFormat;
-(void)setEnableSetNeedsDisplay:(BOOL)arg1 ;
-(id<MTLDevice>)device;
-(void)draw;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setDelegate:(id<MTKViewDelegate>)arg1 ;
-(double)clearDepth;
-(void)setClearStencil:(unsigned)arg1 ;
-(void)layoutSubviews;
-(long long)preferredFramesPerSecond;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setColorPixelFormat:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)framebufferOnly;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(CGSize)preferredDrawableSize;
-(id<MTLTexture>)multisampleColorTexture;
-(CGColorSpaceRef)colorspace;
-(void)releaseDrawables;
-(void)getEnvironmentSettings;
-(void)__initCommon;
-(void)setDepthStencilAttachmentTextureUsage:(unsigned long long)arg1 ;
-(void)setColorPixelFormat:(unsigned long long)arg1 ;
-(void)_updateToNativeScale;
-(SCD_Struct_MT13)clearColor;
-(unsigned long long)sampleCount;
-(void)displayLayer:(id)arg1 ;
-(void)setColorspace:(CGColorSpaceRef)arg1 ;
-(id<MTLDevice>)preferredDevice;
-(BOOL)exportToTargaAtLocation:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 size:(unsigned long long)arg4 bytes:(void*)arg5 ;
-(CGSize)drawableSize;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)enableSetNeedsDisplay;
-(CGSize)_pixelSizeFromPointSize:(CGSize)arg1 ;
-(void)setNominalFramesPerSecond:(long long)arg1 ;
-(void)setClearColor:(SCD_Struct_MT13)arg1 ;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)setDepthStencilPixelFormat:(unsigned long long)arg1 ;
-(id<MTLTexture>)depthStencilTexture;
-(const id*)colorTexturesForceUpdate:(BOOL)arg1 ;
-(long long)nominalFramesPerSecond;
-(void)_dumpFramerate:(double)arg1 withFilename:(id)arg2 ;
-(void)setMultisampleColorAttachmentTextureUsage:(unsigned long long)arg1 ;
-(const id*)multisampleColorTextures;
-(const id*)colorTextures;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)setNilValueForKey:(id)arg1 ;
-(unsigned long long)depthStencilPixelFormat;
-(void)setDrawableAttachmentIndex:(unsigned long long)arg1 ;
-(double)startTime;
-(BOOL)isPaused;
-(void)setClearDepth:(double)arg1 ;
-(void)dealloc;
-(BOOL)_controlsOwnScaleFactor;
@end

