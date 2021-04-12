/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <QuartzCore/CAMetalLayer.h>
#import <libobjc.A.dylib/SCNSceneRenderer.h>
#import <libobjc.A.dylib/SCNTechniqueSupport.h>

@class SCNJitterer, SCNRenderer, SCNScene, SCNDisplayLink, NSString, SCNNode, SKScene, AVAudioEngine, AVAudioEnvironmentNode, SCNTechnique;

@interface SCNMetalLayer : CAMetalLayer <SCNSceneRenderer, SCNTechniqueSupport> {

	SCNJitterer* _jitterer;
	SCNRenderer* _renderer;
	SCNScene* _scene;
	SCNDisplayLink* _displayLink;
	long long _preferredFramePerSeconds;
	double _lastUpdate;
	double _lastRenderedTime;
	BOOL _drawForJittering;
	BOOL _rendersIntoMaterial;
	BOOL _syncTimeWithCoreAnimation;

}

@property (nonatomic,retain) SCNScene * scene; 
@property (assign,nonatomic) unsigned long long antialiasingMode; 
@property (assign,nonatomic) BOOL syncTimeWithCoreAnimation;                                                     //@synthesize syncTimeWithCoreAnimation=_syncTimeWithCoreAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double sceneTime; 
@property (assign,nonatomic,__weak) id<SCNSceneRendererDelegate> delegate; 
@property (getter=isPlaying) BOOL playing; 
@property (assign,nonatomic) BOOL loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) BOOL autoenablesDefaultLighting; 
@property (assign,getter=isJitteringEnabled,nonatomic) BOOL jitteringEnabled; 
@property (assign,getter=isTemporalAntialiasingEnabled,nonatomic) BOOL temporalAntialiasingEnabled; 
@property (assign,nonatomic) BOOL showsStatistics; 
@property (assign,nonatomic) unsigned long long debugOptions; 
@property (nonatomic,retain) SKScene * overlaySKScene; 
@property (nonatomic,readonly) unsigned long long renderingAPI; 
@property (nonatomic,readonly) void* context; 
@property (nonatomic,readonly) id<MTLRenderCommandEncoder> currentRenderCommandEncoder; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long colorPixelFormat; 
@property (nonatomic,readonly) unsigned long long depthPixelFormat; 
@property (nonatomic,readonly) unsigned long long stencilPixelFormat; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) AVAudioEngine * audioEngine; 
@property (nonatomic,readonly) AVAudioEnvironmentNode * audioEnvironmentNode; 
@property (nonatomic,retain) SCNNode * audioListener; 
@property (nonatomic,readonly) CGRect currentViewport; 
@property (assign,nonatomic) BOOL usesReverseZ; 
@property (nonatomic,copy) SCNTechnique * technique; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)_kvoKeysForwardedToRenderer;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<SCNSceneRendererDelegate>)delegate;
-(void)setDelegate:(id<SCNSceneRendererDelegate>)arg1 ;
-(void)pause;
-(void)stop;
-(void*)context;
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(void)commonInit;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(id)layer;
-(void)play;
-(SCNScene *)scene;
-(void)setNeedsDisplay;
-(void)setScene:(SCNScene *)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(id)displayLink;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(double)currentTime;
-(BOOL)isPlaying;
-(void)display;
-(id)contentLayer;
-(void)stop:(id)arg1 ;
-(long long)preferredFramesPerSecond;
-(BOOL)canDrawConcurrently;
-(void)setPlaying:(BOOL)arg1 ;
-(void)play:(id)arg1 ;
-(void)pause:(id)arg1 ;
-(id)renderer;
-(void)setRenderer:(id)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(unsigned long long)stencilPixelFormat;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1 ;
-(BOOL)_canJitter;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(id)_authoringEnvironment;
-(SKScene *)overlaySKScene;
-(BOOL)showsStatistics;
-(unsigned long long)debugOptions;
-(id)currentRenderPassDescriptor;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(void)setDebugOptions:(unsigned long long)arg1 ;
-(BOOL)_showsAuthoringEnvironment;
-(void)SCN_displayLinkCallback:(double)arg1 ;
-(SCNNode *)pointOfView;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(void)setTechnique:(SCNTechnique *)arg1 ;
-(SCNTechnique *)technique;
-(id)hitTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(SCNVector4)_viewport;
-(unsigned long long)renderingAPI;
-(double)sceneTime;
-(void)setSceneTime:(double)arg1 ;
-(unsigned long long)antialiasingMode;
-(id)scn_backingLayer;
-(void)_sceneDidUpdate:(id)arg1 ;
-(unsigned long long)colorPixelFormat;
-(void)set_showsAuthoringEnvironment:(BOOL)arg1 ;
-(BOOL)usesReverseZ;
-(CGRect)currentViewport;
-(void)_drawAtTime:(double)arg1 ;
-(void)setUsesReverseZ:(BOOL)arg1 ;
-(BOOL)isJitteringEnabled;
-(BOOL)isTemporalAntialiasingEnabled;
-(void)setOverlaySKScene:(SKScene *)arg1 ;
-(void)setJitteringEnabled:(BOOL)arg1 ;
-(BOOL)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1 ;
-(void)_jitterRedisplay;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 ;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1 ;
-(SCNVector3)projectPoint:(SCNVector3)arg1 ;
-(SCNVector3)unprojectPoint:(SCNVector3)arg1 ;
-(BOOL)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2 ;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setTemporalAntialiasingEnabled:(BOOL)arg1 ;
-(void)setShowsStatistics:(BOOL)arg1 ;
-(unsigned long long)depthPixelFormat;
-(AVAudioEngine *)audioEngine;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(SCNNode *)audioListener;
-(void)setAudioListener:(SCNNode *)arg1 ;
-(void)setPointOfCulling:(id)arg1 ;
-(id)pointOfCulling;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
-(id)rendererOptions;
-(BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
-(void)pauseDisplayLink;
-(void)resumeDisplayLink;
-(BOOL)rendersIntoMaterial;
-(void)setRendersIntoMaterial:(BOOL)arg1 ;
-(void)projectPoints:(SCNVector3*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_isGLLayerBacked;
-(void)_systemTimeAnimationStarted:(id)arg1 ;
-(BOOL)scn_inLiveResize;
-(void)_cancelJitterRedisplay;
-(BOOL)_supportsJitteringSyncRedraw;
-(BOOL)syncTimeWithCoreAnimation;
-(void)setSyncTimeWithCoreAnimation:(BOOL)arg1 ;
@end

