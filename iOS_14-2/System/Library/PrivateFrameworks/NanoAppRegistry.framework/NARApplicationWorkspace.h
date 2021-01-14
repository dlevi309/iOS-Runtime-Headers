/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSXPCConnection *)connection;
-(void)_connectionInvalidated;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)_loadConnectionIfNeeded;
-(void)getWorkspaceInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)_workspaceServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)getWorkspaceInfoIncludingHiddenApps:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)workspaceInfo:(id*)arg1 ;
@end

