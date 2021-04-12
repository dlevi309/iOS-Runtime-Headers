/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <UIKitCore/UIViewController.h>

@class ASCredentialProviderExtensionContext;

@interface ASCredentialProviderViewController : UIViewController

@property (nonatomic,readonly) ASCredentialProviderExtensionContext * extensionContext; 
-(ASCredentialProviderExtensionContext *)extensionContext;
-(void)provideCredentialWithoutUserInteractionForIdentity:(id)arg1 ;
-(void)prepareInterfaceForExtensionConfiguration;
-(void)prepareCredentialListForServiceIdentifiers:(id)arg1 ;
-(void)prepareInterfaceToProvideCredentialForIdentity:(id)arg1 ;
@end

