/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <PDSAgent/PDSRequestQueueDelegate.h>
#import <libobjc.A.dylib/IDSPushHandlerDelegate.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>
#import <PDSAgent/PDSEntryStoreDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, PDSBag, CUTDeferredTaskQueue, IDSPushHandler, PDSRequestQueue, IMTimer, NSString;

@interface PDSCoordinator : NSObject <PDSRequestQueueDelegate, IDSPushHandlerDelegate, IMSystemMonitorListener, PDSEntryStoreDelegate> {

	BOOL _requestPending;
	BOOL _disabled;
	BOOL _tokenChanged;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _pendingRequestDate;
	PDSBag* _serverBag;
	CUTDeferredTaskQueue* _processDeferredTaskQueue;
	/*^block*/id _kvStoreBlock;
	/*^block*/id _entryStoreBlock;
	IDSPushHandler* _pushHandler;
	/*^block*/id _pushTokenBlock;
	PDSRequestQueue* _requestQueue;
	IMTimer* _heartbeatTimer;
	long long _bagLoadRetries;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * pendingRequestDate;                                  //@synthesize pendingRequestDate=_pendingRequestDate - In the implementation block
@property (nonatomic,retain) PDSBag * serverBag;                                           //@synthesize serverBag=_serverBag - In the implementation block
@property (nonatomic,retain) CUTDeferredTaskQueue * processDeferredTaskQueue;              //@synthesize processDeferredTaskQueue=_processDeferredTaskQueue - In the implementation block
@property (nonatomic,copy) id kvStoreBlock;                                                //@synthesize kvStoreBlock=_kvStoreBlock - In the implementation block
@property (nonatomic,copy) id entryStoreBlock;                                             //@synthesize entryStoreBlock=_entryStoreBlock - In the implementation block
@property (nonatomic,retain) IDSPushHandler * pushHandler;                                 //@synthesize pushHandler=_pushHandler - In the implementation block
@property (nonatomic,copy) id pushTokenBlock;                                              //@synthesize pushTokenBlock=_pushTokenBlock - In the implementation block
@property (nonatomic,retain) PDSRequestQueue * requestQueue;                               //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) IMTimer * heartbeatTimer;                                     //@synthesize heartbeatTimer=_heartbeatTimer - In the implementation block
@property (assign,nonatomic) BOOL requestPending;                                          //@synthesize requestPending=_requestPending - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL tokenChanged;                                            //@synthesize tokenChanged=_tokenChanged - In the implementation block
@property (assign,nonatomic) long long bagLoadRetries;                                     //@synthesize bagLoadRetries=_bagLoadRetries - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisabled:(BOOL)arg1 ;
-(id)_nextCheckpointTime;
-(BOOL)requestPending;
-(id)entryStoreBlock;
-(long long)bagLoadRetries;
-(void)setPushHandler:(IDSPushHandler *)arg1 ;
-(PDSRequestQueue *)requestQueue;
-(double)_coalescePeriodFromBag;
-(void)_processEntryStore;
-(long long)_ttlGracePeriodFromBag;
-(id)initWithQueue:(id)arg1 serverBag:(id)arg2 requestQueue:(id)arg3 kvStoreBlock:(/*^block*/id)arg4 entryStoreBlock:(/*^block*/id)arg5 pushTokenBlock:(/*^block*/id)arg6 systemMonitor:(id)arg7 ;
-(void)_markSandboxPushToken:(id)arg1 ;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)_comparePushTokensWithEntryStore:(id)arg1 ;
-(BOOL)_needsToHeartbeat;
-(BOOL)_valuesDefinedAsNumbersInBagForKeys:(id)arg1 ;
-(void)_scheduleHeartbeatWithTTL:(double)arg1 ;
-(void)_scheduleHeartbeatWithCheckpointTime:(id)arg1 ;
-(BOOL)_allRequiredBagTTLValuesPresent;
-(void)setPushTokenBlock:(id)arg1 ;
-(void)_markPushToken:(id)arg1 ;
-(BOOL)_requestMatchesPreviousRequest:(id)arg1 ;
-(void)setKvStoreBlock:(id)arg1 ;
-(BOOL)_lastSandboxPushTokenDiffersFrom:(id)arg1 ;
-(id)kvStoreBlock;
-(void)setTokenChanged:(BOOL)arg1 ;
-(double)_coalesceMaxPeriodFromBag;
-(long long)ttlForRequest:(id)arg1 ;
-(void)registerIfNeeded;
-(CUTDeferredTaskQueue *)processDeferredTaskQueue;
-(void)_markLastRequest:(id)arg1 ;
-(void)setRequestQueue:(PDSRequestQueue *)arg1 ;
-(IDSPushHandler *)pushHandler;
-(long long)_ttlWindowFromBag;
-(id)pushTokenBlock;
-(id)_minEnabledVersion;
-(long long)_ttlFromBag;
-(void)setHeartbeatTimer:(IMTimer *)arg1 ;
-(IMTimer *)heartbeatTimer;
-(double)_coalesceDelayFromBag;
-(void)_bagReloaded:(id)arg1 ;
-(unsigned long long)_lastRequestHash;
-(void)setServerBag:(PDSBag *)arg1 ;
-(void)requestQueue:(id)arg1 processedRequest:(id)arg2 withResponse:(id)arg3 ;
-(void)_updateEntriesForResponse:(id)arg1 fromRequest:(id)arg2 ;
-(BOOL)_disabledForAnyReason;
-(void)setPendingRequestDate:(NSDate *)arg1 ;
-(void)setBagLoadRetries:(long long)arg1 ;
-(id)_nonCoalescingTopicsFromBag;
-(void)handler:(id)arg1 pushTokenChanged:(id)arg2 ;
-(BOOL)_bagKillSwitchActive;
-(void)setEntryStoreBlock:(id)arg1 ;
-(BOOL)tokenChanged;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setRequestPending:(BOOL)arg1 ;
-(void)_pushTokenChangedWithEntryStore:(id)arg1 ;
-(BOOL)_allRequiredBagCoalescingValuesPresent;
-(void)_markNextCheckpointTimeWithTTL:(double)arg1 ;
-(BOOL)_topicAvoidsCoalescing:(id)arg1 ;
-(PDSBag *)serverBag;
-(id)_userDefaults;
-(BOOL)disabled;
-(BOOL)_entries:(id)arg1 includeState:(unsigned char)arg2 ;
-(BOOL)_lastPushTokenDiffersFrom:(id)arg1 ;
-(BOOL)_matchingEntryExistsFor:(id)arg1 inStore:(id)arg2 ;
-(double)_timeToDelayRequestForTopics:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDate *)pendingRequestDate;
-(void)entryStore:(id)arg1 didUpdatePendingTopics:(id)arg2 ;
-(void)_updateAllHeartbeatEntriesWithState:(unsigned char)arg1 inEntryStore:(id)arg2 ;
-(void)dealloc;
-(void)setProcessDeferredTaskQueue:(CUTDeferredTaskQueue *)arg1 ;
-(void)_updateOrDeleteEntry:(id)arg1 inStore:(id)arg2 ;
@end

