/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithText:(id)arg1 ;
-(void)_dismiss;
-(id)initWithText:(id)arg1 andShortcut:(id)arg2 ;
-(void)viewDidLoad;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(UIWindow *)_rotationDecider;
-(void)dealloc;
-(BOOL)_shouldSetDefaultFirstResponder;
-(void)_setRotationDecider:(id)arg1 ;
@end

