/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIPreviewInteractionControllerDelegate <NSObject>
@optional
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(CGPoint)arg3 inSourceView:(id)arg4;
-(void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2;
-(void)previewInteractionController:(id)arg1 willDismissViewController:(id)arg2;

@required
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3 presentingViewController:(id*)arg4;
-(void)previewInteractionController:(id)arg1 commitViewController:(id)arg2;

@end

