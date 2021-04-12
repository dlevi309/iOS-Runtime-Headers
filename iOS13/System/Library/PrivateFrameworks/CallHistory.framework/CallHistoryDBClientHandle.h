/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@protocol OS_dispatch_queue;
@class CallHistoryDBHandle, NSObject;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {

	CallHistoryDBHandle* dbStoreHandle;
	id _observerCallRecordRef;
	id _observerCallTimersRef;
	NSObject*<OS_dispatch_queue> _recentCallQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recentCallQueue;              //@synthesize recentCallQueue=_recentCallQueue - In the implementation block
@property (nonatomic,readonly) CallHistoryDBHandle * dbStoreHandle; 
+(id)createForClient;
+(id)createForServer;
-(id)init;
-(void)dealloc;
-(id)manager;
-(void)registerForNotifications;
-(void)resetTimers;
-(id)init:(BOOL)arg1 ;
-(BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg1 ;
-(id)fetchAllObjectsWithUniqueId:(id)arg1 ;
-(id)fetchObjectWithUniqueId:(id)arg1 ;
-(id)fetchObjectsWithUniqueIds:(id)arg1 ;
-(id)fetchAllNoLimit;
-(BOOL)deleteAll:(id*)arg1 ;
-(BOOL)resetAllTimers;
-(void)unRegisterForNotifications;
-(id)fetchAll;
-(id)fetchWithCallTypes:(unsigned)arg1 ;
-(id)fetchObjectsWithPredicate:(id)arg1 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 ;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg1 ;
-(BOOL)deleteAll;
-(id)timerIncoming;
-(id)timerOutgoing;
-(id)timerLifetime;
-(id)timerLastReset;
-(unsigned long long)fetchCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)fetchCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(unsigned long long)fetchCoalescedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)fetchCoalescedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(long long)deleteCallsWithPredicate:(id)arg1 ;
-(BOOL)createCallRecord:(id)arg1 ;
-(BOOL)createCallRecords:(id)arg1 ;
-(id)updateCallsWithPredicate:(id)arg1 propertiesToUpdate:(id)arg2 error:(id*)arg3 ;
-(BOOL)saveDatabase:(id*)arg1 ;
-(id)updateCallRecords:(id)arg1 ;
-(id)updateAllCallRecords:(id)arg1 ;
-(void)parseCallStatus_sync:(unsigned)arg1 isAnswered:(BOOL*)arg2 isOriginated:(BOOL*)arg3 ;
-(unsigned)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)recentCallQueue;
-(void)setClientObject_sync:(id)arg1 withStoreObject:(id)arg2 ;
-(void)handleCallRecordSave_sync:(id)arg1 ;
-(void)handleCallTimersSave_sync:(id)arg1 ;
-(id)convertToCHRecentCalls_sync:(id)arg1 ;
-(id)convertToCHRecentCalls_sync:(id)arg1 limit:(unsigned long long)arg2 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg1 error:(id*)arg2 ;
-(BOOL)createCallRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)createCallRecord:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2 ;
-(BOOL)createCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateCallRecords:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(id)updateCallRecords_sync:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(id)updateAllCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateAllCallRecords_sync:(id)arg1 error:(id*)arg2 ;
-(BOOL)willHandleNotification_sync:(id)arg1 ;
-(BOOL)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2 ;
-(CallHistoryDBHandle *)dbStoreHandle;
-(void)setRecentCallQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

