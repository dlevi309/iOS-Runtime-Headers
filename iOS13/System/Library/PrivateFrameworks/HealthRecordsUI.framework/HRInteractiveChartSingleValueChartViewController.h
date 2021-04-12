/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKInteractiveChartOverlayViewController.h>

@class _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource;

@interface HRInteractiveChartSingleValueChartViewController : HKInteractiveChartOverlayViewController {

	_TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource* _annotationViewDataSource;

}

@property (nonatomic,retain) _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource * annotationViewDataSource;              //@synthesize annotationViewDataSource=_annotationViewDataSource - In the implementation block
-(id)makeAnnotationDataSourceWithMetrics:(id)arg1 ;
-(_TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *)annotationViewDataSource;
-(id)makeStandardCurrentValueViewDataSource;
-(id)makeAnnotationDataSource;
-(void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 ;
-(id)_colorForDisplayType:(id)arg1 ;
-(void)setAnnotationViewDataSource:(_TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *)arg1 ;
@end

