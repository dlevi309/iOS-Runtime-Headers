/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIPresentationController.h>

@protocol UIViewControllerTransitionCoordinator;
@class NSArray;

@interface NCBannerPresentationController : UIPresentationController {

	id<UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
	long long _transitionState;
	CGSize _childPreferredContentSize;
	BOOL _wantsUseableContainerBounds;
	NSArray* _additionalBackgroundViews;

}

@property (nonatomic,retain) NSArray * additionalBackgroundViews;              //@synthesize additionalBackgroundViews=_additionalBackgroundViews - In the implementation block
@property (assign,nonatomic) BOOL wantsUseableContainerBounds;                 //@synthesize wantsUseableContainerBounds=_wantsUseableContainerBounds - In the implementation block
+(CGRect)_presentedFrameForVisiblePortion:(BOOL)arg1 ofView:(id)arg2 inPresentationFrame:(CGRect)arg3 ;
+(CGRect)useableContainerViewFrameInContainerViewWithBounds:(CGRect)arg1 ;
+(CGRect)visiblePresentedFrameForView:(id)arg1 inPresentationFrame:(CGRect)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)dismissalTransitionWillBegin;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(BOOL)shouldRemovePresentersView;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(CGRect)frameOfDismissedViewInContainerView;
-(CGRect)_presentedFrameForView:(id)arg1 inPresentationFrame:(CGRect)arg2 ;
-(CGRect)_frameForViewController:(id)arg1 beyondEdge:(unsigned long long)arg2 ;
-(void)setAdditionalBackgroundViews:(NSArray *)arg1 ;
-(NSArray *)additionalBackgroundViews;
-(BOOL)wantsUseableContainerBounds;
-(void)setWantsUseableContainerBounds:(BOOL)arg1 ;
@end

