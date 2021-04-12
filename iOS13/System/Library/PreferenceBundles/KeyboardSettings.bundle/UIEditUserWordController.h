/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <KeyboardSettings/EditUserWordController.h>

@class UIWindow;

@interface UIEditUserWordController : EditUserWordController {

	long long _oldPopoverStyle;
	UIWindow* _rotationDecider;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;                                            //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (setter=_setRotationDecider:,nonatomic,retain) UIWindow * _rotationDecider;              //@synthesize rotationDecider=_rotationDecider - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(id)initWithText:(id)arg1 ;
-(void)_dismiss;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(UIWindow *)_rotationDecider;
-(id)initWithText:(id)arg1 andShortcut:(id)arg2 ;
-(BOOL)_shouldSetDefaultFirstResponder;
-(void)_setRotationDecider:(id)arg1 ;
@end

