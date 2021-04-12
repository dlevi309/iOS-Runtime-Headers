/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class _PASKVOHandler, CKDatabase, APSConnection, NSObject, NSOperationQueue, NSMutableArray, CKContainer, SGFuture, _SGDCloudKitSyncPersistedState, NSOperation, NSError, NSString;

@interface SGDCloudKitSync : NSObject <APSConnectionDelegate> {

	_PASKVOHandler* _kvoHandler;
	CKDatabase* _database;
	/*^block*/id _callback;
	/*^block*/id _deleteAllSyncedItemsCallback;
	BOOL _readyForNewEntities;
	APSConnection* _apsConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _opQueue;
	NSMutableArray* _operationsToAddToOpQueue;
	CKContainer* _container;
	SGFuture* _accountInfoFuture;
	_SGDCloudKitSyncPersistedState* _persistedState;
	long long _suspendCount;
	BOOL _noZone;
	BOOL _disabledBecauseOutOfDateSoftware;
	NSOperation* _inProgressProcureSaltOperation;
	NSOperation* _inProgressCreateZoneOperation;
	NSOperation* _inProgressDeleteZoneOperation;
	NSOperation* _inProgressFetchNewEntitiesOperation;
	BOOL _requestedFetchNewEntitiesWhileRequestAlreadyInFlight;
	NSError* _createZoneError;
	NSError* _deleteZoneError;
	NSError* _procureSaltError;
	BOOL _processingStateChanges;
	BOOL _pendingProcessStateChanges;
	ct_green_tea_logger_sRef _greenTeaLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_sharedInstanceConfigurationQueue;
+(id)_callbackQueue;
+(void)setSharedInstanceConfigurationBlock:(/*^block*/id)arg1 ;
+(id)apsEnvironmentStringForContainer:(id)arg1 ;
-(void)disable;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(void)deleteStorageEvent:(id)arg1 ;
-(id)shouldRemoveEventsFromEventKit;
-(void)suspend;
-(void)setDatabase:(id)arg1 ;
-(id)accountInfo;
-(id)_ckErrorForId:(id)arg1 inError:(id)arg2 ;
-(id)init;
-(id)addOperation:(id)arg1 ;
-(BOOL)pauseIfNeededAndReturnRetryEligibilityForError:(id)arg1 ;
-(id)addFetchNewEntitiesAttemptOperationWithRetries:(unsigned long long)arg1 ;
-(id)addOperation;
-(id)addProcureSaltAttemptOperationWithRetries:(unsigned long long)arg1 ;
-(id)ckErrorForRecordId:(id)arg1 inError:(id)arg2 ;
-(id)addDeleteZoneAttemptOperationWithRetries:(unsigned long long)arg1 ;
-(id)addCreateZoneAttemptOperationWithRetries:(unsigned long long)arg1 ;
-(void)_addDependency:(id)arg1 toTrain:(id)arg2 ;
-(id)addDeleteZoneOperation;
-(void)failSalt;
-(void)suspendAndResumeAfter:(double)arg1 ;
-(id)addDeleteAndRecreateZoneOperation;
-(id)addCreateZoneOperation;
-(void)setReadyForNewEntities:(BOOL)arg1 ;
-(id)getUnderlyingError:(id)arg1 ;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(void)createSubscriptionWithRetries:(unsigned long long)arg1 ;
-(BOOL)shouldRecreateZoneForRecordError:(id)arg1 operationError:(id)arg2 ;
-(id)recordZoneId;
-(void)setDeleteAllSyncedItemsCallback:(/*^block*/id)arg1 ;
-(id)ckErrorForRecordZoneId:(id)arg1 inError:(id)arg2 ;
-(void)accountChanged:(id)arg1 ;
-(id)invokeNewEntitiesCallbackWithEntity:(id)arg1 ;
-(void)clearErrors;
-(void)_coupleOperationTrainWithStart:(id)arg1 end:(id)arg2 ;
-(id)addManateeSanityCheckOperation;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(id)privacySalt;
-(void)deleteGroupId:(id)arg1 ;
-(void)addEnrichment:(id)arg1 withParentEntity:(id)arg2 ;
-(id)addWriteOperationForRecordGetter:(/*^block*/id)arg1 deleteGetter:(/*^block*/id)arg2 withRetries:(unsigned long long)arg3 isFirstTry:(BOOL)arg4 ;
-(void)setNewEntitiesCallback:(/*^block*/id)arg1 ;
-(void)resume;
-(id)addProcureSaltOperation;
-(void)deleteZoneWithCompletion:(/*^block*/id)arg1 ;
-(id)addFetchNewEntitiesOperation;
-(void)processStateChanges;
-(void)dealloc;
-(id)addWriteOperationForRecordGetter:(/*^block*/id)arg1 deleteGetter:(/*^block*/id)arg2 withRetries:(unsigned long long)arg3 ;
@end

