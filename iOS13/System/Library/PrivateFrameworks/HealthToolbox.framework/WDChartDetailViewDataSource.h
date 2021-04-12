/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@protocol WDChartDetailViewDataSource <NSObject>
@required
-(long long)numberOfRows;
-(id)mainSection;
-(long long)numberOfColumnsForRow:(long long)arg1;
-(id)detailSectionForRow:(long long)arg1 column:(long long)arg2;

@end

