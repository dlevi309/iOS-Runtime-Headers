/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPreviewInteractionViewControllerTransition.h>

@class UITargetedPreview, NSString;

@interface _UIPreviewInteractionCrossBlurViewControllerTransition : NSObject <_UIPreviewInteractionViewControllerTransition> {

	CGRect _initialPlatterRect;
	CGRect _finalPlatterRect;
	BOOL _dismissTransition;

}

@property (assign,getter=isDismissTransition,nonatomic) BOOL dismissTransition;              //@synthesize dismissTransition=_dismissTransition - In the implementation block
@property (nonatomic,copy) UITargetedPreview * sourcePreview; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDismissTransition;
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)transitionDidEnd:(BOOL)arg1 ;
-(void)setDismissTransition:(BOOL)arg1 ;
-(void)prepareDisappearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)prepareAppearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)performDisappearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)performAppearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
@end

