/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

