/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <UIKitCore/UIViewController.h>

@class ASCredentialProviderExtensionContext;

@interface ASCredentialProviderViewController : UIViewController

@property (nonatomic,readonly) ASCredentialProviderExtensionContext * extensionContext; 
-(ASCredentialProviderExtensionContext *)extensionContext;
-(void)prepareCredentialListForServiceIdentifiers:(id)arg1 ;
-(void)provideCredentialWithoutUserInteractionForIdentity:(id)arg1 ;
-(void)prepareInterfaceToProvideCredentialForIdentity:(id)arg1 ;
-(void)prepareInterfaceForExtensionConfiguration;
@end

