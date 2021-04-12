/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBSceneManagerInternalObserver.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>

@protocol FBSceneMonitorDelegate;
@class FBScene, NSString, NSMutableSet, FBSSceneClientSettingsDiffInspector, FBSMutableSceneSettings, FBSceneMonitorBehaviors, FBSSceneSettings;

@interface FBSceneMonitor : NSObject <FBSceneManagerInternalObserver, FBSceneObserver, FBSceneLayerManagerObserver> {

	FBScene* _scene;
	NSString* _sceneID;
	NSMutableSet* _externalSceneIDs;
	NSMutableSet* _pairedExternalSceneIDs;
	FBSSceneClientSettingsDiffInspector* _diffInspector;
	FBSMutableSceneSettings* _sceneSettings;
	FBSceneMonitorBehaviors* _givenMonitorBehaviors;
	FBSceneMonitorBehaviors* _delegateMonitorBehaviors;
	FBSceneMonitorBehaviors* _effectiveMonitorBehaviors;
	BOOL _invalidated;
	BOOL _isSynchronizing;
	BOOL _updateSettingsAfterSync;
	BOOL _updateExternalScenesAfterSync;
	id<FBSceneMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) FBScene * scene;                                       //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneID;                               //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic,__weak) id<FBSceneMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBSceneMonitorBehaviors * behaviors;                       //@synthesize givenMonitorBehaviors=_givenMonitorBehaviors - In the implementation block
@property (nonatomic,readonly) FBSSceneSettings * sceneSettings;                      //@synthesize sceneSettings=_sceneSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id<FBSceneMonitorDelegate>)delegate;
-(void)setDelegate:(id<FBSceneMonitorDelegate>)arg1 ;
-(FBScene *)scene;
-(id)initWithScene:(id)arg1 ;
-(FBSceneMonitorBehaviors *)behaviors;
-(BOOL)isPairedWithExternalSceneID:(id)arg1 ;
-(void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(NSString *)sceneID;
-(void)setBehaviors:(FBSceneMonitorBehaviors *)arg1 ;
-(FBSSceneSettings *)sceneSettings;
-(void)_evaluateEffectiveMonitorBehaviors;
-(id)initWithSceneID:(id)arg1 ;
-(id)_initWithSceneManager:(id)arg1 sceneID:(id)arg2 ;
-(void)_updateAllSceneStateIgnoringDelegate;
-(void)_setEffectiveMonitorBehaviors:(id)arg1 ;
-(void)_updateSceneSettings:(BOOL)arg1 ;
-(void)_updateExternalScenes:(BOOL)arg1 ;
-(void)_updateScenePairingState:(BOOL)arg1 ;
-(void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1 ;
-(void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1 ;
-(id)_effectiveBehaviors;
@end

