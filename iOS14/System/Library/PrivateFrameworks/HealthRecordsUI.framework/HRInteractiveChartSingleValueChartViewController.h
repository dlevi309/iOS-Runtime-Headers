/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKInteractiveChartOverlayViewController.h>

@class _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource;

@interface HRInteractiveChartSingleValueChartViewController : HKInteractiveChartOverlayViewController {

	_TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource* _annotationViewDataSource;

}

@property (nonatomic,retain) _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource * annotationViewDataSource;              //@synthesize annotationViewDataSource=_annotationViewDataSource - In the implementation block
-(_TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *)annotationViewDataSource;
-(id)_colorForDisplayType:(id)arg1 ;
-(id)makeStandardCurrentValueViewDataSource;
-(id)makeAnnotationDataSourceWithMetrics:(id)arg1 ;
-(void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 ;
-(void)setAnnotationViewDataSource:(_TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *)arg1 ;
@end

