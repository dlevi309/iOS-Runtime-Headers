/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

@class NSArray, NSDictionary;


@protocol HDSyncEngine <NSObject>
@property (nonatomic,copy,readonly) NSArray * allOrderedSyncEntities; 
@property (nonatomic,copy,readonly) NSDictionary * allSyncEntitiesByIdentifier; 
@property (nonatomic,copy) id unitTest_didCompleteReadTransaction; 
@required
-(BOOL)performSyncSession:(id)arg1 error:(id*)arg2;
-(void)resetStore:(id)arg1;
-(BOOL)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
-(BOOL)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(BOOL)arg3 resetInvalid:(BOOL)arg4 error:(id*)arg5;
-(BOOL)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
-(void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2;
-(NSDictionary *)allSyncEntitiesByIdentifier;
-(NSArray *)allOrderedSyncEntities;
-(long long)session:(id)arg1 requiresSyncWithAnchors:(id)arg2 error:(id*)arg3;
-(id)unitTest_didCompleteReadTransaction;
-(void)setUnitTest_didCompleteReadTransaction:(/*^block*/id)arg1;

@end

