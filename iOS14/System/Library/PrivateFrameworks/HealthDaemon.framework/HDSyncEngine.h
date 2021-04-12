/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

@class NSArray, NSDictionary;


@protocol HDSyncEngine <NSObject>
@property (nonatomic,copy,readonly) NSArray * allOrderedSyncEntities; 
@property (nonatomic,copy,readonly) NSDictionary * allSyncEntitiesByIdentifier; 
@property (nonatomic,copy) id unitTest_didCompleteReadTransaction; 
@required
-(void)resetStore:(id)arg1;
-(long long)session:(id)arg1 requiresSyncWithAnchors:(id)arg2 error:(id*)arg3;
-(BOOL)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
-(NSDictionary *)allSyncEntitiesByIdentifier;
-(void)setUnitTest_didCompleteReadTransaction:(/*^block*/id)arg1;
-(BOOL)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
-(id)unitTest_didCompleteReadTransaction;
-(BOOL)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(BOOL)arg3 resetInvalid:(BOOL)arg4 error:(id*)arg5;
-(NSArray *)allOrderedSyncEntities;
-(void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2;
-(BOOL)performSyncSession:(id)arg1 accessibilityAssertion:(id)arg2 error:(id*)arg3;

@end

