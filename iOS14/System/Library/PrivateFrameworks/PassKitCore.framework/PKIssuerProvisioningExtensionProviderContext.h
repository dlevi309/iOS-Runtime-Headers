/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/PKIssuerProvisioningExtensionProviderContextExportedInterface.h>

@class PKIssuerProvisioningExtensionHandler, NSString;

@interface PKIssuerProvisioningExtensionProviderContext : NSExtensionContext <PKIssuerProvisioningExtensionProviderContextExportedInterface> {

	PKIssuerProvisioningExtensionHandler* _handler;

}

@property (nonatomic,retain) PKIssuerProvisioningExtensionHandler * handler;              //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setHandler:(PKIssuerProvisioningExtensionHandler *)arg1 ;
-(void)connect;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)statusWithCompletion:(/*^block*/id)arg1 ;
-(void)passEntriesWithCompletion:(/*^block*/id)arg1 ;
-(void)remotePassEntriesWithCompletion:(/*^block*/id)arg1 ;
-(void)generateRequestWithEntryIdentifier:(id)arg1 configuration:(id)arg2 certificateChain:(id)arg3 nonce:(id)arg4 nonceSignature:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(PKIssuerProvisioningExtensionHandler *)handler;
@end

