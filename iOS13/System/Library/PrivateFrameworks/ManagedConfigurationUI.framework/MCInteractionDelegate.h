/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/


@protocol MCInteractionDelegate <NSObject>
@optional
-(void)profileConnection:(id)arg1 didUpdateStatus:(id)arg2;
-(void)profileConnection:(id)arg1 didBeginInstallingNextProfile:(id)arg2;

@required
-(void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3;
-(void)profileConnectionDidRequestCurrentPasscode:(id)arg1;
-(void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2;
-(void)profileConnection:(id)arg1 didRequestMAIDSignIn:(id)arg2 personaID:(id)arg3;
-(void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2;
-(void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;

@end

