/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUQuickControlContainerViewControllerDelegate <NSObject>
@required
-(BOOL)hasDetailsActionForQuickControlViewController:(id)arg1 item:(id)arg2;
-(double)quickControlViewController:(id)arg1 sourceViewInitialScaleForPresentation:(BOOL)arg2;
-(id)quickControlViewController:(id)arg1 applierForSourceViewTransitionWithAnimationSettings:(id)arg2 presenting:(BOOL)arg3;
-(id)detailsViewControllerForQuickControlViewController:(id)arg1 item:(id)arg2;
-(void)quickControlViewControllerWillDismissDetailsViewController:(id)arg1 shouldDismissQuickControl:(BOOL)arg2;
-(void)quickControlViewControllerDidTapDetailsButton:(id)arg1;

@end

