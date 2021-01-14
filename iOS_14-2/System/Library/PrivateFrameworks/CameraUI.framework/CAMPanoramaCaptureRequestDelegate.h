/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMPanoramaCaptureRequestDelegate <NSObject>
@optional
-(void)panoramaRequest:(id)arg1 didGeneratePaintingStatus:(id)arg2;
-(void)panoramaRequestDidStopCapturing:(id)arg1 interrupted:(BOOL)arg2;
-(void)panoramaRequestDidStartCapturing:(id)arg1;
-(void)panoramaRequestDidCompleteLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)panoramaRequestDidCompleteCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)panoramaRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end

