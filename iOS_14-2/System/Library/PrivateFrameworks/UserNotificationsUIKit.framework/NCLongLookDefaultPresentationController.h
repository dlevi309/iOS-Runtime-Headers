/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(void)setPresenting:(BOOL)arg1 ;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)shouldRemovePresentersView;
-(BOOL)_shouldPresentInCurrentContext;
-(void)presentationTransitionWillBegin;
-(BOOL)isPresenting;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4 ;
-(void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2 ;
-(void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2 ;
@end

