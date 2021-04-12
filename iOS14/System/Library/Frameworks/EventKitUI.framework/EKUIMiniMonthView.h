/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKUIYearMonthView.h>

@class NSDateComponents;

@interface EKUIMiniMonthView : EKUIYearMonthView {

	NSDateComponents* _dateComponents;

}

@property (nonatomic,retain) NSDateComponents * dateComponents; 
+(double)heightForInterfaceOrientation:(long long)arg1 windowSize:(CGSize)arg2 heightSizeClass:(long long)arg3 ;
-(BOOL)opaque;
-(id)headerFont;
-(id)todayNumberFont;
-(id)dayNumberFont;
-(double)circleSizeForDoubleDigit;
-(double)circleSize;
-(double)circleFrameYAdjustment;
-(double)circleFrameXAdjustment;
-(double)todayTextYAdjustment;
-(double)todayNumberKerning;
-(double)headerXAdjust;
-(double)yInset;
-(double)headerFontMaxSize;
-(double)headerFontMinSize;
-(double)headerFontKerning;
-(id)weekDayInitialsFont;
-(id)dayColorKey;
-(CGRect)frameForGridOfDays:(BOOL)arg1 ;
-(double)dayTextSize;
-(double)todayTextSize;
-(BOOL)vibrant;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSDateComponents *)dateComponents;
-(double)xInset;
-(double)xSpacing;
-(double)ySpacing;
-(id)dayColor;
-(id)initWithCalendar:(id)arg1 dateComponents:(id)arg2 ;
-(double)_gridOfDaysYAdjustment;
-(double)_gridOfDaysHeightAdjustment;
-(BOOL)showMonthName;
-(BOOL)showWeekDayInitials;
-(double)weekDayInitialsAdjustLeft;
-(double)weekDayInitialsAdjustTop;
-(double)daysXAdjustLeft;
-(double)daysYAdjustTop;
-(void)setDateComponents:(NSDateComponents *)arg1 ;
@end

