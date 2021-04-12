/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/WCXPCManagerClientProtocol.h>
#import <libobjc.A.dylib/WCXPCManagerDaemonProtocol.h>

@protocol WCXPCManagerDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface WCXPCManager : NSObject <NSXPCConnectionDelegate, WCXPCManagerClientProtocol, WCXPCManagerDaemonProtocol> {

	BOOL _connectionInvalidated;
	BOOL _reconnectFailed;
	int _listenerResumedToken;
	NSXPCConnection* _connection;
	NSObject*<WCXPCManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	unsigned long long _reconnectRetryCount;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign) int listenerResumedToken;                              //@synthesize listenerResumedToken=_listenerResumedToken - In the implementation block
@property (assign) BOOL connectionInvalidated;                            //@synthesize connectionInvalidated=_connectionInvalidated - In the implementation block
@property (assign) BOOL reconnectFailed;                                  //@synthesize reconnectFailed=_reconnectFailed - In the implementation block
@property (assign) unsigned long long reconnectRetryCount;                //@synthesize reconnectRetryCount=_reconnectRetryCount - In the implementation block
@property (readonly) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (__weak) NSObject*<WCXPCManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedManager;
+(id)clientInterface;
+(id)daemonInterface;
-(id)init;
-(NSObject*<WCXPCManagerDelegate>)delegate;
-(void)setDelegate:(NSObject*<WCXPCManagerDelegate>)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(NSXPCConnection *)connection;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)handleRequest:(id)arg1 ;
-(BOOL)connectionInvalidated;
-(void)setupConnection;
-(int)listenerResumedToken;
-(void)setListenerResumedToken:(int)arg1 ;
-(void)invalidateConnection;
-(void)handleResponse:(id)arg1 ;
-(void)sessionReadyForInitialStateForClientPairingID:(id)arg1 supportsActiveDeviceSwitch:(BOOL)arg2 withErrorHandler:(/*^block*/id)arg3 ;
-(void)updateApplicationContext:(id)arg1 clientPairingID:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)transferFile:(id)arg1 sandboxToken:(id)arg2 clientPairingID:(id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)cancelSendWithIdentifier:(id)arg1 ;
-(void)transferUserInfo:(id)arg1 withURL:(id)arg2 clientPairingID:(id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)acknowledgeFileIndexWithIdentifier:(id)arg1 clientPairingID:(id)arg2 ;
-(void)acknowledgeFileResultIndexWithIdentifier:(id)arg1 clientPairingID:(id)arg2 ;
-(void)acknowledgeUserInfoIndexWithIdentifier:(id)arg1 clientPairingID:(id)arg2 ;
-(void)acknowledgeUserInfoResultIndexWithIdentifier:(id)arg1 clientPairingID:(id)arg2 ;
-(void)handleApplicationContextWithPairingID:(id)arg1 ;
-(void)handleFileResultWithPairingID:(id)arg1 ;
-(void)handleIncomingFileWithPairingID:(id)arg1 ;
-(void)handleUserInfoResultWithPairingID:(id)arg1 ;
-(void)handleIncomingUserInfoWithPairingID:(id)arg1 ;
-(void)handleActiveDeviceSwitchStarted;
-(void)handleSessionStateChanged:(id)arg1 ;
-(void)handleMessageSendingAllowed;
-(void)sendMessage:(id)arg1 clientPairingID:(id)arg2 acceptanceHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)cancelAllOutstandingMessages;
-(void)sendMessage:(id)arg1 clientPairingID:(id)arg2 acceptanceHandler:(/*^block*/id)arg3 ;
-(void)setReconnectRetryCount:(unsigned long long)arg1 ;
-(void)onqueue_retryConnectIfNecessary;
-(void)handleInterruptedConnection;
-(void)onqueue_reconnect;
-(BOOL)reconnectFailed;
-(unsigned long long)reconnectRetryCount;
-(void)setReconnectFailed:(BOOL)arg1 ;
-(void)setConnectionInvalidated:(BOOL)arg1 ;
@end

