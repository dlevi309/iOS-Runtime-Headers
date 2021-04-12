/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <UIKitCore/UIPresentationController.h>

@class _UIBackdropView;

@interface SUICFullScreenBlurPresentationController : UIPresentationController {

	_UIBackdropView* _fullScreenBlurView;

}

@property (assign,nonatomic) unsigned long long blurStyle; 
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionWillBegin;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(unsigned long long)blurStyle;
-(void)presentationTransitionWillBegin;
-(void)setBlurStyle:(unsigned long long)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(unsigned long long)arg3 ;
-(void)_stageViewsForFadeIn;
@end

