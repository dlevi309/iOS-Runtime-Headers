/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <PlatterKit/PLExpandedPlatterPresentationController.h>

@class UIViewController, MTMaterialView;

@interface NCLongLookDefaultPresentationController : PLExpandedPlatterPresentationController {

	UIViewController* _sourceViewController;
	MTMaterialView* _backgroundMaterialView;
	BOOL _presenting;

}

@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                                                                    //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic,__weak) id<NCLongLookDefaultPresentationControllerDelegate> presentationControllerDelegate; 
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(BOOL)isPresenting;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(BOOL)shouldRemovePresentersView;
-(void)setPresenting:(BOOL)arg1 ;
-(BOOL)_shouldPresentInCurrentContext;
-(void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2 ;
-(void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4 ;
@end

