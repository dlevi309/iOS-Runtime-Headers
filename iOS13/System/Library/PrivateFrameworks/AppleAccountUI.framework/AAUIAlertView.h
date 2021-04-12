/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <UIKitCore/UIAlertView.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface AAUIAlertView : UIAlertView {

	NSObject*<OS_dispatch_semaphore> _buttonChosenSemaphore;
	long long _chosenButtonIndex;
	/*^block*/id _action;
	/*^block*/id _actionWithText;

}

@property (readonly) long long chosenButtonIndex; 
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 action:(/*^block*/id)arg4 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 action:(/*^block*/id)arg5 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 action:(/*^block*/id)arg6 ;
-(long long)chosenButtonIndex;
@end

