/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <libobjc.A.dylib/HKInteractiveChartAnnotationViewDataSource.h>

@interface HealthRecordsUI.MedicalRecordAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource> {

	 dateGroup;
	 monthYearLabel;
	 timeLabel;
	 dividerLabel;

}
-(id)init;
-(BOOL)showSeparators;
-(long long)numberOfValuesForAnnotationView:(id)arg1 ;
-(id)dateViewWithOrientation:(long long)arg1 ;
-(id)leftMarginViewWithOrientation:(long long)arg1 ;
-(id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2 ;
@end

