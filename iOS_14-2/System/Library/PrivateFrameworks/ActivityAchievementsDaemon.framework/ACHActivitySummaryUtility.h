/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class HDProfile, HDActivitySummaryBuilder, HDDatabaseTransactionContext;

@interface ACHActivitySummaryUtility : NSObject {

	HDProfile* _profile;
	HDActivitySummaryBuilder* _summaryBuilder;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HDActivitySummaryBuilder * summaryBuilder;                 //@synthesize summaryBuilder=_summaryBuilder - In the implementation block
@property (nonatomic,copy) HDDatabaseTransactionContext * databaseContext; 
-(void)setProfile:(HDProfile *)arg1 ;
-(void)setSummaryBuilder:(HDActivitySummaryBuilder *)arg1 ;
-(HDProfile *)profile;
-(HDDatabaseTransactionContext *)databaseContext;
-(HDActivitySummaryBuilder *)summaryBuilder;
-(void)setDatabaseContext:(HDDatabaseTransactionContext *)arg1 ;
-(void)enumerateActivitySummariesForDateComponentInterval:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_enumerateActivitySummariesForDateComponentInterval:(id)arg1 handler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)initWithProfile:(id)arg1 shouldIncludePrivateProperties:(BOOL)arg2 ;
-(id)newEmptyActivitySummaryFromSummary:(id)arg1 ;
@end

