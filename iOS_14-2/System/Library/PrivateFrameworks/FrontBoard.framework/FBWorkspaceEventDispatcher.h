/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@protocol FBWorkspaceEventDispatcherTarget;
#import <FrontBoard/FrontBoard-Structs.h>
@class FBWorkspaceConnectionsStateStore, NSMutableDictionary, FBMutableWorkspaceConnectionsState;

@interface FBWorkspaceEventDispatcher : NSObject {

	FBWorkspaceConnectionsStateStore* _store;
	id<FBWorkspaceEventDispatcherTarget> _target;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _lock_workspaces;
	NSMutableDictionary* _lock_restartAssertions;
	FBMutableWorkspaceConnectionsState* _lock_mutableState;

}
+(id)sharedInstance;
-(id)init;
-(id)registerWorkspaceWithProcessHandle:(id)arg1 ;
-(id)_initWithConnectionStore:(id)arg1 ;
-(void)registerTarget:(id)arg1 ;
-(void)_mainThread_dispatchHandshakeFromWorkspace:(id)arg1 toTarget:(id)arg2 ;
-(void)noteHandshakeForWorkspaceRegistration:(id)arg1 withRemnants:(id)arg2 ;
@end

