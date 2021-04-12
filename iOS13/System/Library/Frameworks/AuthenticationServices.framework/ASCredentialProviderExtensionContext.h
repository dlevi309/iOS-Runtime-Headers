/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_ASCredentialProviderExtensionContextProtocol.h>

@class NSString;

@interface ASCredentialProviderExtensionContext : NSExtensionContext <_ASCredentialProviderExtensionContextProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)cancelRequestWithError:(id)arg1 ;
-(void)prepareCredentialListForServiceIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideCredentialWithoutUserInteractionForIdentity:(id)arg1 ;
-(void)prepareInterfaceToProvideCredentialForIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareInterfaceForExtensionConfiguration;
-(void)completeRequestWithSelectedCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)completeExtensionConfigurationRequest;
@end

