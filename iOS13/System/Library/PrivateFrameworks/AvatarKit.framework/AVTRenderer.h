/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <SceneKit/SCNRenderer.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>
#import <libobjc.A.dylib/_SCNSceneRendererDelegateSPI.h>

@protocol SCNSceneRendererDelegate;
@class AVTAvatarEnvironment, AVTAvatar, SCNNode, NSLock, AVTFaceTracker, SCNTechnique, AVTARMaskRenderer, NSString;

@interface AVTRenderer : SCNRenderer <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {

	AVTAvatarEnvironment* _environment;
	AVTAvatar* _avatar;
	SCNNode* _avatarNode;
	NSLock* _lock;
	id<SCNSceneRendererDelegate> _fwdDelegate;
	BOOL _pauseSimulation;
	BOOL _arMode;
	BOOL _enableDepthMask;
	AVTFaceTracker* _faceTracker;
	unsigned long long _antialiasingMode;
	SCNTechnique* _arMaskTechnique;
	AVTARMaskRenderer* _arMaskRenderer;
	CVMetalTextureCacheRef _arMaskTextureCache;

}

@property (nonatomic,retain) AVTAvatar * avatar; 
@property (assign,nonatomic) BOOL arMode; 
@property (assign,nonatomic) BOOL pauseSimulation; 
@property (assign,nonatomic) BOOL enableDepthMask; 
@property (assign,nonatomic) unsigned long long avt_antialiasingMode; 
@property (nonatomic,retain) AVTFaceTracker * faceTracker; 
@property (nonatomic,retain) id<MTLTexture> capturedDepth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)renderer;
+(id)rendererWithDevice:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(AVTAvatar *)avatar;
-(void)setAvatar:(AVTAvatar *)arg1 ;
-(void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3 ;
-(void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3 ;
-(id)_renderer:(id)arg1 subdivDataForHash:(id)arg2 ;
-(void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(/*^block*/id)arg3 ;
-(void)renderer:(id)arg1 updateAtTime:(double)arg2 ;
-(void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2 ;
-(void)renderer:(id)arg1 didSimulatePhysicsAtTime:(double)arg2 ;
-(void)renderer:(id)arg1 didApplyConstraintsAtTime:(double)arg2 ;
-(AVTFaceTracker *)faceTracker;
-(void)faceTrackerDidUpdate:(id)arg1 trackingInfo:(id)arg2 ;
-(id<MTLTexture>)capturedDepth;
-(void)setCapturedDepth:(id<MTLTexture>)arg1 ;
-(BOOL)arMode;
-(void)setArMode:(BOOL)arg1 ;
-(void)_updateFocal;
-(void)avatarDidChange;
-(void)setFaceTracker:(AVTFaceTracker *)arg1 ;
-(id)transitionTexture;
-(void)_avtSetup;
-(void)_updateAvatarForARMode;
-(void)setEnableDepthMask:(BOOL)arg1 ;
-(void)_setAvatar:(id)arg1 ;
-(void)__setAvatar:(id)arg1 ;
-(BOOL)enableDepthMask;
-(void)setEnableDepthMask:(BOOL)arg1 withFlippedDepth:(BOOL)arg2 ;
-(BOOL)pauseSimulation;
-(void)setPauseSimulation:(BOOL)arg1 ;
-(unsigned long long)avt_antialiasingMode;
-(void)setAvt_antialiasingMode:(unsigned long long)arg1 ;
-(void)fadePuppetToWhite:(float)arg1 ;
@end

