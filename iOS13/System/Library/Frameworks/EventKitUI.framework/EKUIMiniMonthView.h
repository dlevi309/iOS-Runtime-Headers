/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)opaque;
-(NSDateComponents *)dateComponents;
-(void)setDateComponents:(NSDateComponents *)arg1 ;
-(id)headerFont;
-(BOOL)vibrant;
-(BOOL)showMonthName;
-(double)xInset;
-(double)yInset;
-(BOOL)showWeekDayInitials;
-(double)weekDayInitialsAdjustLeft;
-(double)weekDayInitialsAdjustTop;
-(double)daysXAdjustLeft;
-(double)daysYAdjustTop;
-(double)xSpacing;
-(double)ySpacing;
-(id)todayNumberFont;
-(id)dayNumberFont;
-(double)circleSizeForDoubleDigit;
-(double)circleSize;
-(double)circleFrameYAdjustment;
-(double)circleFrameXAdjustment;
-(double)todayTextYAdjustment;
-(double)todayNumberKerning;
-(double)headerXAdjust;
-(double)headerFontMaxSize;
-(double)headerFontMinSize;
-(double)headerFontKerning;
-(id)weekDayInitialsFont;
-(id)dayColorKey;
-(id)dayColor;
-(CGRect)frameForGridOfDays:(BOOL)arg1 ;
-(double)dayTextSize;
-(double)todayTextSize;
-(id)initWithCalendar:(id)arg1 dateComponents:(id)arg2 ;
-(double)_gridOfDaysYAdjustment;
-(double)_gridOfDaysHeightAdjustment;
@end

