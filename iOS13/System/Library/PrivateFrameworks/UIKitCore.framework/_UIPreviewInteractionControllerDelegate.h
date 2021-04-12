/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIPreviewInteractionControllerDelegate <NSObject>
@optional
-(void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2;
-(void)previewInteractionController:(id)arg1 willDismissViewController:(id)arg2;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(CGPoint)arg3 inSourceView:(id)arg4;

@required
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3 presentingViewController:(id*)arg4;
-(void)previewInteractionController:(id)arg1 commitViewController:(id)arg2;

@end

