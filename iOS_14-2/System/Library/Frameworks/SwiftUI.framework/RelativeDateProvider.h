/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
*/

#import <SwiftUI/BaseDateProvider.h>

@class NSDateComponents, NSDate, NSDateComponentsFormatter;

@interface RelativeDateProvider : BaseDateProvider {

	double _elapsedTime;
	NSDateComponents* _sessionComponents;
	long long _sessionTimePeriod;
	unsigned long long _sessionVisibleUnits;
	BOOL _sessionInProgress;
	NSDate* _mostRecentSessionDate;
	BOOL _disableOffsetPrefix;
	BOOL _twoDigitMinuteZeroPadding;
	BOOL _wantsSubseconds;
	BOOL _showLeadingMinutes;
	BOOL _pauseTimerAtZero;
	NSDate* _date;
	NSDate* _relativeDate;
	unsigned long long _calendarUnits;
	long long _relativeDateStyle;
	NSDateComponentsFormatter* _formatter;

}

@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDate * relativeDate;                              //@synthesize relativeDate=_relativeDate - In the implementation block
@property (assign,nonatomic) unsigned long long calendarUnits;                   //@synthesize calendarUnits=_calendarUnits - In the implementation block
@property (assign,nonatomic) long long relativeDateStyle;                        //@synthesize relativeDateStyle=_relativeDateStyle - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (assign,nonatomic) BOOL disableOffsetPrefix;                           //@synthesize disableOffsetPrefix=_disableOffsetPrefix - In the implementation block
@property (assign,nonatomic) BOOL twoDigitMinuteZeroPadding;                     //@synthesize twoDigitMinuteZeroPadding=_twoDigitMinuteZeroPadding - In the implementation block
@property (assign,nonatomic) BOOL wantsSubseconds;                               //@synthesize wantsSubseconds=_wantsSubseconds - In the implementation block
@property (assign,nonatomic) BOOL showLeadingMinutes;                            //@synthesize showLeadingMinutes=_showLeadingMinutes - In the implementation block
@property (assign,nonatomic) BOOL pauseTimerAtZero;                              //@synthesize pauseTimerAtZero=_pauseTimerAtZero - In the implementation block
+(BOOL)_configureFormatter:(id)arg1 fallbackIndex:(unsigned long long)arg2 style:(long long)arg3 ;
-(NSDateComponentsFormatter *)formatter;
-(void)setDate:(NSDate *)arg1 ;
-(void)setFormatter:(NSDateComponentsFormatter *)arg1 ;
-(void)_endSession;
-(NSDate *)date;
-(id)_sessionTextForIndex:(long long)arg1 ;
-(void)_startSessionWithDate:(id)arg1 ;
-(long long)_updateFrequency;
-(unsigned long long)calendarUnits;
-(void)setCalendarUnits:(unsigned long long)arg1 ;
-(id)formattedString;
-(NSDate *)relativeDate;
-(BOOL)_timerIsPausedAtZero;
-(long long)_timePeriodForElapsedTime:(double)arg1 ;
-(id)initWithDate:(id)arg1 relativeToDate:(id)arg2 units:(unsigned long long)arg3 style:(long long)arg4 calendar:(id)arg5 locale:(id)arg6 ;
-(id)_componentsForDate:(id)arg1 visibleUnits:(unsigned long long*)arg2 ;
-(void)_configureFormatterForTimerStyle;
-(id)_signPrefixString;
-(id)initWithDate:(id)arg1 units:(unsigned long long)arg2 style:(long long)arg3 calendar:(id)arg4 locale:(id)arg5 ;
-(void)setRelativeDate:(NSDate *)arg1 ;
-(long long)relativeDateStyle;
-(BOOL)wantsSubseconds;
-(void)setRelativeDateStyle:(long long)arg1 ;
-(BOOL)disableOffsetPrefix;
-(void)setDisableOffsetPrefix:(BOOL)arg1 ;
-(BOOL)twoDigitMinuteZeroPadding;
-(void)setTwoDigitMinuteZeroPadding:(BOOL)arg1 ;
-(void)setWantsSubseconds:(BOOL)arg1 ;
-(BOOL)showLeadingMinutes;
-(void)setShowLeadingMinutes:(BOOL)arg1 ;
-(BOOL)pauseTimerAtZero;
-(void)setPauseTimerAtZero:(BOOL)arg1 ;
@end

