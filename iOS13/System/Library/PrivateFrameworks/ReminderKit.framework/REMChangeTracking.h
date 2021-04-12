/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol REMChangeTrackingClientIdentifying, REMDaemonController;
@class NSSet;

@interface REMChangeTracking : NSObject {

	id<REMChangeTrackingClientIdentifying> _changeTrackingClientID;
	id<REMDaemonController> _daemonController;
	NSSet* _transactionAuthorKeysToExclude;

}

@property (nonatomic,readonly) NSSet * transactionAuthorKeysToExclude;                                     //@synthesize transactionAuthorKeysToExclude=_transactionAuthorKeysToExclude - In the implementation block
@property (nonatomic,readonly) id<REMChangeTrackingClientIdentifying> changeTrackingClientID;              //@synthesize changeTrackingClientID=_changeTrackingClientID - In the implementation block
@property (nonatomic,readonly) id<REMDaemonController> daemonController;                                   //@synthesize daemonController=_daemonController - In the implementation block
+(id)internalTransactionAuthorKeysToExclude;
+(id)defaultTransactionAuthorKeysToExclude;
+(id)entityNamesToIncludeFromTrackingWithOptionProvider:(Class)arg1 ;
-(id<REMDaemonController>)daemonController;
-(id)initWithClientID:(id)arg1 daemonController:(id)arg2 transactionAuthorKeysToExclude:(id)arg3 ;
-(id)initWithClientID:(id)arg1 daemonController:(id)arg2 ;
-(void)_performChangeTrackingWithReason:(id)arg1 block:(/*^block*/id)arg2 xpcErrorHandler:(/*^block*/id)arg3 ;
-(id<REMChangeTrackingClientIdentifying>)changeTrackingClientID;
-(id)changeSetByFilteringTransactionAuthorKeysToExcludeFromChangeSet:(id)arg1 ;
-(NSSet *)transactionAuthorKeysToExclude;
-(id)currentChangeTokenForAllAccountsWithError:(id*)arg1 ;
-(id)currentChangeTokenForAccountTypes:(long long)arg1 error:(id*)arg2 ;
-(id)currentChangeTokenWithError:(id*)arg1 ;
-(id)getTrackingStateWithError:(id*)arg1 ;
-(void)saveTrackingState:(id)arg1 error:(id*)arg2 ;
-(id)fetchHistoryAfterToken:(id)arg1 error:(id*)arg2 ;
-(id)fetchHistoryAfterDate:(id)arg1 error:(id*)arg2 ;
-(void)deleteHistoryBeforeToken:(id)arg1 error:(id*)arg2 ;
-(void)deleteHistoryBeforeDate:(id)arg1 error:(id*)arg2 ;
-(id)persistenceStoreIDForAccountID:(id)arg1 error:(id*)arg2 ;
-(id)fetchAuxiliaryChangeInfosOfType:(Class)arg1 withChangeObject:(id)arg2 error:(id*)arg3 ;
@end

