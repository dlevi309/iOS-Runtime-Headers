/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIView.h>

@class HKInteractiveChartAnnotationView, _ActivityCurrentValueDataSource, HKActivitySummaryDataProvider;

@interface _ActivityCurrentValueView : UIView {

	HKInteractiveChartAnnotationView* _annotationView;
	_ActivityCurrentValueDataSource* _currentValueDataSource;
	HKActivitySummaryDataProvider* _activitySummaryDataProvider;

}

@property (nonatomic,readonly) HKInteractiveChartAnnotationView * annotationView;                      //@synthesize annotationView=_annotationView - In the implementation block
@property (nonatomic,retain) _ActivityCurrentValueDataSource * currentValueDataSource;                 //@synthesize currentValueDataSource=_currentValueDataSource - In the implementation block
@property (nonatomic,retain) HKActivitySummaryDataProvider * activitySummaryDataProvider;              //@synthesize activitySummaryDataProvider=_activitySummaryDataProvider - In the implementation block
-(HKInteractiveChartAnnotationView *)annotationView;
-(id)initWithDisplayTypeController:(id)arg1 unitPreferenceController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewCallbacks:(id)arg4 activitySummaryDataProvider:(id)arg5 ;
-(void)updateWithGraphView:(id)arg1 timeScope:(long long)arg2 ;
-(void)_updateWithGraphView:(id)arg1 forTimeScopeAboveDay:(long long)arg2 ;
-(void)_updateForDayWithGraphView:(id)arg1 ;
-(id)_findFirstActivitySeriesInGraphView:(id)arg1 ;
-(_ActivityCurrentValueDataSource *)currentValueDataSource;
-(HKActivitySummaryDataProvider *)activitySummaryDataProvider;
-(void)setCurrentValueDataSource:(_ActivityCurrentValueDataSource *)arg1 ;
-(void)setActivitySummaryDataProvider:(HKActivitySummaryDataProvider *)arg1 ;
@end

