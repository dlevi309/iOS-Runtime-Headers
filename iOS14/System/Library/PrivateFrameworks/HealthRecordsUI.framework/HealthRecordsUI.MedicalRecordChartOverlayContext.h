/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)contextItemForLastUpdate;
-(void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)sampleTypeForDateRangeUpdates;
-(id)overlayDisplayTypeForTimeScope:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 dataSource:(id)arg2 defaultColors:(id)arg3 selectedColors:(id)arg4 verticalAxis:(id)arg5 ;
@end

