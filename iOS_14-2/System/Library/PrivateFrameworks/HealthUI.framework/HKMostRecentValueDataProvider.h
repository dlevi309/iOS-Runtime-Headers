/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKValueDataProvider.h>

@interface HKMostRecentValueDataProvider : HKValueDataProvider

@property (nonatomic,readonly) id<HKDataProviderValue> value; 
-(id)currentValue;
-(id)fetchOperationWithCompletion:(/*^block*/id)arg1 ;
-(id)_mostRecentValueQueryWithCompletion:(/*^block*/id)arg1 ;
@end

