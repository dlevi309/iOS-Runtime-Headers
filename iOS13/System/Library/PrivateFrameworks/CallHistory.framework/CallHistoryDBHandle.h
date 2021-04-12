/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHLogger.h>

@class NSManagedObjectContext, CallDBManager, NSString;

@interface CallHistoryDBHandle : CHLogger {

	NSManagedObjectContext* fCallRecordContext;
	NSManagedObjectContext* fCallDBPropertiesContext;
	CallDBManager* callDBManager;
	NSString* objectId;
	id _observerCallRecordRef;
	id _observerCallDBPropRef;
	id _moveCallRecordsFromTempStoreRef;
	id _dataStoreAddedRef;

}

@property (nonatomic,readonly) NSString * objectId; 
@property (nonatomic,readonly) CallDBManager * callDBManager; 
+(id)createForClient;
+(id)createWithDBManager:(id)arg1 ;
+(id)createForServer;
-(void)dealloc;
-(BOOL)save:(id*)arg1 ;
-(void)resetTimers;
-(void)registerForNotifications:(id)arg1 ;
-(NSString *)objectId;
-(id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 ;
-(id)initWithDBManager:(id)arg1 ;
-(void)handleCallRecordContextDidSaveNotification:(id)arg1 ;
-(void)handleCallDBPropContextDidSaveNotification:(id)arg1 ;
-(CallDBManager *)callDBManager;
-(BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg1 ;
-(void)handlePersistentStoreChangedNotification:(id)arg1 ;
-(id)createCallRecord;
-(BOOL)handleSaveForCallRecordContext:(id)arg1 error:(id*)arg2 ;
-(void)postTimersChangedNotification;
-(id)callDBProperties;
-(id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(BOOL)arg3 ;
-(id)fetchManagedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(long long)deleteManagedCalls:(id)arg1 ;
-(id)getArrayForCallTypeMask:(unsigned)arg1 ;
-(id)fetchAllObjectsWithUniqueId:(id)arg1 ;
-(id)fetchObjectWithUniqueId:(id)arg1 ;
-(id)fetchObjectsWithUniqueIds:(id)arg1 ;
-(id)fetchAllNoLimit;
-(void)updateCallDBProperties;
-(BOOL)saveTimers:(/*^block*/id)arg1 ;
-(BOOL)performSaveWithBackgroundTaskAssertion:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetAllTimers;
-(void)unRegisterForNotifications;
-(id)callRecordContext;
-(void)mergeCallRecordChangesFromRemoteAppSave;
-(void)mergeCallDBPropChangesFromRemoteAppSave;
-(long long)deleteManagedCallsWithPredicate:(id)arg1 ;
-(unsigned long long)fetchManagedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)updateManagedCallsWithPredicate:(id)arg1 propertiesToUpdate:(id)arg2 ;
-(id)fetchAll;
-(id)fetchWithCallTypes:(unsigned)arg1 ;
-(id)fetchObjectsWithPredicate:(id)arg1 ;
-(void)deleteObjectWithUniqueId:(id)arg1 ;
-(void)deleteObjectsWithUniqueIds:(id)arg1 ;
-(void)deleteAll;
-(id)timerIncoming;
-(id)timerOutgoing;
-(id)timerLifetime;
-(id)timerLastReset;
@end

