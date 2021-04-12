/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol FigCameraViewfinderRemoteObjectCallbacks <NSObject>
@required
-(void)viewfinderSessionDidBegin:(id)arg1 withIdentifier:(long long)arg2;
-(void)viewfinderSessionDidEnd;
-(void)viewfinderSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4;
-(void)viewfinderSessionPreviewStreamDidOpen:(long long)arg1;
-(void)viewfinderSession:(long long)arg1 previewStreamDidCloseWithStatus:(int)arg2;

@end

