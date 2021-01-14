/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIIndirectScribbleInteractionDelegate.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <UIKit/UIKeyInput.h>

@protocol _UIDatePickerCalendarTimeLabelDelegate;
@class UIIndirectScribbleInteraction, UITextField, UIPointerInteraction, UIView, _UIDatePickerCalendarTimeFormat, UILabel, _UIDatePickerCalendarTimeWheel, _UIDatePickerCalendarTimeValueStore, NSNumberFormatter, _UIDatePickerCalendarTimeLabelStateMachineContext, UIFont, NSString, NSAttributedString, UITextInputPasswordRules;

@interface _UIDatePickerCalendarTimeLabel : UIView <UIIndirectScribbleInteractionDelegate, UIPointerInteractionDelegate, UIKeyInput> {

	UIIndirectScribbleInteraction* _scribbleInteraction;
	UITextField* _hiddenField;
	UIPointerInteraction* _pointerInteraction;
	CGRect _hourRect;
	CGRect _minuteRect;
	UIView* _inputView;
	CGSize _lastSize;
	BOOL _allowsTextInput;
	_UIDatePickerCalendarTimeFormat* _timeFormat;
	id<_UIDatePickerCalendarTimeLabelDelegate> _delegate;
	long long _minuteInterval;
	UILabel* _label;
	_UIDatePickerCalendarTimeWheel* _hourWheel;
	_UIDatePickerCalendarTimeWheel* _minuteWheel;
	unsigned long long _insertedDigitCount;
	long long _inputScope;
	_UIDatePickerCalendarTimeValueStore* _inputValue;
	NSNumberFormatter* _inputFormatter;
	_UIDatePickerCalendarTimeLabelStateMachineContext* _stateContext;

}

@property (nonatomic,readonly) UILabel * label;                                                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeWheel * hourWheel;                                    //@synthesize hourWheel=_hourWheel - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeWheel * minuteWheel;                                  //@synthesize minuteWheel=_minuteWheel - In the implementation block
@property (assign,nonatomic) BOOL allowsTextInput;                                                            //@synthesize allowsTextInput=_allowsTextInput - In the implementation block
@property (assign,nonatomic) unsigned long long insertedDigitCount;                                           //@synthesize insertedDigitCount=_insertedDigitCount - In the implementation block
@property (assign,nonatomic) long long inputScope;                                                            //@synthesize inputScope=_inputScope - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarTimeValueStore * inputValue;                                //@synthesize inputValue=_inputValue - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * inputFormatter;                                              //@synthesize inputFormatter=_inputFormatter - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeLabelStateMachineContext * stateContext;              //@synthesize stateContext=_stateContext - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarTimeFormat * timeFormat;                                    //@synthesize timeFormat=_timeFormat - In the implementation block
@property (assign,nonatomic,__weak) id<_UIDatePickerCalendarTimeLabelDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIFont * font; 
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSString * hourText; 
@property (nonatomic,copy) NSString * minuteText; 
@property (assign,nonatomic) long long minuteInterval;                                                        //@synthesize minuteInterval=_minuteInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
-(BOOL)hasText;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(long long)keyboardType;
-(NSAttributedString *)attributedText;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(BOOL)indirectScribbleInteraction:(id)arg1 shouldDelayFocusForElement:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_didTap:(id)arg1 ;
-(NSString *)hourText;
-(id<_UIDatePickerCalendarTimeLabelDelegate>)delegate;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setFont:(UIFont *)arg1 ;
-(id)_attributedTextWithHourRange:(NSRange*)arg1 minuteRange:(NSRange*)arg2 ;
-(_UIDatePickerCalendarTimeWheel *)hourWheel;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_increasedHourWheelRect:(CGRect*)arg1 minuteWheelRect:(CGRect*)arg2 ;
-(void)_isPoint:(CGPoint)arg1 insideExtendedHourRect:(BOOL*)arg2 minuteRect:(BOOL*)arg3 ;
-(void)_updateLayoutRectsForHourRange:(NSRange)arg1 minuteRange:(NSRange)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)inputView;
-(CGRect)indirectScribbleInteraction:(id)arg1 frameForElement:(id)arg2 ;
-(void)indirectScribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2 ;
-(void)indirectScribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<_UIDatePickerCalendarTimeLabelDelegate>)arg1 ;
-(void)_pushCurrentStateIntoUIAndNotify;
-(_UIDatePickerCalendarTimeFormat *)timeFormat;
-(_UIDatePickerCalendarTimeValueStore *)inputValue;
-(long long)inputScope;
-(NSString *)minuteText;
-(void)_stateMachineUpdateFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(id)initWithTimeFormat:(id)arg1 minuteInterval:(long long)arg2 ;
-(void)_beginEditingHoursFromWheelsOfTime:(id)arg1 ;
-(void)_endEditingMinutesFromWheelsOfTime:(id)arg1 ;
-(void)_beginEditingMinutesFromWheelsOfTime:(id)arg1 ;
-(void)layoutSubviews;
-(_UIDatePickerCalendarTimeWheel *)minuteWheel;
-(_UIDatePickerCalendarTimeLabelStateMachineContext *)stateContext;
-(void)setHourText:(NSString *)arg1 ;
-(void)_endEditingHoursFromWheelsOfTime:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(BOOL)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2 ;
-(void)_updateMinutesFromWheelsOfTime:(id)arg1 ;
-(BOOL)_treatMinutesAsHoursForState:(unsigned long long)arg1 ;
-(void)_updateHoursFromWheelsOfTime:(id)arg1 ;
-(BOOL)indirectScribbleInteraction:(id)arg1 isElementFocused:(id)arg2 ;
-(void)_resetTextInput;
-(BOOL)allowsTextInput;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)_updateWheelsOfTimePosition;
-(void)_visualHourRect:(CGRect*)arg1 minuteRect:(CGRect*)arg2 ;
-(void)setInputScope:(long long)arg1 ;
-(NSNumberFormatter *)inputFormatter;
-(long long)minuteInterval;
-(void)setTimeFormat:(_UIDatePickerCalendarTimeFormat *)arg1 ;
-(void)setMinuteText:(NSString *)arg1 ;
-(void)setInputValue:(_UIDatePickerCalendarTimeValueStore *)arg1 ;
-(BOOL)_suppressSoftwareKeyboard;
-(void)_recreateWheelsOfTime;
-(BOOL)processTapOutside;
-(void)setInsertedDigitCount:(unsigned long long)arg1 ;
-(void)indirectScribbleInteraction:(id)arg1 focusElementIfNeeded:(id)arg2 referencePoint:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(void)setAllowsTextInput:(BOOL)arg1 ;
-(unsigned long long)insertedDigitCount;
-(void)setMinuteInterval:(long long)arg1 ;
-(void)setInputFormatter:(NSNumberFormatter *)arg1 ;
-(UILabel *)label;
-(void)_pushCurrentStateIntoUI;
-(void)indirectScribbleInteraction:(id)arg1 requestElementsInRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)_stateMachineSendEvent:(unsigned long long)arg1 ;
-(BOOL)_pointIsInsideHourSide:(CGPoint)arg1 ;
-(BOOL)_digits:(unsigned long long*)arg1 fromText:(id)arg2 count:(long long*)arg3 ;
-(UIFont *)font;
@end

