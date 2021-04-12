/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKValueDataProvider.h>

@interface HKMostRecentValueDataProvider : HKValueDataProvider

@property (nonatomic,readonly) id<HKDataProviderValue> value; 
-(id)currentValue;
-(id)fetchOperationWithCompletion:(/*^block*/id)arg1 ;
-(id)_mostRecentValueQueryWithCompletion:(/*^block*/id)arg1 ;
@end

