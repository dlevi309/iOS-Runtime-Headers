/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHLogger.h>
#import <libobjc.A.dylib/SyncManagerProtocol.h>

@class TransactionManager, CallHistoryDBClientHandle, NSString;

@interface SyncManager : CHLogger <SyncManagerProtocol> {

	TransactionManager* _transactionManager;
	CallHistoryDBClientHandle* _dbHandle;

}

@property (nonatomic,readonly) CallHistoryDBClientHandle * dbHandle;              //@synthesize dbHandle=_dbHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)resetTimers;
-(void)insert:(id)arg1 ;
-(void)updateObjects:(id)arg1 ;
-(CallHistoryDBClientHandle *)dbHandle;
-(id)fetchObjectWithUniqueId:(id)arg1 ;
-(void)deleteObjectWithUniqueId:(id)arg1 ;
-(void)deleteObjectsWithUniqueIds:(id)arg1 ;
-(double)timerIncoming;
-(double)timerOutgoing;
-(double)timerLifetime;
-(id)fetchObjectsWithLimits:(id)arg1 ;
-(void)insertWithoutTransaction:(id)arg1 ;
-(void)updateAllObjects:(id)arg1 ;
-(void)deleteObjectsWithLimits:(id)arg1 ;
-(void)deleteAllObjects;
-(void)insertRecordsWithoutTransactions:(id)arg1 ;
-(long long)setRead:(BOOL)arg1 forCallsWithPredicate:(id)arg2 error:(id*)arg3 ;
-(long long)deleteCallsWithPredicate:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)fetchCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)fetchCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(unsigned long long)fetchCoalescedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)fetchCoalescedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(void)initDBHandle;
-(void)addUpdateTransactions:(id)arg1 ;
-(id)predicateForCallKind:(id)arg1 ;
-(id)predicateForCallKinds:(id)arg1 ;
-(id)predicateForLimits:(id)arg1 ;
-(id)archiveCallObject:(id)arg1 ;
-(id)fetchAllObjects;
@end

