/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, _HKFilter, HDDatabaseTransactionContext;

@interface HDActivitySummaryBuilder : NSObject {

	HDProfile* _profile;
	_HKFilter* _filter;
	BOOL _shouldIncludePrivateProperties;
	BOOL _shouldIncludeStatistics;
	BOOL _orderByDateAscending;
	unsigned long long _limit;
	HDDatabaseTransactionContext* _databaseTransactionContext;
	long long _enumeratedSummaryCount;

}

@property (assign,nonatomic) BOOL shouldIncludePrivateProperties;                                  //@synthesize shouldIncludePrivateProperties=_shouldIncludePrivateProperties - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeStatistics;                                         //@synthesize shouldIncludeStatistics=_shouldIncludeStatistics - In the implementation block
@property (assign,nonatomic) BOOL orderByDateAscending;                                            //@synthesize orderByDateAscending=_orderByDateAscending - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                                             //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy) HDDatabaseTransactionContext * databaseTransactionContext;              //@synthesize databaseTransactionContext=_databaseTransactionContext - In the implementation block
@property (nonatomic,readonly) long long enumeratedSummaryCount;                                   //@synthesize enumeratedSummaryCount=_enumeratedSummaryCount - In the implementation block
-(void)setLimit:(unsigned long long)arg1 ;
-(HDDatabaseTransactionContext *)databaseTransactionContext;
-(unsigned long long)limit;
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(void)setOrderByDateAscending:(BOOL)arg1 ;
-(BOOL)orderByDateAscending;
-(void)setDatabaseTransactionContext:(HDDatabaseTransactionContext *)arg1 ;
-(id)initWithProfile:(id)arg1 filter:(id)arg2 ;
-(BOOL)_enumerateActivitySummariesAndCachesWithPredicate:(id)arg1 largestAnchor:(long long*)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)enumerateActivitySummariesWithPredicate:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(void)activitySummariesWithPredicate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)batchedActivitySummariesWithPredicate:(id)arg1 maxBatchSize:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)shouldIncludePrivateProperties;
-(void)setShouldIncludePrivateProperties:(BOOL)arg1 ;
-(BOOL)shouldIncludeStatistics;
-(void)setShouldIncludeStatistics:(BOOL)arg1 ;
-(long long)enumeratedSummaryCount;
@end

