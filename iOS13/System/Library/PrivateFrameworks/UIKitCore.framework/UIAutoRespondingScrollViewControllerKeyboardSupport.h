/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIKeyboardAutoRespondingScrollViewController;
@class UIViewController;

@interface UIAutoRespondingScrollViewControllerKeyboardSupport : NSObject {

	UIViewController*<_UIKeyboardAutoRespondingScrollViewController> _viewController;
	double _adjustmentForKeyboard;
	unsigned _viewIsDisappearing : 1;
	unsigned _registeredForNotifications : 1;

}

@property (assign,nonatomic) double adjustmentForKeyboard;                 //@synthesize adjustmentForKeyboard=_adjustmentForKeyboard - In the implementation block
@property (assign,nonatomic) BOOL viewIsDisappearing; 
@property (assign,nonatomic) BOOL registeredForNotifications; 
-(void)_adjustScrollViewForKeyboardInfo:(id)arg1 ;
-(void)setViewIsDisappearing:(BOOL)arg1 ;
-(BOOL)viewIsDisappearing;
-(void)setRegisteredForNotifications:(BOOL)arg1 ;
-(BOOL)registeredForNotifications;
-(id)initWithViewController:(id)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(double)adjustmentForKeyboard;
-(void)setAdjustmentForKeyboard:(double)arg1 ;
@end

