/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

@class SCNScene, SCNNode, SKScene, AVAudioEngine, AVAudioEnvironmentNode;


@protocol SCNSceneRenderer <NSObject>
@property (nonatomic,retain) SCNScene * scene; 
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
@required
-(id<SCNSceneRendererDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void*)context;
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(SCNScene *)scene;
-(void)setScene:(id)arg1;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1;
-(unsigned long long)stencilPixelFormat;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2;
-(SKScene *)overlaySKScene;
-(BOOL)showsStatistics;
-(unsigned long long)debugOptions;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(void)setDebugOptions:(unsigned long long)arg1;
-(SCNNode *)pointOfView;
-(void)setPointOfView:(id)arg1;
-(unsigned long long)renderingAPI;
-(double)sceneTime;
-(void)setSceneTime:(double)arg1;
-(unsigned long long)colorPixelFormat;
-(BOOL)usesReverseZ;
-(CGRect)currentViewport;
-(void)setUsesReverseZ:(BOOL)arg1;
-(BOOL)isJitteringEnabled;
-(BOOL)isTemporalAntialiasingEnabled;
-(void)setOverlaySKScene:(id)arg1;
-(void)setJitteringEnabled:(BOOL)arg1;
-(BOOL)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1;
-(SCNVector3*)projectPoint:(SCNVector3)arg1;
-(SCNVector3*)unprojectPoint:(SCNVector3)arg1;
-(BOOL)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setTemporalAntialiasingEnabled:(BOOL)arg1;
-(void)setShowsStatistics:(BOOL)arg1;
-(unsigned long long)depthPixelFormat;
-(AVAudioEngine *)audioEngine;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(SCNNode *)audioListener;
-(void)setAudioListener:(id)arg1;

@end

