/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/FBSSceneSnapshotRequestDelegate.h>
#import <libobjc.A.dylib/FBSSceneHandle.h>
#import <libobjc.A.dylib/FBSSceneAgentProxy.h>
#import <libobjc.A.dylib/FBSSceneUpdaterDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSSceneClientAgent, FBSSceneUpdater, FBSSceneDelegate;
@class FBSSerialQueue, NSString, FBSSceneSpecification, NSMutableArray, FBSSceneSettings, FBSSceneClientSettings, NSOrderedSet, FBSSceneIdentityToken;

@interface FBSScene : NSObject <FBSSceneSnapshotRequestDelegate, FBSSceneHandle, FBSSceneAgentProxy, FBSSceneUpdaterDelegate, BSDescriptionProviding> {

	FBSSerialQueue* _callOutQueue;
	NSString* _identifier;
	NSString* _group;
	FBSSceneSpecification* _specification;
	BOOL _hasAgent;
	id<FBSSceneClientAgent> _callOutQueue_agent;
	NSMutableArray* _callOutQueue_agentSessions;
	/*^block*/id _callOutQueue_agentMessageHandler;
	BOOL _callOutQueue_agentInvalidateCalled;
	os_unfair_lock_s _lock;
	id<FBSSceneUpdater> _lock_updater;
	FBSSceneSettings* _lock_settings;
	FBSSceneClientSettings* _lock_clientSettings;
	NSOrderedSet* _lock_layers;
	id<FBSSceneDelegate> _lock_delegate;
	FBSSceneIdentityToken* _identityToken;

}

@property (nonatomic,copy,readonly) NSString * _groupID;                             //@synthesize group=_group - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) FBSSceneIdentityToken * identityToken; 
@property (nonatomic,readonly) FBSSceneSpecification * specification; 
@property (assign,nonatomic,__weak) id<FBSSceneDelegate> delegate; 
@property (nonatomic,readonly) FBSSceneSettings * settings; 
@property (nonatomic,readonly) FBSSceneClientSettings * clientSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_canHaveAgent;
-(void)updateUIClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(void)updateUIClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(id)uiSettings;
-(id)uiClientSettings;
-(BOOL)uiCanReceiveDeviceOrientationEvents;
-(BOOL)isPersistable;
-(FBSSceneClientSettings *)clientSettings;
-(id)parameters;
-(id)succinctDescription;
-(id)hostProcess;
-(id)callOutQueue;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
-(BOOL)_hasAgent;
-(id)init;
-(id<FBSSceneDelegate>)delegate;
-(id)layers;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)closeSession:(id)arg1 ;
-(FBSSceneSpecification *)specification;
-(void)_calloutQueue_comsumeLock_updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)attachSceneContext:(id)arg1 ;
-(void)detachSceneContext:(id)arg1 ;
-(id)snapshotRequest;
-(void)_callOutQueue_invalidateAgent;
-(id)counterpartAgent;
-(id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2 ;
-(id)sessionForIdentifier:(id)arg1 ;
-(void)agent:(id)arg1 registerMessageHandler:(/*^block*/id)arg2 ;
-(void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)updater:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(id)_initWithUpdater:(id)arg1 sceneID:(id)arg2 groupID:(id)arg3 specification:(id)arg4 settings:(id)arg5 initialClientSettings:(id)arg6 ;
-(void)_callOutQueue_invalidate;
-(void)_callOutQueue_agent_didCreateWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_callOutQueue_agent_willDestroyWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)snapshotRequestAllowSnapshot:(id)arg1 ;
-(void)setDelegate:(id<FBSSceneDelegate>)arg1 ;
-(NSString *)description;
-(NSString *)_groupID;
-(BOOL)snapshotRequest:(id)arg1 performWithContext:(id)arg2 ;
-(void)detachContext:(id)arg1 ;
-(FBSSceneSettings *)settings;
-(void)sendActions:(id)arg1 ;
-(FBSSceneIdentityToken *)identityToken;
-(void)attachLayer:(id)arg1 ;
-(void)detachLayer:(id)arg1 ;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(id)fbsDisplay;
-(id)display;
-(BOOL)invalidateSnapshotWithContext:(id)arg1 ;
-(void)attachContext:(id)arg1 ;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)updateClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)contexts;
-(id)clientProcess;
@end

