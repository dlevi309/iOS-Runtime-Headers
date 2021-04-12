/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <libobjc.A.dylib/HKActivitySummaryDataProviderObserver.h>

@class WDProfile, HKActivitySummaryDataProvider, NSString;

@interface WDActivityQueryTestController : NSObject <HKActivitySummaryDataProviderObserver> {

	WDProfile* _profile;
	HKActivitySummaryDataProvider* _provider;

}

@property (nonatomic,retain) WDProfile * profile;                                   //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HKActivitySummaryDataProvider * provider;              //@synthesize provider=_provider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProvider:(HKActivitySummaryDataProvider *)arg1 ;
-(WDProfile *)profile;
-(void)setProfile:(WDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(HKActivitySummaryDataProvider *)provider;
-(void)runTest;
-(void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1 ;
-(id)_stringForDateComponents:(id)arg1 ;
-(id)_quantityValue:(id)arg1 title:(id)arg2 ;
-(void)_logActivitySummary:(id)arg1 calendar:(id)arg2 ;
-(id)_buildActivitySummaryFromDate:(id)arg1 calendar:(id)arg2 moveQuantity:(id)arg3 exerciseQuantity:(id)arg4 standQuantity:(id)arg5 ;
-(id)_summariesFromStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 moveData:(id)arg4 exerciseData:(id)arg5 standData:(id)arg6 ;
-(id)_dateDaysAgo:(id)arg1 ;
-(void)_logTrialQuery;
-(void)_logDataFromTimeScope:(long long)arg1 title:(id)arg2 ;
-(void)_logDataFromAllTimeScopes;
-(id)_stringForDate:(id)arg1 ;
-(void)_hourlyActivityDataForStartDate:(id)arg1 endDate:(id)arg2 healthStore:(id)arg3 calendar:(id)arg4 handler:(/*^block*/id)arg5 ;
@end

