/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSDateIntervalFormatter, NSCalendar, NSLocale;

@interface PLDateIntervalFormatter : NSObject {

	BOOL _alwaysShowYear;
	NSDateIntervalFormatter* _dateIntervalFormatter;
	NSCalendar* _gmtCalendar;
	NSLocale* _locale;

}

@property (nonatomic,readonly) NSDateIntervalFormatter * dateIntervalFormatter;              //@synthesize dateIntervalFormatter=_dateIntervalFormatter - In the implementation block
@property (nonatomic,readonly) NSCalendar * gmtCalendar;                                     //@synthesize gmtCalendar=_gmtCalendar - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowYear;                                            //@synthesize alwaysShowYear=_alwaysShowYear - In the implementation block
+(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 ;
+(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(BOOL)arg4 ;
+(id)_currentLocalDate;
+(id)_dateFormatForDateFormatterType:(unsigned long long)arg1 displayYear:(BOOL)arg2 displayLongMonth:(BOOL)arg3 ;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 ;
-(id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(BOOL)arg4 ;
-(BOOL)_yearIsNeededForDisplayingDate:(id)arg1 ;
-(NSDateIntervalFormatter *)dateIntervalFormatter;
-(NSCalendar *)gmtCalendar;
-(BOOL)alwaysShowYear;
-(void)setAlwaysShowYear:(BOOL)arg1 ;
@end

