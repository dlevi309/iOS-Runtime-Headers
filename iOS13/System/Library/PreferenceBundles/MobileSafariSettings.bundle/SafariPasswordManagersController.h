/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/SFCredentialProviderExtensionManagerObserver.h>
#import <libobjc.A.dylib/_ASCredentialProviderExtensionConfigurationViewControllerDelegate.h>

@class _ASCredentialProviderExtensionConfigurationViewController, MCProfileConnection, PSSpecifier, NSString;

@interface SafariPasswordManagersController : PSListController <MCProfileConnectionObserver, SFCredentialProviderExtensionManagerObserver, _ASCredentialProviderExtensionConfigurationViewControllerDelegate> {

	_ASCredentialProviderExtensionConfigurationViewController* _extensionConfigurationController;
	MCProfileConnection* _profileConnection;
	PSSpecifier* _passwordAutoFillSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1 ;
-(void)credentialProviderExtensionConfigurationViewControllerDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_formDataController;
-(void)_setValue:(id)arg1 forPasswordAutoFillSpecifier:(id)arg2 ;
-(id)_valueOfPasswordAutoFillSpecifier:(id)arg1 ;
-(BOOL)_keychainAutoFillEnabled;
-(id)_valueOfThirdPartyPasswordManagerSpecifier:(id)arg1 ;
-(void)_setKeychainAutoFillEnabled:(BOOL)arg1 ;
-(void)_setValue:(id)arg1 forThirdPartyPasswordManagerSpecifier:(id)arg2 ;
@end

