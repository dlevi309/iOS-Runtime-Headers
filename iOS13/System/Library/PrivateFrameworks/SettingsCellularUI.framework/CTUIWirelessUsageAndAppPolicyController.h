/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(id)specifiers;
-(id)selectSpecifier:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)_handleNewCarrierNotification:(id)arg1 ;
-(void)_handleCellularPlanChangedNotification:(id)arg1 ;
-(void)_handleWirelessDataUsageChangedNotification:(id)arg1 ;
-(PSUIAppDataUsageGroup *)appDataUsageGroup;
-(void)setAppDataUsageGroup:(PSUIAppDataUsageGroup *)arg1 ;
-(BOOL)shouldCalculateUsage;
-(void)setShouldCalculateUsage:(BOOL)arg1 ;
@end

