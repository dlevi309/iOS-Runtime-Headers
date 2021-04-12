/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
*/


@protocol SUManagerClientDelegate <NSObject>
@optional
-(void)automaticUpdateV2EnabledDidChange:(id)arg1;
-(void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2;
-(void)client:(id)arg1 scanRequestDidFinishForOptions:(id)arg2 update:(id)arg3 error:(id)arg4;
-(void)client:(id)arg1 scanDidCompleteWithNewUpdateAvailable:(id)arg2 error:(id)arg3;
-(void)client:(id)arg1 automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 downloadDidStart:(id)arg2;
-(void)client:(id)arg1 downloadProgressDidChange:(id)arg2;
-(void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 downloadDidFinish:(id)arg2;
-(void)client:(id)arg1 downloadDidFinish:(id)arg2 withInstallPolicy:(id)arg3;
-(void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2;
-(void)client:(id)arg1 installDidStart:(id)arg2;
-(void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 installDidFinish:(id)arg2;
-(void)client:(id)arg1 installPolicyDidChange:(id)arg2;
-(void)client:(id)arg1 managedInstallationRequested:(id)arg2;

@end

