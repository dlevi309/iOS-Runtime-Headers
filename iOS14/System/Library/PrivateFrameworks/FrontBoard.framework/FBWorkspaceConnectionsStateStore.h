/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, FBWorkspaceConnectionsState;

@interface FBWorkspaceConnectionsStateStore : NSObject {

	NSString* _path1;
	NSString* _path2;
	NSObject*<OS_dispatch_queue> _queue;
	FBWorkspaceConnectionsState* _queue_state;
	long long _queue_lastBuffer;
	long long _queue_nextWriteFailure;
	BOOL _queue_writeFailedOnce;

}

@property (nonatomic,readonly) long long _lastUsedBuffer; 
@property (nonatomic,copy) FBWorkspaceConnectionsState * state; 
+(id)_loadStateFromPath:(id)arg1 outGeneration:(out BOOL*)arg2 outExisted:(out BOOL*)arg3 ;
+(BOOL)_storeState:(id)arg1 toPath:(id)arg2 withGeneration:(BOOL)arg3 injectedFailure:(inout long long*)arg4 ;
+(void)_unlinkShmPath:(id)arg1 graceful:(BOOL)arg2 ;
+(void)_unlinkAllForIdentifier:(id)arg1 ;
-(void)_setFailureModeForNextWrite:(long long)arg1 ;
-(id)init;
-(id)_initWithIdentifier:(id)arg1 ;
-(long long)_lastUsedBuffer;
-(void)setState:(FBWorkspaceConnectionsState *)arg1 ;
-(FBWorkspaceConnectionsState *)state;
@end

