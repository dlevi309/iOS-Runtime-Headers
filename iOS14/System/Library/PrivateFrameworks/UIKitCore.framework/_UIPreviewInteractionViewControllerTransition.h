/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UITargetedPreview;


@protocol _UIPreviewInteractionViewControllerTransition <NSObject>
@property (nonatomic,copy) UITargetedPreview * sourcePreview; 
@optional
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
-(void)transitionWillReverse;
-(UITargetedPreview *)sourcePreview;
-(void)setSourcePreview:(id)arg1;
-(void)performWithCustomAnimator:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
-(void)transitionDidEnd:(BOOL)arg1;

@end

