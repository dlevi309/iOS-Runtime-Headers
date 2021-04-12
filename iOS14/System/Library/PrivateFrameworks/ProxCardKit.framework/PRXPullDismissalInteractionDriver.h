/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <UIKit/UIScrollViewDelegate.h>

@class PRXPurelyInteractiveTransition, PRXPullDismissalScrollView, UIViewController, NSString;

@interface PRXPullDismissalInteractionDriver : NSObject <UIScrollViewDelegate> {

	PRXPurelyInteractiveTransition* _interactiveTransition;
	PRXPullDismissalScrollView* _scrollView;
	UIViewController* _presentedViewController;

}

@property (nonatomic,__weak,readonly) PRXPullDismissalScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentedViewController;                               //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,readonly) id<UIViewControllerAnimatedTransitioning> animationController; 
@property (nonatomic,readonly) id<UIViewControllerInteractiveTransitioning> interactionController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id<UIViewControllerAnimatedTransitioning>)animationController;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<UIViewControllerInteractiveTransitioning>)interactionController;
-(void)scrollViewDidScroll:(id)arg1 ;
-(PRXPullDismissalScrollView *)scrollView;
-(UIViewController *)presentedViewController;
-(id)initWithPresentedViewController:(id)arg1 scrollView:(id)arg2 ;
-(void)_finishPullToDismiss;
@end

