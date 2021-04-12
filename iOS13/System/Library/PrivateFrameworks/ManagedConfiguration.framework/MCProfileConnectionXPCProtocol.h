/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol MCProfileConnectionXPCProtocol <NSObject>
@required
-(void)doMCICDidUpdateStatus:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidBeginInstallingNextProfileData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3;
-(void)doMCICDidRequestUserInput:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidRequestMAIDSignIn:(id)arg1 personaID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)doMCICDidFinishPreflightWithError:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidRequestShowUserWarnings:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidRequestCurrentPasscodeWithCompletion:(/*^block*/id)arg1;

@end

