/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
*/


@protocol SUSUISoftwareUpdateManagerDelegate <NSObject>
@optional
-(void)manager:(id)arg1 scanFoundUpdate:(id)arg2 error:(id)arg3;
-(void)manager:(id)arg1 downloadFinished:(id)arg2;
-(void)manager:(id)arg1 download:(id)arg2 failedWithError:(id)arg3;
-(void)manager:(id)arg1 installStartedForUpdate:(id)arg2;
-(void)manager:(id)arg1 installFailedWithError:(id)arg2;

@required
-(void)manager:(id)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(id)arg4;
-(void)manager:(id)arg1 downloadProgressChanged:(id)arg2 displayStyle:(int)arg3;
-(void)manager:(id)arg1 promptForDevicePasscodeWithCompletion:(/*^block*/id)arg2;

@end

