/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2 ;
-(long long)numberOfValuesForAnnotationView:(id)arg1 ;
-(BOOL)showSeparators;
-(id)dateViewWithOrientation:(long long)arg1 ;
-(id)leftMarginViewWithOrientation:(long long)arg1 ;
@end

