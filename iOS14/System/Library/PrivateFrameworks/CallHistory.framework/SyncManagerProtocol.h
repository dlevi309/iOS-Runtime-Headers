/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@protocol SyncManagerProtocol <NSObject>
@required
-(void)deleteAllObjects;
-(id)fetchObjectWithUniqueId:(id)arg1;
-(double)timerIncoming;
-(void)insertWithoutTransaction:(id)arg1;
-(void)resetTimers;
-(void)deleteObjectsWithUniqueIds:(id)arg1;
-(id)fetchObjectsWithLimits:(id)arg1;
-(id)fetchCallIdentifiersWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
-(void)deleteObjectWithUniqueId:(id)arg1;
-(unsigned long long)fetchCoalescedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
-(unsigned long long)fetchCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
-(void)deleteObjectsWithLimits:(id)arg1;
-(void)insertRecordsWithoutTransactions:(id)arg1;
-(double)timerLifetime;
-(id)fetchCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
-(id)fetchCoalescedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
-(id)fetchAllObjects;
-(double)timerOutgoing;
-(void)updateAllObjects:(id)arg1;
-(void)updateObjects:(id)arg1;
-(long long)deleteCallsWithPredicate:(id)arg1 error:(id*)arg2;
-(long long)setRead:(BOOL)arg1 forCallsWithPredicate:(id)arg2 error:(id*)arg3;
-(void)insert:(id)arg1;

@end

