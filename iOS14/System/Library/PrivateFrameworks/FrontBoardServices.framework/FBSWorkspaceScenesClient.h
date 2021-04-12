/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/FBSSceneUpdater.h>
#import <libobjc.A.dylib/FBSWorkspaceScenesSource.h>

@protocol FBSWorkspaceDelegate, OS_dispatch_queue;
@class FBSWorkspace, NSObject, FBSSerialQueue, BSServiceConnection, BSServiceConnectionEndpoint, NSMutableDictionary, NSHashTable, NSMutableArray, NSString;

@interface FBSWorkspaceScenesClient : NSObject <FBSSceneUpdater, FBSWorkspaceScenesSource> {

	FBSWorkspace* _workspace;
	id<FBSWorkspaceDelegate> _workspaceDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	FBSSerialQueue* _callOutQueue;
	BSServiceConnection* _connection;
	BSServiceConnectionEndpoint* _endpoint;
	NSMutableDictionary* _scenesByIdentifier;
	NSMutableDictionary* _clientSettingsByIdentifier;
	NSHashTable* _reconnectingScenes;
	NSMutableArray* _pendedSendBlocks;
	os_unfair_lock_s _reportingLock;
	NSMutableDictionary* _reportingLock_scenesByIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<NSCopying> identifier; 
+(id)serviceQuality;
-(id)scenes;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(oneway void)sceneID:(id)arg1 updateWithSettingsDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(oneway void)reconnectWithSceneID:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)hostProcess;
-(id)callOutQueue;
-(id)init;
-(oneway void)sendActions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_reportedSceneWithIdentifier:(id)arg1 ;
-(oneway void)sceneID:(id)arg1 destroyWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)sceneID:(id)arg1 sendActions:(id)arg2 ;
-(id)endpoint;
-(id)_remoteTarget;
-(void)activate;
-(void)requestSceneWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)sceneID:(id)arg1 sendMessage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sceneWithIdentifier:(id)arg1 ;
-(void)_queue_invalidateScene:(id)arg1 withTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)createWithSceneID:(id)arg1 groupID:(id)arg2 parameters:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_configureReceivedActions:(id)arg1 forScene:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(id)initWithEndpoint:(id)arg1 queue:(id)arg2 calloutQueue:(id)arg3 workspace:(id)arg4 ;
-(NSObject*<NSCopying>)identifier;
-(id)_queue_connectedSceneWithIdentifier:(id)arg1 ;
-(void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(void)_queue_updateScene:(id)arg1 withSettings:(id)arg2 diff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(oneway void)willTerminateWithTransitionContext:(id)arg1 ;
@end

