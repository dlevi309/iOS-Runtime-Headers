/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSKeychainSyncTextEntryController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIButton, NSString, PSKeychainSyncManager;

@interface KeychainSyncSMSVerificationController : PSKeychainSyncTextEntryController <UIAlertViewDelegate> {

	UIButton* _footerButton;
	NSString* _phoneNumber;
	NSString* _dialingPrefix;
	NSString* _countryCode;
	PSKeychainSyncManager* _keychainSyncManager;

}

@property (nonatomic,retain) NSString * phoneNumber;                                          //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * dialingPrefix;                                        //@synthesize dialingPrefix=_dialingPrefix - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                                          //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic,__weak) PSKeychainSyncManager * keychainSyncManager;              //@synthesize keychainSyncManager=_keychainSyncManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)countryCode;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setDialingPrefix:(NSString *)arg1 ;
-(NSString *)dialingPrefix;
-(id)specifiers;
-(void)dismissAlerts;
-(void)setKeychainSyncManager:(PSKeychainSyncManager *)arg1 ;
-(void)showSupportVerification;
-(PSKeychainSyncManager *)keychainSyncManager;
@end

