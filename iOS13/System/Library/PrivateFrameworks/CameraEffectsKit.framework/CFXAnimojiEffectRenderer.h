/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>

@protocol OS_dispatch_queue, CFXAnimojiTrackingLossDelegate;
@class NSObject, AVTRenderer, AVTAvatarStore, NSString, NSLock;

@interface CFXAnimojiEffectRenderer : NSObject <SCNSceneRendererDelegate> {

	NSObject*<OS_dispatch_queue> _puppetLoadingQ;
	NSObject*<OS_dispatch_queue> _puppetRenderingQ;
	BOOL _logged_render_failed;
	BOOL _asynchronouslyLoadNewPuppets;
	BOOL _allowAntialiasing;
	id<CFXAnimojiTrackingLossDelegate> _trackingLossDelegate;
	AVTRenderer* _renderer;
	AVTAvatarStore* _avatarStore;
	NSString* _currentAvatarIdentifier;
	NSLock* _rendererLock;
	CVMetalTextureCacheRef _metalTextureCache;
	CVMetalTextureCacheRef _metalDepthTextureCache;
	CVPixelBufferPoolRef _inputBufferPool;
	double _systemTimeForAVTRenderer;
	CGSize _workingSize;

}

@property (nonatomic,retain) AVTRenderer * renderer;                                                      //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) AVTAvatarStore * avatarStore;                                                //@synthesize avatarStore=_avatarStore - In the implementation block
@property (nonatomic,retain) NSString * currentAvatarIdentifier;                                          //@synthesize currentAvatarIdentifier=_currentAvatarIdentifier - In the implementation block
@property (nonatomic,retain) NSLock * rendererLock;                                                       //@synthesize rendererLock=_rendererLock - In the implementation block
@property (assign,nonatomic) CVMetalTextureCacheRef metalTextureCache;                                    //@synthesize metalTextureCache=_metalTextureCache - In the implementation block
@property (assign,nonatomic) CVMetalTextureCacheRef metalDepthTextureCache;                               //@synthesize metalDepthTextureCache=_metalDepthTextureCache - In the implementation block
@property (assign,nonatomic) CGSize workingSize;                                                          //@synthesize workingSize=_workingSize - In the implementation block
@property (assign,nonatomic) CVPixelBufferPoolRef inputBufferPool;                                        //@synthesize inputBufferPool=_inputBufferPool - In the implementation block
@property (assign,nonatomic) double systemTimeForAVTRenderer;                                             //@synthesize systemTimeForAVTRenderer=_systemTimeForAVTRenderer - In the implementation block
@property (assign,nonatomic) BOOL asynchronouslyLoadNewPuppets;                                           //@synthesize asynchronouslyLoadNewPuppets=_asynchronouslyLoadNewPuppets - In the implementation block
@property (assign,nonatomic,__weak) id<CFXAnimojiTrackingLossDelegate> trackingLossDelegate;              //@synthesize trackingLossDelegate=_trackingLossDelegate - In the implementation block
@property (assign,nonatomic) BOOL allowAntialiasing;                                                      //@synthesize allowAntialiasing=_allowAntialiasing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setupAVTMetalShaderCache;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)clear;
-(void)flush;
-(AVTRenderer *)renderer;
-(void)setRenderer:(AVTRenderer *)arg1 ;
-(AVTAvatarStore *)avatarStore;
-(void)setAvatarStore:(AVTAvatarStore *)arg1 ;
-(id)renderWithInputs:(id)arg1 time:(SCD_Struct_JT6)arg2 metadata:(id)arg3 ;
-(void)setAllowAntialiasing:(BOOL)arg1 ;
-(void)setWorkingSize:(CGSize)arg1 ;
-(CGSize)workingSize;
-(CVMetalTextureCacheRef)metalTextureCache;
-(void)setupInputBufferPoolForSize:(CGSize)arg1 ;
-(CVPixelBufferPoolRef)inputBufferPool;
-(void)setInputBufferPool:(CVPixelBufferPoolRef)arg1 ;
-(void)setMetalTextureCache:(CVMetalTextureCacheRef)arg1 ;
-(void)setTrackingLossDelegate:(id<CFXAnimojiTrackingLossDelegate>)arg1 ;
-(void)setAsynchronouslyLoadNewPuppets:(BOOL)arg1 ;
-(CVBufferRef)newPixelBufferRenderedFromARFrame:(id)arg1 withEffect:(id)arg2 depthTexture:(id)arg3 pauseSimulationPhysicsAndDepth:(BOOL)arg4 captureOrientation:(long long)arg5 interfaceOrientation:(long long)arg6 ;
-(NSLock *)rendererLock;
-(void)setCurrentAvatarIdentifier:(NSString *)arg1 ;
-(void)clearRenderer_renderLocked;
-(BOOL)inputBufferIsPortraitAspect:(CGSize)arg1 ;
-(CVBufferRef)newPixelBufferRenderedFromARFrame:(id)arg1 withEffect:(id)arg2 captureOrientation:(long long)arg3 interfaceOrientation:(long long)arg4 ;
-(NSString *)currentAvatarIdentifier;
-(BOOL)asynchronouslyLoadNewPuppets;
-(void)asyncLoadNewPuppet:(id)arg1 currentPuppet:(id)arg2 captureOrientation:(long long)arg3 interfaceOrientation:(long long)arg4 primeFrame:(id)arg5 ;
-(id)_createNewRendererForPuppet:(id)arg1 ;
-(BOOL)CFX_getRenderer:(id*)arg1 forAnimojiEffect:(id)arg2 primeFrame:(id)arg3 captureOrientation:(long long)arg4 interfaceOrientation:(long long)arg5 ;
-(BOOL)CFX_setupPuppetRender:(id)arg1 forFrame:(id)arg2 captureOrientation:(long long)arg3 interfaceOrientation:(long long)arg4 isInitialSetup:(BOOL)arg5 ;
-(void)renderAnimoji:(id)arg1 withPresentationTime:(SCD_Struct_JT6)arg2 depthTexture:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(double)CFX_focalLengthForFrame:(id)arg1 workingSize:(CGSize)arg2 interfaceOrientation:(long long)arg3 ;
-(id<CFXAnimojiTrackingLossDelegate>)trackingLossDelegate;
-(id)CFX_depthDataToTexture:(id)arg1 ;
-(void)renderFrame:(id)arg1 withEffect:(id)arg2 depthTexture:(id)arg3 pauseSimulationPhysicsAndDepth:(BOOL)arg4 captureOrientation:(long long)arg5 interfaceOrientation:(long long)arg6 completionBlock:(/*^block*/id)arg7 ;
-(BOOL)testCurrentPuppetisEqualToPuppet:(id)arg1 ;
-(void)updateCurrentRenderer:(id)arg1 puppetName:(id)arg2 ;
-(void)setSystemTimeForAVTRenderer:(double)arg1 ;
-(BOOL)allowAntialiasing;
-(double)systemTimeForAVTRenderer;
-(void)setRendererLock:(NSLock *)arg1 ;
-(CVMetalTextureCacheRef)metalDepthTextureCache;
-(void)setMetalDepthTextureCache:(CVMetalTextureCacheRef)arg1 ;
@end

