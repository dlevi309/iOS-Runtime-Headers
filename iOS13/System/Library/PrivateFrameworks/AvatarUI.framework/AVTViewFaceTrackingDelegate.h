/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTViewFaceTrackingDelegate <NSObject>
@required
-(void)avatarView:(id)arg1 didUpdateWithFaceTrackingStatus:(BOOL)arg2;
-(void)avatarView:(id)arg1 didUpdateWithLowLightStatus:(BOOL)arg2;
-(void)avatarView:(id)arg1 didUpdateWithSensorOcclusionStatus:(BOOL)arg2;
-(void)avatarView:(id)arg1 faceTrackingSessionFailedWithError:(id)arg2;
-(void)avatarViewFaceTrackingSessionInterruptionDidBegin:(id)arg1;
-(void)avatarViewFaceTrackingSessionInterruptionDidEnd:(id)arg1;

@end

