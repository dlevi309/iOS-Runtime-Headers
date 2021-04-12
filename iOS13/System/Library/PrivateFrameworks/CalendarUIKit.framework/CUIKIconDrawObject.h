/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


#import <CalendarUIKit/CalendarUIKit-Structs.h>
@class NSCalendar, NSString, CUIKIconSizeMetrics;

@interface CUIKIconDrawObject : NSObject {

	NSCalendar* _calendar;
	NSString* _dayNumber;
	/*^block*/id _dateNameBlock;
	long long _dateNameFormatType;
	double _canvasScale;
	CUIKIconSizeMetrics* _sizeMetrics;
	CGSize _canvasSize;

}

@property (nonatomic,copy,readonly) NSCalendar * calendar;                     //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy,readonly) NSString * dayNumber;                      //@synthesize dayNumber=_dayNumber - In the implementation block
@property (nonatomic,readonly) id dateNameBlock;                               //@synthesize dateNameBlock=_dateNameBlock - In the implementation block
@property (nonatomic,readonly) long long dateNameFormatType;                   //@synthesize dateNameFormatType=_dateNameFormatType - In the implementation block
@property (nonatomic,readonly) CGSize canvasSize;                              //@synthesize canvasSize=_canvasSize - In the implementation block
@property (nonatomic,readonly) double canvasScale;                             //@synthesize canvasScale=_canvasScale - In the implementation block
@property (nonatomic,readonly) CUIKIconSizeMetrics * sizeMetrics;              //@synthesize sizeMetrics=_sizeMetrics - In the implementation block
+(id)countriesRequiringBlackDayOfWeek;
+(BOOL)isBlackDayOfWeekRequiredForLocale:(id)arg1 ;
+(id)defaultDayNumberFontWithSize:(double)arg1 ;
+(id)systemG2FromFont:(id)arg1 ;
-(NSCalendar *)calendar;
-(CUIKIconSizeMetrics *)sizeMetrics;
-(CGSize)canvasSize;
-(id)dayNumberFont;
-(NSString *)dayNumber;
-(void)draw;
-(void)_drawDayNumber;
-(void)_drawDateName;
-(id)dateNameBlock;
-(long long)dateNameFormatType;
-(id)dateNameFont:(id)arg1 ;
-(id)colorForDayOfWeek;
-(double)resizeAttributedString:(id)arg1 withDateName:(id)arg2 font:(id)arg3 ctx:(id)arg4 maxSize:(CGSize)arg5 ;
-(BOOL)sizeMetricsAreHomeScreenSize;
-(double)canvasScale;
-(id)dateNameFontForDateName:(id)arg1 size:(double)arg2 ;
-(double)dateNameFontSizeForDateName:(id)arg1 ;
-(id)initWithCalendar:(id)arg1 dayNumber:(id)arg2 dateNameBlock:(/*^block*/id)arg3 dateNameFormatType:(long long)arg4 canvasSize:(CGSize)arg5 canvasScale:(double)arg6 ;
@end

