/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIDatePickerCalendarHeaderViewDelegate.h>
#import <UIKitCore/_UIDatePickerCalendarDateViewDelegate.h>
#import <UIKitCore/_UIDatePickerCalendarTimeViewDelegate.h>
#import <UIKitCore/_UIDatePickerCalendarMonthYearSelectorDelegate.h>
#import <UIKitCore/_UIDatePickerViewComponent.h>

@class UIDatePicker, _UIDatePickerDataModel, UIColor, UIStackView, _UIDatePickerCalendarHeaderView, _UIDatePickerCalendarDateView, _UIDatePickerCalendarTimeView, _UIDatePickerDateRange, _UIDatePickerCalendarMonthYearSelector, NSLayoutConstraint, NSString;

@interface _UIDatePickerCalendarView : UIView <_UIDatePickerCalendarHeaderViewDelegate, _UIDatePickerCalendarDateViewDelegate, _UIDatePickerCalendarTimeViewDelegate, _UIDatePickerCalendarMonthYearSelectorDelegate, _UIDatePickerViewComponent> {

	struct {
		unsigned needsUpdateDate : 1;
		unsigned isEnabled : 1;
	}  _flags;
	UIStackView* _contentView;
	_UIDatePickerCalendarHeaderView* _headerView;
	_UIDatePickerCalendarDateView* _dateView;
	_UIDatePickerCalendarTimeView* _timeView;
	_UIDatePickerDateRange* _dateRange;
	long long _viewState;
	_UIDatePickerCalendarMonthYearSelector* _monthYearSelector;
	NSLayoutConstraint* _minimumWidthConstraint;
	NSLayoutConstraint* _maximumWidthConstraint;
	CGSize _lastSize;
	unsigned long long _stateUpdatesInFlight;
	UIDatePicker* _datePicker;
	_UIDatePickerDataModel* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIDatePicker * datePicker;                                                                                          //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) _UIDatePickerDataModel * data;                                                                                             //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long datePickerStyle; 
@property (assign,setter=_setAllowsZeroCountDownDuration:,getter=_allowsZeroCountDownDuration,nonatomic) BOOL allowsZeroCountDownDuration; 
@property (assign,setter=_setAllowsZeroTimeInterval:,getter=_allowsZeroTimeInterval,nonatomic) BOOL allowsZeroTimeInterval; 
@property (getter=_isTimeIntervalMode,nonatomic,readonly) BOOL isTimeIntervalMode; 
@property (assign,nonatomic) double timeInterval; 
@property (nonatomic,readonly) double contentWidth; 
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (setter=_setMagnifierLineColor:,getter=_magnifierLineColor,nonatomic,retain) UIColor * magnifierLineColor; 
-(void)layoutMarginsDidChange;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_workaround66574039_datePickerDidUpdateLayoutMargins;
-(void)didReset;
-(void)_updateMonthYearSelectorForSelectedDay:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateSelectedDayToDayInMonth:(id)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)_updateSelectedDay:(id)arg1 time:(id)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4 ;
-(void)_updateTimeViewForSelectedTime:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateDateViewForVisibleMonth:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldUpdateMonthYearSelectorForSelectedDay:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_updateDateViewForSelectedDay:(id)arg1 animated:(BOOL)arg2 ;
-(CGSize)defaultSize;
-(BOOL)_shouldUpdateHeaderViewForVisibleMonth:(id)arg1 ;
-(BOOL)_shouldUpdateDataForComponents:(id)arg1 date:(id)arg2 ;
-(BOOL)_shouldUpdateDateViewForSelectedDay:(id)arg1 ;
-(void)setData:(_UIDatePickerDataModel *)arg1 ;
-(void)_setEnabled:(BOOL)arg1 ;
-(BOOL)_shouldUpdateHeaderViewForSelectedDay:(id)arg1 ;
-(UIDatePicker *)datePicker;
-(void)layoutSubviews;
-(void)_updateSelectedDay:(id)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_updateHeaderViewForSelectedDay:(id)arg1 ;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1 ;
-(void)_updateDate;
-(BOOL)_shouldUpdateTimeViewForSelectedTime:(id)arg1 ;
-(BOOL)_shouldUpdateDateViewForVisibleMonth:(id)arg1 ;
-(void)_updateHeaderViewForVisibleMonth:(id)arg1 ;
-(void)timeViewWillBecomeFirstResponder:(id)arg1 ;
-(void)monthYearSelector:(id)arg1 didSelectMonth:(id)arg2 ;
-(_UIDatePickerDataModel *)data;
-(void)_headerViewWantsToMoveToMonth:(id)arg1 ;
-(void)_updateContentSizeLimitations;
-(void)_updateVisibleMonth:(id)arg1 animated:(BOOL)arg2 ;
-(void)didChangeCustomFontDescriptor;
-(void)didChangeMode;
-(void)_reloadDateView;
-(void)_reloadTimeView;
-(void)didChangeLocale;
-(long long)datePickerStyle;
-(void)_reloadDateRange;
-(void)_updateSelectedTime:(id)arg1 notify:(BOOL)arg2 ;
-(void)didChangeDateFrom:(id)arg1 animated:(BOOL)arg2 ;
-(void)didChangeToday;
-(BOOL)hasDefaultSize;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1 ;
-(void)_setHidesLabels:(BOOL)arg1 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 ;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(BOOL)usesAutoLayout;
-(BOOL)_allowsZeroCountDownDuration;
-(void)_setupMonthYearSelector;
-(void)_reloadMonthYearSelector;
-(void)_destroyMonthYearSelector;
-(void)_updateModuleVisibility;
-(void)dateView:(id)arg1 didSelectDate:(id)arg2 ;
-(void)timeView:(id)arg1 didSelectTime:(id)arg2 ;
-(void)timeViewDidBeginEditing:(id)arg1 ;
-(void)_updateDataForComponents:(id)arg1 ;
-(void)didChangeMinuteInterval;
-(BOOL)_allowsZeroTimeInterval;
-(void)headerViewDidStepForward:(id)arg1 ;
-(void)_updateEnabledStyling;
-(id)primaryFirstResponder;
-(void)headerViewDidSelect:(id)arg1 ;
-(void)_updateViewState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)didChangeMinimumDate;
-(void)didChangeMaximumDate;
-(void)_reloadHeaderView;
-(void)didChangeTimeZone;
-(void)headerViewDidStepBackward:(id)arg1 ;
-(void)didChangeCalendar;
-(void)_reload;
-(void)dateView:(id)arg1 didShowMonth:(id)arg2 ;
-(void)timeViewDidEndEditing:(id)arg1 ;
-(void)_updateDateIfNeeded;
-(void)_setNeedsUpdateDate;
-(BOOL)_isTimeIntervalMode;
-(void)_updateCustomFonts;
@end

