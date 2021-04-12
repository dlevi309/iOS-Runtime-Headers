/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
*/

#import <Preferences/PSListController.h>

@class NSUUID, NSString, PSSpecifier, NSMutableArray;

@interface DNSSettingsController : PSListController {

	NSUUID* _serviceID;
	NSString* _applicationName;
	NSString* _serverName;
	NSString* _typeIdentifier;
	PSSpecifier* _automaticDNSSettingsSpecifier;
	NSMutableArray* _currentDNSSettingsSpecifiers;

}

@property (copy) NSUUID * serviceID;                                           //@synthesize serviceID=_serviceID - In the implementation block
@property (retain) NSString * applicationName;                                 //@synthesize applicationName=_applicationName - In the implementation block
@property (retain) NSString * serverName;                                      //@synthesize serverName=_serverName - In the implementation block
@property (retain) NSString * typeIdentifier;                                  //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (retain) PSSpecifier * automaticDNSSettingsSpecifier;                //@synthesize automaticDNSSettingsSpecifier=_automaticDNSSettingsSpecifier - In the implementation block
@property (retain) NSMutableArray * currentDNSSettingsSpecifiers;              //@synthesize currentDNSSettingsSpecifiers=_currentDNSSettingsSpecifiers - In the implementation block
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(NSString *)typeIdentifier;
-(NSString *)applicationName;
-(NSUUID *)serviceID;
-(void)setServiceID:(NSUUID *)arg1 ;
-(NSString *)serverName;
-(void)setServerName:(NSString *)arg1 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(void)someConfigurationChanged:(id)arg1 ;
-(void)setCurrentDNSSettingsSpecifiers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentDNSSettingsSpecifiers;
-(void)setAutomaticDNSSettingsSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)automaticDNSSettingsSpecifier;
-(void)disableAllDNSSettings;
-(void)toggleDNSSettingsForSpecifier:(id)arg1 ;
-(void)showDNSSettingsPrivacyPage;
@end

