/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <UIKitCore/UIViewController.h>

@class ASAccountAuthenticationModificationExtensionContext;

@interface ASAccountAuthenticationModificationViewController : UIViewController

@property (nonatomic,readonly) ASAccountAuthenticationModificationExtensionContext * extensionContext; 
-(ASAccountAuthenticationModificationExtensionContext *)extensionContext;
-(void)cancelRequest;
-(void)convertAccountToSignInWithAppleWithoutUserInteractionForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 userInfo:(id)arg3 ;
-(void)prepareInterfaceToConvertAccountToSignInWithAppleForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 userInfo:(id)arg3 ;
-(void)changePasswordWithoutUserInteractionForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 newPassword:(id)arg3 userInfo:(id)arg4 ;
-(void)prepareInterfaceToChangePasswordForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 newPassword:(id)arg3 userInfo:(id)arg4 ;
@end

