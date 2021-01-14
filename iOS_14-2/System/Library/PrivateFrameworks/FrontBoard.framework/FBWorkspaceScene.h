/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBSSceneHandle.h>
#import <libobjc.A.dylib/FBSSceneAgentProxy.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSceneHost, FBSSceneHostAgent;
@class NSString, FBSSceneSpecification, FBSSceneSettings, FBSSceneClientSettings, NSMutableArray, FBProcess, FBWorkspace, FBSSerialQueue;

@interface FBWorkspaceScene : NSObject <FBSSceneHandle, FBSSceneAgentProxy, BSDescriptionProviding> {

	os_unfair_lock_s _lock;
	id<FBSceneHost> _host;
	NSString* _identifier;
	NSString* _group;
	FBSSceneSpecification* _specification;
	FBSSceneSettings* _lock_settings;
	FBSSceneClientSettings* _lock_clientSettings;
	NSMutableArray* _lock_sceneCreatedBlocks;
	BOOL _lock_sentSceneCreate;
	BOOL _fromRemnant;
	BOOL _lock_invalidated;
	id<FBSSceneHostAgent> _hostAgent;
	NSMutableArray* _agentSessions;
	FBProcess* _process;
	FBWorkspace* _workspace;
	FBSSerialQueue* _workspaceQueue;
	unsigned char _lock_lifecycleState;

}

@property (nonatomic,__weak,readonly) FBWorkspace * parentWorkspace;                    //@synthesize workspace=_workspace - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSceneHost> host;                             //@synthesize host=_host - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneSettings * settings; 
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification;              //@synthesize specification=_specification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)parameters;
-(id)succinctDescription;
-(id<FBSceneHost>)host;
-(void)_workspaceQueue_invalidate;
-(id)hostProcess;
-(id)callOutQueue;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)closeSession:(id)arg1 ;
-(FBSSceneSpecification *)specification;
-(NSString *)debugDescription;
-(id)counterpartAgent;
-(id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2 ;
-(id)sessionForIdentifier:(id)arg1 ;
-(void)agent:(id)arg1 registerMessageHandler:(/*^block*/id)arg2 ;
-(void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(id)initWithParentWorkspace:(id)arg1 host:(id)arg2 ;
-(NSString *)description;
-(void)_workspaceQueue_handleInvalidationWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FBSSceneSettings *)settings;
-(void)invalidate;
-(void)_workspaceQueue_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(id)clientProcess;
-(void)configureFromRemnant:(BOOL)arg1 withSpecification:(id)arg2 settings:(id)arg3 initialClientSettings:(id)arg4 ;
-(void)_workspaceQueue_sendUpdateToClient:(id)arg1 settingsDiff:(id)arg2 transitionContext:(id)arg3 responseEventHandler:(/*^block*/id)arg4 ;
-(void)_workspaceQueue_sendMessageToClient:(/*^block*/id)arg1 ;
-(void)_workspaceQueue_invalidateSceneAgentWithEvent:(id)arg1 ;
-(FBWorkspace *)parentWorkspace;
@end

