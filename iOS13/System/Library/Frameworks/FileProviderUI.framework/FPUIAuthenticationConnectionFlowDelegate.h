/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/


@protocol FPUIAuthenticationConnectionFlowDelegate <NSObject>
@required
-(void)authenticationDelegate:(id)arg1 didEncounterError:(id)arg2;
-(void)authenticationDelegate:(id)arg1 didReceiveCredentialDescriptors:(id)arg2;
-(void)authenticationDelegate:(id)arg1 didReceiveVolumeMountRepresentations:(id)arg2;
-(void)authenticationDelegate:(id)arg1 didFinishWithError:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

