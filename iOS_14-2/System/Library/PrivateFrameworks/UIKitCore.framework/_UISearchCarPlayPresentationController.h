/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISearchPresentationController.h>

@class UIVisualEffectView;

@interface _UISearchCarPlayPresentationController : _UISearchPresentationController {

	UIVisualEffectView* _blurView;

}

@property (nonatomic,retain) UIVisualEffectView * blurView;              //@synthesize blurView=_blurView - In the implementation block
-(void)containerViewWillLayoutSubviews;
-(BOOL)searchBarToBecomeTopAttached;
-(unsigned long long)edgeForHidingNavigationBar;
-(CGRect)finalFrameForContainerView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(long long)adaptivePresentationStyle;
-(UIVisualEffectView *)blurView;
-(double)statusBarAdjustment;
-(void)hideBackgroundObscuringView;
-(BOOL)shouldAccountForStatusBar;
-(void)showBackgroundObscuringView;
-(void)setContentVisible:(BOOL)arg1 ;
-(id)backgroundObscuringView;
-(BOOL)animatorShouldLayoutPresentationViews;
-(id)adaptivePresentationController;
-(BOOL)searchBarShouldClipToBounds;
-(BOOL)resultsUnderlapsSearchBar;
-(BOOL)searchBarCanContainScopeBar;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)forceObeyNavigationBarInsets;
-(double)resultsControllerContentOffset;
-(id)_presentedViewControllerForSizeClassPair:(SCD_Struct_UI9)arg1 ;
@end

