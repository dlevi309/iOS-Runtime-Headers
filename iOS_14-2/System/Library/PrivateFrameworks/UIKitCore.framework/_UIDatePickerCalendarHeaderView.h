/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@protocol _UIDatePickerCalendarHeaderViewDelegate;
@class UIPointerInteraction, NSDateFormatter, UIView, _UIDatePickerLinkedLabel, UIImageView, UIButton, NSDate, NSCalendar, NSLocale, _UIDatePickerDateRange, NSString, _UIDatePickerCalendarMonth, _UIDatePickerCalendarDay;

@interface _UIDatePickerCalendarHeaderView : UIView <UIPointerInteractionDelegate> {

	UIPointerInteraction* _pointerInteraction;
	NSDateFormatter* _longFormatter;
	NSDateFormatter* _shortFormatter;
	UIView* _monthYearSelectorContainer;
	_UIDatePickerLinkedLabel* _monthYearLabel;
	UIImageView* _chevron;
	UIButton* _previousMonthButton;
	UIButton* _nextMonthButton;
	NSDate* _lastCalculatedYearStart;
	NSDate* _lastCalculatedYearEnd;
	BOOL _expanded;
	id<_UIDatePickerCalendarHeaderViewDelegate> _delegate;
	NSCalendar* _calendar;
	NSLocale* _locale;
	_UIDatePickerDateRange* _dateRange;
	NSString* _customFontDesign;
	_UIDatePickerCalendarMonth* _visibleMonth;
	_UIDatePickerCalendarDay* _selectedDay;

}

@property (assign,nonatomic,__weak) id<_UIDatePickerCalendarHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                                                  //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) _UIDatePickerDateRange * dateRange;                                     //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,retain) NSString * customFontDesign;                                              //@synthesize customFontDesign=_customFontDesign - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarMonth * visibleMonth;                                //@synthesize visibleMonth=_visibleMonth - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarDay * selectedDay;                                   //@synthesize selectedDay=_selectedDay - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                          //@synthesize expanded=_expanded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(void)tintColorDidChange;
-(NSLocale *)locale;
-(void)reloadWithCalendar:(id)arg1 locale:(id)arg2 dateRange:(id)arg3 visibleMonth:(id)arg4 selectedDay:(id)arg5 ;
-(_UIDatePickerDateRange *)dateRange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_didTap:(id)arg1 ;
-(id<_UIDatePickerCalendarHeaderViewDelegate>)delegate;
-(NSCalendar *)calendar;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)setDelegate:(id<_UIDatePickerCalendarHeaderViewDelegate>)arg1 ;
-(_UIDatePickerCalendarMonth *)visibleMonth;
-(_UIDatePickerCalendarDay *)selectedDay;
-(void)_updateFonts;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)_setupDateFormatter;
-(void)_setupViewHierarchy;
-(void)_reloadDateFormatters;
-(void)setSelectedDay:(_UIDatePickerCalendarDay *)arg1 ;
-(NSString *)customFontDesign;
-(void)setVisibleMonth:(_UIDatePickerCalendarMonth *)arg1 ;
-(void)_adjustMonth:(id)arg1 ;
-(void)_setupGestureRecognizers;
-(void)_updateMonthButtonImages;
-(void)_updateMonthYearLabel;
-(void)_updateMonthButtonEnablement;
-(void)_updatePossibleTitlesIfNeccessaryForDate:(id)arg1 ;
-(void)_updateMonthButtonVisibility;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCustomFontDesign:(NSString *)arg1 ;
-(void)_reload;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

