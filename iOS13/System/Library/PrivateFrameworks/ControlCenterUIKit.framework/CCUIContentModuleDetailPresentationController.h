/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <UIKitCore/UIPresentationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIViewController, NSString;

@interface CCUIContentModuleDetailPresentationController : UIPresentationController <UIGestureRecognizerDelegate> {

	UIViewController* _anchoringViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)containerViewWillLayoutSubviews;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(void)presentationTransitionWillBegin;
-(double)_preferredExpandedContentWidthForViewController:(id)arg1 ;
-(double)_preferredExpandedContentHeightForViewController:(id)arg1 ;
-(void)_handleBackgroundTap:(id)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 anchoringViewController:(id)arg3 ;
@end

