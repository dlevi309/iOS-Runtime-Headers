/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <UIKit/UIContextMenuInteractionDelegate_Private.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <UIKitCore/_UIDatePickerViewComponent.h>

@class NSDateFormatter, UIView, _UIDatePickerLinkedLabel, UILabel, UILayoutGuide, NSArray, UIPointerInteraction, UIDatePicker, _UIDatePickerDataModel, NSString, UIColor;

@interface _UIDatePickerIOSCompactView : UIControl <UIContextMenuInteractionDelegate, UIContextMenuInteractionDelegate_Private, UIPointerInteractionDelegate, _UIDatePickerViewComponent> {

	SCD_Struct_UI34 _flags;
	NSDateFormatter* _dateFormatterMedium;
	NSDateFormatter* _dateFormatterShort;
	UIView* _dateView;
	UIView* _dateBackgroundPlatter;
	_UIDatePickerLinkedLabel* _dateLabel;
	NSDateFormatter* _timeFormatter;
	UIView* _timeView;
	UIView* _timeBackgroundPlatter;
	UILabel* _timeLabel;
	UILayoutGuide* _timeViewLayoutGuide;
	NSDateFormatter* _layoutFormatter;
	BOOL _dateOnLeadingSide;
	NSArray* _dateTimeConstraints;
	UIPointerInteraction* _pointerInteraction;
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
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(void)tintColorDidChange;
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2 ;
-(void)didReset;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(CGSize)defaultSize;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)setData:(_UIDatePickerDataModel *)arg1 ;
-(void)_setEnabled:(BOOL)arg1 ;
-(UIDatePicker *)datePicker;
-(void)updateConstraints;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1 ;
-(_UIDatePickerDataModel *)data;
-(void)_updateUI;
-(void)didChangeMode;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)didChangeLocale;
-(long long)datePickerStyle;
-(void)didChangeDateFrom:(id)arg1 animated:(BOOL)arg2 ;
-(void)didChangeToday;
-(BOOL)hasDefaultSize;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1 ;
-(void)_setHidesLabels:(BOOL)arg1 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 ;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(BOOL)usesAutoLayout;
-(BOOL)_allowsZeroCountDownDuration;
-(void)_updateDateBeforeTimeValue;
-(id)_targetedPreviewForContextMenu;
-(void)didChangeMinuteInterval;
-(BOOL)_allowsZeroTimeInterval;
-(void)_updateEnabledStyling;
-(void)didChangeMinimumDate;
-(void)didChangeMaximumDate;
-(void)didChangeTimeZone;
-(void)didChangeCalendar;
-(BOOL)_isTimeIntervalMode;
@end

