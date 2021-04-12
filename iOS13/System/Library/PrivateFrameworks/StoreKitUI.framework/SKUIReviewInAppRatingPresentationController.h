/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class UIView, NSString;

@interface SKUIReviewInAppRatingPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate> {

	BOOL _constraintsPrepared;
	UIView* _dimmingView;

}

@property (nonatomic,retain) UIView * dimmingView;                  //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic) BOOL constraintsPrepared;              //@synthesize constraintsPrepared=_constraintsPrepared - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_prepareDimmingViewIfNecessary;
-(void)_prepareConstraintsIfNecessary;
-(void)containerViewDidLayoutSubviews;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(long long)adaptivePresentationStyle;
-(void)containerViewWillLayoutSubviews;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(BOOL)constraintsPrepared;
-(void)setDimmingView:(UIView *)arg1 ;
-(UIView *)dimmingView;
-(BOOL)shouldRemovePresentersView;
-(void)setConstraintsPrepared:(BOOL)arg1 ;
@end

