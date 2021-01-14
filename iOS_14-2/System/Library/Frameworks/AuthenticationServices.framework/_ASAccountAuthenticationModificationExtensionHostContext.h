/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_ASAccountAuthenticationModificationExtensionHostContextProtocol.h>
#import <libobjc.A.dylib/_ASExtensionHostContext.h>

@protocol _ASAccountAuthenticationModificationExtensionHostContextDelegate;
@class NSString;

@interface _ASAccountAuthenticationModificationExtensionHostContext : NSExtensionContext <_ASAccountAuthenticationModificationExtensionHostContextProtocol, _ASExtensionHostContext> {

	id<_ASAccountAuthenticationModificationExtensionHostContextDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_ASAccountAuthenticationModificationExtensionHostContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id<_ASAccountAuthenticationModificationExtensionHostContextDelegate>)delegate;
-(void)setDelegate:(id<_ASAccountAuthenticationModificationExtensionHostContextDelegate>)arg1 ;
-(void)getSignInWithAppleAuthorizationWithState:(id)arg1 nonce:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)prepareToCompleteUpgradeToSignInWithAppleWithUserInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareToCompleteRequestWithUpdatedCredential:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)prepareToCancelRequestWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissRequestUI;
@end

