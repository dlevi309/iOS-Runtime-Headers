/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class HKDateCache, CALayer, UIColor, UIFont, NSDate;

@interface HKCalendarDayCell : CALayer {

	long long _dayOfMonth;
	BOOL _selected;
	BOOL _representsToday;
	HKDateCache* _dateCache;
	CALayer* _circle;
	CALayer* _dayLabel;
	UIColor* _textColor;
	UIFont* _font;
	UIFont* _boldFont;
	double _dayDiameter;
	NSDate* _date;

}

@property (nonatomic,readonly) HKDateCache * dateCache;                    //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,readonly) CALayer * circle;                           //@synthesize circle=_circle - In the implementation block
@property (nonatomic,readonly) CALayer * dayLabel;                         //@synthesize dayLabel=_dayLabel - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                          //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIFont * boldFont;                            //@synthesize boldFont=_boldFont - In the implementation block
@property (assign,nonatomic) double dayDiameter;                           //@synthesize dayDiameter=_dayDiameter - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long dayOfMonth;                       //@synthesize dayOfMonth=_dayOfMonth - In the implementation block
@property (nonatomic,readonly) BOOL representsToday;                       //@synthesize representsToday=_representsToday - In the implementation block
+(void)clearImageCache;
-(id)init;
-(id)debugDescription;
-(NSDate *)date;
-(long long)dayOfMonth;
-(HKDateCache *)dateCache;
-(BOOL)isSelected;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setSelected:(BOOL)arg1 ;
-(UIColor *)textColor;
-(CALayer *)circle;
-(double)_roundedRectCornerRadius;
-(CGSize)circleSize;
-(UIFont *)boldFont;
-(void)setBoldFont:(UIFont *)arg1 ;
-(id)_integerNumberFormatter;
-(id)initWithDateCache:(id)arg1 ;
-(void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2 ;
-(double)dayDiameter;
-(id)_reusedImageForDateIndex:(long long)arg1 color:(id)arg2 ;
-(void)layoutOnce;
-(CGSize)_roundedRectSizeForDayNumberString:(id)arg1 ;
-(void)updateDateTextForDayNumber:(long long)arg1 textColor:(id)arg2 ;
-(void)setDayDiameter:(double)arg1 ;
-(CALayer *)dayLabel;
-(BOOL)representsToday;
@end

