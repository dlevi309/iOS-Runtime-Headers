/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSString, NSMutableDictionary, NSMutableArray, NSSet;

@interface PLClientLogger : NSObject {

	BOOL _clientDebug;
	BOOL _talkToPowerlogHelper;
	BOOL _batchedTimerInFlight;
	BOOL _forceBatching;
	BOOL _batchDropMessages;
	int _batchedDropMessageCount;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _batchFlushQueue;
	NSString* _processName;
	NSMutableDictionary* _permissionCache;
	NSMutableDictionary* _pendingTaskCache;
	NSMutableArray* _batchedTaskCache;
	NSMutableDictionary* _eventFilterSaved;
	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;
	NSObject*<OS_dispatch_queue> _xpcConnectionHelperQueue;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_xpc_object> _xpcConnectionHelper;
	NSSet* _batchingClientWhitelist;
	NSObject*<OS_dispatch_queue> _adaptivePermissionWorkQueue;

}

@property (assign) BOOL clientDebug;                                                      //@synthesize clientDebug=_clientDebug - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                                //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> batchFlushQueue;                          //@synthesize batchFlushQueue=_batchFlushQueue - In the implementation block
@property (retain) NSString * processName;                                                //@synthesize processName=_processName - In the implementation block
@property (retain) NSMutableDictionary * permissionCache;                                 //@synthesize permissionCache=_permissionCache - In the implementation block
@property (retain) NSMutableDictionary * pendingTaskCache;                                //@synthesize pendingTaskCache=_pendingTaskCache - In the implementation block
@property (retain) NSMutableArray * batchedTaskCache;                                     //@synthesize batchedTaskCache=_batchedTaskCache - In the implementation block
@property (retain) NSMutableDictionary * eventFilterSaved;                                //@synthesize eventFilterSaved=_eventFilterSaved - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> xpcConnectionQueue;                       //@synthesize xpcConnectionQueue=_xpcConnectionQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> xpcConnectionHelperQueue;                 //@synthesize xpcConnectionHelperQueue=_xpcConnectionHelperQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;                      //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnectionHelper;                //@synthesize xpcConnectionHelper=_xpcConnectionHelper - In the implementation block
@property (assign) BOOL talkToPowerlogHelper;                                             //@synthesize talkToPowerlogHelper=_talkToPowerlogHelper - In the implementation block
@property (assign) BOOL batchedTimerInFlight;                                             //@synthesize batchedTimerInFlight=_batchedTimerInFlight - In the implementation block
@property (assign) BOOL forceBatching;                                                    //@synthesize forceBatching=_forceBatching - In the implementation block
@property (assign) BOOL batchDropMessages;                                                //@synthesize batchDropMessages=_batchDropMessages - In the implementation block
@property (readonly) NSSet * batchingClientWhitelist;                                     //@synthesize batchingClientWhitelist=_batchingClientWhitelist - In the implementation block
@property (assign) int batchedDropMessageCount;                                           //@synthesize batchedDropMessageCount=_batchedDropMessageCount - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> adaptivePermissionWorkQueue;              //@synthesize adaptivePermissionWorkQueue=_adaptivePermissionWorkQueue - In the implementation block
+(id)sharedInstance;
+(BOOL)allowMessageOnDevice;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(NSSet *)batchingClientWhitelist;
-(int)shouldLogNowForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3 withFilterInterval:(double)arg4 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_dispatch_queue>)xpcConnectionHelperQueue;
-(id)init;
-(void)setXpcConnectionHelper:(NSObject*<OS_xpc_object>)arg1 ;
-(int)batchSizeForClientID:(short)arg1 ;
-(void)setBatchedTaskCache:(NSMutableArray *)arg1 ;
-(NSString *)processName;
-(void)setBatchDropMessages:(BOOL)arg1 ;
-(void)setBatchedTimerInFlight:(BOOL)arg1 ;
-(void)setAdaptivePermissionWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(short)cachedPermissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3 ;
-(void)powerlogStateChanged;
-(id)xpcConnectionWithClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)batchFlushQueue;
-(void)setTalkToPowerlogHelper:(BOOL)arg1 ;
-(NSMutableArray *)batchedTaskCache;
-(BOOL)forceBatching;
-(void)addToPendingTaskCacheForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3 withPayload:(id)arg4 ;
-(void)logLaterForClientID:(short)arg1 withKey:(id)arg2 withFilterInterval:(double)arg3 ;
-(BOOL)clientDebug;
-(NSMutableDictionary *)permissionCache;
-(id)pendingTasksForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3 ;
-(void)setXpcConnectionHelperQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)xpcSendMessage:(id)arg1 withClientID:(short)arg2 withKey:(id)arg3 withPayload:(id)arg4 ;
-(void)logWithCurrentDateForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3 ;
-(void)setBatchedDropMessageCount:(int)arg1 ;
-(void)permissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addToBatchedTaskCacheForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3 withPayload:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)adaptivePermissionWorkQueue;
-(void)setPermissionCache:(NSMutableDictionary *)arg1 ;
-(id)buildMessageForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3 ;
-(void)logStateCaches;
-(id)queryForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3 ;
-(id)xpcSendMessageWithReply:(id)arg1 withClientID:(short)arg2 withKey:(id)arg3 withPayload:(id)arg4 ;
-(BOOL)batchDropMessages;
-(NSObject*<OS_dispatch_queue>)xpcConnectionQueue;
-(void)setEventFilterSaved:(NSMutableDictionary *)arg1 ;
-(id)getWorkQueueForClientID:(short)arg1 ;
-(void)setBatchFlushQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)talkToPowerlogHelper;
-(void)setClientDebug:(BOOL)arg1 ;
-(BOOL)batchedTimerInFlight;
-(NSMutableDictionary *)pendingTaskCache;
-(void)logForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3 ;
-(NSMutableDictionary *)eventFilterSaved;
-(short)blockedPermissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3 withTimeout:(unsigned long long)arg4 ;
-(void)xpcSendMessageWithRateLimitingforClient:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3 ;
-(void)setCachePermission:(short)arg1 ForClientID:(short)arg2 withKey:(id)arg3 withType:(id)arg4 ;
-(void)setForceBatching:(BOOL)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnectionHelper;
-(int)batchedDropMessageCount;
-(void)setPendingTaskCache:(NSMutableDictionary *)arg1 ;
-(void)batchTasksCacheFlush;
-(void)setXpcConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

