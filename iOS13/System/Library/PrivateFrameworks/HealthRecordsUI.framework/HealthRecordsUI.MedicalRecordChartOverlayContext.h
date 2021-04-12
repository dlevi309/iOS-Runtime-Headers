/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <libobjc.A.dylib/HKOverlayContext.h>

@interface HealthRecordsUI.MedicalRecordChartOverlayContext : NSObject <HKOverlayContext> {

	 title;
	 dataSource;
	 defaultColors;
	 selectedColors;
	 verticalAxis;
	 cachedItem;
	 cachedOverlayDisplayType;
	 cachedDataSource;

}
-(id)init;
-(id)initWithTitle:(id)arg1 dataSource:(id)arg2 defaultColors:(id)arg3 selectedColors:(id)arg4 verticalAxis:(id)arg5 ;
-(id)contextItemForLastUpdate;
-(void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)sampleTypeForDateRangeUpdates;
-(id)overlayDisplayTypeForTimeScope:(long long)arg1 ;
@end

