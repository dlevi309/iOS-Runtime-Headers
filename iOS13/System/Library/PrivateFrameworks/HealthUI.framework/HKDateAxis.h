/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKAxis.h>

@class HKDateIntervalCache, NSArray;

@interface HKDateAxis : HKAxis {

	HKDateIntervalCache* _intervalCache;
	NSArray* _cachedAxisLabels;
	long long _dayScopeType;

}

@property (assign,nonatomic) long long dayScopeType;              //@synthesize dayScopeType=_dayScopeType - In the implementation block
-(id)init;
-(void)setDayScopeType:(long long)arg1 ;
-(id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2 ;
-(id)extendedModelRangeWithRange:(id)arg1 timeScope:(long long)arg2 ;
-(id)rangeForChartRect:(CGRect)arg1 zoomScale:(double)arg2 contentOffset:(CGPoint)arg3 ;
-(long long)dateZoomForZoomScale:(double)arg1 ;
-(void)offsetForValueRange:(id)arg1 chartRect:(CGRect)arg2 zoomScaleOut:(double*)arg3 contentOffsetOut:(CGPoint*)arg4 ;
-(id)zoomScaleEngine;
-(long long)dayScopeType;
-(id)_formattedStringForDate:(id)arg1 zoom:(long long)arg2 ;
-(id)stringForDate:(id)arg1 zoom:(long long)arg2 labelType:(long long)arg3 ;
-(void)_enumerateCachedCoordinatesInModelRange:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)_dateRangeForChartRange:(HKRange)arg1 zoomScale:(double)arg2 ;
-(void)_updateIntervalCacheWithModelRange:(id)arg1 zoomScale:(double)arg2 ;
-(id)_axisLabelsWithModelRange:(id)arg1 zoom:(long long)arg2 ;
-(unsigned long long)_anchorUnitForZoom:(long long)arg1 ;
-(void)_clearCachedAxisLabels;
-(BOOL)_labelsOutsideStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_setRangeForDateRange:(id)arg1 ;
@end

