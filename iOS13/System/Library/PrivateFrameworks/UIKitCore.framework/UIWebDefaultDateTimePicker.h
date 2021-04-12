/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIWebFormControl.h>

@class DOMHTMLInputElement, UIDatePicker, NSString;

@interface UIWebDefaultDateTimePicker : NSObject <UIWebFormControl> {

	DOMHTMLInputElement* _inputElement;
	UIDatePicker* _datePicker;
	NSString* _formatString;
	BOOL _shouldRemoveTimeZoneInformation;
	BOOL _isTimeInput;

}

@property (nonatomic,retain) DOMHTMLInputElement * _inputElement;              //@synthesize inputElement=_inputElement - In the implementation block
@property (nonatomic,retain) UIDatePicker * _datePicker;                       //@synthesize datePicker=_datePicker - In the implementation block
-(void)dealloc;
-(long long)_timeZoneOffsetFromGMT:(id)arg1 ;
-(void)_dateChangedSetAsString;
-(void)_dateChangedSetAsNumber;
-(void)_dateChanged;
-(void)set_inputElement:(DOMHTMLInputElement *)arg1 ;
-(void)set_datePicker:(UIDatePicker *)arg1 ;
-(void)_dateChangeHandler:(id)arg1 ;
-(id)_sanitizeInputValueForFormatter:(id)arg1 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2 ;
-(DOMHTMLInputElement *)_inputElement;
-(UIDatePicker *)_datePicker;
@end

