/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>

@class CoreTelephonyClient, NSMutableDictionary, IMCTXPCServiceSubscriptionInfo, IDSPhoneSubscriptionSelector, NSArray, NSString;

@interface IMCTSubscriptionUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate> {

	CoreTelephonyClient* _coreTelephonyClient;
	NSMutableDictionary* _cachedCarrierSettings;
	IMCTXPCServiceSubscriptionInfo* _ctSubscriptionInfo;
	IDSPhoneSubscriptionSelector* _phoneSubscriptionSelector;
	NSArray* _registeredSIMIDs;
	NSArray* _registeredPhoneNumbers;
	NSArray* _registeredSubscriptions;

}

@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;                             //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedCarrierSettings;                           //@synthesize cachedCarrierSettings=_cachedCarrierSettings - In the implementation block
@property (nonatomic,retain) IMCTXPCServiceSubscriptionInfo * ctSubscriptionInfo;                   //@synthesize ctSubscriptionInfo=_ctSubscriptionInfo - In the implementation block
@property (nonatomic,retain) IDSPhoneSubscriptionSelector * phoneSubscriptionSelector;              //@synthesize phoneSubscriptionSelector=_phoneSubscriptionSelector - In the implementation block
@property (nonatomic,copy) NSArray * registeredSIMIDs;                                              //@synthesize registeredSIMIDs=_registeredSIMIDs - In the implementation block
@property (nonatomic,copy) NSArray * registeredPhoneNumbers;                                        //@synthesize registeredPhoneNumbers=_registeredPhoneNumbers - In the implementation block
@property (nonatomic,copy) NSArray * registeredSubscriptions;                                       //@synthesize registeredSubscriptions=_registeredSubscriptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctPhoneNumber; 
@property (nonatomic,readonly) NSArray * ctServiceSubscriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)subscriptionInfoDidChange;
-(void)carrierBundleChange:(id)arg1 ;
-(IDSPhoneSubscriptionSelector *)phoneSubscriptionSelector;
-(NSArray *)registeredSubscriptions;
-(IMCTXPCServiceSubscriptionInfo *)ctSubscriptionInfo;
-(id)_cachedCarrierSettingsUniqueIDKeyForSubscriptionContext:(id)arg1 ;
-(NSMutableDictionary *)cachedCarrierSettings;
-(id)_createSettingsDictionaryForUniqueID:(id)arg1 ;
-(id)stringForBundleType:(long long)arg1 ;
-(id)_getCarrierSettingsForUniqueID:(id)arg1 ;
-(void)_setCarrierSettings:(id)arg1 uniqueID:(id)arg2 ;
-(id)_cachedCarrierKeyForKeyHierarchy:(id)arg1 bundleType:(long long)arg2 ;
-(id)_getCachedCarrierSettingValueForBundleKey:(id)arg1 uniqueID:(id)arg2 ;
-(void)_setCachedCarrierSettingValue:(id)arg1 bundleKey:(id)arg2 uniqueID:(id)arg3 ;
-(id)copyBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 bundleType:(long long)arg3 defaultValue:(id)arg4 valueIfError:(id)arg5 ;
-(id)_getCachedSettingOrReadFromBundleForCarrierBundleKey:(id)arg1 bundleType:(long long)arg2 forContext:(id)arg3 defaultValue:(id)arg4 ;
-(id)ctSubscriptionInfoWithError:(id)arg1 ;
-(void)_resetCachedCarrierSettingsForUniqueID:(id)arg1 ;
-(void)setCtSubscriptionInfo:(IMCTXPCServiceSubscriptionInfo *)arg1 ;
-(void)_resetSubscriptionInfo;
-(NSArray *)registeredSIMIDs;
-(NSArray *)registeredPhoneNumbers;
-(id)newSubscriptionContextWithSlot:(long long)arg1 ;
-(id)newSubscriptionContextWithPhoneNumber:(id)arg1 labelID:(id)arg2 isDefaultVoice:(id)arg3 isDefaultData:(id)arg4 slot:(long long)arg5 ;
-(id)copyOperatorBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4 ;
-(id)copyCarrierBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4 ;
-(NSArray *)ctServiceSubscriptions;
-(NSString *)ctPhoneNumber;
-(unsigned long long)numberOfSubscriptions;
-(BOOL)deviceSupportsMultipleSubscriptions;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(void)setCachedCarrierSettings:(NSMutableDictionary *)arg1 ;
-(void)setPhoneSubscriptionSelector:(IDSPhoneSubscriptionSelector *)arg1 ;
-(void)setRegisteredSIMIDs:(NSArray *)arg1 ;
-(void)setRegisteredPhoneNumbers:(NSArray *)arg1 ;
-(void)setRegisteredSubscriptions:(NSArray *)arg1 ;
@end

