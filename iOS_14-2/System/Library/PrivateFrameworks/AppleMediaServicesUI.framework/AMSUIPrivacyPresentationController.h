/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class UIView, NSString;

@interface AMSUIPrivacyPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate> {

	UIView* _dimmingView;

}

@property (nonatomic,retain) UIView * dimmingView;                  //@synthesize dimmingView=_dimmingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)containerViewWillLayoutSubviews;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(long long)adaptivePresentationStyle;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)containerViewDidLayoutSubviews;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_prepareDimmingViewIfNecessary;
-(BOOL)shouldRemovePresentersView;
-(void)presentationTransitionWillBegin;
-(UIView *)dimmingView;
@end

