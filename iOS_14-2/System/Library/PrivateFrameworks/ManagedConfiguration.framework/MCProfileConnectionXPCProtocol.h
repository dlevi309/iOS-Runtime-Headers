/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol MCProfileConnectionXPCProtocol <NSObject>
@required
-(void)doMCICDidRequestCurrentPasscodeWithCompletion:(/*^block*/id)arg1;
-(void)doMCICDidRequestUserInput:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidBeginInstallingNextProfileData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3;
-(void)doMCICDidRequestMAIDSignIn:(id)arg1 personaID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)doMCICDidRequestShowUserWarnings:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidFinishPreflightWithError:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidUpdateStatus:(id)arg1 completion:(/*^block*/id)arg2;

@end

