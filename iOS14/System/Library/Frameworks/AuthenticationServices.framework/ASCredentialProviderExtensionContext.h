/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)cancelRequestWithError:(id)arg1 ;
-(void)provideCredentialWithoutUserInteractionForIdentity:(id)arg1 ;
-(void)prepareInterfaceForExtensionConfiguration;
-(void)prepareCredentialListForServiceIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareInterfaceToProvideCredentialForIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)completeRequestWithSelectedCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)completeExtensionConfigurationRequest;
@end

