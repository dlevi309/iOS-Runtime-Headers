/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPresentedViewController:(id)arg1 presentationController:(id)arg2 ;
-(UIViewController *)viewController;
-(UIView *)customViewForTouchContinuation;
-(UIPresentationController *)presentationController;
-(id<_UIClickPresentationTransition>)appearanceTransition;
-(UIView *)customContainerView;
-(void)setCustomContainerView:(UIView *)arg1 ;
-(void)setCustomViewForTouchContinuation:(UIView *)arg1 ;
-(void)setAppearanceTransition:(id<_UIClickPresentationTransition>)arg1 ;
-(void)setDisappearanceTransition:(id<_UIClickPresentationTransition>)arg1 ;
-(id<_UIClickPresentationTransition>)disappearanceTransition;
@end

