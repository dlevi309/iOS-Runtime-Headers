/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDHealthDatabase <NSObject>
@property (getter=isDataProtectedByFirstUnlockAvailable,nonatomic,readonly) BOOL dataProtectedByFirstUnlockAvailable; 
@property (getter=isProtectedDataAvailable,nonatomic,readonly) BOOL protectedDataAvailable; 
@required
-(BOOL)isProtectedDataAvailable;
-(BOOL)performTransactionWithContext:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 inaccessibilityHandler:(/*^block*/id)arg4;
-(BOOL)addJournalEntries:(id)arg1 error:(id*)arg2;
-(void)addProtectedDataObserver:(id)arg1;
-(void)performWhenDataProtectedByFirstUnlockIsAvailable:(/*^block*/id)arg1;
-(void)removeProtectedDataObserver:(id)arg1;
-(id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg1 timeout:(double)arg2 error:(id*)arg3;
-(void)addProtectedDataObserver:(id)arg1 queue:(id)arg2;
-(BOOL)performWithTransactionContext:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3;
-(void)performAsynchronously:(/*^block*/id)arg1;
-(void)performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(id)arg1 block:(/*^block*/id)arg2;
-(void)addDatabaseJournalMergeObserver:(id)arg1 journalType:(long long)arg2 queue:(id)arg3;
-(void)removeDatabaseJournalMergeObserver:(id)arg1 journalType:(long long)arg2;
-(BOOL)addJournalEntry:(id)arg1 error:(id*)arg2;
-(id)cloneAccessibilityAssertion:(id)arg1 ownerIdentifier:(id)arg2 error:(id*)arg3;
-(void)performAsynchronouslySerial:(/*^block*/id)arg1;
-(BOOL)isDataProtectedByFirstUnlockAvailable;

@end

