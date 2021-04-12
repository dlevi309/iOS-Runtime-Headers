/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSXPCConnection, NSObject, NSMutableArray, NSString, NSMutableSet;

@interface WAClient : NSObject {

	NSMutableDictionary* _interestedMessageIdentifiers;
	NSMutableDictionary* _configuredMessageIdentifiers;
	unsigned char _daemonConnectionValid;
	unsigned char _blockDaemonConnection;
	NSXPCConnection* _conn;
	NSMutableDictionary* _configChangeDelegatesPerGroupType;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_dispatch_queue> _recoveryQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSObject*<OS_dispatch_queue> _queryableQueue;
	NSMutableArray* _queuedInvocations;
	NSMutableDictionary* _registeredQueryableHandlerBlocks;
	double _connectionRecoveryStartTime;
	/*^block*/id _recoveryTickBlock;
	NSString* _tokenForThisClient;
	NSString* _identifierForThisClient;
	NSMutableSet* _registeredGroupTypes;

}

@property (nonatomic,retain) NSXPCConnection * conn;                                               //@synthesize conn=_conn - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * configChangeDelegatesPerGroupType;              //@synthesize configChangeDelegatesPerGroupType=_configChangeDelegatesPerGroupType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> replyQueue;                              //@synthesize replyQueue=_replyQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recoveryQueue;                           //@synthesize recoveryQueue=_recoveryQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                           //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queryableQueue;                          //@synthesize queryableQueue=_queryableQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedInvocations;                                   //@synthesize queuedInvocations=_queuedInvocations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredQueryableHandlerBlocks;               //@synthesize registeredQueryableHandlerBlocks=_registeredQueryableHandlerBlocks - In the implementation block
@property (assign,nonatomic) double connectionRecoveryStartTime;                                   //@synthesize connectionRecoveryStartTime=_connectionRecoveryStartTime - In the implementation block
@property (assign,nonatomic) unsigned char daemonConnectionValid;                                  //@synthesize daemonConnectionValid=_daemonConnectionValid - In the implementation block
@property (assign,nonatomic) unsigned char blockDaemonConnection;                                  //@synthesize blockDaemonConnection=_blockDaemonConnection - In the implementation block
@property (nonatomic,copy) id recoveryTickBlock;                                                   //@synthesize recoveryTickBlock=_recoveryTickBlock - In the implementation block
@property (nonatomic,retain) NSString * tokenForThisClient;                                        //@synthesize tokenForThisClient=_tokenForThisClient - In the implementation block
@property (nonatomic,retain) NSString * identifierForThisClient;                                   //@synthesize identifierForThisClient=_identifierForThisClient - In the implementation block
@property (nonatomic,retain) NSMutableSet * registeredGroupTypes;                                  //@synthesize registeredGroupTypes=_registeredGroupTypes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * configuredMessageIdentifiers; 
@property (nonatomic,retain) NSMutableDictionary * interestedMessageIdentifiers; 
+(id)sharedClient;
+(id)sharedClientWithIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_initPrivate;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setReplyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)replyQueue;
-(void)setQueuedInvocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)queuedInvocations;
-(NSXPCConnection *)conn;
-(void)setConn:(NSXPCConnection *)arg1 ;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerMessageGroup:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)getMessageForUUID:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)getMessagesModelForGroupType:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)ingestMessage:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)triggerQueryForNWActivity:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 waMessage:(id)arg2 andReply:(/*^block*/id)arg3 ;
-(void)killDaemonAndReply:(/*^block*/id)arg1 ;
-(void)clearMessageStoreAndReply:(/*^block*/id)arg1 ;
-(void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)trigger11axPerfStudyAndReply:(/*^block*/id)arg1 ;
-(void)setIdentifierForThisClient:(NSString *)arg1 ;
-(void)_registerMessageGroup:(long long)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(NSMutableSet *)registeredGroupTypes;
-(unsigned char)daemonConnectionValid;
-(/*^block*/id)_getConnectionIssueHandlerBlock;
-(void)_dequeueInvocation:(id)arg1 ;
-(void)_getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 queuedInvocation:(id)arg4 ;
-(void)_reregister;
-(void)_getMessageForUUID:(id)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)_ingestMessage:(id)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)_submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 queuedInvocation:(id)arg4 ;
-(void)_registerForQueryableMessageWithIdentifierDict:(id)arg1 groupType:(long long)arg2 withHandlerBlock:(/*^block*/id)arg3 andReply:(/*^block*/id)arg4 queuedInvocation:(id)arg5 ;
-(NSMutableDictionary *)registeredQueryableHandlerBlocks;
-(void)_triggerQueryForNWActivity:(long long)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)_triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 waMessage:(id)arg2 andReply:(/*^block*/id)arg3 queuedInvocation:(id)arg4 ;
-(void)_killDaemonAndReply:(/*^block*/id)arg1 queuedInvocation:(id)arg2 ;
-(void)setDaemonConnectionValid:(unsigned char)arg1 ;
-(void)_clearMessageStoreAndReply:(/*^block*/id)arg1 queuedInvocation:(id)arg2 ;
-(void)_getMessagesModelForGroupType:(long long)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queryableQueue;
-(NSMutableDictionary *)configuredMessageIdentifiers;
-(NSMutableDictionary *)interestedMessageIdentifiers;
-(NSMutableDictionary *)configChangeDelegatesPerGroupType;
-(NSString *)tokenForThisClient;
-(NSString *)identifierForThisClient;
-(void)setTokenForThisClient:(NSString *)arg1 ;
-(unsigned char)blockDaemonConnection;
-(void)_removeAllQueuedInvocations;
-(void)_wakeUpNotificationForThisClientReceived:(id)arg1 ;
-(void)_startConnectionRecovery;
-(void)_replyAllWithTimeoutErrorAndRemove;
-(NSObject*<OS_dispatch_queue>)recoveryQueue;
-(double)connectionRecoveryStartTime;
-(void)setConnectionRecoveryStartTime:(double)arg1 ;
-(id)recoveryTickBlock;
-(void)_connectionRecoveryTick;
-(void)setRecoveryTickBlock:(id)arg1 ;
-(void)_connectionRecovered;
-(void)_connectionTimedOut;
-(void)_establishDaemonConnection;
-(void)_setConfigChangeDelegateForGroupType:(long long)arg1 queuedInvocation:(id)arg2 ;
-(void)_trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(/*^block*/id)arg2 queuedInvocation:(id)arg3 ;
-(void)_trigger11axPerfStudyAndReply:(/*^block*/id)arg1 queuedInvocation:(id)arg2 ;
-(void)setBlockDaemonConnection:(unsigned char)arg1 ;
-(void)registerForQueryableMessageWithIdentifierDict:(id)arg1 groupType:(long long)arg2 withHandlerBlock:(/*^block*/id)arg3 andReply:(/*^block*/id)arg4 ;
-(void)submitQueriedMetricWithIdentifierDict:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)configuredMessagesDidChange:(id)arg1 andInterestedMessageIDs:(id)arg2 forGroupType:(long long)arg3 ;
-(void)setInterestedMessageIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)setConfiguredMessageIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)setConfigChangedDelegate:(id)arg1 forGroupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)fakeDaemonConnectionDead:(unsigned char)arg1 ;
-(void)setConfigChangeDelegatesPerGroupType:(NSMutableDictionary *)arg1 ;
-(void)setRecoveryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setQueryableQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRegisteredQueryableHandlerBlocks:(NSMutableDictionary *)arg1 ;
-(void)setRegisteredGroupTypes:(NSMutableSet *)arg1 ;
@end

