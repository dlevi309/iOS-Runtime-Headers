/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
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
	NSDate* _relativeToDate;
	long long _relativeDateStyle;
	unsigned long long _calendarUnits;
	long long _tritiumDateStyle;

}

@property (nonatomic,retain) NSDate * overrideDate; 
@property (assign,nonatomic) BOOL disableSmallCapUnits;                     //@synthesize disableSmallCapUnits=_disableSmallCapUnits - In the implementation block
@property (assign,nonatomic) BOOL shrinkUnitsInCJK;                         //@synthesize shrinkUnitsInCJK=_shrinkUnitsInCJK - In the implementation block
@property (assign,nonatomic) BOOL disableOffsetPrefix;                      //@synthesize disableOffsetPrefix=_disableOffsetPrefix - In the implementation block
@property (assign,nonatomic) BOOL twoDigitMinuteZeroPadding;                //@synthesize twoDigitMinuteZeroPadding=_twoDigitMinuteZeroPadding - In the implementation block
@property (assign,nonatomic) BOOL showLeadingMinutes;                       //@synthesize showLeadingMinutes=_showLeadingMinutes - In the implementation block
@property (assign,nonatomic) BOOL wantsSubseconds;                          //@synthesize wantsSubseconds=_wantsSubseconds - In the implementation block
@property (assign,nonatomic) BOOL pauseTimerAtZero;                         //@synthesize pauseTimerAtZero=_pauseTimerAtZero - In the implementation block
@property (assign,nonatomic) long long tritiumDateStyle;                    //@synthesize tritiumDateStyle=_tritiumDateStyle - In the implementation block
@property (nonatomic,retain) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDate * relativeToDate;                       //@synthesize relativeToDate=_relativeToDate - In the implementation block
@property (assign,nonatomic) long long relativeDateStyle;                   //@synthesize relativeDateStyle=_relativeDateStyle - In the implementation block
@property (assign,nonatomic) unsigned long long calendarUnits;              //@synthesize calendarUnits=_calendarUnits - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_configureFormatter:(id)arg1 fallbackIndex:(unsigned long long)arg2 style:(long long)arg3 ;
+(id)textProviderWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3 ;
+(id)textProviderWithDate:(id)arg1 relativeToDate:(id)arg2 style:(long long)arg3 units:(unsigned long long)arg4 ;
-(void)finalize;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)_validate;
-(id)description;
-(void)_endSession;
-(void)setOverrideDate:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSDate *)overrideDate;
-(void)_startSessionWithDate:(id)arg1 ;
-(long long)_updateFrequency;
-(unsigned long long)calendarUnits;
-(void)setCalendarUnits:(unsigned long long)arg1 ;
-(BOOL)_timerIsPausedAtZero;
-(long long)_timePeriodForElapsedTime:(double)arg1 ;
-(id)_componentsForDate:(id)arg1 visibleUnits:(unsigned long long*)arg2 ;
-(void)_configureFormatterForTimerStyle;
-(id)_signPrefixString;
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRelativeToDate:(NSDate *)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(void)setDisableSmallCapUnits:(BOOL)arg1 ;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_sessionCacheKey;
-(id)initWithDate:(id)arg1 relativeToDate:(id)arg2 style:(long long)arg3 units:(unsigned long long)arg4 ;
-(void)setTritiumDateStyle:(long long)arg1 ;
-(id)initWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3 ;
-(NSDate *)relativeToDate;
-(BOOL)disableSmallCapUnits;
-(BOOL)shrinkUnitsInCJK;
-(void)setShrinkUnitsInCJK:(BOOL)arg1 ;
-(long long)tritiumDateStyle;
@end

