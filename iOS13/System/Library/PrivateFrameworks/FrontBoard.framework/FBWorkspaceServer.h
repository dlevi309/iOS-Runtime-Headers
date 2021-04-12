/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBWorkspaceServerConfiguring.h>

@protocol FBWorkspaceServerDelegate, OS_dispatch_queue;
@class NSObject, BSServiceConnectionEndpointInjector, BSServiceConnection, NSMutableArray, NSMutableDictionary;

@interface FBWorkspaceServer : NSObject <FBWorkspaceServerConfiguring> {

	id<FBWorkspaceServerDelegate> _weak_delegate;
	NSObject*<OS_dispatch_queue> _queue;
	BSServiceConnectionEndpointInjector* _workspaceServiceInjector;
	BSServiceConnection* _connection;
	BOOL _invalidated;
	NSMutableArray* _waitForConnectBlocks;
	NSMutableDictionary* _sceneIDToSceneHandlerMap;

}

@property (nonatomic,__weak,readonly) id<FBWorkspaceServerDelegate> delegate;              //@synthesize weak_delegate=_weak_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(id)arg1 ;
-(void)invalidate;
-(id)_queue;
-(id<FBWorkspaceServerDelegate>)delegate;
-(void)setDelegate:(id<FBWorkspaceServerDelegate>)arg1 ;
-(id)initWithConfigurator:(/*^block*/id)arg1 ;
-(oneway void)requestSceneWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)sceneID:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(oneway void)sceneID:(id)arg1 didReceiveActions:(id)arg2 ;
-(oneway void)sceneID:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(void)queue_enqueueConnectBlock:(/*^block*/id)arg1 ;
-(void)registerSceneEventHandler:(id)arg1 forSceneID:(id)arg2 ;
-(void)unregisterSceneEventHandler:(id)arg1 forSceneID:(id)arg2 ;
-(id)_handlerForSceneID:(id)arg1 ;
-(void)_queue_setConnection:(id)arg1 ;
@end

