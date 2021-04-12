/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIDatePicker, _UIDatePickerDataModel, UIColor;


@protocol _UIDatePickerViewComponent
@property (assign,nonatomic,__weak) UIDatePicker * datePicker; 
@property (nonatomic,retain) _UIDatePickerDataModel * data; 
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
@optional
-(id)_textColor;
-(void)_setTextColor:(id)arg1;
-(void)setTimeInterval:(double)arg1;
-(void)_workaround66574039_datePickerDidUpdateLayoutMargins;
-(double)contentWidth;
-(double)timeInterval;
-(id)dateComponents;
-(id)_highlightColor;
-(BOOL)usesAutoLayout;
-(id)_textShadowColor;
-(void)didChangeCustomFontDesign;
-(void)setStaggerTimeIntervals:(BOOL)arg1;
-(void)_setMagnifierLineColor:(id)arg1;
-(id)primaryFirstResponder;
-(void)_setTextShadowColor:(id)arg1;
-(void)_updateDateOrTime;
-(void)setHighlightsToday:(BOOL)arg1;
-(void)setDateComponents:(id)arg1;
-(void)_setHighlightColor:(id)arg1;
-(id)_magnifierLineColor;

@required
-(void)didReset;
-(CGSize*)defaultSize;
-(void)setData:(id)arg1;
-(void)_setEnabled:(BOOL)arg1;
-(UIDatePicker *)datePicker;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1;
-(_UIDatePickerDataModel *)data;
-(void)didChangeMode;
-(void)didChangeLocale;
-(long long)datePickerStyle;
-(void)didChangeDateFrom:(id)arg1 animated:(BOOL)arg2;
-(void)didChangeToday;
-(BOOL)hasDefaultSize;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1;
-(void)_setHidesLabels:(BOOL)arg1;
-(CGSize*)_sizeThatFits:(CGSize)arg1;
-(void)setDatePicker:(id)arg1;
-(BOOL)_allowsZeroCountDownDuration;
-(void)didChangeMinuteInterval;
-(BOOL)_allowsZeroTimeInterval;
-(void)didChangeMinimumDate;
-(void)didChangeMaximumDate;
-(void)didChangeTimeZone;
-(void)didChangeCalendar;
-(BOOL)_isTimeIntervalMode;

@end

