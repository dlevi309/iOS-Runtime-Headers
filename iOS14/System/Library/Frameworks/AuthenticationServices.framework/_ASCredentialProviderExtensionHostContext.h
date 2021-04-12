/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_ASCredentialProviderExtensionHostContextProtocol.h>
#import <libobjc.A.dylib/_ASExtensionHostContext.h>

@protocol _ASCredentialProviderExtensionHostContextDelegate;
@class NSString;

@interface _ASCredentialProviderExtensionHostContext : NSExtensionContext <_ASCredentialProviderExtensionHostContextProtocol, _ASExtensionHostContext> {

	id<_ASCredentialProviderExtensionHostContextDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_ASCredentialProviderExtensionHostContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id<_ASCredentialProviderExtensionHostContextDelegate>)delegate;
-(void)setDelegate:(id<_ASCredentialProviderExtensionHostContextDelegate>)arg1 ;
-(void)prepareToCancelRequestWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareToCompleteRequestWithSelectedCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareToCompleteExtensionConfigurationRequestWithCompletion:(/*^block*/id)arg1 ;
@end

