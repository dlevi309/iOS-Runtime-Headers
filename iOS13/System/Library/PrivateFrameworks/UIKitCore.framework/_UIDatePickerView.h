/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPickerView.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKitCore/_UIDatePickerViewComponent.h>

@class UIDatePicker, _UIDatePickerDataModel, UIColor, _UIDatePickerMode, UILabel, NSCalendar, NSLocale, UIFont, NSString;

@interface _UIDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource, _UIDatePickerViewComponent> {

	long long _loadingDate;
	BOOL _allowsZeroTimeInterval;
	_UIDatePickerMode* _mode;
	UILabel* _hourLabel;
	UILabel* _minuteLabel;
	int _expectedAMPM;
	struct {
		unsigned staggerTimeIntervals : 1;
		unsigned loadingDateOrTime : 1;
		unsigned highlightsToday : 1;
		unsigned usesBlackChrome : 1;
	}  _datePickerFlags;
	UIDatePicker* _datePicker;
	_UIDatePickerDataModel* _data;

}

@property (assign,nonatomic) BOOL highlightsToday; 
@property (nonatomic,readonly) NSCalendar * calendar; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (getter=_amPmValue,nonatomic,readonly) long long amPmValue; 
@property (getter=_hrMinFont,nonatomic,readonly) UIFont * hrMinFont; 
@property (nonatomic,retain) _UIDatePickerDataModel * data;                                                                                             //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) double timeInterval; 
@property (assign,setter=_setUsesBlackChrome:,getter=_usesBlackChrome,nonatomic) BOOL usesBlackChrome; 
@property (assign,setter=_setAllowsZeroCountDownDuration:,getter=_allowsZeroCountDownDuration,nonatomic) BOOL allowsZeroCountDownDuration; 
@property (assign,setter=_setAllowsZeroTimeInterval:,getter=_allowsZeroTimeInterval,nonatomic) BOOL allowsZeroTimeInterval; 
@property (nonatomic,readonly) double contentWidth; 
@property (getter=_isTimeIntervalMode,nonatomic,readonly) BOOL isTimeIntervalMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIDatePicker * datePicker;                                                                                          //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,readonly) long long datePickerStyle; 
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (setter=_setMagnifierLineColor:,getter=_magnifierLineColor,nonatomic,retain) UIColor * magnifierLineColor; 
-(void)dealloc;
-(double)timeInterval;
-(_UIDatePickerDataModel *)data;
-(void)setData:(_UIDatePickerDataModel *)arg1 ;
-(id)shadowColor;
-(double)contentWidth;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)_setMode:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 widthForComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(BOOL)_isTimeIntervalMode;
-(void)setTimeInterval:(double)arg1 ;
-(long long)datePickerMode;
-(void)didChangeMode;
-(void)didChangeLocale;
-(void)didChangeTimeZone;
-(void)didChangeCalendar;
-(void)didChangeDateFrom:(id)arg1 animated:(BOOL)arg2 ;
-(void)didChangeMinimumDate;
-(void)didChangeMaximumDate;
-(void)didChangeMinuteInterval;
-(BOOL)hasDefaultSize;
-(void)setHighlightsToday:(BOOL)arg1 ;
-(void)_setHidesLabels:(BOOL)arg1 ;
-(BOOL)_updateDateOrTime;
-(BOOL)_allowsZeroCountDownDuration;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1 ;
-(BOOL)_allowsZeroTimeInterval;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(long long)datePickerStyle;
-(void)_setUsesBlackChrome:(BOOL)arg1 ;
-(BOOL)_usesBlackChrome;
-(id)_selectedTextForCalendarUnit:(unsigned long long)arg1 ;
-(id)_labelTextForCalendarUnit:(unsigned long long)arg1 ;
-(BOOL)staggerTimeIntervals;
-(void)_updateLabels:(BOOL)arg1 ;
-(long long)_selectionBarRowInComponent:(long long)arg1 ;
-(BOOL)highlightsToday;
-(id)_minutesStringForHour:(long long)arg1 minutes:(long long)arg2 ;
-(id)_hoursStringForHour:(long long)arg1 ;
-(id)_hrMinFont;
-(void)_datePickerReset:(id)arg1 ;
-(void)_todayChanged:(id)arg1 ;
-(BOOL)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(long long)arg1 ;
-(id)pickerImageNamePrefix;
-(id)_orientationImageSuffix;
-(void)_doneLoadingDateOrTime;
-(void)_loadDateAnimated:(BOOL)arg1 ;
-(void)_updateEnabledCellsIncludingWMDCells:(BOOL)arg1 ;
-(long long)_amPmValue;
-(void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4 ;
-(id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)arg1 withLastManipulatedComponent:(long long)arg2 ;
-(int)_selectedHourForColumn:(int)arg1 ;
-(void)_fadeLabelForCalendarUnit:(unsigned long long)arg1 toText:(id)arg2 animated:(BOOL)arg3 ;
-(int)_selectedMinuteForColumn:(int)arg1 ;
-(id)_labelForCalendarUnit:(unsigned long long)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)_updateTextColorForCalendarUnitLabel:(id)arg1 ;
-(void)_updateLabelColors;
-(id)_contentViewForSizingLabelForPositioningInComponent:(long long)arg1 ;
-(id)_makeNewCalendarUnitLabel;
-(void)_positionLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 relativeTo:(id)arg3 order:(long long)arg4 ;
-(void)_setLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)_viewForSelectedRowInComponent:(long long)arg1 ;
-(UIDatePicker *)datePicker;
-(double)_tableRowHeight;
-(BOOL)_showingDate;
-(void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3 ;
-(void)_UIAppearance_setTextColor:(id)arg1 ;
-(void)_resetSelectionOfTables;
-(id)_existingLabelForCalendarUnit:(unsigned long long)arg1 ;
@end

