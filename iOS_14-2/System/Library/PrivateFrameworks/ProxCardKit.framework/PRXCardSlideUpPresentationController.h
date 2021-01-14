/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <UIKitCore/UIPresentationController.h>

@class UIView;

@interface PRXCardSlideUpPresentationController : UIPresentationController {

	UIView* _dimmingView;

}

@property (nonatomic,readonly) UIView * dimmingView;              //@synthesize dimmingView=_dimmingView - In the implementation block
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionWillBegin;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(UIView *)dimmingView;
-(id)initWithDimmingStyle:(long long)arg1 presentedViewController:(id)arg2 presentingViewController:(id)arg3 ;
@end

