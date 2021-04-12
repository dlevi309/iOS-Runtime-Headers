/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class CKContainer, NSString, NSMutableSet, NSDate, NSObject, NSHashTable, BRCAccountSession, BRCThrottleBase, BRCTransferStream, BRCUserDefaults, CKContainerID;

@interface BRCSyncContext : NSObject {

	CKContainer* _ckContainer;
	NSString* _contextIdentifier;
	BOOL _isShared;
	BOOL _isCancelled;
	int _notifyTokenForFramework;
	NSMutableSet* _foregroundClients;
	NSString* _lastForegroundClientDescription;
	NSDate* _dateWhenLastForegroundClientLeft;
	NSObject*<OS_dispatch_source> _timerForGraceForegroundPeriod;
	NSObject*<OS_dispatch_source> _timerForForcedForegroundPeriod;
	NSObject*<OS_dispatch_queue> _foregroundStateQueue;
	unsigned long long _foregroundState;
	NSHashTable* _nonDiscretionaryModifyOperations;
	NSHashTable* _discretionaryModifyOperations;
	BRCAccountSession* _session;
	BRCThrottleBase* _readerThrottle;
	BRCThrottleBase* _applyThrottle;
	BRCThrottleBase* _downloadThrottle;
	BRCThrottleBase* _uploadThrottle;
	BRCThrottleBase* _uploadFileModifiedThrottle;
	BRCThrottleBase* _perItemSyncUpThrottle;
	BRCTransferStream* _uploadStream;
	BRCTransferStream* _downloadStream;

}

@property (nonatomic,readonly) BRCAccountSession * session;                               //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSString * contextIdentifier;                              //@synthesize contextIdentifier=_contextIdentifier - In the implementation block
@property (nonatomic,readonly) BRCUserDefaults * defaults; 
@property (nonatomic,readonly) BOOL isShared;                                             //@synthesize isShared=_isShared - In the implementation block
@property (nonatomic,readonly) CKContainer * ckContainer; 
@property (nonatomic,readonly) CKContainerID * ckContainerID; 
@property (nonatomic,readonly) BRCTransferStream * uploadStream;                          //@synthesize uploadStream=_uploadStream - In the implementation block
@property (nonatomic,readonly) BRCTransferStream * downloadStream;                        //@synthesize downloadStream=_downloadStream - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * readerThrottle;                          //@synthesize readerThrottle=_readerThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * applyThrottle;                           //@synthesize applyThrottle=_applyThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * uploadThrottle;                          //@synthesize uploadThrottle=_uploadThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * uploadFileModifiedThrottle;              //@synthesize uploadFileModifiedThrottle=_uploadFileModifiedThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * perItemSyncUpThrottle;                   //@synthesize perItemSyncUpThrottle=_perItemSyncUpThrottle - In the implementation block
@property (nonatomic,readonly) BRCThrottleBase * downloadThrottle;                        //@synthesize downloadThrottle=_downloadThrottle - In the implementation block
+(id)transferContextForServerZone:(id)arg1 appLibrary:(id)arg2 ;
+(id)contextIdentifierForMangledID:(id)arg1 ;
+(id)_contextIdentifierForMangledID:(id)arg1 metadata:(BOOL)arg2 ;
-(BRCUserDefaults *)defaults;
-(void)addOperation:(id)arg1 ;
-(id)_database;
-(void)close;
-(CKContainer *)ckContainer;
-(BRCAccountSession *)session;
-(BOOL)isForeground;
-(id)description;
-(BOOL)allowsCellularAccess;
-(NSString *)contextIdentifier;
-(void)dumpToContext:(id)arg1 ;
-(BOOL)isShared;
-(void)cancel;
-(void)resume;
-(void)dealloc;
-(void)setupIfNeeded;
-(void)addOperation:(id)arg1 allowsCellularAccess:(id)arg2 ;
-(BRCThrottleBase *)applyThrottle;
-(id)foregroundClients;
-(void)removeForegroundClient:(id)arg1 ;
-(void)addForegroundClient:(id)arg1 ;
-(void)didReceiveHandoffRequest;
-(BRCTransferStream *)downloadStream;
-(BRCThrottleBase *)downloadThrottle;
-(BRCTransferStream *)uploadStream;
-(CKContainerID *)ckContainerID;
-(BRCThrottleBase *)uploadThrottle;
-(BRCThrottleBase *)perItemSyncUpThrottle;
-(BRCThrottleBase *)uploadFileModifiedThrottle;
-(BRCThrottleBase *)readerThrottle;
-(void)addOperation:(id)arg1 allowsCellularAccess:(id)arg2 nonDiscretionary:(id)arg3 ;
-(void)_preventConcurrentModifyRecordsOperations:(id)arg1 nonDiscretionary:(BOOL)arg2 ;
-(void)_notifyFrameworkContainersMonitorWithState:(BOOL)arg1 ;
-(void)_notifyContainerBeingNowForeground;
-(void)notifyDuetFromAccessByBundleID:(id)arg1 ;
-(void)_armForegroundGraceTimerForClientDescription:(id)arg1 ;
-(id)initWithSession:(id)arg1 contextIdentifier:(id)arg2 isShared:(BOOL)arg3 ;
-(void)addOperation:(id)arg1 nonDiscretionary:(BOOL)arg2 ;
-(void)waitForAllOperations;
-(void)forceContainerForegroundForDuration:(double)arg1 ;
@end

