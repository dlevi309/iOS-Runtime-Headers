/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface NARApplicationWorkspace : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_connectionInvalidated;
-(void)getWorkspaceInfoIncludingHiddenApps:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadConnectionIfNeeded;
-(void)getWorkspaceInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)_workspaceServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)workspaceInfo:(id*)arg1 ;
@end

