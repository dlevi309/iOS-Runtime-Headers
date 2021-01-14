/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIPreviewInteractionControllerDelegate <NSObject>
@optional
-(BOOL)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(CGPoint)arg2 inView:(id)arg3;
-(void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(CGPoint)arg3 inSourceView:(id)arg4 containerView:(id)arg5;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(CGPoint)arg3 inSourceView:(id)arg4;
-(BOOL)previewInteractionController:(id)arg1 shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg2;
-(id)previewInteractionController:(id)arg1 committedViewControllerForPreviewViewController:(id)arg2;
-(void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3;
-(void)previewInteractionController:(id)arg1 performCommitToViewController:(id)arg2;

@required
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(CGPoint)arg2 inView:(id)arg3 presentingViewController:(id*)arg4;
-(void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
-(BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;

@end

