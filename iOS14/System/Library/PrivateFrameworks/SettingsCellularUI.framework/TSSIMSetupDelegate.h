/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@protocol TSSIMSetupDelegate <NSObject>
@optional
-(long long)userConsentResponse;
-(void)waitForResponse:(id)arg1;
-(void)receivedResponse;

@required
-(void)simSetupFlowCompleted;

@end

