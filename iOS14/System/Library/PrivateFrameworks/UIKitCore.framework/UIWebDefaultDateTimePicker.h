/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIDatePicker *)_datePicker;
-(id)controlView;
-(void)set_inputElement:(DOMHTMLInputElement *)arg1 ;
-(long long)_timeZoneOffsetFromGMT:(id)arg1 ;
-(void)set_datePicker:(UIDatePicker *)arg1 ;
-(void)_dateChangedSetAsString;
-(void)_dateChangedSetAsNumber;
-(void)_dateChangeHandler:(id)arg1 ;
-(id)_sanitizeInputValueForFormatter:(id)arg1 ;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2 ;
-(DOMHTMLInputElement *)_inputElement;
-(void)_dateChanged;
-(void)dealloc;
@end

