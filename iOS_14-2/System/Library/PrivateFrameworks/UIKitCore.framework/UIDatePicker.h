/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIPickerViewScrollTesting.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UIDatePickerViewComponent;
@class UIView, _UIDatePickerDataModel, NSDate, UIColor, NSString, NSLocale, NSCalendar, NSTimeZone;

@interface UIDatePicker : UIControl <UIPickerViewScrollTesting, NSCoding> {

	UIView*<_UIDatePickerViewComponent> _pickerView;
	_UIDatePickerDataModel* _data;
	BOOL _useCurrentDateDuringDecoding;
	long long _preferredDatePickerStyle;

}

@property (assign,nonatomic) double timeInterval; 
@property (assign,setter=_setUsesBlackChrome:,getter=_usesBlackChrome,nonatomic) BOOL usesBlackChrome; 
@property (assign,setter=_setDrawsBackground:,getter=_drawsBackground,nonatomic) BOOL drawsBackground; 
@property (assign,setter=_setAllowsZeroCountDownDuration:,getter=_allowsZeroCountDownDuration,nonatomic) BOOL allowsZeroCountDownDuration; 
@property (assign,setter=_setAllowsZeroTimeInterval:,getter=_allowsZeroTimeInterval,nonatomic) BOOL allowsZeroTimeInterval; 
@property (getter=_dateUnderSelectionBar,nonatomic,readonly) NSDate * dateUnderSelectionBar; 
@property (getter=_contentWidth,nonatomic,readonly) double contentWidth; 
@property (getter=_isTimeIntervalMode,nonatomic,readonly) BOOL isTimeIntervalMode; 
@property (assign,setter=_setUseCurrentDateDuringDecoding:,getter=_useCurrentDateDuringDecoding,nonatomic) BOOL useCurrentDateDuringDecoding; 
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (setter=_setMagnifierLineColor:,getter=_magnifierLineColor,nonatomic,retain) UIColor * magnifierLineColor; 
@property (setter=_setCustomFontDesign:,getter=_customFontDesign,nonatomic,retain) NSString * customFontDesign; 
@property (assign,nonatomic) long long datePickerMode; 
@property (nonatomic,retain) NSLocale * locale; 
@property (nonatomic,copy) NSCalendar * calendar; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSDate * minimumDate; 
@property (nonatomic,retain) NSDate * maximumDate; 
@property (assign,nonatomic) double countDownDuration; 
@property (assign,nonatomic) long long minuteInterval; 
@property (assign,nonatomic) long long preferredDatePickerStyle;                                                                                           //@synthesize preferredDatePickerStyle=_preferredDatePickerStyle - In the implementation block
@property (nonatomic,readonly) long long datePickerStyle; 
-(int)hour;
-(int)second;
-(id)_textColor;
-(BOOL)resignFirstResponder;
-(id)_locale;
-(BOOL)becomeFirstResponder;
-(NSTimeZone *)timeZone;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)_setTextColor:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(NSLocale *)locale;
-(void)setTimeInterval:(double)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(int)minute;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_systemDefaultFocusGroupDescriptor;
-(NSCalendar *)calendar;
-(double)timeInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)_todayChanged:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1 ;
-(void)_setDrawsBackground:(BOOL)arg1 ;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(void)_workaround66574039_updateLayoutMargins;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_installPickerView:(id)arg1 updatingSize:(BOOL)arg2 ;
-(void)_setUpInitialValues;
-(void)invalidateIntrinsicContentSize;
-(void)_registerObservers;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(void)setDate:(id)arg1 animate:(BOOL)arg2 ;
-(void)_setUseCurrentDateDuringDecoding:(BOOL)arg1 ;
-(BOOL)_useCurrentDateDuringDecoding;
-(void)_datePickerReset:(id)arg1 ;
-(void)_updatePickerViewIfNecessary;
-(void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4 ;
-(void)setDate:(id)arg1 animated:(BOOL)arg2 ;
-(double)countDownDuration;
-(void)setCountDownDuration:(double)arg1 ;
-(void)setDatePickerMode:(long long)arg1 ;
-(void)_setCustomFontDesign:(id)arg1 ;
-(void)_setHighlightsToday:(BOOL)arg1 ;
-(id)_dateUnderSelectionBar;
-(void)_setUsesBlackChrome:(BOOL)arg1 ;
-(BOOL)_usesBlackChrome;
-(void)setPreferredDatePickerStyle:(long long)arg1 ;
-(id)_selectedTextForCalendarUnit:(unsigned long long)arg1 ;
-(id)_labelTextForCalendarUnit:(unsigned long long)arg1 ;
-(id)_lastSelectedDateComponents;
-(long long)preferredDatePickerStyle;
-(id)dateComponents;
-(BOOL)_drawsBackground;
-(id)initWithCoder:(id)arg1 ;
-(long long)minuteInterval;
-(void)awakeFromNib;
-(void)_emitEndEditing;
-(long long)datePickerStyle;
-(id)_highlightColor;
-(id)_customFontDesign;
-(long long)datePickerMode;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1 ;
-(void)_setHidesLabels:(BOOL)arg1 ;
-(id)_textShadowColor;
-(NSDate *)date;
-(BOOL)_allowsZeroCountDownDuration;
-(BOOL)_allowsZeroTimeInterval;
-(void)setStaggerTimeIntervals:(BOOL)arg1 ;
-(void)_setMagnifierLineColor:(id)arg1 ;
-(void)_setLocale:(id)arg1 ;
-(void)_emitValueChanged;
-(void)_emitBeginEditing;
-(void)_setTextShadowColor:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setMinuteInterval:(long long)arg1 ;
-(double)_contentWidth;
-(BOOL)_isTimeIntervalMode;
-(void)setHighlightsToday:(BOOL)arg1 ;
-(void)setDateComponents:(id)arg1 ;
-(void)_setHighlightColor:(id)arg1 ;
-(id)_magnifierLineColor;
@end

