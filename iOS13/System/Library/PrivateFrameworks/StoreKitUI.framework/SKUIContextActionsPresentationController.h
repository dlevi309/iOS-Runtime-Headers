/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIVisualEffectView *)backgroundView;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)dismissalTransitionWillBegin;
-(BOOL)shouldRemovePresentersView;
-(id)dismissalAnimations;
-(void)setDismissalAnimations:(id)arg1 ;
@end

