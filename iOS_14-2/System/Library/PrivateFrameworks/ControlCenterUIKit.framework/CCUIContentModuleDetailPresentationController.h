/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)containerViewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)shouldPresentInFullscreen;
-(void)presentationTransitionWillBegin;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(double)_preferredExpandedContentWidthForViewController:(id)arg1 ;
-(double)_preferredExpandedContentHeightForViewController:(id)arg1 ;
-(void)_handleBackgroundTap:(id)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 anchoringViewController:(id)arg3 ;
@end

