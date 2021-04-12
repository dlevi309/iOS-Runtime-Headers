/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UITargetedPreview;


@protocol _UIPreviewInteractionViewControllerTransition <NSObject>
@property (nonatomic,copy) UITargetedPreview * sourcePreview; 
@optional
-(void)setSourcePreview:(id)arg1;
-(UITargetedPreview *)sourcePreview;
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
-(void)transitionWillReverse;
-(void)performWithCustomAnimator:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
-(void)transitionDidEnd:(BOOL)arg1;

@end

