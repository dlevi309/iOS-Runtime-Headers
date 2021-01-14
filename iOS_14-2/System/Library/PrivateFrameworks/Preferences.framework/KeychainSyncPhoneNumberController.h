/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSKeychainSyncViewController.h>
#import <libobjc.A.dylib/KeychainSyncPhoneSettingsFragmentDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/KeychainSyncViewController.h>

@class KeychainSyncPhoneSettingsFragment, UILabel, NSString;

@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController <KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController> {

	KeychainSyncPhoneSettingsFragment* _phoneSettingsFragment;
	UILabel* _footerLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)nextPressed;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)reloadSpecifiers;
-(void)controllerDone;
-(void)loadView;
-(void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3 ;
-(void)viewDidLayoutSubviews;
@end

