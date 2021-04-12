/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <QuartzCore/CAMetalLayer.h>
#import <libobjc.A.dylib/SCNSceneRenderer.h>
#import <libobjc.A.dylib/SCNTechniqueSupport.h>

@class SCNJitterer, SCNRenderer, SCNScene, SCNDisplayLink, SCNNode, SKScene, MTLRenderPassDescriptor, AVAudioEngine, AVAudioEnvironmentNode, NSString, SCNTechnique;

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
@property (nonatomic,readonly) MTLRenderPassDescriptor * currentRenderPassDescriptor; 
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) SCNTechnique * technique; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_kvoKeysForwardedToRenderer;
-(SCNScene *)scene;
-(BOOL)isPlaying;
-(id<MTLCommandQueue>)commandQueue;
-(id)layer;
-(void)setTechnique:(SCNTechnique *)arg1 ;
-(id)displayLink;
-(void)setScene:(SCNScene *)arg1 ;
-(BOOL)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2 ;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(SCNVector4)_viewport;
-(SCNTechnique *)technique;
-(id)init;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)pointOfCulling;
-(id<SCNSceneRendererDelegate>)delegate;
-(SCNVector3)projectPoint:(SCNVector3)arg1 ;
-(void)setLoops:(BOOL)arg1 ;
-(void)setShowsStatistics:(BOOL)arg1 ;
-(BOOL)isJitteringEnabled;
-(BOOL)loops;
-(void)pause;
-(void)_jitterRedisplay;
-(void)setNeedsDisplay;
-(void)setDebugOptions:(unsigned long long)arg1 ;
-(void)set_showsAuthoringEnvironment:(BOOL)arg1 ;
-(void)_cancelJitterRedisplay;
-(void)_drawAtTime:(double)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(BOOL)syncTimeWithCoreAnimation;
-(id)initWithLayer:(id)arg1 ;
-(void)setSyncTimeWithCoreAnimation:(BOOL)arg1 ;
-(unsigned long long)renderingAPI;
-(MTLRenderPassDescriptor *)currentRenderPassDescriptor;
-(void)play;
-(unsigned long long)stencilPixelFormat;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1 ;
-(void*)context;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)setRendersIntoMaterial:(BOOL)arg1 ;
-(void)projectPoints:(SCNVector3*)arg1 count:(unsigned long long)arg2 ;
-(void)setAudioListener:(SCNNode *)arg1 ;
-(void)stop;
-(void)_sceneDidUpdate:(id)arg1 ;
-(BOOL)_isGLLayerBacked;
-(CGRect)currentViewport;
-(SCNVector3)unprojectPoint:(SCNVector3)arg1 ;
-(unsigned long long)colorPixelFormat;
-(BOOL)isTemporalAntialiasingEnabled;
-(void)setSceneTime:(double)arg1 ;
-(void)setUsesReverseZ:(BOOL)arg1 ;
-(id<MTLDevice>)device;
-(unsigned long long)debugOptions;
-(BOOL)showsStatistics;
-(void)_systemTimeAnimationStarted:(id)arg1 ;
-(id)renderer;
-(void)commonInit;
-(unsigned long long)antialiasingMode;
-(BOOL)_canJitter;
-(void)play:(id)arg1 ;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(void)setRenderer:(id)arg1 ;
-(id)rendererOptions;
-(void)setDelegate:(id<SCNSceneRendererDelegate>)arg1 ;
-(AVAudioEngine *)audioEngine;
-(SCNNode *)audioListener;
-(SCNNode *)pointOfView;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)resumeDisplayLink;
-(double)currentTime;
-(NSString *)description;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(BOOL)scn_inLiveResize;
-(unsigned long long)depthPixelFormat;
-(long long)preferredFramesPerSecond;
-(BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
-(id)hitTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(BOOL)usesReverseZ;
-(void)pauseDisplayLink;
-(SKScene *)overlaySKScene;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1 ;
-(double)sceneTime;
-(void)stop:(id)arg1 ;
-(void)setTemporalAntialiasingEnabled:(BOOL)arg1 ;
-(id)scn_backingLayer;
-(void)setOverlaySKScene:(SKScene *)arg1 ;
-(void)setPointOfCulling:(id)arg1 ;
-(BOOL)rendersIntoMaterial;
-(void)SCN_displayLinkCallback:(double)arg1 ;
-(void)pause:(id)arg1 ;
-(BOOL)autoenablesDefaultLighting;
-(void)display;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(id)_authoringEnvironment;
-(BOOL)_showsAuthoringEnvironment;
-(BOOL)_supportsJitteringSyncRedraw;
-(BOOL)canDrawConcurrently;
-(id)contentLayer;
-(BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 ;
-(void)dealloc;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
-(void)setJitteringEnabled:(BOOL)arg1 ;
@end

