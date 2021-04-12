/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIPresentationController.h>

@class UIVisualEffectView;

@interface VUIDialogPresentationController : UIPresentationController {

	UIVisualEffectView* _backdropView;
	/*^block*/id _completedAnimationBlock;
	CGSize _modalSize;

}

@property (nonatomic,readonly) UIVisualEffectView * backdropView; 
@property (assign,nonatomic) CGSize modalSize;                                 //@synthesize modalSize=_modalSize - In the implementation block
@property (nonatomic,copy) id completedAnimationBlock;                         //@synthesize completedAnimationBlock=_completedAnimationBlock - In the implementation block
-(void)dealloc;
-(long long)presentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(UIVisualEffectView *)backdropView;
-(void)dismissalTransitionWillBegin;
-(void)_tapGesture:(id)arg1 ;
-(void)setModalSize:(CGSize)arg1 ;
-(void)setCompletedAnimationBlock:(id)arg1 ;
-(id)completedAnimationBlock;
-(void)_layoutPresentedView;
-(CGSize)modalSize;
@end

