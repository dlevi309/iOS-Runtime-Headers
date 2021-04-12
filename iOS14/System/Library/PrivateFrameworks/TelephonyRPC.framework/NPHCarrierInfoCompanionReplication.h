/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
*/


@class NSUserDefaults, NPSManager;

@interface NPHCarrierInfoCompanionReplication : NSObject {

	NSUserDefaults* _mobilePhoneUserDefaults;
	NSUserDefaults* _nanoPhoneUserDefaults;
	NPSManager* _npsManager;

}

@property (nonatomic,readonly) NSUserDefaults * mobilePhoneUserDefaults;              //@synthesize mobilePhoneUserDefaults=_mobilePhoneUserDefaults - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * nanoPhoneUserDefaults;                //@synthesize nanoPhoneUserDefaults=_nanoPhoneUserDefaults - In the implementation block
@property (nonatomic,readonly) NPSManager * npsManager;                               //@synthesize npsManager=_npsManager - In the implementation block
+(id)sharedInstance;
-(NPSManager *)npsManager;
-(id)init;
-(void)dealloc;
-(void)_visualVMSubscriptionStateStatusChanged:(id)arg1 ;
-(void)_vmAccountsDidChange:(id)arg1 ;
-(void)_updateShouldHideVoicemailUI;
-(void)_updateIsVisualVoicemailServiceSubscribed;
-(NSUserDefaults *)mobilePhoneUserDefaults;
-(NSUserDefaults *)nanoPhoneUserDefaults;
@end

