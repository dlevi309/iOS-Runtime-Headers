/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISheetPresentationController.h>

@interface _UIFormSheetPresentationController : _UISheetPresentationController {

	BOOL _layoutStateShouldAvoidKeyboard;
	double _keyboardYOrigin;

}
+(long long)_initialMode;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)dismissalTransitionWillBegin;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)_changeLayoutModeToAvoidKeyboard:(BOOL)arg1 withOrigin:(double)arg2 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(BOOL)shouldSubscribeToKeyboardNotifications;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(BOOL)_shouldHideBottomCorner;
-(void)_keyboardWillHide:(id)arg1 ;
-(long long)_defaultPresentationStyleForTraitCollection:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
@end

