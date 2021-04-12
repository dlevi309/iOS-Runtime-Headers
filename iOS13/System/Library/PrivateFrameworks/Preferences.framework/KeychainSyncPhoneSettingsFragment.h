/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@protocol KeychainSyncPhoneSettingsFragmentDelegate;
@class NSArray, PSPhoneNumberSpecifier, PSSpecifier, PSListController, NSString, KeychainSyncCountryInfo, PSEditableTableCell;

@interface KeychainSyncPhoneSettingsFragment : NSObject {

	NSArray* _specifiers;
	PSPhoneNumberSpecifier* _phoneNumberSpecifier;
	PSSpecifier* _countrySpecifier;
	PSListController* _listController;
	NSString* _phoneNumber;
	KeychainSyncCountryInfo* _countryInfo;
	id<KeychainSyncPhoneSettingsFragmentDelegate> _delegate;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * specifiers; 
@property (nonatomic,retain) NSString * phoneNumber;                                                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) KeychainSyncCountryInfo * countryInfo;                                      //@synthesize countryInfo=_countryInfo - In the implementation block
@property (nonatomic,readonly) PSEditableTableCell * phoneNumberCell; 
@property (assign,nonatomic,__weak) id<KeychainSyncPhoneSettingsFragmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * title;                                                           //@synthesize title=_title - In the implementation block
-(void)dealloc;
-(id<KeychainSyncPhoneSettingsFragmentDelegate>)delegate;
-(void)setDelegate:(id<KeychainSyncPhoneSettingsFragmentDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)resignFirstResponder;
-(void)textFieldChanged:(id)arg1 ;
-(void)setDialingCountryInfo:(id)arg1 forSpecifier:(id)arg2 ;
-(id)dialingCountryInfoForSpecifier:(id)arg1 ;
-(void)setPhoneNumber:(id)arg1 forSpecifier:(id)arg2 ;
-(id)phoneNumberForSpecifier:(id)arg1 ;
-(PSEditableTableCell *)phoneNumberCell;
-(id)unformattedPhoneNumber;
-(KeychainSyncCountryInfo *)countryInfo;
-(id)initWithListController:(id)arg1 ;
-(NSArray *)specifiers;
-(void)reloadSpecifiers;
-(void)setCountryInfo:(KeychainSyncCountryInfo *)arg1 ;
@end

