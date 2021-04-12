/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <Preferences/PSListController.h>

@class NSArray, PSSpecifier;

@interface FamilyHotspotSettingsController : PSListController {

	BOOL _shouldShareWithFamily;
	NSArray* _familyMembers;
	PSSpecifier* _switchSpecifier;
	WiFiManagerClientRef _wifiClient;

}

@property (nonatomic,retain) NSArray * familyMembers;                      //@synthesize familyMembers=_familyMembers - In the implementation block
@property (assign,nonatomic) BOOL shouldShareWithFamily;                   //@synthesize shouldShareWithFamily=_shouldShareWithFamily - In the implementation block
@property (nonatomic,retain) PSSpecifier * switchSpecifier;                //@synthesize switchSpecifier=_switchSpecifier - In the implementation block
@property (assign,nonatomic) WiFiManagerClientRef wifiClient;              //@synthesize wifiClient=_wifiClient - In the implementation block
-(id)init;
-(void)dealloc;
-(NSArray *)familyMembers;
-(id)specifiers;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(WiFiManagerClientRef)wifiClient;
-(void)setWifiClient:(WiFiManagerClientRef)arg1 ;
-(id)_getFamilyMembers;
-(BOOL)_shouldShareHotspotWithFamily;
-(void)setShouldShareWithFamily:(BOOL)arg1 ;
-(id)_switchSpecifier;
-(id)_specifierForFamilyMember:(id)arg1 ;
-(void)_setJoinOption:(id)arg1 specifier:(id)arg2 ;
-(id)_joinOption:(id)arg1 ;
-(void)_updateMemberWithMember:(id)arg1 ;
-(void)_setFamilyPreferences;
-(void)_setFamilyShare:(id)arg1 ;
-(id)_getFamilyShare;
-(id)_generateFamilyPreferencesArray;
-(id)_generatePrefDictionaryForMember:(id)arg1 ;
-(void)_resetFamilyPreferences;
-(BOOL)shouldShareWithFamily;
-(PSSpecifier *)switchSpecifier;
-(void)setSwitchSpecifier:(PSSpecifier *)arg1 ;
@end

