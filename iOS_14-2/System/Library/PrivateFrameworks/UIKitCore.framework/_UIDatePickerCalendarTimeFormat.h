/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, NSNumberFormatter;

@interface _UIDatePickerCalendarTimeFormat : NSObject {

	BOOL _wantsDoubleDigitHours;
	BOOL _forceDoubleDigitHours;
	BOOL _hasLeadingLiteral;
	BOOL _hasTrailingLiteral;
	NSString* _timeFormat;
	NSString* _hourFormat;
	long long _clock;
	long long _clockLayout;
	NSNumberFormatter* _hourFormatter;
	NSNumberFormatter* _minuteFormatter;
	NSNumberFormatter* _strictHourFormatter;

}

@property (nonatomic,readonly) NSString * timeFormat;                                //@synthesize timeFormat=_timeFormat - In the implementation block
@property (nonatomic,readonly) NSString * hourFormat;                                //@synthesize hourFormat=_hourFormat - In the implementation block
@property (nonatomic,readonly) BOOL wantsDoubleDigitHours;                           //@synthesize wantsDoubleDigitHours=_wantsDoubleDigitHours - In the implementation block
@property (nonatomic,readonly) BOOL forceDoubleDigitHours;                           //@synthesize forceDoubleDigitHours=_forceDoubleDigitHours - In the implementation block
@property (nonatomic,readonly) long long clock;                                      //@synthesize clock=_clock - In the implementation block
@property (nonatomic,readonly) long long clockLayout;                                //@synthesize clockLayout=_clockLayout - In the implementation block
@property (nonatomic,readonly) BOOL hasLeadingLiteral;                               //@synthesize hasLeadingLiteral=_hasLeadingLiteral - In the implementation block
@property (nonatomic,readonly) BOOL hasTrailingLiteral;                              //@synthesize hasTrailingLiteral=_hasTrailingLiteral - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * hourFormatter;                    //@synthesize hourFormatter=_hourFormatter - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * minuteFormatter;                  //@synthesize minuteFormatter=_minuteFormatter - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * strictHourFormatter;              //@synthesize strictHourFormatter=_strictHourFormatter - In the implementation block
-(long long)clock;
-(id)initWithCalendar:(id)arg1 locale:(id)arg2 forceDoubleDigitHoursWhenFormatting:(BOOL)arg3 ;
-(id)localizedTimeStringWithHours:(unsigned long long)arg1 minutes:(unsigned long long)arg2 hourRange:(NSRange*)arg3 minuteRange:(NSRange*)arg4 ;
-(NSString *)timeFormat;
-(id)localizedTimeStringWithHours:(unsigned long long)arg1 minutes:(unsigned long long)arg2 ;
-(NSString *)hourFormat;
-(NSNumberFormatter *)hourFormatter;
-(long long)clockLayout;
-(NSNumberFormatter *)minuteFormatter;
-(BOOL)wantsDoubleDigitHours;
-(BOOL)forceDoubleDigitHours;
-(BOOL)hasLeadingLiteral;
-(NSNumberFormatter *)strictHourFormatter;
-(BOOL)hasTrailingLiteral;
@end

