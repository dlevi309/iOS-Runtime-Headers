/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/


@protocol FPUIAuthenticationConnectionFlowDelegate <NSObject>
@required
-(void)authenticationDelegate:(id)arg1 didEncounterError:(id)arg2;
-(void)authenticationDelegate:(id)arg1 didReceiveCredentialDescriptors:(id)arg2;
-(void)authenticationDelegate:(id)arg1 didReceiveVolumeMountRepresentations:(id)arg2;
-(void)authenticationDelegate:(id)arg1 didFinishWithError:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

