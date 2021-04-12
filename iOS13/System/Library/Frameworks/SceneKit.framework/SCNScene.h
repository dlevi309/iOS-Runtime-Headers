/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNSceneSource, SCNPhysicsWorld, SCNNode, SCNMaterialProperty, NSMutableDictionary, NSURL, SCNAuthoringEnvironment;

@interface SCNScene : NSObject <NSSecureCoding> {

	C3DSceneRef _scene;
	SCNSceneSource* _sceneSource;
	SCNPhysicsWorld* _physicsWorld;
	SCNNode* _rootNode;
	SCNNode* _layerRootNode[4];
	SCNMaterialProperty* _background;
	SCNMaterialProperty* _environment;
	NSMutableDictionary* _userAttributes;
	double _fogStartDistance;
	double _fogEndDistance;
	double _fogDensityExponent;
	id _fogColor;
	BOOL _wantsScreenSpaceReflection;
	long long _screenSpaceReflectionSampleCount;
	double _screenSpaceReflectionMaxRayDistance;
	double _screenSpaceReflectionStride;
	BOOL _paused;
	NSURL* _sourceURL;
	BOOL _pausedForEditing;
	BOOL _allowsDefaultLightingEnvironmentFallback;
	SCNAuthoringEnvironment* _authoringEnvironment;

}

@property (nonatomic,readonly) SCNNode * rootNode; 
@property (nonatomic,readonly) SCNPhysicsWorld * physicsWorld; 
@property (nonatomic,readonly) SCNMaterialProperty * background; 
@property (nonatomic,readonly) SCNMaterialProperty * lightingEnvironment; 
@property (assign,nonatomic) double fogStartDistance; 
@property (assign,nonatomic) double fogEndDistance; 
@property (assign,nonatomic) double fogDensityExponent; 
@property (nonatomic,retain) id fogColor; 
@property (assign,nonatomic) BOOL wantsScreenSpaceReflection; 
@property (assign,nonatomic) long long screenSpaceReflectionSampleCount; 
@property (assign,nonatomic) double screenSpaceReflectionMaximumDistance; 
@property (assign,nonatomic) double screenSpaceReflectionStride; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
+(BOOL)supportsSecureCoding;
+(id)scene;
+(BOOL)canImportFileExtension:(id)arg1 ;
+(id)sceneWithMDLAsset:(id)arg1 options:(id)arg2 ;
+(id)sceneWithMDLAsset:(id)arg1 ;
+(id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3 ;
+(id)sceneWithData:(id)arg1 options:(id)arg2 ;
+(id)sceneNamed:(id)arg1 ;
+(id)sceneNamed:(id)arg1 options:(id)arg2 ;
+(id)sceneWithURL:(id)arg1 options:(id)arg2 ;
+(id)sceneWithURL:(id)arg1 atIndex:(long long)arg2 options:(id)arg3 ;
+(id)sceneWithData:(id)arg1 atIndex:(long long)arg2 options:(id)arg3 ;
+(id)sceneWithSceneRef:(C3DSceneRef)arg1 ;
+(BOOL)canImportFileUTI:(id)arg1 ;
+(id)supportedFileUTIsForImport;
+(id)supportedFileUTIsForExport;
+(id)_indexPathForNode:(id)arg1 ;
+(SEL)jsConstructor;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)lock;
-(void)unlock;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(SCNNode *)rootNode;
-(BOOL)isPaused;
-(id)root;
-(id)debugQuickLookObject;
-(SCNMaterialProperty *)background;
-(double)startTime;
-(void)setPaused:(BOOL)arg1 ;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)scene;
-(id)_scenes;
-(id)attributeForKey:(id)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(float)playbackSpeed;
-(void)setPlaybackSpeed:(float)arg1 ;
-(void)_setRootNode:(id)arg1 ;
-(SCNVector3)upAxis;
-(void)setUpAxis:(SCNVector3)arg1 ;
-(void)setFrameRate:(double)arg1 ;
-(double)frameRate;
-(void)_resetSceneTimeRange;
-(const void*)__CFObject;
-(SCNPhysicsWorld *)physicsWorld;
-(C3DSceneRef)sceneRef;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)particleSystems;
-(void)removeParticleSystem:(id)arg1 ;
-(id)_physicsWorldCreateIfNeeded:(BOOL)arg1 ;
-(void)_syncObjCModel;
-(id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2 ;
-(void)removeAllParticleSystems;
-(id)initWithSceneRef:(C3DSceneRef)arg1 ;
-(BOOL)writeToURLWithUSDKit:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(/*^block*/id)arg4 ;
-(id)_nodeWithIndexPath:(id)arg1 ;
-(id)initForJavascript:(id)arg1 ;
-(SCNMaterialProperty *)lightingEnvironment;
-(void)set_allowsDefaultLightingEnvironmentFallback:(BOOL)arg1 ;
-(void)_customEncodingOfSCNScene:(id)arg1 ;
-(void)_didEncodeSCNScene:(id)arg1 ;
-(void)_customDecodingOfSCNScene:(id)arg1 ;
-(void)setRootNode:(SCNNode *)arg1 ;
-(void)setFogStartDistance:(double)arg1 ;
-(void)setFogEndDistance:(double)arg1 ;
-(void)setFogDensityExponent:(double)arg1 ;
-(void)setWantsScreenSpaceReflection:(BOOL)arg1 ;
-(void)setScreenSpaceReflectionSampleCount:(long long)arg1 ;
-(void)setScreenSpaceReflectionMaximumDistance:(double)arg1 ;
-(void)setScreenSpaceReflectionStride:(double)arg1 ;
-(void)setFogColor:(id)arg1 ;
-(void)_didDecodeSCNScene:(id)arg1 ;
-(void)_clearSceneRef;
-(void)_setSourceURL:(id)arg1 ;
-(void)setSceneSource:(id)arg1 ;
-(id)sceneSource;
-(void)setRootNode:(id)arg1 forLayer:(int)arg2 ;
-(id)rootNodeForLayer:(int)arg1 ;
-(void)_scaleSceneBy:(double)arg1 ;
-(BOOL)_allowsDefaultLightingEnvironmentFallback;
-(id)fogColor;
-(double)fogEndDistance;
-(double)fogDensityExponent;
-(double)fogStartDistance;
-(BOOL)wantsScreenSpaceReflection;
-(long long)screenSpaceReflectionSampleCount;
-(double)screenSpaceReflectionDepthThreshold;
-(void)setScreenSpaceReflectionDepthThreshold:(double)arg1 ;
-(double)screenSpaceReflectionMaximumDistance;
-(double)screenSpaceReflectionStride;
-(void)_dumpToDisk;
-(void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 ;
-(void)addParticleSystem:(id)arg1 withTransform:(SCNMatrix4)arg2 ;
-(void)setPausedForEditing:(BOOL)arg1 ;
-(BOOL)isPausedForEditing;
-(id)_subnodeFromIndexPath:(id)arg1 ;
-(void)_prettifyForPreview;
-(id)_exportAsMovieOperationWithDestinationURL:(id)arg1 size:(CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void*)arg6 ;
-(BOOL)writeToURL:(id)arg1 options:(id)arg2 ;
-(id)exportAsMovieOperationWithDestinationURL:(id)arg1 size:(CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void*)arg6 ;
-(id)debugQuickLookObjectWithPointOfView:(id)arg1 ;
@end

