/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>
#import <libobjc.A.dylib/_SCNSceneRendererDelegateSPI.h>

@protocol OS_dispatch_queue;
@class AVTAvatar, NSObject, SCNScene, SCNRenderer, AVTAvatarEnvironment, AVTStickerConfiguration, NSArray, NSString;

@interface AVTStickerGenerator : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {

	BOOL _async;
	AVTAvatar* _avatar;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	SCNScene* _scene;
	SCNRenderer* _renderer;
	AVTAvatarEnvironment* _environment;
	AVTStickerConfiguration* _previousConfiguration;
	NSArray* _overridenMorphers;
	NSArray* _overridenPresets;
	NSArray* _appliedShaderModifiers;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                     //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;                 //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) SCNScene * scene;                                             //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) SCNRenderer * renderer;                                       //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) AVTAvatarEnvironment * environment;                           //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) AVTStickerConfiguration * previousConfiguration;              //@synthesize previousConfiguration=_previousConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * overridenMorphers;                                  //@synthesize overridenMorphers=_overridenMorphers - In the implementation block
@property (nonatomic,retain) NSArray * overridenPresets;                                   //@synthesize overridenPresets=_overridenPresets - In the implementation block
@property (nonatomic,retain) NSArray * appliedShaderModifiers;                             //@synthesize appliedShaderModifiers=_appliedShaderModifiers - In the implementation block
@property (nonatomic,retain) AVTAvatar * avatar;                                           //@synthesize avatar=_avatar - In the implementation block
@property (assign,nonatomic) BOOL async;                                                   //@synthesize async=_async - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)removeConfiguration:(id)arg1 fromScene:(id)arg2 withAvatar:(id)arg3 appliedShaderModifier:(id)arg4 ;
+(void)applyConfiguration:(id)arg1 toScene:(id)arg2 withAvatar:(id)arg3 defaultCamera:(id)arg4 forExport:(BOOL)arg5 async:(BOOL)arg6 workQueue:(id)arg7 callbackQueue:(id)arg8 completion:(/*^block*/id)arg9 ;
+(id)addCamera:(id)arg1 inScene:(id)arg2 ;
+(void)addProps:(id)arg1 toScene:(id)arg2 forAvatar:(id)arg3 withCamera:(id)arg4 forExport:(BOOL)arg5 async:(BOOL)arg6 workQueue:(id)arg7 callbackQueue:(id)arg8 completion:(/*^block*/id)arg9 ;
+(id)createPropsParentNodeIfNeededInScene:(id)arg1 ;
+(CGRect)clippingRectForBaseSize:(CGSize)arg1 ;
+(void)removeConfiguration:(id)arg1 fromScene:(id)arg2 withAvatar:(id)arg3 ;
+(void)applyConfiguration:(id)arg1 toScene:(id)arg2 withAvatar:(id)arg3 defaultCamera:(id)arg4 forExport:(BOOL)arg5 completion:(/*^block*/id)arg6 async:(BOOL)arg7 ;
+(id)findNodesNamed:(id)arg1 inAvatar:(id)arg2 ;
-(AVTAvatarEnvironment *)environment;
-(void)setEnvironment:(AVTAvatarEnvironment *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(SCNScene *)scene;
-(void)setScene:(SCNScene *)arg1 ;
-(AVTStickerConfiguration *)previousConfiguration;
-(void)setPreviousConfiguration:(AVTStickerConfiguration *)arg1 ;
-(AVTAvatar *)avatar;
-(void)setAvatar:(AVTAvatar *)arg1 ;
-(SCNRenderer *)renderer;
-(void)setRenderer:(SCNRenderer *)arg1 ;
-(BOOL)async;
-(void)setAsync:(BOOL)arg1 ;
-(id)initWithAvatar:(id)arg1 ;
-(void)stickerImageWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_renderer:(id)arg1 subdivDataForHash:(id)arg2 ;
-(void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(/*^block*/id)arg3 ;
-(void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2 ;
-(void)stickerImageWithConfiguration:(id)arg1 correctClipping:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setupAvatar:(id)arg1 ;
-(void)clearPreviousConfigurationBeforeNewConfiguration:(id)arg1 ;
-(void)setupRendererWithAvatar:(id)arg1 ;
-(NSArray *)appliedShaderModifiers;
-(NSArray *)overridenMorphers;
-(NSArray *)overridenPresets;
-(void)setOverridenPresets:(NSArray *)arg1 ;
-(void)setOverridenMorphers:(NSArray *)arg1 ;
-(void)setAppliedShaderModifiers:(NSArray *)arg1 ;
-(id)snapshotAtTime:(double)arg1 withRenderer:(id)arg2 configuration:(id)arg3 correctClipping:(BOOL)arg4 ;
-(void)rendererWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

