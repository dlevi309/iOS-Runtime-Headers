/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIClickPresentationTransition;
@class UIViewController, UIPresentationController, UIView;

@interface _UIClickPresentation : NSObject {

	UIViewController* _viewController;
	UIPresentationController* _presentationController;
	UIView* _customContainerView;
	UIView* _customViewForTouchContinuation;
	id<_UIClickPresentationTransition> _appearanceTransition;
	id<_UIClickPresentationTransition> _disappearanceTransition;

}

@property (nonatomic,readonly) UIViewController * viewController;                                     //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIPresentationController * presentationController;                     //@synthesize presentationController=_presentationController - In the implementation block
@property (nonatomic,retain) UIView * customContainerView;                                            //@synthesize customContainerView=_customContainerView - In the implementation block
@property (nonatomic,retain) UIView * customViewForTouchContinuation;                                 //@synthesize customViewForTouchContinuation=_customViewForTouchContinuation - In the implementation block
@property (nonatomic,retain) id<_UIClickPresentationTransition> appearanceTransition;                 //@synthesize appearanceTransition=_appearanceTransition - In the implementation block
@property (nonatomic,retain) id<_UIClickPresentationTransition> disappearanceTransition;              //@synthesize disappearanceTransition=_disappearanceTransition - In the implementation block
-(UIViewController *)viewController;
-(UIPresentationController *)presentationController;
-(id<_UIClickPresentationTransition>)appearanceTransition;
-(UIView *)customViewForTouchContinuation;
-(id<_UIClickPresentationTransition>)disappearanceTransition;
-(id)initWithPresentedViewController:(id)arg1 presentationController:(id)arg2 ;
-(UIView *)customContainerView;
-(void)setCustomContainerView:(UIView *)arg1 ;
-(void)setCustomViewForTouchContinuation:(UIView *)arg1 ;
-(void)setAppearanceTransition:(id<_UIClickPresentationTransition>)arg1 ;
-(void)setDisappearanceTransition:(id<_UIClickPresentationTransition>)arg1 ;
@end

