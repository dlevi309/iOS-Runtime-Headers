/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKValueDataProvider.h>

@interface HKSleepCurrentValueDataProvider : HKValueDataProvider
-(id)currentValue;
-(id)fetchOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_queryDateRangeFromSampleDate:(id)arg1 ;
-(id)_currentSleepQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchQueryResultFromDate:(id)arg1 toDate:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

