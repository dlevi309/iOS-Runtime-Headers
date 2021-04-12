/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBWorkspaceServerSceneEventHandler.h>
#import <libobjc.A.dylib/FBSSceneHandle.h>
#import <libobjc.A.dylib/FBSSceneAgentProxy.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSceneClient.h>

@protocol FBSceneHost, OS_dispatch_queue, FBSSceneHostAgent;
@class FBWorkspace, NSObject, NSString, FBSSceneSpecification, FBSSceneSettings, FBSSceneClientSettings, NSMutableArray, FBSSerialQueue, FBProcess;

@interface FBWorkspaceScene : NSObject <FBWorkspaceServerSceneEventHandler, FBSSceneHandle, FBSSceneAgentProxy, BSDescriptionProviding, FBSceneClient> {

	id<FBSceneHost> _host;
	FBWorkspace* _workspace;
	NSObject*<OS_dispatch_queue> _workspaceQueue;
	NSString* _identifier;
	FBSSceneSpecification* _specification;
	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;
	NSMutableArray* _workspaceQueue_initializationCompletedBlocks;
	unsigned char _workspaceQueue_creationState;
	BOOL _workspaceQueue_invalidated;
	id<FBSSceneHostAgent> _hostAgent;
	FBSSerialQueue* _agentQueue;
	/*^block*/id _agentMessageHandler;
	unsigned long long _agentEventSequenceNumber;
	NSMutableArray* _agentOutstandingEventSequence;
	NSMutableArray* _agentSessions;
	FBProcess* _process;

}

@property (getter=_workspaceQueue_handledInitialSettingsDiff,nonatomic,readonly) BOOL handledInitialSettingsDiff; 
@property (setter=_workspaceQueue_setSceneSettings:,getter=_workspaceQueue_sceneSettings,nonatomic,copy) FBSSceneSettings * sceneSettings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,__weak,readonly) FBWorkspace * parentWorkspace;                                                                                    //@synthesize workspace=_workspace - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSceneHost> host;                                                                                             //@synthesize host=_host - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                                                                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneSettings * settings; 
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification;                                                                              //@synthesize specification=_specification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)debugDescription;
-(id<FBSceneHost>)host;
-(NSString *)identifier;
-(id)parameters;
-(FBSSceneSettings *)settings;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)hostProcess;
-(FBSSceneSpecification *)specification;
-(id)clientProcess;
-(id)callOutQueue;
-(id)counterpartAgent;
-(id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2 ;
-(id)sessionForIdentifier:(id)arg1 ;
-(void)closeSession:(id)arg1 ;
-(void)agent:(id)arg1 registerMessageHandler:(/*^block*/id)arg2 ;
-(void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(void)queue_invalidate;
-(id)initWithParentWorkspace:(id)arg1 host:(id)arg2 ;
-(void)queue_configureWithInitialParameters:(id)arg1 ;
-(void)_workspaceQueue_addInitializationCompletedBlockToWorkspaceQueue:(/*^block*/id)arg1 ;
-(void)_workspaceQueue_invalidate;
-(void)_workspaceQueue_invalidateSceneAgentWithEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FBWorkspace *)parentWorkspace;
-(id)_workspaceQueue;
-(id)_workspaceQueue_sceneSettings;
-(void)_workspaceQueue_setSceneSettings:(id)arg1 ;
-(void)_workspaceQueue_sendSettingsDiff:(id)arg1 transitionContext:(id)arg2 responseEventHandler:(/*^block*/id)arg3 ;
-(void)_workspaceQueue_sendDestroyWithTransitionContext:(id)arg1 responseEventHandler:(/*^block*/id)arg2 ;
-(void)_workspaceQueue_dispatchClientBlockIfNecessary:(/*^block*/id)arg1 success:(BOOL)arg2 ;
-(void)_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleInvalidationWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sceneDidUpdateClientSettings:(id)arg1 transitionContext:(id)arg2 ;
-(void)sceneDidReceiveActions:(id)arg1 ;
-(void)sceneDidReceiveMessage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)host:(id)arg1 didReceiveActions:(id)arg2 ;
-(BOOL)_workspaceQueue_handledInitialSettingsDiff;
-(id)_workspaceQueue_process;
-(void)_dispatchBlockAfterProcessLaunch:(/*^block*/id)arg1 ;
@end

