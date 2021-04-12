/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)save:(id*)arg1 ;
-(CallDBManager *)callDBManager;
-(void)mergeCallRecordChangesFromRemoteAppSave;
-(id)fetchObjectWithUniqueId:(id)arg1 ;
-(id)timerIncoming;
-(BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg1 ;
-(void)updateCallDBProperties;
-(id)updateManagedCallsWithPredicate:(id)arg1 propertiesToUpdate:(id)arg2 ;
-(id)fetchAllNoLimit;
-(void)mergeCallDBPropChangesFromRemoteAppSave;
-(void)resetTimers;
-(NSString *)objectId;
-(void)deleteObjectsWithUniqueIds:(id)arg1 ;
-(id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(BOOL)arg3 ;
-(void)handleCallDBPropContextDidSaveNotification:(id)arg1 ;
-(void)handlePersistentStoreChangedNotification:(id)arg1 ;
-(id)initWithDBManager:(id)arg1 ;
-(id)fetchManagedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(void)deleteObjectWithUniqueId:(id)arg1 ;
-(BOOL)saveTimers:(/*^block*/id)arg1 ;
-(id)fetchObjectsWithPredicate:(id)arg1 ;
-(id)fetchAll;
-(id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 ;
-(void)registerForNotifications:(id)arg1 ;
-(void)postTimersChangedNotification;
-(id)fetchAllObjectsWithUniqueId:(id)arg1 ;
-(void)deleteAll;
-(id)callRecordContext;
-(id)timerLifetime;
-(id)fetchManagedCallIdentifiersWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(id)fetchWithCallTypes:(unsigned)arg1 ;
-(id)callDBProperties;
-(void)handleCallRecordContextDidSaveNotification:(id)arg1 ;
-(void)unRegisterForNotifications;
-(id)createCallRecord;
-(id)fetchObjectsWithUniqueIds:(id)arg1 ;
-(BOOL)performSaveWithBackgroundTaskAssertion:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)fetchManagedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(BOOL)resetAllTimers;
-(BOOL)handleSaveForCallRecordContext:(id)arg1 error:(id*)arg2 ;
-(long long)deleteManagedCalls:(id)arg1 ;
-(id)timerOutgoing;
-(id)timerLastReset;
-(void)dealloc;
-(long long)deleteManagedCallsWithPredicate:(id)arg1 ;
-(id)getArrayForCallTypeMask:(unsigned)arg1 ;
@end

