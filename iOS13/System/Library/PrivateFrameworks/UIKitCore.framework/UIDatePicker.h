/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIPickerViewScrollTesting.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UIDatePickerViewComponent;
@class UIView, _UIDatePickerDataModel, NSDate, UIColor, NSLocale, NSCalendar, NSTimeZone;

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
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timeInterval;
-(void)setDelegate:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(int)hour;
-(int)minute;
-(int)second;
-(NSLocale *)locale;
-(id)_locale;
-(void)setBounds:(CGRect)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_drawsBackground;
-(void)invalidateIntrinsicContentSize;
-(void)_setDrawsBackground:(BOOL)arg1 ;
-(id)_systemDefaultFocusGroupDescriptor;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(id)_textColor;
-(void)awakeFromNib;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)_emitValueChanged;
-(id)_highlightColor;
-(void)setDatePickerMode:(long long)arg1 ;
-(double)_contentWidth;
-(void)_installPickerView:(id)arg1 ;
-(void)_setUpInitialValues;
-(void)_setLocale:(id)arg1 ;
-(void)setMinuteInterval:(long long)arg1 ;
-(BOOL)_isTimeIntervalMode;
-(void)setTimeInterval:(double)arg1 ;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(void)_setUseCurrentDateDuringDecoding:(BOOL)arg1 ;
-(BOOL)_useCurrentDateDuringDecoding;
-(long long)datePickerMode;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(long long)minuteInterval;
-(void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4 ;
-(void)setHighlightsToday:(BOOL)arg1 ;
-(void)setDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setHidesLabels:(BOOL)arg1 ;
-(BOOL)_allowsZeroCountDownDuration;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1 ;
-(BOOL)_allowsZeroTimeInterval;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1 ;
-(void)_setHighlightColor:(id)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(id)_textShadowColor;
-(void)_setTextShadowColor:(id)arg1 ;
-(id)_magnifierLineColor;
-(void)_setMagnifierLineColor:(id)arg1 ;
-(long long)datePickerStyle;
-(double)countDownDuration;
-(void)setCountDownDuration:(double)arg1 ;
-(id)dateComponents;
-(void)setDateComponents:(id)arg1 ;
-(void)setStaggerTimeIntervals:(BOOL)arg1 ;
-(void)setDate:(id)arg1 animate:(BOOL)arg2 ;
-(void)_setHighlightsToday:(BOOL)arg1 ;
-(id)_dateUnderSelectionBar;
-(void)_setUsesBlackChrome:(BOOL)arg1 ;
-(BOOL)_usesBlackChrome;
-(void)setPreferredDatePickerStyle:(long long)arg1 ;
-(id)_selectedTextForCalendarUnit:(unsigned long long)arg1 ;
-(id)_labelTextForCalendarUnit:(unsigned long long)arg1 ;
-(id)_lastSelectedDateComponents;
-(long long)preferredDatePickerStyle;
@end

