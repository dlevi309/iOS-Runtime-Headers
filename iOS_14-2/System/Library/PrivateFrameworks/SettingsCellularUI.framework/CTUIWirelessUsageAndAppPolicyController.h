/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>

@class PSSpecifier, PSUIAppDataUsageGroup, CoreTelephonyClient, NSString;

@interface CTUIWirelessUsageAndAppPolicyController : PSListController <CoreTelephonyClientSubscriberDelegate> {

	BOOL _shouldCalculateUsage;
	PSSpecifier* _groupSpecifier;
	PSUIAppDataUsageGroup* _appDataUsageGroup;
	CoreTelephonyClient* _coreTelephonyClient;

}

@property (nonatomic,retain) PSSpecifier * groupSpecifier;                           //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) PSUIAppDataUsageGroup * appDataUsageGroup;              //@synthesize appDataUsageGroup=_appDataUsageGroup - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (assign) BOOL shouldCalculateUsage;                                        //@synthesize shouldCalculateUsage=_shouldCalculateUsage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(id)specifiers;
-(id)init;
-(PSSpecifier *)groupSpecifier;
-(id)selectSpecifier:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)dealloc;
-(void)_handleNewCarrierNotification:(id)arg1 ;
-(void)_handleCellularPlanChangedNotification:(id)arg1 ;
-(void)_handleWirelessDataUsageChangedNotification:(id)arg1 ;
-(void)managedConfigurationSettingsDidChange;
-(void)managedConfigurationProfileListDidChange;
-(PSUIAppDataUsageGroup *)appDataUsageGroup;
-(void)setAppDataUsageGroup:(PSUIAppDataUsageGroup *)arg1 ;
-(BOOL)shouldCalculateUsage;
-(void)setShouldCalculateUsage:(BOOL)arg1 ;
@end

