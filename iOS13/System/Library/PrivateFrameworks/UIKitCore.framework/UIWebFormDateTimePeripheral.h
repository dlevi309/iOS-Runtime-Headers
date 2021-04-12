/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIFormPeripheral.h>

@protocol UIWebFormControl;
@class DOMHTMLInputElement;

@interface UIWebFormDateTimePeripheral : NSObject <UIFormPeripheral> {

	DOMHTMLInputElement* _inputElement;
	id<UIWebFormControl> _control;

}

@property (nonatomic,retain) DOMHTMLInputElement * _inputElement;              //@synthesize inputElement=_inputElement - In the implementation block
@property (nonatomic,retain) id<UIWebFormControl> _control;                    //@synthesize control=_control - In the implementation block
+(id)createPeripheralWithDOMHTMLInputElement:(id)arg1 ;
-(void)dealloc;
-(void)beginEditing;
-(void)endEditing;
-(id)assistantView;
-(void)set_inputElement:(DOMHTMLInputElement *)arg1 ;
-(DOMHTMLInputElement *)_inputElement;
-(long long)_datePickerModeForInputType:(id)arg1 ;
-(void)set_control:(id<UIWebFormControl>)arg1 ;
-(id)initWithDOMHTMLInputElement:(id)arg1 ;
-(id<UIWebFormControl>)_control;
@end

