/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKCurrentValueViewDataSource.h>

@interface HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource {

	 lastCachedNumberOfChartPoints;

}
-(id)init;
-(id)initWithDateCache:(id)arg1 displayCategoryController:(id)arg2 healthStore:(id)arg3 selectedRangeFormatter:(id)arg4 ;
-(void)updateDataSourceWithGraphView:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 ;
-(id)attributedTitleStringForCurrentValueView:(id)arg1 ;
@end

