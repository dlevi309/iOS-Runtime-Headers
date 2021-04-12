/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMTimelapseControllerDelegate <NSObject>
@required
-(void)timelapseController:(id)arg1 startedWithCaptureOrientation:(long long)arg2;
-(void)timelapseControllerStopped:(id)arg1;
-(void)timelapseController:(id)arg1 generatedPlaceholderResult:(id)arg2 withThumbnailImage:(id)arg3 forAssetUUID:(id)arg4 inCaptureSession:(unsigned short)arg5;
-(void)timelapseController:(id)arg1 persistedPlaceholderResult:(id)arg2 error:(id)arg3;

@end

