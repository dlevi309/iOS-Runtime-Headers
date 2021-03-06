/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentSetupFieldText.h>

@class NSDateFormatter, NSString, NSCalendar, NSLocale, NSDate;

@interface PKPaymentSetupFieldDate : PKPaymentSetupFieldText {

	NSDateFormatter* _displayDateFormatter;
	BOOL _showsDay;
	BOOL _showsMonth;
	BOOL _showsYear;
	NSString* _submissionFormat;
	NSCalendar* _calendar;
	NSLocale* _locale;
	NSDate* _defaultDate;

}

@property (assign,nonatomic) BOOL showsDay;                          //@synthesize showsDay=_showsDay - In the implementation block
@property (assign,nonatomic) BOOL showsMonth;                        //@synthesize showsMonth=_showsMonth - In the implementation block
@property (assign,nonatomic) BOOL showsYear;                         //@synthesize showsYear=_showsYear - In the implementation block
@property (nonatomic,copy) NSString * submissionFormat;              //@synthesize submissionFormat=_submissionFormat - In the implementation block
@property (nonatomic,copy) NSDate * defaultDate;                     //@synthesize defaultDate=_defaultDate - In the implementation block
@property (nonatomic,copy) NSDate * currentValue; 
@property (nonatomic,retain) NSCalendar * calendar;                  //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                      //@synthesize locale=_locale - In the implementation block
-(id)displayString;
-(NSLocale *)locale;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSDate *)defaultDate;
-(NSCalendar *)calendar;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setDefaultDate:(NSDate *)arg1 ;
-(BOOL)showsYear;
-(void)updateWithConfiguration:(id)arg1 ;
-(BOOL)showsDay;
-(unsigned long long)fieldType;
-(NSDate *)currentValue;
-(void)updateWithAttribute:(id)arg1 ;
-(id)_submissionStringForValue:(id)arg1 ;
-(BOOL)submissionStringMeetsAllRequirements;
-(BOOL)showsMonth;
-(void)setSubmissionFormat:(NSString *)arg1 ;
-(NSString *)submissionFormat;
-(id)_defaultValueAsDateForCurrentLocale;
-(void)_commonUpdate;
-(void)setShowsDay:(BOOL)arg1 ;
-(void)setShowsMonth:(BOOL)arg1 ;
-(void)setShowsYear:(BOOL)arg1 ;
-(void)setCurrentValue:(NSDate *)arg1 ;
@end

