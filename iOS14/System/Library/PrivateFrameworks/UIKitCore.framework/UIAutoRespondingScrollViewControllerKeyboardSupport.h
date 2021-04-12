/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)registeredForNotifications;
-(void)_keyboardDidHide:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(double)adjustmentForKeyboard;
-(void)setAdjustmentForKeyboard:(double)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)setRegisteredForNotifications:(BOOL)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)_adjustScrollViewForKeyboardInfo:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(BOOL)viewIsDisappearing;
-(void)setViewIsDisappearing:(BOOL)arg1 ;
@end

