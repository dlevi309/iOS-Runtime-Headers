/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/


@protocol LSApplicationWorkspaceObserverProtocol <NSObject>
@optional
-(void)applicationInstallsDidStart:(id)arg1;
-(BOOL)observeLaunchProhibitedApps;
-(void)applicationsDidChangePersonas:(id)arg1;
-(void)applicationInstallsDidPrioritize:(id)arg1;
-(void)deviceManagementPolicyDidChange:(id)arg1;
-(void)applicationStateDidChange:(id)arg1;
-(void)networkUsageChanged:(BOOL)arg1;
-(void)applicationInstallsDidCancel:(id)arg1;
-(void)applicationsWillUninstall:(id)arg1;
-(void)pluginsDidInstall:(id)arg1;
-(void)applicationsDidInstall:(id)arg1;
-(void)applicationInstallsDidResume:(id)arg1;
-(void)applicationInstallsDidUpdateIcon:(id)arg1;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
-(void)applicationsWillInstall:(id)arg1;
-(void)applicationsDidFailToUninstall:(id)arg1;
-(void)applicationIconDidChange:(id)arg1;
-(void)applicationsDidFailToInstall:(id)arg1;
-(void)applicationInstallsDidChange:(id)arg1;
-(void)applicationInstallsDidPause:(id)arg1;
-(void)pluginsDidUninstall:(id)arg1;
-(void)applicationsDidUninstall:(id)arg1;
-(void)pluginsWillUninstall:(id)arg1;

@end

