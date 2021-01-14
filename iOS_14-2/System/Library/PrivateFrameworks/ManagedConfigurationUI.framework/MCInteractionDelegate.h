/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

