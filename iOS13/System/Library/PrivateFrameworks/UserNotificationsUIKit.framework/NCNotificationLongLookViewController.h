/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCNotificationViewController.h>
#import <libobjc.A.dylib/NCNotificationLongLookViewDelegate.h>
#import <libobjc.A.dylib/PLExpandedPlatterPresentationControllerDelegate.h>
#import <libobjc.A.dylib/NCLongLookDefaultPresentationControllerDelegate.h>
#import <libobjc.A.dylib/NCNotificationCustomContentDelegate.h>
#import <libobjc.A.dylib/PLClickPresentationInteractionPresentable.h>
#import <libobjc.A.dylib/PLExpandedPlatterPresentable.h>
#import <libobjc.A.dylib/PLExpandedPlatterPresentationViewDelegate.h>
#import <libobjc.A.dylib/PLExpandedPlatterDismissing.h>

@protocol PLClickPresentationInteractionPresenting, PLExpandedPlatterDismissing;
@class UIView, NCLongLookTransitioningDelegate, NSString;

@interface NCNotificationLongLookViewController : NCNotificationViewController <NCNotificationLongLookViewDelegate, PLExpandedPlatterPresentationControllerDelegate, NCLongLookDefaultPresentationControllerDelegate, NCNotificationCustomContentDelegate, PLClickPresentationInteractionPresentable, PLExpandedPlatterPresentable, PLExpandedPlatterPresentationViewDelegate, PLExpandedPlatterDismissing> {

	NCLongLookTransitioningDelegate* _longLookTransitionDelegate;
	id _cancelTouchesToken;
	id<PLClickPresentationInteractionPresenting> _presenter;
	id<PLExpandedPlatterDismissing> _dismisser;
	/*^block*/id _notificationTapBlock;

}

@property (setter=_setNotificationTapBlock:,getter=_notificationTapBlock,nonatomic,copy) id notificationTapBlock;              //@synthesize notificationTapBlock=_notificationTapBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PLClickPresentationInteractionPresenting> presenter;                                    //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,readonly) UIView * viewWithContent; 
@property (nonatomic,readonly) UIView * viewForTouchContinuation; 
@property (assign,nonatomic,__weak) id<PLExpandedPlatterDismissing> dismisser;                                                 //@synthesize dismisser=_dismisser - In the implementation block
+(void)initialize;
-(void)loadView;
-(BOOL)becomeFirstResponder;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)resignFirstResponder;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(id)_scrollView;
-(BOOL)canResignFirstResponder;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(id<PLClickPresentationInteractionPresenting>)presenter;
-(id)_extensionIdentifier;
-(UIView *)viewForTouchContinuation;
-(void)_handleIconButton:(id)arg1 ;
-(BOOL)expandedPlatterPresentationControllerShouldAllowKeyboardOnAppearance:(id)arg1 ;
-(id)expandedPlatterPresentationController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2 ;
-(id)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1 ;
-(id)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1 ;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(id)arg1 ;
-(UIView *)viewWithContent;
-(id<PLExpandedPlatterDismissing>)dismisser;
-(void)expandedPlatterPresentable:(id)arg1 requestsDismissalWithTrigger:(long long)arg2 ;
-(id)expandedPlatterViewForPresentationView:(id)arg1 ;
-(long long)viewControllerTransitionTypeForTransitionDelegate:(id)arg1 ;
-(void)setPresenter:(id<PLClickPresentationInteractionPresenting>)arg1 ;
-(BOOL)isContentExtensionVisible:(id)arg1 ;
-(id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2 ;
-(void)_updateWithProvidedStaticContent;
-(void)_updateWithProvidedAuxiliaryOptionsContent;
-(void)_updateWithProvidedCustomContent;
-(BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_presentedLongLookViewController;
-(void)preserveInputViews;
-(BOOL)restoreInputViews;
-(void)_updateLookView:(id)arg1 withTitleFromProvidedStaticContent:(id)arg2 ;
-(unsigned long long)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;
-(unsigned long long)_maximumNumberOfPrimaryLargeTextLinesForProvidedStaticContent;
-(unsigned long long)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;
-(unsigned long long)_maximumNumberOfSecondaryLargeTextLinesForProvidedStaticContent;
-(void)_loadLookView;
-(CGSize)_preferredCustomContentSizeForSize:(CGSize)arg1 parentContentContainerBounds:(CGRect)arg2 ;
-(void)_setPreferredCustomContentSize:(CGSize)arg1 ;
-(void)_notificationViewControllerViewDidLoad;
-(BOOL)_shouldPadScrollViewContentSizeHeight;
-(void)customContentDidLoadExtension:(id)arg1 ;
-(void)customContentDidUpdateTitle:(id)arg1 ;
-(void)customContent:(id)arg1 didUpdateUserNotificationActions:(id)arg2 ;
-(void)setNotificationRequest:(id)arg1 ;
-(void)setCustomContentHomeAffordanceVisible:(BOOL)arg1 ;
-(void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1 ;
-(void)presentLongLookAnimated:(BOOL)arg1 trigger:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isLookStyleLongLook;
-(BOOL)notificationLongLookView:(id)arg1 tapGestureRecognizerShouldReceiveTouch:(id)arg2 ;
-(void)notificationLongLookView:(id)arg1 willInteractWithURL:(id)arg2 ;
-(void)playMedia;
-(CGRect)expandedPlatterPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2 ;
-(BOOL)expandedPlatterPresentationControllerShouldProvideBackground:(id)arg1 ;
-(void)setDismisser:(id<PLExpandedPlatterDismissing>)arg1 ;
-(id)_initWithNotificationRequest:(id)arg1 andPresentingNotificationViewController:(id)arg2 revealingAdditionalContentOnPresentation:(BOOL)arg3 ;
-(id)_longLookViewIfLoaded;
-(id)_expandedPlatterPresentationViewScrollView;
-(id)_presentingNotificationViewController;
-(void)_updateTitleWithProvidedCustomContent;
-(void)_handleNotificationTap:(id)arg1 ;
-(unsigned long long)_maximumNumberOfTextLinesForProvidedStaticContentWithDefaultNumber:(unsigned long long)arg1 isPrimary:(BOOL)arg2 isLarge:(BOOL)arg3 ;
-(id)_longLookViewLoadingIfNecessary;
-(id)_expandedPlatterPresentationViewLoadingIfNecessary:(BOOL)arg1 ;
-(void)_setNotificationTapBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)_notificationTapBlock;
-(id)_longLookViewScrollView;
-(void)contentProviderDismissCustomContent:(id)arg1 animated:(BOOL)arg2 ;
@end

