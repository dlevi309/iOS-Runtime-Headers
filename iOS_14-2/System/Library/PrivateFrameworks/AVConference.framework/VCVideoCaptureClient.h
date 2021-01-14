/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCVideoCaptureClient
@optional
-(void)avConferenceScreenCaptureError:(id)arg1;
-(void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(BOOL)arg2 powerLevelDidChange:(BOOL)arg3;

@required
-(void)thermalLevelDidChange:(int)arg1;
-(id)clientCaptureRule;
-(void)avConferencePreviewError:(id)arg1;
-(void)cameraAvailabilityDidChange:(BOOL)arg1;

@end

