/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _UIDatePickerCalendarMonthYearSelectorDelegate;
@class UIDatePicker, NSCalendar, NSLocale, _UIDatePickerDateRange, _UIDatePickerCalendarMonth;

@interface _UIDatePickerCalendarMonthYearSelector : UIView {

	UIDatePicker* _datePicker;
	id<_UIDatePickerCalendarMonthYearSelectorDelegate> _delegate;
	NSCalendar* _calendar;
	NSLocale* _locale;
	_UIDatePickerDateRange* _dateRange;
	_UIDatePickerCalendarMonth* _selectedMonth;

}

@property (assign,nonatomic,__weak) id<_UIDatePickerCalendarMonthYearSelectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                                                         //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                                             //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) _UIDatePickerDateRange * dateRange;                                            //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarMonth * selectedMonth;                                      //@synthesize selectedMonth=_selectedMonth - In the implementation block
-(NSLocale *)locale;
-(_UIDatePickerDateRange *)dateRange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<_UIDatePickerCalendarMonthYearSelectorDelegate>)delegate;
-(void)reloadWithCalendar:(id)arg1 locale:(id)arg2 dateRange:(id)arg3 selectedMonth:(id)arg4 ;
-(NSCalendar *)calendar;
-(void)_didSelectDate:(id)arg1 ;
-(void)_setSelectedMonth:(id)arg1 animated:(BOOL)arg2 updatePicker:(BOOL)arg3 notifyDelegate:(BOOL)arg4 ;
-(void)setSelectedMonth:(_UIDatePickerCalendarMonth *)arg1 ;
-(void)setDelegate:(id<_UIDatePickerCalendarMonthYearSelectorDelegate>)arg1 ;
-(_UIDatePickerCalendarMonth *)selectedMonth;
-(void)_setupViewHierarchy;
-(void)setSelectedMonth:(id)arg1 animated:(BOOL)arg2 ;
-(void)_reload;
@end

