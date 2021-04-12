/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface APConnectionNotifier : NSObject {

	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSXPCConnection* _underlyingRemoteConnection;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * underlyingRemoteConnection;                //@synthesize underlyingRemoteConnection=_underlyingRemoteConnection - In the implementation block
@property (nonatomic,readonly) id<ConnectionProtocol> remoteObjectProxy; 
+(id)sharedNotifier;
-(id)init;
-(id<ConnectionProtocol>)remoteObjectProxy;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(id)_remoteConnection;
-(NSXPCConnection *)underlyingRemoteConnection;
-(id)_newRemoteConnection;
-(void)setUnderlyingRemoteConnection:(NSXPCConnection *)arg1 ;
@end

