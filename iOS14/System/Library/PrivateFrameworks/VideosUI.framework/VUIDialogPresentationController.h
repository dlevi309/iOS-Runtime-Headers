/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIVisualEffectView *)backdropView;
-(long long)presentationStyle;
-(void)dismissalTransitionWillBegin;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_tapGesture:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)dealloc;
-(void)setModalSize:(CGSize)arg1 ;
-(void)setCompletedAnimationBlock:(id)arg1 ;
-(id)completedAnimationBlock;
-(void)_layoutPresentedView;
-(CGSize)modalSize;
@end

