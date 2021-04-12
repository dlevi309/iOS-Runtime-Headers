/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSDateComponentsFormatter, NSDateComponents, NSString, NSDate;

@interface CLKRelativeDateTextProvider : CLKTextProvider {

	NSDateComponentsFormatter* _formatter;
	NSDateComponents* _sessionComponents;
	unsigned long long _sessionVisibleUnits;
	NSString* _sessionCacheKey;
	long long _sessionTimePeriod;
	double _elapsedTime;
	BOOL _sessionInProgress;
	BOOL _disableSmallCapUnits;
	BOOL _shrinkUnitsInCJK;
	BOOL _disableOffsetPrefix;
	BOOL _twoDigitMinuteZeroPadding;
	BOOL _showLeadingMinutes;
	BOOL _wantsSubseconds;
	BOOL _pauseTimerAtZero;
	NSDate* _date;
	long long _relativeDateStyle;
	unsigned long long _calendarUnits;
	NSDate* _overrideDate;

}

@property (nonatomic,retain) NSDate * overrideDate;                         //@synthesize overrideDate=_overrideDate - In the implementation block
@property (assign,nonatomic) BOOL disableSmallCapUnits;                     //@synthesize disableSmallCapUnits=_disableSmallCapUnits - In the implementation block
@property (assign,nonatomic) BOOL shrinkUnitsInCJK;                         //@synthesize shrinkUnitsInCJK=_shrinkUnitsInCJK - In the implementation block
@property (assign,nonatomic) BOOL disableOffsetPrefix;                      //@synthesize disableOffsetPrefix=_disableOffsetPrefix - In the implementation block
@property (assign,nonatomic) BOOL twoDigitMinuteZeroPadding;                //@synthesize twoDigitMinuteZeroPadding=_twoDigitMinuteZeroPadding - In the implementation block
@property (assign,nonatomic) BOOL showLeadingMinutes;                       //@synthesize showLeadingMinutes=_showLeadingMinutes - In the implementation block
@property (assign,nonatomic) BOOL wantsSubseconds;                          //@synthesize wantsSubseconds=_wantsSubseconds - In the implementation block
@property (assign,nonatomic) BOOL pauseTimerAtZero;                         //@synthesize pauseTimerAtZero=_pauseTimerAtZero - In the implementation block
@property (nonatomic,retain) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long relativeDateStyle;                   //@synthesize relativeDateStyle=_relativeDateStyle - In the implementation block
@property (assign,nonatomic) unsigned long long calendarUnits;              //@synthesize calendarUnits=_calendarUnits - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_configureFormatter:(id)arg1 fallbackIndex:(unsigned long long)arg2 style:(long long)arg3 ;
+(id)textProviderWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)_validate;
-(void)_endSession;
-(long long)relativeDateStyle;
-(NSDate *)overrideDate;
-(void)setOverrideDate:(NSDate *)arg1 ;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(void)_startSessionWithDate:(id)arg1 ;
-(id)_sessionCacheKey;
-(long long)_updateFrequency;
-(void)setRelativeDateStyle:(long long)arg1 ;
-(void)setCalendarUnits:(unsigned long long)arg1 ;
-(long long)_timePeriodForElapsedTime:(double)arg1 ;
-(id)_componentsForDate:(id)arg1 visibleUnits:(unsigned long long*)arg2 ;
-(BOOL)_timerIsPausedAtZero;
-(void)_configureFormatterForTimerStyle;
-(id)_signPrefixString;
-(unsigned long long)calendarUnits;
-(BOOL)disableSmallCapUnits;
-(void)setDisableSmallCapUnits:(BOOL)arg1 ;
-(BOOL)shrinkUnitsInCJK;
-(void)setShrinkUnitsInCJK:(BOOL)arg1 ;
-(BOOL)disableOffsetPrefix;
-(void)setDisableOffsetPrefix:(BOOL)arg1 ;
-(BOOL)twoDigitMinuteZeroPadding;
-(void)setTwoDigitMinuteZeroPadding:(BOOL)arg1 ;
-(BOOL)showLeadingMinutes;
-(void)setShowLeadingMinutes:(BOOL)arg1 ;
-(BOOL)wantsSubseconds;
-(void)setWantsSubseconds:(BOOL)arg1 ;
-(BOOL)pauseTimerAtZero;
-(void)setPauseTimerAtZero:(BOOL)arg1 ;
@end

