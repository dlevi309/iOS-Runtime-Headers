/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/FBSceneManagerObserver.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol UIExternalScenePairingObserverDelegate;
@class FBScene, FBSceneManager, FBSSceneIdentityToken, NSString, NSMutableSet, FBSSceneClientSettingsDiffInspector;

@interface UIExternalScenePairingObserver : NSObject <FBSceneManagerObserver, FBSceneObserver, FBSceneLayerManagerObserver, BSInvalidatable> {

	FBScene* _scene;
	id<UIExternalScenePairingObserverDelegate> _delegate;
	FBSceneManager* _sceneManager;
	FBSSceneIdentityToken* _sceneIdentityToken;
	NSString* _sceneID;
	NSMutableSet* _trackingExternalSceneIDs;
	NSMutableSet* _pairedExternalSceneIDs;
	FBSSceneClientSettingsDiffInspector* _clientSettingsDiffInspector;
	BOOL _invalidated;

}

@property (setter=_setSceneManager:,nonatomic,retain) FBSceneManager * _sceneManager;                 //@synthesize sceneManager=_sceneManager - In the implementation block
@property (nonatomic,__weak,readonly) FBScene * scene;                                                //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic,__weak) id<UIExternalScenePairingObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sceneLayerManagerDidUpdateLayers:(id)arg1 ;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(FBScene *)scene;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(id)init;
-(id<UIExternalScenePairingObserverDelegate>)delegate;
-(void)setDelegate:(id<UIExternalScenePairingObserverDelegate>)arg1 ;
-(NSString *)description;
-(BOOL)isPairedWithExternalSceneID:(id)arg1 ;
-(void)invalidate;
-(id)initWithScene:(id)arg1 delegate:(id)arg2 ;
-(FBSceneManager *)_sceneManager;
-(void)_updateScenePairingState;
-(void)_updateExternalScenes;
-(id)_initWithSceneManager:(id)arg1 scene:(id)arg2 delegate:(id)arg3 ;
-(void)_setSceneManager:(id)arg1 ;
-(void)dealloc;
@end

