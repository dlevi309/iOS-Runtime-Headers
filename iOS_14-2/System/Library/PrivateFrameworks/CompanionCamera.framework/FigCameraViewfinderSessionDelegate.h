/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
*/


@protocol FigCameraViewfinderSessionDelegate <NSObject>
@optional
-(void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_CC0)arg4;
-(void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(int)arg2;
-(void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1;

@end

