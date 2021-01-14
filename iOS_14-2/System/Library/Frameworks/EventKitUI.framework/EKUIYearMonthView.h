/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class EKCalendarDate, NSString, NSSet, NSCalendar, UIView, EKUIOverlayCalendarSignificantDatesProvider, UIFont, UIColor;

@interface EKUIYearMonthView : UIView <_UICursorInteractionDelegate> {

	EKCalendarDate* _endCalendarDate;
	NSString* _monthString;
	long long _firstDayIndex;
	long long _daysInWeek;
	long long _todayIndex;
	NSSet* _firstOfOverlayMonthIndices;
	NSSet* _firstOfOverlayYearIndices;
	NSCalendar* _calendar;
	UIView* _hidingView;
	UIView* _previewContainerView;
	BOOL _computeCircleFrameWithoutAdjustments;
	EKCalendarDate* _calendarDate;
	EKUIOverlayCalendarSignificantDatesProvider* _overlaySignificantDatesProvider;
	double _circleSizeForDoubleDigit;

}

@property (nonatomic,readonly) double xInset; 
@property (nonatomic,readonly) double yInset; 
@property (nonatomic,readonly) double headerXAdjust; 
@property (nonatomic,readonly) double headerFontMaxSize; 
@property (nonatomic,readonly) double headerFontMinSize; 
@property (nonatomic,readonly) UIFont * headerFont; 
@property (nonatomic,readonly) double headerFontKerning; 
@property (nonatomic,readonly) UIFont * dayNumberFont; 
@property (nonatomic,readonly) UIFont * todayNumberFont; 
@property (nonatomic,readonly) double todayNumberKerning; 
@property (nonatomic,readonly) double dayTextSize; 
@property (nonatomic,readonly) double todayTextSize; 
@property (nonatomic,readonly) double circleSize; 
@property (nonatomic,readonly) double circleSizeForDoubleDigit;                                                          //@synthesize circleSizeForDoubleDigit=_circleSizeForDoubleDigit - In the implementation block
@property (nonatomic,readonly) double daysXAdjustLeft; 
@property (nonatomic,readonly) double daysYAdjustTop; 
@property (nonatomic,readonly) double xSpacing; 
@property (nonatomic,readonly) double ySpacing; 
@property (nonatomic,readonly) BOOL showWeekDayInitials; 
@property (nonatomic,readonly) double weekDayInitialsAdjustLeft; 
@property (nonatomic,readonly) double weekDayInitialsAdjustTop; 
@property (nonatomic,readonly) BOOL opaque; 
@property (nonatomic,readonly) BOOL showMonthName; 
@property (nonatomic,readonly) BOOL vibrant; 
@property (nonatomic,readonly) double circleFrameXAdjustment; 
@property (nonatomic,readonly) double circleFrameYAdjustment; 
@property (nonatomic,readonly) double todayTextYAdjustment; 
@property (nonatomic,readonly) double dayNumberKerning; 
@property (nonatomic,readonly) BOOL computeCircleFrameWithoutAdjustments;                                                //@synthesize computeCircleFrameWithoutAdjustments=_computeCircleFrameWithoutAdjustments - In the implementation block
@property (nonatomic,readonly) double roundedRectCornerRadius; 
@property (nonatomic,readonly) NSString * dayColorKey; 
@property (nonatomic,readonly) UIColor * dayColor; 
@property (nonatomic,readonly) UIFont * weekDayInitialsFont; 
@property (nonatomic,readonly) NSCalendar * calendar; 
@property (nonatomic,readonly) long long daysInWeek; 
@property (nonatomic,retain) EKCalendarDate * calendarDate;                                                              //@synthesize calendarDate=_calendarDate - In the implementation block
@property (nonatomic,retain) EKUIOverlayCalendarSignificantDatesProvider * overlaySignificantDatesProvider;              //@synthesize overlaySignificantDatesProvider=_overlaySignificantDatesProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForInterfaceOrientation:(long long)arg1 windowSize:(CGSize)arg2 heightSizeClass:(long long)arg3 ;
+(id)_defaultTextColor;
-(BOOL)opaque;
-(void)localeChanged;
-(void)_setUpInteraction;
-(void)tintColorDidChange;
-(id)cursorInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(UIFont *)headerFont;
-(NSCalendar *)calendar;
-(void)_updateToday;
-(void)_getMetricsForDayIndex:(long long)arg1 textFrame:(CGRect*)arg2 circleFrame:(CGRect*)arg3 ;
-(UIFont *)todayNumberFont;
-(UIFont *)dayNumberFont;
-(CGSize)roundedRectSizeForDayNumberString:(id)arg1 ;
-(double)circleSizeForDoubleDigit;
-(double)circleSize;
-(BOOL)computeCircleFrameWithoutAdjustments;
-(double)circleFrameYAdjustment;
-(double)circleFrameXAdjustment;
-(double)todayTextYAdjustment;
-(double)todayNumberKerning;
-(long long)_dayIndexForPoint:(CGPoint)arg1 ;
-(CGRect)_monthNameFrame;
-(id)_imageForDayNumber:(id)arg1 size:(CGSize)arg2 underlineThickness:(double)arg3 forPreview:(BOOL)arg4 ;
-(double)headerXAdjust;
-(double)yInset;
-(id)_imageForMonthName:(id)arg1 forPreview:(BOOL)arg2 ;
-(BOOL)_pointIntersectsMonthName:(CGPoint)arg1 ;
-(void)_adjustHidingViewToFrame:(CGRect)arg1 ;
-(void)_updateFirstOfMonthAndYearIndices;
-(BOOL)containsCalendarDate:(id)arg1 ;
-(void)_warmImageCache;
-(BOOL)isCurrentMonth;
-(double)headerFontMaxSize;
-(double)headerFontMinSize;
-(double)headerFontKerning;
-(id)monthNameForDate:(id)arg1 ;
-(UIFont *)weekDayInitialsFont;
-(NSString *)dayColorKey;
-(double)dayNumberKerning;
-(id)initWithCalendarDate:(id)arg1 calendar:(id)arg2 ;
-(void)updateToday;
-(BOOL)pointIsAboveMonthNameBaseline:(CGPoint)arg1 ;
-(void)setCalendarDate:(EKCalendarDate *)arg1 ;
-(CGRect)frameForGridOfDays:(BOOL)arg1 ;
-(CGPoint)headerOrigin;
-(void)pulseTodayCircle;
-(CGRect)frameForTodayHighlight;
-(id)monthString;
-(double)dayTextSize;
-(double)todayTextSize;
-(id)calendarDateForPoint:(CGPoint)arg1 ;
-(id)_generatePreviewForDayIndex:(long long)arg1 ;
-(id)_generatePreviewForMonthTitle;
-(id)_containerForPreview;
-(void)overlaySignificantDatesChangedInRange:(id)arg1 ;
-(void)setOverlaySignificantDatesProvider:(EKUIOverlayCalendarSignificantDatesProvider *)arg1 ;
-(double)minHeaderFontSizeUsed;
-(EKUIOverlayCalendarSignificantDatesProvider *)overlaySignificantDatesProvider;
-(void)drawRect:(CGRect)arg1 ;
-(EKCalendarDate *)calendarDate;
-(NSString *)description;
-(BOOL)vibrant;
-(double)roundedRectCornerRadius;
-(void)_reloadCachedValues;
-(double)xInset;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 ;
-(long long)daysInWeek;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 ;
-(double)xSpacing;
-(double)ySpacing;
-(UIColor *)dayColor;
-(BOOL)shouldAddPreciseInteractivity;
-(BOOL)showMonthName;
-(id)_imageForMonthName:(id)arg1 ;
-(CGPoint)_monthNameOriginPoint;
-(BOOL)showWeekDayInitials;
-(double)weekDayInitialsAdjustLeft;
-(double)weekDayInitialsAdjustTop;
-(id)_weekDayInitialsImage;
-(double)daysXAdjustLeft;
-(double)daysYAdjustTop;
-(id)_imageForMonthDays:(long long)arg1 size:(CGSize)arg2 underlineThickness:(double)arg3 ;
-(id)_imageForDayNumber:(id)arg1 size:(CGSize)arg2 underlineThickness:(double)arg3 ;
-(void)_getTodayNumberTextFrame:(CGRect*)arg1 circleFrame:(CGRect*)arg2 ;
-(BOOL)_shouldUseRoundedRectInsteadOfCircle;
-(id)_todayAttributes;
@end

