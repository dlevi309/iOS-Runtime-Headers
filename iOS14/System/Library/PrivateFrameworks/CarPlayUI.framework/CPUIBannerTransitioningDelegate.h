/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <libobjc.A.dylib/BNBannerTransitioningDelegate.h>

@class NSString;

@interface CPUIBannerTransitioningDelegate : NSObject <BNBannerTransitioningDelegate>

@property (assign,getter=isResizeAnimationCustomizationPermitted,nonatomic) BOOL resizeAnimationCustomizationPermitted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 userInfo:(id)arg4 ;
-(id)animationControllerForDismissedController:(id)arg1 userInfo:(id)arg2 ;
-(Class)_bannerTransitionAnimatorClassForAnimationStyle:(long long)arg1 ;
@end

