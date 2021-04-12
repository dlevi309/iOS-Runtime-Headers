/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

