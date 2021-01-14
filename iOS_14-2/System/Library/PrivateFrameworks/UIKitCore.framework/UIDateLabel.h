/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSDate, NSCalendar, NSString, UIFont;

@interface UIDateLabel : UILabel {

	BOOL _forceTimeOnly;
	NSDate* _date;
	BOOL _boldForAllLocales;
	NSDate* _yesterday;
	NSDate* _today;
	NSDate* _noon;
	NSDate* _tomorrow;
	NSDate* _previousWeek;
	NSCalendar* _calendar;
	BOOL _shouldRecomputeText;
	double _paddingFromTimeToDesignator;

}

@property (nonatomic,readonly) BOOL use24HourTime; 
@property (nonatomic,readonly) BOOL timeDesignatorAppearsBeforeTime; 
@property (nonatomic,readonly) CGSize timeDesignatorSize; 
@property (getter=_dateString,nonatomic,readonly) NSString * dateString; 
@property (assign,nonatomic) BOOL shouldRecomputeText;                                //@synthesize shouldRecomputeText=_shouldRecomputeText - In the implementation block
@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double timeInterval; 
@property (nonatomic,readonly) UIFont * timeDesignatorFont; 
@property (nonatomic,readonly) NSString * timeDesignator; 
@property (assign,nonatomic) BOOL forceTimeOnly;                                      //@synthesize forceTimeOnly=_forceTimeOnly - In the implementation block
@property (assign,nonatomic) BOOL boldForAllLocales;                                  //@synthesize boldForAllLocales=_boldForAllLocales - In the implementation block
@property (assign,nonatomic) double paddingFromTimeToDesignator;                      //@synthesize paddingFromTimeToDesignator=_paddingFromTimeToDesignator - In the implementation block
+(id)_dateFormatter;
+(id)_timeOnlyDateFormatter;
+(id)pmString;
+(id)_weekdayDateFormatter;
+(id)amString;
+(id)_relativeDateFormatter;
+(id)defaultFont;
-(double)_tomorrow;
-(id)_dateWithDayDiffFromToday:(long long)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setTimeInterval:(double)arg1 ;
-(void)_didUpdateDate;
-(BOOL)timeDesignatorAppearsBeforeTime;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)_today;
-(NSString *)timeDesignator;
-(double)timeInterval;
-(void)setBoldForAllLocales:(BOOL)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)_recomputeTextIfNecessary;
-(BOOL)use24HourTime;
-(void)setShouldRecomputeText:(BOOL)arg1 ;
-(double)_noon;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)shouldRecomputeText;
-(void)drawTextInRect:(CGRect)arg1 ;
-(id)_dateString;
-(UIFont *)timeDesignatorFont;
-(id)_todayDate;
-(BOOL)forceTimeOnly;
-(CGSize)timeDesignatorSize;
-(id)text;
-(void)setForceTimeOnly:(BOOL)arg1 ;
-(void)setPaddingFromTimeToDesignator:(double)arg1 ;
-(id)_stringDrawingContext;
-(void)invalidate;
-(double)_lastWeek;
-(NSDate *)date;
-(BOOL)boldForAllLocales;
-(double)_yesterday;
-(double)paddingFromTimeToDesignator;
-(void)dealloc;
-(id)font;
-(id)_calendar;
@end

