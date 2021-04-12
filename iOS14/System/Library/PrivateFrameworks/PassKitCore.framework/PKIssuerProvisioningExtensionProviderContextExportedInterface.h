/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKIssuerProvisioningExtensionProviderContextExportedInterface <NSObject>
@required
-(void)statusWithCompletion:(/*^block*/id)arg1;
-(void)passEntriesWithCompletion:(/*^block*/id)arg1;
-(void)remotePassEntriesWithCompletion:(/*^block*/id)arg1;
-(void)generateRequestWithEntryIdentifier:(id)arg1 configuration:(id)arg2 certificateChain:(id)arg3 nonce:(id)arg4 nonceSignature:(id)arg5 completionHandler:(/*^block*/id)arg6;

@end

