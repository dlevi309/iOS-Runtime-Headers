/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


#import <CalendarUIKit/CalendarUIKit-Structs.h>
@class NSCalendar, NSString;

@interface CUIKIconDrawObject : NSObject {

	NSCalendar* _calendar;
	NSString* _dayNumber;
	NSString* _dateName;
	double _canvasScale;
	CGSize _canvasSize;

}

@property (nonatomic,copy,readonly) NSCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy,readonly) NSString * dayNumber;               //@synthesize dayNumber=_dayNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * dateName;                //@synthesize dateName=_dateName - In the implementation block
@property (nonatomic,readonly) CGSize canvasSize;                       //@synthesize canvasSize=_canvasSize - In the implementation block
@property (nonatomic,readonly) double canvasScale;                      //@synthesize canvasScale=_canvasScale - In the implementation block
+(id)countriesRequiringBlackDayOfWeek;
+(BOOL)isBlackDayOfWeekRequiredForLocale:(id)arg1 ;
-(id)_dateNameFontOfSize:(double)arg1 ;
-(void)_drawDayNumber;
-(id)_iconBlackColor;
-(NSCalendar *)calendar;
-(NSString *)dateName;
-(void)draw;
-(NSString *)dayNumber;
-(id)_dayNumberFont;
-(id)colorForDayOfWeek;
-(CGSize)canvasSize;
-(void)_drawDateName;
-(double)canvasScale;
-(double)_roundSpecToActual:(double)arg1 ;
-(id)_iconRedColor;
-(id)_dateNameFont;
-(id)initWithCalendar:(id)arg1 dayNumber:(id)arg2 dateName:(id)arg3 canvasSize:(CGSize)arg4 canvasScale:(double)arg5 ;
@end

