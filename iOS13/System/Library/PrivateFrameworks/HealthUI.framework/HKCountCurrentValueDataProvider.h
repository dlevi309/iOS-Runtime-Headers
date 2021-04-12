/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKValueDataProvider.h>

@interface HKCountCurrentValueDataProvider : HKValueDataProvider {

	long long _countStyle;

}

@property (nonatomic,readonly) long long countStyle;              //@synthesize countStyle=_countStyle - In the implementation block
-(long long)countStyle;
-(id)currentValue;
-(id)fetchOperationWithCompletion:(/*^block*/id)arg1 ;
-(id)_mostRecentValueQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_countAllSamplesQueryWithCompletion:(/*^block*/id)arg1 ;
-(id)_dataProviderValueForCount:(id)arg1 sampleDate:(id)arg2 ;
-(void)_countFromDate:(id)arg1 toDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithHealthStore:(id)arg1 updateController:(id)arg2 dateCache:(id)arg3 displayType:(id)arg4 countStyle:(long long)arg5 ;
@end

