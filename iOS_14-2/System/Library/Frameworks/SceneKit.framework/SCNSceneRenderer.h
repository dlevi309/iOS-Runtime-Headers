/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

@class SCNScene, SCNNode, SKScene, MTLRenderPassDescriptor, AVAudioEngine, AVAudioEnvironmentNode;


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
@required
-(SCNScene *)scene;
-(BOOL)isPlaying;
-(id<MTLCommandQueue>)commandQueue;
-(void)setScene:(id)arg1;
-(BOOL)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2;
-(void)setPointOfView:(id)arg1;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id<SCNSceneRendererDelegate>)delegate;
-(SCNVector3*)projectPoint:(SCNVector3)arg1;
-(void)setLoops:(BOOL)arg1;
-(void)setShowsStatistics:(BOOL)arg1;
-(BOOL)isJitteringEnabled;
-(BOOL)loops;
-(void)setDebugOptions:(unsigned long long)arg1;
-(void)setPlaying:(BOOL)arg1;
-(unsigned long long)renderingAPI;
-(MTLRenderPassDescriptor *)currentRenderPassDescriptor;
-(unsigned long long)stencilPixelFormat;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1;
-(void*)context;
-(void)setAudioListener:(id)arg1;
-(CGRect)currentViewport;
-(SCNVector3*)unprojectPoint:(SCNVector3)arg1;
-(unsigned long long)colorPixelFormat;
-(BOOL)isTemporalAntialiasingEnabled;
-(void)setSceneTime:(double)arg1;
-(void)setUsesReverseZ:(BOOL)arg1;
-(id<MTLDevice>)device;
-(unsigned long long)debugOptions;
-(BOOL)showsStatistics;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(void)setDelegate:(id)arg1;
-(AVAudioEngine *)audioEngine;
-(SCNNode *)audioListener;
-(SCNNode *)pointOfView;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(unsigned long long)depthPixelFormat;
-(BOOL)usesReverseZ;
-(SKScene *)overlaySKScene;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1;
-(double)sceneTime;
-(void)setTemporalAntialiasingEnabled:(BOOL)arg1;
-(void)setOverlaySKScene:(id)arg1;
-(BOOL)autoenablesDefaultLighting;
-(BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
-(void)setJitteringEnabled:(BOOL)arg1;

@end

