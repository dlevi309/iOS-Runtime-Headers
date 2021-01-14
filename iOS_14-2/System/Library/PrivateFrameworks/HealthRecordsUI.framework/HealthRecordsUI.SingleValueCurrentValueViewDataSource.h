/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKCurrentValueViewDataSource.h>
#import <libobjc.A.dylib/HKCurrentValueViewDataSourceDelegate.h>

@interface HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource <HKCurrentValueViewDataSourceDelegate> {

	 lastCachedNumberOfChartPoints;

}
-(id)init;
-(void)updateDataSourceWithGraphView:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 ;
-(id)titleForSelectedRangeData:(id)arg1 ;
-(id)initWithDateCache:(id)arg1 displayCategoryController:(id)arg2 healthStore:(id)arg3 selectedRangeFormatter:(id)arg4 ;
@end

