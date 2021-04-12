/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>

@class CoreTelephonyClient, NSUserDefaults, NPSManager, NSString;

@interface NPHCarrierInfoCompanionReplication : NSObject <CoreTelephonyClientCarrierBundleDelegate> {

	CoreTelephonyClient* _coreTelephonyClient;
	NSUserDefaults* _mobilePhoneUserDefaults;
	NSUserDefaults* _nanoPhoneUserDefaults;
	NPSManager* _npsManager;

}

@property (nonatomic,readonly) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * mobilePhoneUserDefaults;               //@synthesize mobilePhoneUserDefaults=_mobilePhoneUserDefaults - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * nanoPhoneUserDefaults;                 //@synthesize nanoPhoneUserDefaults=_nanoPhoneUserDefaults - In the implementation block
@property (nonatomic,readonly) NPSManager * npsManager;                                //@synthesize npsManager=_npsManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)carrierBundleChange:(id)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)_visualVMSubscriptionStateStatusChanged:(id)arg1 ;
-(void)_updateShouldHideVoicemailUI;
-(void)_updateIsVisualVoicemailServiceSubscribed;
-(void)_getShouldHideVoicemailUI:(/*^block*/id)arg1 ;
-(NSUserDefaults *)mobilePhoneUserDefaults;
-(NSUserDefaults *)nanoPhoneUserDefaults;
-(NPSManager *)npsManager;
@end

