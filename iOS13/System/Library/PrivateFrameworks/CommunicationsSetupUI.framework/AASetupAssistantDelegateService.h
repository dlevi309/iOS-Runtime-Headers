/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/


@protocol AASetupAssistantDelegateService
@optional
-(void)setDeviceLocatorEnabled:(BOOL)arg1;
-(void)setupOperationFailed;
-(BOOL)canAutoSetupMailAccount:(id)arg1;
-(BOOL)needSetupForMailAccount:(id)arg1;
-(void)setupMailAccount:(id)arg1 password:(id)arg2 handler:(/*^block*/id)arg3;
-(void)verifyAccountWithAppleID:(id)arg1 handler:(/*^block*/id)arg2;
-(void)setCloudServicesEnabled:(BOOL)arg1 handler:(/*^block*/id)arg2;
-(void)setBackupEnabled:(BOOL)arg1 handler:(/*^block*/id)arg2;
-(void)completeEnablingCloudServicesWithHandler:(/*^block*/id)arg1;

@required
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2;

@end

