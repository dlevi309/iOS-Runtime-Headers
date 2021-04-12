/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKServiceProxy.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/GKClientProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, GKDaemonProxyNetworkActivityIndicatorDelegate, GKDaemonProxyDataUpdateDelegate;
@class NSObject, NSDictionary, NSXPCConnection, NSHashTable, NSString;

@interface GKDaemonProxy : GKServiceProxy <NSXPCConnectionDelegate, GKClientProtocol> {

	int _hostPID;
	NSObject*<OS_dispatch_queue> _invocationQueue;
	NSObject*<OS_dispatch_semaphore> _concurrentRequestSemaphore;
	NSDictionary* _interfaceLookup;
	NSXPCConnection* _connection;
	id<GKDaemonProxyNetworkActivityIndicatorDelegate> _networkActivityIndicatorDelegate;
	id<GKDaemonProxyDataUpdateDelegate> _dataUpdateDelegate;
	NSHashTable* _dataUpdateDelegates;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> invocationQueue;                                                           //@synthesize invocationQueue=_invocationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> concurrentRequestSemaphore;                                            //@synthesize concurrentRequestSemaphore=_concurrentRequestSemaphore - In the implementation block
@property (nonatomic,retain) NSDictionary * interfaceLookup;                                                                         //@synthesize interfaceLookup=_interfaceLookup - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int hostPID;                                                                                            //@synthesize hostPID=_hostPID - In the implementation block
@property (nonatomic,retain) NSHashTable * dataUpdateDelegates;                                                                      //@synthesize dataUpdateDelegates=_dataUpdateDelegates - In the implementation block
@property (assign,nonatomic,__weak) id<GKDaemonProxyDataUpdateDelegate> dataUpdateDelegate;                                          //@synthesize dataUpdateDelegate=_dataUpdateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<GKDaemonProxyNetworkActivityIndicatorDelegate> networkActivityIndicatorDelegate;              //@synthesize networkActivityIndicatorDelegate=_networkActivityIndicatorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)daemonProxy;
+(id)proxyForPlayer:(id)arg1 ;
+(void)removeProxyForPlayer:(id)arg1 ;
+(id)proxiesForPlayer;
-(oneway void)challengeReceived:(id)arg1 ;
-(id)accountName;
-(void)loadRemoteImageDataForClientForURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)setTestGame:(id)arg1 ;
-(void)setInterfaceLookup:(NSDictionary *)arg1 ;
-(oneway void)completedChallengeSelected:(id)arg1 ;
-(int)hostPID;
-(oneway void)beginNetworkActivity;
-(oneway void)requestSandboxExtension:(/*^block*/id)arg1 ;
-(NSDictionary *)interfaceLookup;
-(id)init;
-(oneway void)acceptInviteWithNotification:(id)arg1 ;
-(oneway void)declineInviteWithNotification:(id)arg1 ;
-(oneway void)getAccountNameWithHandler:(/*^block*/id)arg1 ;
-(oneway void)respondedToNearbyInvite:(id)arg1 ;
-(oneway void)didDisconnectFromParticipantWithID:(id)arg1 ;
-(id<GKDaemonProxyNetworkActivityIndicatorDelegate>)networkActivityIndicatorDelegate;
-(oneway void)didReceiveData:(id)arg1 reliably:(BOOL)arg2 forRecipients:(id)arg3 fromSender:(id)arg4 ;
-(oneway void)endNetworkActivity;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(oneway void)setLogBits:(int)arg1 ;
-(id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1 ;
-(void)setHostPID:(int)arg1 ;
-(oneway void)resetNetworkActivity;
-(void)addDataUpdateDelegate:(id)arg1 ;
-(oneway void)relayPushNotification:(id)arg1 ;
-(void)setConcurrentRequestSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_queue>)invocationQueue;
-(oneway void)receivedChallengeSelected:(id)arg1 ;
-(oneway void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)removeDataUpdateDelegate:(id)arg1 ;
-(oneway void)setPreferencesValues:(id)arg1 ;
-(oneway void)cancelGameInvite:(id)arg1 ;
-(NSXPCConnection *)connection;
-(oneway void)challengeCompleted:(id)arg1 ;
-(id)authenticatedPlayerID;
-(void)resetServiceLookup;
-(void)setDataUpdateDelegate:(id<GKDaemonProxyDataUpdateDelegate>)arg1 ;
-(void)addInterface:(id)arg1 toLookup:(id)arg2 ;
-(oneway void)session:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3 ;
-(void)_resetServiceLookup;
-(NSObject*<OS_dispatch_semaphore>)concurrentRequestSemaphore;
-(void)setInvocationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(oneway void)session:(id)arg1 player:(id)arg2 didSaveData:(id)arg3 ;
-(id)getGamedFiredUp;
-(oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2 ;
-(oneway void)acceptMultiplayerGameInvite;
-(oneway void)achievementSelected:(id)arg1 ;
-(oneway void)session:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4 ;
-(oneway void)session:(id)arg1 addedPlayer:(id)arg2 ;
-(oneway void)fetchTurnBasedData;
-(BOOL)hasAuthenticatedAccount;
-(oneway void)localPlayerAcceptedCustomTournamentInvite;
-(id)replyQueueForRequestSelector:(SEL)arg1 ;
-(oneway void)session:(id)arg1 removedPlayer:(id)arg2 ;
-(oneway void)authenticatedPlayersDidChange:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)scoreSelected:(id)arg1 ;
-(oneway void)friendRequestSelected:(id)arg1 ;
-(void)setDataUpdateDelegates:(NSHashTable *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSHashTable *)dataUpdateDelegates;
-(void)setNetworkActivityIndicatorDelegate:(id<GKDaemonProxyNetworkActivityIndicatorDelegate>)arg1 ;
-(oneway void)didConnectToParticipantWithID:(id)arg1 ;
-(oneway void)getAuthenticatedPlayerIDWithHandler:(/*^block*/id)arg1 ;
-(void)buildInterfaceLookup;
-(id<GKDaemonProxyDataUpdateDelegate>)dataUpdateDelegate;
-(oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(id)localizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2 ;
-(oneway void)session:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3 ;
-(void)dispatchCompletedChallenge:(id)arg1 ;
-(id)authenticatedPlayerInfo;
-(void)resetLoginCancelCount;
-(oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2 ;
@end

