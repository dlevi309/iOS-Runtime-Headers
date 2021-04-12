/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUQuickControlPresentationCoordinatorDelegate <NSObject>
@optional
-(BOOL)shouldOverrideTraitCollectionForPresentationCoordinator:(id)arg1;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
-(id)detailViewURLHandlerForPresentationCoordinator:(id)arg1;
-(void)presentationCoordinator:(id)arg1 didRecognizeTapForItem:(id)arg2;
-(void)presentationCoordinator:(id)arg1 willBeginPresentationWithContext:(id)arg2;
-(void)presentationCoordinator:(id)arg1 didBeginPresentationWithContext:(id)arg2;
-(void)presentationCoordinator:(id)arg1 willEndPresentationWithContext:(id)arg2;
-(void)presentationCoordinator:(id)arg1 didEndPresentationWithContext:(id)arg2;
-(BOOL)presentationCoordinatorShouldProvideCancellationFeedback:(id)arg1;
-(long long)preferredModalPresentationStyleForPresentationCoordinator:(id)arg1;
-(BOOL)presentationCoordinatorShouldDisablePullToUnlockSettings:(id)arg1;
-(void)presentationCoordinatorWillBeginTransition:(id)arg1 presenting:(BOOL)arg2;
-(void)presentationCoordinatorWillEndTransition:(id)arg1 presenting:(BOOL)arg2;
-(void)presentationCoordinatorDidCancelDismissalTransition:(id)arg1;

@required
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2;
-(id)traitCollectionForPresentationCoordinator:(id)arg1;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
-(id)presentationCoordinator:(id)arg1 contextForPresentationAtPoint:(CGPoint)arg2;
-(void)presentationCoordinator:(id)arg1 applyOverrideAttributes:(id)arg2 toItem:(id)arg3;
-(void)presentationCoordinator:(id)arg1 clearOverrideAttributesForItem:(id)arg2;

@end

