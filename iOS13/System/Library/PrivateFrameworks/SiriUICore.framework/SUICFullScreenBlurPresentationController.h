/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <UIKitCore/UIPresentationController.h>

@class _UIBackdropView;

@interface SUICFullScreenBlurPresentationController : UIPresentationController {

	_UIBackdropView* _fullScreenBlurView;

}

@property (assign,nonatomic) unsigned long long blurStyle; 
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(unsigned long long)blurStyle;
-(void)setBlurStyle:(unsigned long long)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(unsigned long long)arg3 ;
-(void)_stageViewsForFadeIn;
@end

