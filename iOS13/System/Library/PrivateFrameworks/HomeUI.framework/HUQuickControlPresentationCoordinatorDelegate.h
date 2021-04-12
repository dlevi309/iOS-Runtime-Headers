/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUQuickControlPresentationCoordinatorDelegate <NSObject>
@optional
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
-(BOOL)allowsPresentationWithOnlySettings;
-(long long)preferredModalPresentationStyleForPresentationCoordinator:(id)arg1;
-(BOOL)shouldOverrideTraitCollectionForPresentationCoordinator:(id)arg1;
-(id)detailViewURLHandlerForPresentationCoordinator:(id)arg1;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
-(BOOL)presentationCoordinatorShouldDisablePullToUnlockSettings:(id)arg1;
-(void)presentationCoordinator:(id)arg1 didRecognizeTapForItem:(id)arg2;
-(void)presentationCoordinator:(id)arg1 willBeginPresentationWithContext:(id)arg2;
-(void)presentationCoordinator:(id)arg1 didBeginPresentationWithContext:(id)arg2;
-(void)presentationCoordinator:(id)arg1 willEndPresentationWithContext:(id)arg2;
-(void)presentationCoordinator:(id)arg1 didEndPresentationWithContext:(id)arg2;
-(BOOL)presentationCoordinatorShouldProvideCancellationFeedback:(id)arg1;
-(void)presentationCoordinatorWillBeginDismissalTransition:(id)arg1;
-(void)presentationCoordinatorDidCancelDismissalTransition:(id)arg1;

@required
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2;
-(id)traitCollectionForPresentationCoordinator:(id)arg1;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
-(id)presentationCoordinator:(id)arg1 contextForPresentationAtPoint:(CGPoint)arg2;
-(void)presentationCoordinator:(id)arg1 applyOverrideAttributes:(id)arg2 toItem:(id)arg3;
-(void)presentationCoordinator:(id)arg1 clearOverrideAttributesForItem:(id)arg2;

@end

