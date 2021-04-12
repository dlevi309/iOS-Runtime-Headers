/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol CFXLiveCaptureViewControllerDelegate <NSObject>
@required
-(void)liveCaptureViewController:(id)arg1 didRenderFrame:(id)arg2;
-(void)liveCaptureViewController:(id)arg1 livePreviewTappedAtNormalizedPoint:(CGPoint)arg2;
-(void)liveCaptureViewController:(id)arg1 livePreviewPannedAtNormalizedPoint:(CGPoint)arg2 gesture:(id)arg3;
-(void)liveCaptureViewController:(id)arg1 livePreviewPinchedAtNormalizedCenterPoint:(CGPoint)arg2 gesture:(id)arg3;
-(void)liveCaptureViewController:(id)arg1 livePreviewRotatedAtNormalizedCenterPoint:(CGPoint)arg2 gesture:(id)arg3;
-(void)liveCaptureViewController:(id)arg1 livePreviewDoubleTappedAtNormalizedCenterPoint:(CGPoint)arg2 gesture:(id)arg3;

@end

