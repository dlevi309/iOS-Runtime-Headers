/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSArray;

@interface GEOPlaceDailyNormalizedHours : NSObject {

	long long _weekday;
	NSArray* _localTimeIntervals;
	double _closingSoonThresholdSeconds;
	double _openingSoonThresholdSeconds;
	BOOL _openToMidnight;
	BOOL _openFromMidnight;

}

@property (nonatomic,readonly) long long weekday;                             //@synthesize weekday=_weekday - In the implementation block
@property (nonatomic,readonly) NSArray * localTimeIntervals;                  //@synthesize localTimeIntervals=_localTimeIntervals - In the implementation block
@property (assign,nonatomic) double closingSoonThresholdSeconds;              //@synthesize closingSoonThresholdSeconds=_closingSoonThresholdSeconds - In the implementation block
@property (assign,nonatomic) double openingSoonThresholdSeconds;              //@synthesize openingSoonThresholdSeconds=_openingSoonThresholdSeconds - In the implementation block
@property (nonatomic,readonly) BOOL openToMidnight;                           //@synthesize openToMidnight=_openToMidnight - In the implementation block
@property (nonatomic,readonly) BOOL openFromMidnight;                         //@synthesize openFromMidnight=_openFromMidnight - In the implementation block
+(id)dailyNormalizedHoursForWeekday:(long long)arg1 timeIntervals:(id)arg2 closingThreshold:(double)arg3 openingThreshold:(double)arg4 openToMidnight:(BOOL)arg5 openFromMidnight:(BOOL)arg6 ;
+(long long)todaysWeekday:(long long)arg1 yesterdaysWeekday:(long long)arg2 containsTimeFromMidnight:(double)arg3 inNormalizedHours:(id)arg4 ;
+(long long)getWeekdayForDate:(id)arg1 inNormalizedHours:(id)arg2 timeZone:(id)arg3 ;
-(long long)weekday;
-(id)description;
-(BOOL)openFromMidnight;
-(BOOL)openToMidnight;
-(NSArray *)localTimeIntervals;
-(double)closingSoonThresholdSeconds;
-(void)setClosingSoonThresholdSeconds:(double)arg1 ;
-(double)openingSoonThresholdSeconds;
-(void)setOpeningSoonThresholdSeconds:(double)arg1 ;
@end

