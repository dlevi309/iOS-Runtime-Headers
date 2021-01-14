/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/


@protocol BNBannerTransitioningDelegate <UIViewControllerTransitioningDelegate>
@property (assign,getter=isResizeAnimationCustomizationPermitted,nonatomic) BOOL resizeAnimationCustomizationPermitted; 
@optional
-(id)animationControllerForResizingController:(id)arg1 userInfo:(id)arg2;
-(BOOL)isResizeAnimationCustomizationPermitted;
-(void)setResizeAnimationCustomizationPermitted:(BOOL)arg1;

@required
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 userInfo:(id)arg4;
-(id)animationControllerForDismissedController:(id)arg1 userInfo:(id)arg2;

@end

