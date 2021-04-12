/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKDataProviderValue <NSObject>
@optional
-(id)date;
-(id)lastUpdatedDescriptionWithDateCache:(id)arg1;
-(id)lastUpdatedShortDescriptionWithDateCache:(id)arg1;
-(id)stringWithDisplayType:(id)arg1 unitController:(id)arg2;
-(id)attributedSupplementaryStringWithDisplayType:(id)arg1 unitController:(id)arg2 font:(id)arg3;

@required
-(id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;

@end

