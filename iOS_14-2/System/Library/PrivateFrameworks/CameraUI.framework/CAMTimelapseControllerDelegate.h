/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMTimelapseControllerDelegate <NSObject>
@required
-(void)timelapseControllerStopped:(id)arg1;
-(void)timelapseController:(id)arg1 startedWithCaptureOrientation:(long long)arg2;
-(void)timelapseController:(id)arg1 persistedPlaceholderResult:(id)arg2 error:(id)arg3;
-(void)timelapseController:(id)arg1 generatedPlaceholderResult:(id)arg2 withThumbnailImage:(id)arg3 forAssetUUID:(id)arg4 inCaptureSession:(unsigned short)arg5;

@end

