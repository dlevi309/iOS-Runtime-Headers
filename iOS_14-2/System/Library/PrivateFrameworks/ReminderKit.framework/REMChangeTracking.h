/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol REMChangeTrackingClientIdentifying, REMDaemonController;
@class NSString, NSSet;

@interface REMChangeTracking : NSObject {

	id<REMChangeTrackingClientIdentifying> _changeTrackingClientID;
	id<REMDaemonController> _daemonController;
	NSString* _entityName;
	unsigned long long _transactionFetchLimit;
	NSSet* _transactionAuthorKeysToExclude;

}

@property (nonatomic,readonly) NSSet * transactionAuthorKeysToExclude;                                     //@synthesize transactionAuthorKeysToExclude=_transactionAuthorKeysToExclude - In the implementation block
@property (nonatomic,readonly) id<REMChangeTrackingClientIdentifying> changeTrackingClientID;              //@synthesize changeTrackingClientID=_changeTrackingClientID - In the implementation block
@property (nonatomic,readonly) id<REMDaemonController> daemonController;                                   //@synthesize daemonController=_daemonController - In the implementation block
@property (nonatomic,retain) NSString * entityName;                                                        //@synthesize entityName=_entityName - In the implementation block
@property (assign,nonatomic) unsigned long long transactionFetchLimit;                                     //@synthesize transactionFetchLimit=_transactionFetchLimit - In the implementation block
+(id)internalTransactionAuthorKeysToExclude;
+(id)defaultTransactionAuthorKeysToExclude;
+(id)entityNamesToIncludeFromTrackingWithOptionProvider:(Class)arg1 ;
-(NSString *)entityName;
-(void)_performChangeTrackingWithReason:(id)arg1 block:(/*^block*/id)arg2 xpcErrorHandler:(/*^block*/id)arg3 ;
-(id<REMChangeTrackingClientIdentifying>)changeTrackingClientID;
-(unsigned long long)transactionFetchLimit;
-(NSSet *)transactionAuthorKeysToExclude;
-(id)earliestChangeTokenWithError:(id*)arg1 ;
-(id)currentChangeTokenWithError:(id*)arg1 ;
-(id)currentChangeTokenForAllAccountsWithError:(id*)arg1 ;
-(id)currentChangeTokenForAccountTypes:(long long)arg1 error:(id*)arg2 ;
-(id)getTrackingStateWithError:(id*)arg1 ;
-(void)saveTrackingState:(id)arg1 error:(id*)arg2 ;
-(id)fetchHistoryAfterToken:(id)arg1 error:(id*)arg2 ;
-(id)fetchHistoryAfterDate:(id)arg1 error:(id*)arg2 ;
-(void)deleteHistoryBeforeToken:(id)arg1 error:(id*)arg2 ;
-(void)deleteHistoryBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)setTransactionFetchLimit:(unsigned long long)arg1 ;
-(id)persistenceStoreIDForAccountID:(id)arg1 error:(id*)arg2 ;
-(id)fetchAuxiliaryChangeInfosOfType:(Class)arg1 withChangeObject:(id)arg2 error:(id*)arg3 ;
-(void)setEntityName:(NSString *)arg1 ;
-(id<REMDaemonController>)daemonController;
-(id)initWithClientID:(id)arg1 daemonController:(id)arg2 transactionAuthorKeysToExclude:(id)arg3 ;
-(id)initWithClientID:(id)arg1 daemonController:(id)arg2 ;
@end

