/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
*/


@protocol AVConferencePreviewClientDelegate
@optional
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)didReceiveFirstPreviewFrameFromCamera:(unsigned)arg1;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
-(void)didChangeLocalVideoAttributes:(id)arg1;
-(void)didChangeLocalScreenAttributes:(id)arg1;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
-(void)didReceiveCommError;
-(void)didGetSnapshot:(id)arg1;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
-(void)cameraDidBecomeInterruptedForForUniqueID:(id)arg1 reason:(long long)arg2;
-(void)cameraZoomAvailabilityDidChange:(BOOL)arg1;
-(void)cameraZoomAvailabilityDidChange:(BOOL)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;

@end

