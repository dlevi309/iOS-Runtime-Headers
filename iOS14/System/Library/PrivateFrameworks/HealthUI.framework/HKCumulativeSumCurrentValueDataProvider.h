/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKValueDataProvider.h>

@interface HKCumulativeSumCurrentValueDataProvider : HKValueDataProvider
-(id)currentValue;
-(id)fetchOperationWithCompletion:(/*^block*/id)arg1 ;
-(id)_mostRecentValueQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sumFromDate:(id)arg1 toDate:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

