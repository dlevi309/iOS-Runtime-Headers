/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMPanoramaCaptureRequestDelegate <NSObject>
@optional
-(void)panoramaRequestDidStartCapturing:(id)arg1;
-(void)panoramaRequest:(id)arg1 didGeneratePaintingStatus:(id)arg2;
-(void)panoramaRequestDidStopCapturing:(id)arg1 interrupted:(BOOL)arg2;
-(void)panoramaRequestDidCompleteCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)panoramaRequestDidCompleteLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)panoramaRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end

