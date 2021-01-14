/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIPresentationController.h>

@class UIVisualEffectView;

@interface SKUIContextActionsPresentationController : UIPresentationController {

	UIVisualEffectView* _backgroundView;
	/*^block*/id _dismissalAnimations;

}

@property (nonatomic,retain) UIVisualEffectView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy) id dismissalAnimations;                             //@synthesize dismissalAnimations=_dismissalAnimations - In the implementation block
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)dismissalTransitionWillBegin;
-(UIVisualEffectView *)backgroundView;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)shouldRemovePresentersView;
-(void)presentationTransitionWillBegin;
-(id)dismissalAnimations;
-(void)setDismissalAnimations:(id)arg1 ;
@end

