/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBHandle;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {

	CallHistoryDBHandle* dbStoreHandle;
	id _observerCallRecordRef;
	id _observerCallTimersRef;

}

@property (nonatomic,readonly) CallHistoryDBHandle * dbStoreHandle; 
+(id)createForClient;
+(id)createForServer;
-(id)fetchObjectWithUniqueId:(id)arg1 ;
-(BOOL)createCallRecord:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(id)timerIncoming;
-(BOOL)createCallRecords:(id)arg1 error:(id*)arg2 ;
-(BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg1 ;
-(id)init;
-(id)convertToCHRecentCalls_sync:(id)arg1 ;
-(BOOL)createCallRecord:(id)arg1 ;
-(unsigned)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3 ;
-(id)fetchAllNoLimit;
-(BOOL)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2 ;
-(id)updateCallRecords_sync:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(void)resetTimers;
-(id)updateAllCallRecords:(id)arg1 error:(id*)arg2 ;
-(void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2 ;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg1 ;
-(void)handleCallTimersSave_sync:(id)arg1 ;
-(BOOL)willHandleNotification_sync:(id)arg1 ;
-(id)fetchCallIdentifiersWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 ;
-(long long)deleteCallsWithPredicate:(id)arg1 ;
-(id)fetchObjectsWithPredicate:(id)arg1 ;
-(id)updateAllCallRecords:(id)arg1 ;
-(BOOL)createCallRecord:(id)arg1 error:(id*)arg2 ;
-(id)updateCallRecords:(id)arg1 ;
-(id)fetchAll;
-(unsigned long long)fetchCoalescedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveDatabase:(id*)arg1 ;
-(unsigned long long)fetchCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)fetchAllObjectsWithUniqueId:(id)arg1 ;
-(void)registerForNotifications;
-(id)updateAllCallRecords_sync:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAll;
-(id)timerLifetime;
-(id)fetchWithCallTypes:(unsigned)arg1 ;
-(id)fetchCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2 ;
-(void)unRegisterForNotifications;
-(id)fetchCoalescedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(id)manager;
-(CallHistoryDBHandle *)dbStoreHandle;
-(BOOL)createCallRecords:(id)arg1 ;
-(id)updateCallRecords:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(id)fetchObjectsWithUniqueIds:(id)arg1 ;
-(id)convertToCHRecentCalls_sync:(id)arg1 limit:(unsigned long long)arg2 ;
-(void)parseCallStatus_sync:(unsigned)arg1 isAnswered:(BOOL*)arg2 isOriginated:(BOOL*)arg3 ;
-(void)handleCallRecordSave_sync:(id)arg1 ;
-(BOOL)resetAllTimers;
-(id)timerOutgoing;
-(BOOL)deleteAll:(id*)arg1 ;
-(id)timerLastReset;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(id)updateCallRecords:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)updateCallsWithPredicate:(id)arg1 propertiesToUpdate:(id)arg2 error:(id*)arg3 ;
-(id)init:(BOOL)arg1 ;
@end

