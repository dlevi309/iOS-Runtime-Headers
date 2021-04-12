/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)handleDoubleHeightStatusBarTap;
-(void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;
-(void)didInvalidateForRemoteAlert;

@required
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@end

