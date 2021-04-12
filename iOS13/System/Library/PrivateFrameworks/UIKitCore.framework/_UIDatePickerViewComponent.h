/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)timeInterval;
-(double)contentWidth;
-(id)_textColor;
-(id)_highlightColor;
-(void)setTimeInterval:(double)arg1;
-(void)setHighlightsToday:(BOOL)arg1;
-(void)_updateDateOrTime;
-(void)_setHighlightColor:(id)arg1;
-(void)_setTextColor:(id)arg1;
-(id)_textShadowColor;
-(void)_setTextShadowColor:(id)arg1;
-(id)_magnifierLineColor;
-(void)_setMagnifierLineColor:(id)arg1;
-(id)dateComponents;
-(void)setDateComponents:(id)arg1;
-(void)setStaggerTimeIntervals:(BOOL)arg1;

@required
-(_UIDatePickerDataModel *)data;
-(void)setData:(id)arg1;
-(void)_setEnabled:(BOOL)arg1;
-(CGSize*)defaultSize;
-(void)setDatePicker:(id)arg1;
-(BOOL)_isTimeIntervalMode;
-(void)didChangeMode;
-(void)didChangeLocale;
-(void)didChangeTimeZone;
-(void)didChangeCalendar;
-(void)didChangeDateFrom:(id)arg1 animated:(BOOL)arg2;
-(void)didChangeMinimumDate;
-(void)didChangeMaximumDate;
-(void)didChangeMinuteInterval;
-(BOOL)hasDefaultSize;
-(CGSize*)_sizeThatFits:(CGSize)arg1;
-(void)_setHidesLabels:(BOOL)arg1;
-(BOOL)_allowsZeroCountDownDuration;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1;
-(BOOL)_allowsZeroTimeInterval;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1;
-(long long)datePickerStyle;
-(UIDatePicker *)datePicker;

@end

