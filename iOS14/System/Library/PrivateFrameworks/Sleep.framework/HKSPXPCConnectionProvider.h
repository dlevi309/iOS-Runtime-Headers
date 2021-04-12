/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol HKSPXPCConnectionProviderDelegate;
@class NSXPCConnection, HKSPXPCConnectionInfo, NSMutableDictionary, NSString;

@interface HKSPXPCConnectionProvider : NSObject <BSDescriptionProviding> {

	os_unfair_lock_s _connectionLock;
	os_unfair_lock_s _pendingMessagesLock;
	id<HKSPXPCConnectionProviderDelegate> _delegate;
	NSXPCConnection* _connection;
	HKSPXPCConnectionInfo* _connectionInfo;
	/*^block*/id _connectionProvider;
	NSMutableDictionary* _pendingMessages;

}

@property (nonatomic,readonly) os_unfair_lock_s connectionLock;                                  //@synthesize connectionLock=_connectionLock - In the implementation block
@property (nonatomic,readonly) HKSPXPCConnectionInfo * connectionInfo;                           //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (nonatomic,copy,readonly) id connectionProvider;                                       //@synthesize connectionProvider=_connectionProvider - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s pendingMessagesLock;                             //@synthesize pendingMessagesLock=_pendingMessagesLock - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingMessages;                            //@synthesize pendingMessages=_pendingMessages - In the implementation block
@property (assign,nonatomic,__weak) id<HKSPXPCConnectionProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerWithConnectionInfo:(id)arg1 ;
-(id)succinctDescription;
-(void)sendMessage:(id)arg1 ;
-(id<HKSPXPCConnectionProviderDelegate>)delegate;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)performRemoteBlock:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(id)initWithConnectionInfo:(id)arg1 connectionProvider:(/*^block*/id)arg2 ;
-(void)_addPendingMessage:(id)arg1 ;
-(void)setDelegate:(id<HKSPXPCConnectionProviderDelegate>)arg1 ;
-(NSString *)description;
-(NSXPCConnection *)connection;
-(os_unfair_lock_s)pendingMessagesLock;
-(void)invalidate;
-(void)_didInterruptConnection;
-(void)didReceiveLifecycleNotification;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_retryPendingMessages;
-(NSMutableDictionary *)pendingMessages;
-(id)succinctDescriptionBuilder;
-(id)connectionProvider;
-(HKSPXPCConnectionInfo *)connectionInfo;
-(void)_removePendingMessage:(id)arg1 ;
-(os_unfair_lock_s)connectionLock;
-(id)initWithConnectionInfo:(id)arg1 ;
-(void)_didInvalidateConnection;
-(void)dealloc;
-(void)performRemoteBlock:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 doSynchronously:(BOOL)arg3 ;
@end

