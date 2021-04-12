/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(id)_newRemoteConnection;
-(id<ConnectionProtocol>)remoteObjectProxy;
-(id)init;
-(id)_remoteConnection;
-(NSXPCConnection *)underlyingRemoteConnection;
-(void)setUnderlyingRemoteConnection:(NSXPCConnection *)arg1 ;
@end

