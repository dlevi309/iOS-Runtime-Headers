/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSDateComponents;

@interface HKGraphZoomLevelConfiguration : NSObject {

	NSDateComponents* _axisLabelIntervalComponents;
	NSDateComponents* _minorAxisIntervalComponents;
	NSDateComponents* _seriesPointIntervalComponents;
	NSDateComponents* _referencePointIntervalComponents;
	long long _intendedTimeScope;
	double _seriesBlockSize;
	double _zoomLevelThreshold;
	double _canonicalSize;
	unsigned long long _majorTickCalendarUnit;
	double _approximateSeriesPointInterval;
	double _todayOffsetSize;
	double _approximateAxisLabelInterval;

}

@property (nonatomic,readonly) NSDateComponents * axisLabelIntervalComponents;                   //@synthesize axisLabelIntervalComponents=_axisLabelIntervalComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * minorAxisIntervalComponents;                   //@synthesize minorAxisIntervalComponents=_minorAxisIntervalComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * seriesPointIntervalComponents;                 //@synthesize seriesPointIntervalComponents=_seriesPointIntervalComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * referencePointIntervalComponents;              //@synthesize referencePointIntervalComponents=_referencePointIntervalComponents - In the implementation block
@property (nonatomic,readonly) long long intendedTimeScope;                                      //@synthesize intendedTimeScope=_intendedTimeScope - In the implementation block
@property (nonatomic,readonly) double seriesBlockSize;                                           //@synthesize seriesBlockSize=_seriesBlockSize - In the implementation block
@property (nonatomic,readonly) double zoomLevelThreshold;                                        //@synthesize zoomLevelThreshold=_zoomLevelThreshold - In the implementation block
@property (nonatomic,readonly) double canonicalSize;                                             //@synthesize canonicalSize=_canonicalSize - In the implementation block
@property (nonatomic,readonly) unsigned long long majorTickCalendarUnit;                         //@synthesize majorTickCalendarUnit=_majorTickCalendarUnit - In the implementation block
@property (nonatomic,readonly) double approximateSeriesPointInterval;                            //@synthesize approximateSeriesPointInterval=_approximateSeriesPointInterval - In the implementation block
@property (nonatomic,readonly) double todayOffsetSize;                                           //@synthesize todayOffsetSize=_todayOffsetSize - In the implementation block
@property (nonatomic,readonly) double approximateAxisLabelInterval;                              //@synthesize approximateAxisLabelInterval=_approximateAxisLabelInterval - In the implementation block
+(id)configurationForZoomLevel:(long long)arg1 ;
+(id)chartDataRangeForTimeScope:(long long)arg1 dataRange:(id)arg2 firstWeekday:(long long)arg3 calendar:(id)arg4 cadence:(long long)arg5 ;
+(long long)timeScopeForDateRange:(id)arg1 ;
+(id)chartVisibleRangeForTimeScope:(long long)arg1 anchorDate:(id)arg2 alignment:(long long)arg3 dataRange:(id)arg4 calendar:(id)arg5 firstWeekday:(long long)arg6 cadence:(long long)arg7 level:(long long)arg8 ;
+(id)defaultCalendar;
+(id)snappingRangeForRange:(id)arg1 axisRange:(id)arg2 timeScope:(long long)arg3 velocity:(CGPoint)arg4 calendar:(id)arg5 options:(long long)arg6 ;
+(id)activeRangeFromCadenceRange:(id)arg1 timeScope:(long long)arg2 axisRange:(id)arg3 calendar:(id)arg4 ;
+(id)_generateConfigurationForZoomLevel:(long long)arg1 ;
+(id)_visibleRangeDateFromAnchor:(id)arg1 timeScope:(long long)arg2 calendar:(id)arg3 offset:(long long)arg4 ;
+(id)_visibleRangeDateFromDate:(id)arg1 timeScope:(long long)arg2 calendar:(id)arg3 offset:(long long)arg4 ;
+(id)_dateOffsetByHalfCanonicalSizeOfDate:(id)arg1 timeScope:(long long)arg2 ;
+(id)_axisSpanDateComponentsWithTimeScope:(long long)arg1 ;
+(id)_findVisibleRangeForTimeScope:(long long)arg1 anchorDate:(id)arg2 alignment:(long long)arg3 calendar:(id)arg4 ;
+(id)_fitRange:(id)arg1 toDateRange:(id)arg2 timeScope:(long long)arg3 alignment:(long long)arg4 calendar:(id)arg5 firstWeekday:(long long)arg6 cadence:(long long)arg7 level:(long long)arg8 ;
+(id)_snappingStartDateWithStartDate:(id)arg1 velocity:(CGPoint)arg2 calendar:(id)arg3 timeScope:(long long)arg4 options:(long long)arg5 ;
+(id)seriesPointIntervalUnitForTimeScope:(long long)arg1 pointCount:(long long)arg2 ;
-(double)canonicalSize;
-(double)approximateSeriesPointInterval;
-(double)zoomLevelThreshold;
-(NSDateComponents *)seriesPointIntervalComponents;
-(double)seriesBlockSize;
-(NSDateComponents *)axisLabelIntervalComponents;
-(NSDateComponents *)minorAxisIntervalComponents;
-(NSDateComponents *)referencePointIntervalComponents;
-(long long)intendedTimeScope;
-(unsigned long long)majorTickCalendarUnit;
-(double)todayOffsetSize;
-(double)approximateAxisLabelInterval;
@end

