/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/_UIClickPresentationTransition.h>

@class UITargetedPreview, UIViewPropertyAnimator, CCUIContentModuleContainerViewController, NSString;

@interface CCUIContentModuleContainerTransition : NSObject <_UIClickPresentationTransition> {

	BOOL _appearanceTransition;
	CCUIContentModuleContainerViewController* _viewController;
	CGRect _contentRestOverrideFrame;

}

@property (assign,nonatomic,__weak) CCUIContentModuleContainerViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,getter=isAppearanceTransition,nonatomic) BOOL appearanceTransition;                       //@synthesize appearanceTransition=_appearanceTransition - In the implementation block
@property (assign,nonatomic) CGRect contentRestOverrideFrame;                                               //@synthesize contentRestOverrideFrame=_contentRestOverrideFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UITargetedPreview * sourcePreview; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
-(void)setViewController:(CCUIContentModuleContainerViewController *)arg1 ;
-(CCUIContentModuleContainerViewController *)viewController;
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)transitionDidEnd:(BOOL)arg1 ;
-(void)setAppearanceTransition:(BOOL)arg1 ;
-(void)setContentRestOverrideFrame:(CGRect)arg1 ;
-(CGRect)contentRestOverrideFrame;
-(BOOL)isAppearanceTransition;
@end

