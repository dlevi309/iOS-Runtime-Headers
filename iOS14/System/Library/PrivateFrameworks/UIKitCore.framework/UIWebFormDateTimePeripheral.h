/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<UIWebFormControl>)_control;
-(id)assistantView;
-(void)endEditing;
-(void)set_inputElement:(DOMHTMLInputElement *)arg1 ;
-(DOMHTMLInputElement *)_inputElement;
-(long long)_datePickerModeForInputType:(id)arg1 ;
-(id)initWithDOMHTMLInputElement:(id)arg1 ;
-(void)set_control:(id<UIWebFormControl>)arg1 ;
-(void)dealloc;
-(void)beginEditing;
@end

