/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/


@protocol SBUIRemoteAlertServiceInterface
@optional
-(void)setUserInfo:(id)arg1;
-(void)prepareForActivationWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)handleButtonActions:(id)arg1;
-(void)handleLockButtonPressed;
-(void)handleVolumeUpButtonPressed;
-(void)handleVolumeDownButtonPressed;
-(void)handleHeadsetButtonPressed:(BOOL)arg1;
-(void)handleHomeButtonPressed;
-(void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;
-(void)didInvalidateForRemoteAlert;
-(void)didTransitionToAttachedToWindowedAccessory:(BOOL)arg1 windowedAccessoryCutoutFrameInScreen:(CGRect)arg2;
-(void)handleDoubleHeightStatusBarTap;

@required
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@end

