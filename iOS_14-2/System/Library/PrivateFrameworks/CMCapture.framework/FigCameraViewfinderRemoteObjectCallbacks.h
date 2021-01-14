/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol FigCameraViewfinderRemoteObjectCallbacks <NSObject>
@required
-(void)viewfinderSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW8)arg4;
-(void)viewfinderSession:(long long)arg1 previewStreamDidCloseWithStatus:(int)arg2;
-(void)viewfinderSessionDidBegin:(id)arg1 withIdentifier:(long long)arg2;
-(void)viewfinderSessionPreviewStreamDidOpen:(long long)arg1;
-(void)viewfinderSessionDidEnd;

@end

