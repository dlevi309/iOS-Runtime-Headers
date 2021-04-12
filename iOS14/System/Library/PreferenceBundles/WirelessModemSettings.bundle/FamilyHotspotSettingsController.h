/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)specifiers;
-(id)init;
-(void)setWifiClient:(WiFiManagerClientRef)arg1 ;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(WiFiManagerClientRef)wifiClient;
-(NSArray *)familyMembers;
-(void)dealloc;
-(id)_specifierForFamilyMember:(id)arg1 ;
-(id)_getFamilyMembers;
-(BOOL)_shouldShareHotspotWithFamily;
-(void)setShouldShareWithFamily:(BOOL)arg1 ;
-(id)_switchSpecifier;
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

