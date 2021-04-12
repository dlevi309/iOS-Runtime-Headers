/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUVideoDeviceControllerProviderDelegate <AVConferencePreviewClientDelegate>
@required
-(void)didStartPreviewForProvider:(id)arg1;
-(void)didStopPreviewForProvider:(id)arg1;
-(void)captureDevicesChangedForProvider:(id)arg1;
-(void)provider:(id)arg1 cameraDidBecomeAvailableForUniqueID:(id)arg2;
-(void)provider:(id)arg1 didChangeLocalVideoAttributes:(id)arg2;
-(void)provider:(id)arg1 didReceiveErrorFromCameraUniqueID:(id)arg2 error:(id)arg3;
-(void)provider:(id)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg2;
-(void)provider:(id)arg1 cameraZoomAvailabilityDidChange:(BOOL)arg2;

@end

