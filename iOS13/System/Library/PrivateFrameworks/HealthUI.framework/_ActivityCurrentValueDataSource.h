/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKActivitySummaryAnnotationViewDataSource.h>

@protocol HKInteractiveChartCurrentValueViewCallbacks;
@class UIView;

@interface _ActivityCurrentValueDataSource : HKActivitySummaryAnnotationViewDataSource {

	BOOL _currentValueViewHasNoData;
	id<HKInteractiveChartCurrentValueViewCallbacks> _currentValueViewCallbacks;
	UIView* _noDataView;

}

@property (assign,nonatomic,__weak) id<HKInteractiveChartCurrentValueViewCallbacks> currentValueViewCallbacks;              //@synthesize currentValueViewCallbacks=_currentValueViewCallbacks - In the implementation block
@property (assign,nonatomic) BOOL currentValueViewHasNoData;                                                                //@synthesize currentValueViewHasNoData=_currentValueViewHasNoData - In the implementation block
@property (nonatomic,readonly) UIView * noDataView;                                                                         //@synthesize noDataView=_noDataView - In the implementation block
-(id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2 ;
-(long long)numberOfValuesForAnnotationView:(id)arg1 ;
-(id)dateViewWithOrientation:(long long)arg1 ;
-(id)leftMarginViewWithOrientation:(long long)arg1 ;
-(void)setCurrentValueViewCallbacks:(id<HKInteractiveChartCurrentValueViewCallbacks>)arg1 ;
-(id)_buildNoDataView;
-(BOOL)currentValueViewHasNoData;
-(UIView *)noDataView;
-(id)_localizedCurrentValueViewDateRange;
-(id)_dateRangeFromStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_dateRangeFromComponents;
-(id<HKInteractiveChartCurrentValueViewCallbacks>)currentValueViewCallbacks;
-(id)initWithDisplayTypeController:(id)arg1 unitController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewContext:(BOOL)arg4 currentValueViewCallbacks:(id)arg5 ;
-(void)setCurrentValueViewHasNoData:(BOOL)arg1 ;
@end

