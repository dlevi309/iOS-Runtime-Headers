/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIPreviewInteractionViewControllerTransition;
@class UIViewController, UIView, UIPreviewPresentationController;

@interface _UIPreviewInteractionViewControllerPresentation : NSObject {

	BOOL _shouldUseCATransitions;
	BOOL _shouldFlipFromAndToViewsForDisappearanceTransition;
	BOOL _shouldUpdateFromViewBeforePresentation;
	BOOL _shouldPresentAutomatically;
	UIViewController* _viewController;
	UIView* _customContainerView;
	UIPreviewPresentationController* _presentationController;
	id<_UIPreviewInteractionViewControllerTransition> _appearanceTransition;
	id<_UIPreviewInteractionViewControllerTransition> _disappearanceTransition;
	/*^block*/id _privatePresentationBlock;
	/*^block*/id _privatePresentationCompletionBlock;
	UIView* _customViewForTouchContinuation;

}

@property (nonatomic,retain) UIViewController * viewController;                                                      //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) BOOL shouldUseCATransitions;                                                            //@synthesize shouldUseCATransitions=_shouldUseCATransitions - In the implementation block
@property (assign,nonatomic) BOOL shouldFlipFromAndToViewsForDisappearanceTransition;                                //@synthesize shouldFlipFromAndToViewsForDisappearanceTransition=_shouldFlipFromAndToViewsForDisappearanceTransition - In the implementation block
@property (nonatomic,copy) id privatePresentationBlock;                                                              //@synthesize privatePresentationBlock=_privatePresentationBlock - In the implementation block
@property (nonatomic,copy) id privatePresentationCompletionBlock;                                                    //@synthesize privatePresentationCompletionBlock=_privatePresentationCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateFromViewBeforePresentation;                                            //@synthesize shouldUpdateFromViewBeforePresentation=_shouldUpdateFromViewBeforePresentation - In the implementation block
@property (assign,nonatomic,__weak) UIView * customViewForTouchContinuation;                                         //@synthesize customViewForTouchContinuation=_customViewForTouchContinuation - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentAutomatically;                                                        //@synthesize shouldPresentAutomatically=_shouldPresentAutomatically - In the implementation block
@property (nonatomic,retain) UIView * customContainerView;                                                           //@synthesize customContainerView=_customContainerView - In the implementation block
@property (nonatomic,retain) UIPreviewPresentationController * presentationController;                               //@synthesize presentationController=_presentationController - In the implementation block
@property (nonatomic,retain) id<_UIPreviewInteractionViewControllerTransition> appearanceTransition;                 //@synthesize appearanceTransition=_appearanceTransition - In the implementation block
@property (nonatomic,retain) id<_UIPreviewInteractionViewControllerTransition> disappearanceTransition;              //@synthesize disappearanceTransition=_disappearanceTransition - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(UIPreviewPresentationController *)presentationController;
-(id<_UIPreviewInteractionViewControllerTransition>)appearanceTransition;
-(UIView *)customViewForTouchContinuation;
-(id<_UIPreviewInteractionViewControllerTransition>)disappearanceTransition;
-(UIView *)customContainerView;
-(void)setCustomContainerView:(UIView *)arg1 ;
-(void)setCustomViewForTouchContinuation:(UIView *)arg1 ;
-(void)setAppearanceTransition:(id<_UIPreviewInteractionViewControllerTransition>)arg1 ;
-(void)setDisappearanceTransition:(id<_UIPreviewInteractionViewControllerTransition>)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)setPresentationController:(UIPreviewPresentationController *)arg1 ;
-(BOOL)shouldPresentAutomatically;
-(void)setPrivatePresentationBlock:(id)arg1 ;
-(void)setPrivatePresentationCompletionBlock:(id)arg1 ;
-(BOOL)shouldUseCATransitions;
-(BOOL)shouldFlipFromAndToViewsForDisappearanceTransition;
-(BOOL)shouldUpdateFromViewBeforePresentation;
-(void)presentViewController;
-(void)_completeViewControllerPresentationImmediately;
-(void)setShouldUseCATransitions:(BOOL)arg1 ;
-(void)setShouldFlipFromAndToViewsForDisappearanceTransition:(BOOL)arg1 ;
-(id)privatePresentationBlock;
-(id)privatePresentationCompletionBlock;
-(void)setShouldUpdateFromViewBeforePresentation:(BOOL)arg1 ;
-(void)setShouldPresentAutomatically:(BOOL)arg1 ;
@end

