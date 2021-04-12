/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
*/


@class NSCalendar, NSLocale, NSTimeZone;

@interface BaseDateProvider : NSObject {

	NSCalendar* _calendar;
	NSLocale* _locale;
	NSTimeZone* _timeZone;

}

@property (nonatomic,retain) NSCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                  //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
-(id)updateInterval;
-(NSTimeZone *)timeZone;
-(id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 andRemovingDesignator:(BOOL)arg2 designatorExists:(BOOL*)arg3 ;
-(NSLocale *)locale;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSCalendar *)calendar;
-(void)_endSession;
-(id)_sessionTextForIndex:(long long)arg1 ;
-(void)_startSessionWithDate:(id)arg1 ;
-(long long)_updateFrequency;
-(id)initWithCalendar:(id)arg1 locale:(id)arg2 timeZone:(id)arg3 ;
-(id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 designatorExists:(BOOL*)arg2 ;
-(id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)arg1 ;
-(id)formattedString;
@end

