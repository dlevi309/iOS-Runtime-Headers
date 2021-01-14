/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) UITargetedPreview * sourcePreview; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewController:(CCUIContentModuleContainerViewController *)arg1 ;
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(CCUIContentModuleContainerViewController *)viewController;
-(void)transitionDidEnd:(BOOL)arg1 ;
-(void)setAppearanceTransition:(BOOL)arg1 ;
-(void)setContentRestOverrideFrame:(CGRect)arg1 ;
-(BOOL)isAppearanceTransition;
-(CGRect)contentRestOverrideFrame;
@end

