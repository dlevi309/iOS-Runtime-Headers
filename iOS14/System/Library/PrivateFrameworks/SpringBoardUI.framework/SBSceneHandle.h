/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <libobjc.A.dylib/FBSceneMonitorDelegate.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSSceneDefinition, FBScene, FBSDisplayIdentity, FBSceneMonitor, NSHashTable, NSMapTable, NSString;

@interface SBSceneHandle : NSObject <FBSceneMonitorDelegate, FBSceneObserver, BSDescriptionProviding> {

	FBSSceneDefinition* _definition;
	FBScene* _scene;
	long long _contentState;
	FBSDisplayIdentity* _displayIdentity;
	BOOL _manuallyControlsLifecycle;
	FBSceneMonitor* _sceneMonitor;
	NSHashTable* _observers;
	NSMapTable* _observersToObserverBehaviors;
	NSHashTable* _actionConsumers;

}

@property (getter=isEffectivelyForeground,nonatomic,readonly) BOOL effectivelyForeground; 
@property (setter=_setSceneMonitor:,getter=_sceneMonitor,nonatomic,retain) FBSceneMonitor * sceneMonitor;                                         //@synthesize sceneMonitor=_sceneMonitor - In the implementation block
@property (getter=_definition,nonatomic,readonly) FBSSceneDefinition * definition;                                                                //@synthesize definition=_definition - In the implementation block
@property (setter=_setDisplayIdentity:,nonatomic,retain) FBSDisplayIdentity * displayIdentity;                                                    //@synthesize displayIdentity=_displayIdentity - In the implementation block
@property (assign,setter=_setManuallyControlsLifecycle:,getter=_manuallyControlsLifecycle,nonatomic) BOOL manuallyControlsLifecycle;              //@synthesize manuallyControlsLifecycle=_manuallyControlsLifecycle - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneIdentifier; 
@property (nonatomic,readonly) FBScene * scene; 
@property (nonatomic,readonly) FBScene * sceneIfExists;                                                                                           //@synthesize scene=_scene - In the implementation block
@property (nonatomic,readonly) long long contentState; 
@property (getter=isContentReady,nonatomic,readonly) BOOL contentReady; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newSceneViewWithReferenceSize:(CGSize)arg1 orientation:(long long)arg2 hostRequester:(id)arg3 ;
-(id)newScenePlaceholderContentContextWithActivationSettings:(id)arg1 ;
-(id)newSceneViewController;
-(BOOL)isEffectivelyForeground;
-(BOOL)isDeviceApplicationSceneHandle;
-(FBScene *)scene;
-(id)succinctDescription;
-(void)_setScene:(id)arg1 ;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(NSString *)sceneIdentifier;
-(void)_didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)contentState;
-(void)_enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_didDestroyScene:(id)arg1 ;
-(FBSDisplayIdentity *)displayIdentity;
-(void)_didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(NSString *)description;
-(void)_didCreateScene:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)_definition;
-(unsigned long long)hash;
-(void)_commonInit;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)_createMonitor;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)sceneMonitor:(id)arg1 sceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2 ;
-(void)sceneMonitor:(id)arg1 sceneClientSettingsDidChangeWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneMonitor:(id)arg1 sceneWasCreated:(id)arg2 ;
-(void)sceneMonitor:(id)arg1 sceneWasDestroyed:(id)arg2 ;
-(FBScene *)sceneIfExists;
-(BOOL)_handleSceneAction:(id)arg1 ;
-(void)_setManuallyControlsLifecycle:(BOOL)arg1 ;
-(void)_noteSceneCreated:(id)arg1 ;
-(void)_noteSceneDestroyed:(id)arg1 ;
-(void)addActionConsumer:(id)arg1 ;
-(void)removeActionConsumer:(id)arg1 ;
-(BOOL)isContentReady;
-(BOOL)isPairedWithExternalSceneWithIdentifier:(id)arg1 ;
-(id)_initWithScene:(id)arg1 displayIdentity:(id)arg2 ;
-(id)_initWithDefinition:(id)arg1 displayIdentity:(id)arg2 ;
-(id)_initWithDefinition:(id)arg1 scene:(id)arg2 displayIdentity:(id)arg3 ;
-(void)_didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg1 ;
-(void)_didUpdateContentState:(long long)arg1 ;
-(void)_setSceneMonitor:(id)arg1 ;
-(void)_setDisplayIdentity:(id)arg1 ;
-(id)_sceneMonitor;
-(BOOL)_manuallyControlsLifecycle;
@end

