/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, SKViewDelegate;
@class CAMetalLayer, CAEAGLLayer, SKDisplayLink, NSObject, SKTransition, SKScene, NSData, NSMutableDictionary, NSMapTable;

@interface SKView : UIView {

	SKCStats* _currentStats;
	SKCStats* _nextStats;
	SKCStats* _frameStats;
	SKCRenderer* _renderer;
	 _viewScale;
	 _viewTranslation;
	shared_ptr<jet_framebuffer>* _framebuffer;
	shared_ptr<jet_texture>* _frameBufferColorTexture;
	shared_ptr<jet_texture>* _frameBufferDepthStencilTexture;
	unsigned _colorRenderBuffer;
	unsigned _depthStencilRenderBuffer;
	shared_ptr<jet_fence>* _renderFence;
	CAMetalLayer* _metalLayer;
	CAEAGLLayer* _eaglLayer;
	BOOL _needsInitialUpdate;
	BOOL _didRunOnce;
	BOOL _viewFramebufferIsValid;
	 _viewFramebufferPixelSize;
	BOOL _isBackgrounded;
	BOOL _allowsTransparency;
	BOOL _priorResignActivePausedState;
	unsigned long long _frameInterval;
	unsigned long long _preferredFramesPerSecond;
	SKDisplayLink* _displayLink;
	NSObject*<OS_dispatch_queue> _updateQueue;
	double _timePreviousUpdate;
	BOOL _prefersLowPowerGPU;
	BOOL _usesAsyncUpdateQueue;
	BOOL _hasRenderedOnce;
	BOOL _hasRenderedForCurrentUpdate;
	BOOL _disableInput;
	BOOL _mouseIsDown;
	BOOL _rightMouseIsDown;
	SKTransition* _transition;
	SKScene* _nextScene;
	SKScene* _scene;
	BOOL _paused;
	NSData* _spriteArrayHint;
	NSMutableDictionary* _viewRenderOptions;
	NSMapTable* _touchMap;
	float _prevBackingScaleFactor;
	/*^block*/id _dynamicRenderBlock;
	NSObject*<OS_dispatch_queue> _renderQueue;
	NSObject*<OS_dispatch_semaphore> _renderSemaphore;
	int _queuedFrameCount;
	double _prevVsyncRenderTime;
	double _prevRenderTime;
	NSObject*<SKViewDelegate> _delegate;
	SKCRenderer* __layerBackedRenderer;
	NSMutableDictionary* __info;
	double _physicsDebugStrokeWidth;
	CGSize _pixelSize;

}

