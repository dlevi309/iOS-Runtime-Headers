/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSyncSessionDelegate, HDSyncStore;
@class NSUUID, NSDate, NSCalendar, NSString, HDAssertion, HDSyncPredicate;

@interface HDSyncSession : NSObject {

	id<HDSyncSessionDelegate> _delegate;
	id<HDSyncStore> _syncStore;
	NSUUID* _sessionUUID;
	NSDate* _startDate;
	NSCalendar* _calendar;
	NSString* _reason;
	HDAssertion* _databaseAccessibilityAssertion;
	double _databaseAccessibilityTimeout;

}

@property (nonatomic,__weak,readonly) id<HDSyncSessionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<HDSyncStore> syncStore;                               //@synthesize syncStore=_syncStore - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionUUID;                               //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSCalendar * calendar;                              //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) HDAssertion * databaseAccessibilityAssertion;              //@synthesize databaseAccessibilityAssertion=_databaseAccessibilityAssertion - In the implementation block
@property (assign,nonatomic) double databaseAccessibilityTimeout;                       //@synthesize databaseAccessibilityTimeout=_databaseAccessibilityTimeout - In the implementation block
@property (nonatomic,copy,readonly) HDSyncPredicate * syncPredicate; 
-(id)init;
-(id)description;
-(id<HDSyncSessionDelegate>)delegate;
-(NSString *)reason;
-(NSCalendar *)calendar;
-(NSDate *)startDate;
-(NSUUID *)sessionUUID;
-(long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1 ;
-(id<HDSyncStore>)syncStore;
-(HDSyncPredicate *)syncPredicate;
-(id)initWithSyncStore:(id)arg1 reason:(id)arg2 delegate:(id)arg3 ;
-(void)setDatabaseAccessibilityTimeout:(double)arg1 ;
-(id)newChangeWithSyncEntityClass:(Class)arg1 ;
-(BOOL)transactionDidEndWithError:(id*)arg1 ;
-(id)excludedSyncStores;
-(void)syncWillBegin;
-(BOOL)syncDidBeginWithProfile:(id)arg1 error:(id*)arg2 ;
-(void)sendChanges:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncDidFinishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(HDAssertion *)databaseAccessibilityAssertion;
-(void)setDatabaseAccessibilityAssertion:(HDAssertion *)arg1 ;
-(double)databaseAccessibilityTimeout;
@end

