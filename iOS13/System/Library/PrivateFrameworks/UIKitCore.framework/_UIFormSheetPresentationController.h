/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISheetPresentationController.h>

@interface _UIFormSheetPresentationController : _UISheetPresentationController {

	BOOL _layoutStateShouldAvoidKeyboard;
	double _keyboardYOrigin;

}
+(long long)_initialMode;
-(void)presentationTransitionWillBegin;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(void)dismissalTransitionWillBegin;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(long long)_defaultPresentationStyleForTraitCollection:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)shouldSubscribeToKeyboardNotifications;
-(void)_changeLayoutModeToAvoidKeyboard:(BOOL)arg1 withOrigin:(double)arg2 ;
-(BOOL)_shouldHideBottomCorner;
@end