@property (nonatomic,readonly) CGSize pixelSize;                                     //@synthesize pixelSize=_pixelSize - In the implementation block
@property (assign) SKCRenderer* _layerBackedRenderer;                                //@synthesize _layerBackedRenderer=__layerBackedRenderer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _info;                            //@synthesize _info=__info - In the implementation block
@property (readonly) NSMutableDictionary * options; 
@property (assign,nonatomic) double physicsDebugStrokeWidth;                         //@synthesize physicsDebugStrokeWidth=_physicsDebugStrokeWidth - In the implementation block
@property (assign,nonatomic) BOOL disableStencilBuffers; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) BOOL showsFPS; 
@property (assign,nonatomic) BOOL showsDrawCount; 
@property (assign,nonatomic) BOOL showsNodeCount; 
@property (assign,nonatomic) BOOL showsQuadCount; 
@property (assign,nonatomic) BOOL showsPhysics; 
@property (assign,nonatomic) BOOL showsFields; 
@property (assign,getter=isAsynchronous,nonatomic) BOOL asynchronous; 
@property (assign,nonatomic) BOOL allowsTransparency; 
@property (assign,nonatomic) BOOL ignoresSiblingOrder; 
@property (assign,nonatomic) BOOL shouldCullNonVisibleNodes; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
@property (assign,nonatomic,__weak) NSObject*<SKViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long frameInterval; 
@property (assign,nonatomic) float preferredFrameRate; 
@property (nonatomic,readonly) SKScene * scene; 
+(BOOL)supportsSecureCoding;
+(Class)layerClass;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
+(void)_setCurrentTime:(double)arg1 ;
+(id)debugHierarchyAdditionalGroupingIDs;
+(id)debugHierarchyObjectsInGroupWithID:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 ;
-(void)dealloc;
-(NSMutableDictionary *)options;
-(NSMutableDictionary *)_info;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<SKViewDelegate>)delegate;
-(void)setDelegate:(NSObject*<SKViewDelegate>)arg1 ;
-(void)_update:(double)arg1 ;
-(BOOL)isAsynchronous;
-(BOOL)isPaused;
-(BOOL)isOpaque;
-(void)setAsynchronous:(BOOL)arg1 ;
-(id)snapshot;
-(long long)frameInterval;
-(void)setFrameInterval:(long long)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)_commonInit;
-(double)_viewScale;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)_preferredFocusMovementStyle;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(SKScene *)scene;
-(void)didMoveToWindow;
-(void)drawRect:(CGRect)arg1 ;
-(void)set_info:(NSMutableDictionary *)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(CGSize)pixelSize;
-(double)_fps;
-(long long)preferredFramesPerSecond;
-(void)setPreferredFrameRate:(float)arg1 ;
-(float)preferredFrameRate;
-(id)_focusedItemRegionContainer;
-(void)CBApplicationWillResignActive;
-(void)CBApplicationDidBecomeActive;
-(void)setShowsFPS:(BOOL)arg1 ;
-(void)setShowsNodeCount:(BOOL)arg1 ;
-(void)setShowsDrawCount:(BOOL)arg1 ;
-(void)setShowsQuadCount:(BOOL)arg1 ;
-(void)set_showsGPUStats:(BOOL)arg1 ;
-(void)set_showsCPUStats:(BOOL)arg1 ;
-(void)setShowsPhysics:(BOOL)arg1 ;
-(void)setShowsFields:(BOOL)arg1 ;
-(void)setIgnoresSiblingOrder:(BOOL)arg1 ;
-(BOOL)ignoresSiblingOrder;
-(BOOL)showsFPS;
-(BOOL)showsNodeCount;
-(BOOL)showsQuadCount;
-(BOOL)showsDrawCount;
-(BOOL)showsPhysics;
-(BOOL)showsFields;
-(BOOL)_showsCPUStats;
-(BOOL)_showsGPUStats;
-(void)_showAllStats;
-(int)_spriteRenderCount;
-(int)_spriteSubmitCount;
-(void)setShouldCullNonVisibleNodes:(BOOL)arg1 ;
-(BOOL)shouldCullNonVisibleNodes;
-(SCD_Struct_SK5)getViewTransform;
-(CGPoint)convertPoint:(CGPoint)arg1 fromScene:(id)arg2 ;
-(void)willRenderContent;
-(id)textureFromNode:(id)arg1 withOptions:(id)arg2 ;
-(id)archiveToFile:(id)arg1 ;
-(float)_getViewContentsScale;
-(void)debugPrint;
-(SKCRenderer*)chooseViewRenderer;
-(id)getRenderOptions;
-(BOOL)disableStencilBuffers;
-(void)onInit;
-(void)_ensureRenderer;
-(void)setUpRenderCallback;
-(void)startRenderCallbacks;
-(void)_renderSynchronouslyForTime:(double)arg1 preRender:(/*^block*/id)arg2 postRender:(/*^block*/id)arg3 ;
-(unsigned long long)_getEffectivePreferredFramesPerSecond;
-(id)captureToFile:(id)arg1 ;
-(SKCNode*)getRootNode;
-(BOOL)hasValidViewFramebuffer;
-(shared_ptr<jet_framebuffer>*)nextFramebuffer;
-(1)getViewport;
-(void)_endFrameStats;
-(void)notifyWillRenderContent;
-(void)_renderSynchronouslyForTime:(double)arg1 preRender:(/*^block*/id)arg2 postRender:(/*^block*/id)arg3 withMTLScheduleHandler:(/*^block*/id)arg4 ;
-(void)_renderToIOSurfaceID:(unsigned)arg1 scaleFactor:(float)arg2 asynchronous:(BOOL)arg3 waitOnFence:(BOOL)arg4 preRender:(/*^block*/id)arg5 postRender:(/*^block*/id)arg6 ;
-(void)runOnce;
-(BOOL)_shouldRenderForTime:(double)arg1 ;
-(void)_vsyncRenderForTime:(double)arg1 preRender:(/*^block*/id)arg2 postRender:(/*^block*/id)arg3 ;
-(void)stopRenderCallbacks;
-(void)renderContent;
-(void)presentScene:(id)arg1 ;
-(void)_reshape;
-(void)setAllowsTransparency:(BOOL)arg1 ;
-(BOOL)allowsTransparency;
-(void)_renderToIOSurfaceID:(unsigned)arg1 scaleFactor:(float)arg2 asynchronous:(BOOL)arg3 preRender:(/*^block*/id)arg4 postRender:(/*^block*/id)arg5 ;
-(void)remakeFramebuffer;
-(void)_renderContent;
-(id)textureFromNode:(id)arg1 crop:(CGRect)arg2 ;
-(void)setDynamicRenderBlock:(/*^block*/id)arg1 ;
-(void)setDisableStencilBuffers:(BOOL)arg1 ;
-(void)renderForTime:(double)arg1 shouldBlock:(BOOL)arg2 ;
-(void)_dispatchRenderToIOSurfaceID:(unsigned)arg1 async:(BOOL)arg2 onQueue:(id)arg3 waitOnFence:(BOOL)arg4 preRender:(/*^block*/id)arg5 postRender:(/*^block*/id)arg6 ;
-(void)overrideMetalCommandQueue:(id)arg1 ;
-(void)set_usesAsyncUpdateQueue:(BOOL)arg1 ;
-(BOOL)_usesAsyncUpdateQueue;
-(BOOL)_renderUpdateEnabled;
-(void)set_renderUpdateEnabled:(BOOL)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toScene:(id)arg2 ;
-(void)remakeFramebuffer:(double)arg1 ;
-(double)alphaValue;
-(void)presentScene:(id)arg1 transition:(id)arg2 ;
-(id)textureFromNode:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 updateQueue:(id)arg2 ;
-(BOOL)isEqualToView:(id)arg1 ;
-(void)writeContentsToPNG:(id)arg1 ;
-(void)renderToIOSurfaceID:(unsigned)arg1 withScaleFactor:(double)arg2 ;
-(void)_setUpdateQueue:(id)arg1 ;
-(void)set_viewScale:(double)arg1 ;
-(CGPoint)_viewTranslation;
-(void)set_viewTranslation:(CGPoint)arg1 ;
-(id)_getPerformanceStats;
-(SKCRenderer*)_layerBackedRenderer;
-(void)set_layerBackedRenderer:(SKCRenderer*)arg1 ;
-(double)physicsDebugStrokeWidth;
-(void)setPhysicsDebugStrokeWidth:(double)arg1 ;
@end

