/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIDatePickerCalendarTimeLabelDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKitCore/_UIPassthroughScrollInteractionDelegate.h>

@protocol _UIDatePickerCalendarTimeViewDelegate;
@class NSDateFormatter, NSArray, _UIPassthroughScrollInteraction, NSCalendar, NSLocale, NSString, _UIDatePickerCalendarTime, UILabel, _UIDatePickerCalendarTimeLabel, UISegmentedControl, _UIDatePickerNumericKeyboardViewController, _UIDatePickerCalendarTimeFormat;

@interface _UIDatePickerCalendarTimeView : UIView <_UIDatePickerCalendarTimeLabelDelegate, UIPopoverPresentationControllerDelegate, _UIPassthroughScrollInteractionDelegate> {

	struct {
		unsigned isPendingManualKeyboardPresentation : 1;
		unsigned isPresentingManualKeyboard : 1;
		unsigned needsLabelUpdateOnResignFirstResponder : 1;
		unsigned showsTimeLabel : 1;
	}  _flags;
	NSDateFormatter* _formatter;
	long long _currentLayout;
	NSArray* _clockLayoutConstraints;
	_UIPassthroughScrollInteraction* _passthroughInteraction;
	BOOL _shouldShowTimeLabel;
	id<_UIDatePickerCalendarTimeViewDelegate> _delegate;
	NSCalendar* _calendar;
	NSLocale* _locale;
	NSString* _customFontDesign;
	_UIDatePickerCalendarTime* _selectedTime;
	UILabel* _timeLabel;
	_UIDatePickerCalendarTimeLabel* _timeTextField;
	UISegmentedControl* _timeOfDaySelector;
	_UIDatePickerNumericKeyboardViewController* _numericKeyboardViewController;
	_UIDatePickerCalendarTimeFormat* _timeFormat;

}

@property (nonatomic,readonly) UILabel * timeLabel;                                                                   //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeLabel * timeTextField;                                        //@synthesize timeTextField=_timeTextField - In the implementation block
@property (nonatomic,readonly) UISegmentedControl * timeOfDaySelector;                                                //@synthesize timeOfDaySelector=_timeOfDaySelector - In the implementation block
@property (nonatomic,retain) _UIDatePickerNumericKeyboardViewController * numericKeyboardViewController;              //@synthesize numericKeyboardViewController=_numericKeyboardViewController - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarTimeFormat * timeFormat;                                            //@synthesize timeFormat=_timeFormat - In the implementation block
@property (assign,getter=isPassthroughInteractionEnabled,nonatomic) BOOL passthroughInteractionEnabled; 
@property (assign,nonatomic,__weak) id<_UIDatePickerCalendarTimeViewDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                                                                 //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                                                     //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * customFontDesign;                                                             //@synthesize customFontDesign=_customFontDesign - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarTime * selectedTime;                                                //@synthesize selectedTime=_selectedTime - In the implementation block
@property (assign,nonatomic) long long minuteInterval; 
@property (assign,nonatomic) BOOL shouldShowTimeLabel;                                                                //@synthesize shouldShowTimeLabel=_shouldShowTimeLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willMoveToSuperview:(id)arg1 ;
-(UILabel *)timeLabel;
-(NSLocale *)locale;
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<_UIDatePickerCalendarTimeViewDelegate>)delegate;
-(NSCalendar *)calendar;
-(BOOL)timeLabelShouldSuppressSoftwareKeyboard:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)timeLabelDidFailToBecomeFirstResponder:(id)arg1 ;
-(void)reloadWithCalendar:(id)arg1 locale:(id)arg2 selectedTime:(id)arg3 ;
-(void)presentationControllerWillDismiss:(id)arg1 ;
-(void)setDelegate:(id<_UIDatePickerCalendarTimeViewDelegate>)arg1 ;
-(_UIDatePickerCalendarTimeFormat *)timeFormat;
-(void)timeLabelWillBecomeFirstResponder:(id)arg1 ;
-(void)timeLabelDidBecomeFirstResponder:(id)arg1 ;
-(void)timeLabelDidResignFirstResponder:(id)arg1 ;
-(_UIDatePickerCalendarTime *)selectedTime;
-(BOOL)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(CGPoint)arg2 withEvent:(id)arg3 ;
-(void)_updateFonts;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_notifyDelegate;
-(void)_updateClockLayout;
-(void)_setupDateFormatter;
-(long long)minuteInterval;
-(void)_setupViewHierarchy;
-(void)_reloadDateFormatters;
-(void)_updateTextFieldsFromSelectedDateComponents;
-(void)setTimeFormat:(_UIDatePickerCalendarTimeFormat *)arg1 ;
-(void)_disableCustomKeyboardIfNecessary;
-(void)didUpdateTimeOfDayValue:(id)arg1 ;
-(BOOL)shouldShowTimeLabel;
-(void)_reloadTimeOfDaySelector;
-(void)_dismissManualKeyboard;
-(void)_updateSelectedDateComponentsFromTextFields;
-(NSString *)customFontDesign;
-(void)setSelectedTime:(_UIDatePickerCalendarTime *)arg1 ;
-(void)_enableCustomKeyboardIfNecessary;
-(void)setPassthroughInteractionEnabled:(BOOL)arg1 ;
-(_UIDatePickerNumericKeyboardViewController *)numericKeyboardViewController;
-(BOOL)isPassthroughInteractionEnabled;
-(void)setNumericKeyboardViewController:(_UIDatePickerNumericKeyboardViewController *)arg1 ;
-(void)timeLabel:(id)arg1 didUpdateText:(id)arg2 ;
-(void)timeLabelDidBeginEditing:(id)arg1 ;
-(long long)keyboardTypeForTimeLabel:(id)arg1 ;
-(BOOL)timeLabel:(id)arg1 didReceiveText:(id)arg2 ;
-(void)setShouldShowTimeLabel:(BOOL)arg1 ;
-(_UIDatePickerCalendarTimeLabel *)timeTextField;
-(id)primaryFirstResponder;
-(void)setCustomFontDesign:(NSString *)arg1 ;
-(void)_reload;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setMinuteInterval:(long long)arg1 ;
-(void)timeLabelDidEndEditing:(id)arg1 ;
-(void)dealloc;
-(UISegmentedControl *)timeOfDaySelector;
@end

