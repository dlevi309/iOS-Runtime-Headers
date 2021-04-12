/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPickerView.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKitCore/_UIDatePickerViewComponent.h>

@class _UIDatePickerMode, UILabel, UIDatePicker, _UIDatePickerDataModel, NSCalendar, NSLocale, UIFont, NSString, UIColor;

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
-(void)_setTextColor:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)_setMode:(id)arg1 ;
-(BOOL)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(long long)arg1 ;
-(id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)arg1 withLastManipulatedComponent:(long long)arg2 ;
-(void)setTimeInterval:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didReset;
-(id)shadowColor;
-(double)contentWidth;
-(void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3 ;
-(double)timeInterval;
-(id)_hrMinFont;
-(long long)_amPmValue;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)setData:(_UIDatePickerDataModel *)arg1 ;
-(UIDatePicker *)datePicker;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1 ;
-(_UIDatePickerDataModel *)data;
-(void)_setUsesBlackChrome:(BOOL)arg1 ;
-(BOOL)_usesBlackChrome;
-(id)_selectedTextForCalendarUnit:(unsigned long long)arg1 ;
-(id)_labelTextForCalendarUnit:(unsigned long long)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(BOOL)staggerTimeIntervals;
-(double)pickerView:(id)arg1 widthForComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)_updateLabels:(BOOL)arg1 ;
-(long long)_selectionBarRowInComponent:(long long)arg1 ;
-(BOOL)highlightsToday;
-(id)_minutesStringForHour:(long long)arg1 minutes:(long long)arg2 ;
-(id)_hoursStringForHour:(long long)arg1 ;
-(id)pickerImageNamePrefix;
-(id)_orientationImageSuffix;
-(void)_doneLoadingDateOrTime;
-(void)_loadDateAnimated:(BOOL)arg1 ;
-(void)_updateEnabledCellsIncludingWMDCells:(BOOL)arg1 ;
-(int)_selectedHourForColumn:(int)arg1 ;
-(void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4 ;
-(void)_fadeLabelForCalendarUnit:(unsigned long long)arg1 toText:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateLabelColors;
-(void)didChangeMode;
-(int)_selectedMinuteForColumn:(int)arg1 ;
-(id)_labelForCalendarUnit:(unsigned long long)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)_updateTextColorForCalendarUnitLabel:(id)arg1 ;
-(id)_makeNewCalendarUnitLabel;
-(id)_viewForSelectedRowInComponent:(long long)arg1 ;
-(id)_contentViewForSizingLabelForPositioningInComponent:(long long)arg1 ;
-(void)_positionLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 relativeTo:(id)arg3 order:(long long)arg4 ;
-(double)_tableRowHeight;
-(void)_setLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_UIAppearance_setTextColor:(id)arg1 ;
-(void)_resetSelectionOfTables;
-(id)_existingLabelForCalendarUnit:(unsigned long long)arg1 ;
-(void)didChangeLocale;
-(long long)datePickerStyle;
-(long long)datePickerMode;
-(void)didChangeDateFrom:(id)arg1 animated:(BOOL)arg2 ;
-(void)didChangeToday;
-(BOOL)hasDefaultSize;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1 ;
-(void)_setHidesLabels:(BOOL)arg1 ;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(BOOL)_allowsZeroCountDownDuration;
-(void)didChangeMinuteInterval;
-(BOOL)_allowsZeroTimeInterval;
-(void)didChangeMinimumDate;
-(void)didChangeMaximumDate;
-(void)didChangeTimeZone;
-(void)didChangeCalendar;
-(BOOL)_updateDateOrTime;
-(BOOL)_showingDate;
-(BOOL)_isTimeIntervalMode;
-(void)setHighlightsToday:(BOOL)arg1 ;
-(void)dealloc;
@end
