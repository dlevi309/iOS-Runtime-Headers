/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKSyncRemoteKnowledgeStorage <_DKSyncRemoteStorage>
@required
-(void)setFetchDelegate:(id)arg1;
-(void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(id)arg2;
-(void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(id)arg2;
-(void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(BOOL)arg6 completion:(/*^block*/id)arg7;
-(BOOL)hasAdditionsFlagForPeer:(id)arg1;
-(BOOL)hasDeletionsFlagForPeer:(id)arg1;
-(void)clearPrewarmedFlag;
-(void)prewarmFetchWithCompletion:(/*^block*/id)arg1;
-(void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

