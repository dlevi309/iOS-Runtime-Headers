/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSArray, NSObject, NSDictionary;

@interface MCRestrictionManager : NSObject {

	NSMutableDictionary* _memberQueueRestrictions;
	NSMutableDictionary* _memberQueueSystemClientRestrictions;
	NSMutableDictionary* _memberQueueSystemUserSettings;
	NSMutableDictionary* _memberQueueSystemNamespacedUserSettings;
	NSMutableDictionary* _memberQueueUserClientRestrictions;
	NSMutableDictionary* _memberQueueUserUserSettings;
	NSMutableDictionary* _memberQueueUserNamespacedUserSettings;
	NSMutableDictionary* _memberQueueEffectiveUserSettings;
	NSMutableDictionary* _memberQueueSettingsEvents;
	NSArray* _memberQueueEffectiveWhitelistedAppsAndOptions;
	NSObject*<OS_dispatch_queue> _memberQueue;
	NSMutableDictionary* _memberQueueSystemProfileRestrictions;
	NSMutableDictionary* _memberQueueUserProfileRestrictions;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                                          //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueRestrictions;                                     //@synthesize memberQueueRestrictions=_memberQueueRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemProfileRestrictions;                        //@synthesize memberQueueSystemProfileRestrictions=_memberQueueSystemProfileRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserProfileRestrictions;                          //@synthesize memberQueueUserProfileRestrictions=_memberQueueUserProfileRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemClientRestrictions;                         //@synthesize memberQueueSystemClientRestrictions=_memberQueueSystemClientRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserClientRestrictions;                           //@synthesize memberQueueUserClientRestrictions=_memberQueueUserClientRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemUserSettings;                               //@synthesize memberQueueSystemUserSettings=_memberQueueSystemUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemNamespacedUserSettings;                     //@synthesize memberQueueSystemNamespacedUserSettings=_memberQueueSystemNamespacedUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserUserSettings;                                 //@synthesize memberQueueUserUserSettings=_memberQueueUserUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserNamespacedUserSettings;                       //@synthesize memberQueueUserNamespacedUserSettings=_memberQueueUserNamespacedUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueEffectiveUserSettings;                            //@synthesize memberQueueEffectiveUserSettings=_memberQueueEffectiveUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSettingsEvents;                                   //@synthesize memberQueueSettingsEvents=_memberQueueSettingsEvents - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * memberQueueCombinedSystemProfileRestrictions; 
@property (nonatomic,readonly) NSMutableDictionary * memberQueueCombinedProfileRestrictions; 
@property (nonatomic,retain) NSArray * memberQueueEffectiveWhitelistedAppsAndOptions;                           //@synthesize memberQueueEffectiveWhitelistedAppsAndOptions=_memberQueueEffectiveWhitelistedAppsAndOptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * currentRestrictions; 
@property (nonatomic,readonly) NSDictionary * defaultRestrictions; 
@property (nonatomic,readonly) NSDictionary * defaultSettings; 
@property (nonatomic,copy,readonly) NSDictionary * userSettings; 
@property (nonatomic,copy,readonly) NSDictionary * effectiveUserSettings; 
@property (nonatomic,copy,readonly) NSDictionary * systemUserSettings; 
@property (nonatomic,copy,readonly) NSDictionary * userUserSettings; 
@property (nonatomic,copy,readonly) NSDictionary * systemProfileRestrictions; 
@property (nonatomic,copy,readonly) NSDictionary * userProfileRestrictions; 
@property (nonatomic,copy,readonly) NSDictionary * combinedProfileRestrictions; 
+(id)defaultSettings;
+(id)defaultValueForSetting:(id)arg1 ;
+(BOOL)valueSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(id)defaultParametersForUnionValuesSetting:(id)arg1 ;
+(id)intersectedValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(BOOL)intersectedValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(id)defaultRestrictionFilePath;
+(id)sharedManager;
+(id)defaultParametersForIntersectedValuesSetting:(id)arg1 ;
+(BOOL)isWebContentFilterUIActiveWithRestrictionDictionary:(id)arg1 ;
+(id)defaultParametersForValueSetting:(id)arg1 ;
+(id)filterRestrictionDictionary:(id)arg1 toIncludeOnlyRestrictionsThatDifferFromRestrictions:(id)arg2 ;
+(id)_payloadKeysDictionaryAfterAddingFeature:(id)arg1 toRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3 ;
+(BOOL)isWhitelistedAppsRestrictionEnforcedWithRestrictionsDictionary:(id)arg1 ;
+(id)minimumValueForSetting:(id)arg1 ;
+(id)parametersForSetting:(id)arg1 ofType:(id)arg2 withUserSettingDictionary:(id)arg3 ;
+(BOOL)isInSingleAppModeWithSettingsDictionary:(id)arg1 ;
+(int)boolSettingForFeature:(id)arg1 outAsk:(BOOL*)arg2 withUserSettingDictionary:(id)arg3 ;
+(id)grandfatheredRestrictionPayloadKeysDictionary;
+(id)parametersForIntersectedSetting:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(BOOL)restrictedBool:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(id)filterRestrictionDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2 ;
+(id)unionValuesSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(id)defaultUnionValuesForSetting:(id)arg1 ;
+(id)applyRestrictions:(id)arg1 forFeature:(id)arg2 toParametersForBoolSetting:(id)arg3 ;
+(id)effectiveGrandfatheredRestrictionPayloadKeysDictionary;
+(id)_addRestrictionPayloadKeysDictionary:(id)arg1 toRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3 ;
+(id)_filterRestrictionDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3 ;
+(BOOL)mayEnterPasscodeToAccessNonWhitelistedAppsWithSettingsDictionary:(id)arg1 ;
+(id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 profileRestrictions:(id)arg3 clientRestrictions:(id)arg4 outRestrictionsChanged:(BOOL*)arg5 outError:(id*)arg6 ;
+(id)explicitlyRestrictedAppsBySetting;
+(id)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 hostAppIsManaged:(BOOL)arg3 mayOpenFromUnmanagedToManaged:(BOOL)arg4 mayOpenFromManagedToUnmanaged:(BOOL)arg5 ;
+(BOOL)isPasscodeRequiredToAccessWhitelistedAppsWithSettingsDictionary:(id)arg1 ;
+(id)filterRestrictionDictionary:(id)arg1 acceptedKeysDict:(id)arg2 ;
+(BOOL)unionValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(id)filterUserSettingsForPublicUse:(id)arg1 ;
+(id)explicitlyRestrictedEphemeralMultiUserApps;
+(id)restrictionsAfterApplyingRestrictionsDictionary:(id)arg1 toRestrictionsDictionary:(id)arg2 outChangeDetected:(BOOL*)arg3 outError:(id*)arg4 ;
+(id)filterRestrictionDictionaryForPublicUse:(id)arg1 ;
+(int)defaultBoolValueForSetting:(id)arg1 ;
+(id)allowedGrandfatheredRestrictionPayloadKeysDictionary;
+(id)_filterRestrictionPayloadKeysDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3 ;
+(BOOL)unionValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(id)objectForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)parametersForValueSetting:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(int)boolSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(int)appWhitelistStateWithSettingsDictionary:(id)arg1 restrictionsDictionary:(id)arg2 ;
+(id)valueSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(id)maximumValueForSetting:(id)arg1 ;
+(id)allowedOpenInAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(BOOL)arg4 mayOpenFromUnmanagedToManaged:(BOOL)arg5 mayOpenFromManagedToUnmanaged:(BOOL)arg6 isAppBundleIDExemptBlock:(/*^block*/id)arg7 isAppBundleIDAccountBasedBlock:(/*^block*/id)arg8 ;
+(id)allowedImportFromAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(BOOL)arg4 mayOpenFromUnmanagedToManaged:(BOOL)arg5 mayOpenFromManagedToUnmanaged:(BOOL)arg6 isAppBundleIDExemptBlock:(/*^block*/id)arg7 isAppBundleIDAccountBasedBlock:(/*^block*/id)arg8 ;
+(int)defaultBoolValueForSetting:(id)arg1 outAsk:(BOOL*)arg2 ;
+(id)defaultParametersForBoolSetting:(id)arg1 ;
+(id)systemMetadataValueForKey:(id)arg1 ;
+(id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 systemProfileRestrictions:(id)arg3 userProfileRestrictions:(id)arg4 systemClientRestrictions:(id)arg5 userClientRestrictions:(id)arg6 outRestrictionsChanged:(BOOL*)arg7 outError:(id*)arg8 ;
+(id)parametersForBoolSetting:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(BOOL)restrictedValue:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(id)intersectedValuesSettingForFeature:(id)arg1 withUserSettingDectionary:(id)arg2 ;
+(id)parametersForUnionSetting:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(id)_lockedDownRestrictionPayloadKeysWithPayloadKeysDictionary:(id)arg1 forRestrictionKey:(id)arg2 ;
+(BOOL)boolSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(id)unionValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)defaultIntersectedValuesForSetting:(id)arg1 ;
+(BOOL)intersectedValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(id)filterRestrictionPayloadKeysDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2 ;
+(int)restrictedBoolForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)newEffectiveSettingsByApplyingRestrictions:(id)arg1 toSettings:(id)arg2 ;
+(id)addRestrictionPayloadKeysDictionary:(id)arg1 toRestrictionPayloadKeysDictionary:(id)arg2 ;
+(id)restrictionKeys;
+(id)filterGrandfatheredRestrictionsIfNeededFromRestrictions:(id)arg1 ;
+(id)valueForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(id)valueForFeature:(id)arg1 ;
-(NSDictionary *)defaultSettings;
-(id)effectiveParametersForBoolSetting:(id)arg1 ;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)effectiveParametersForValueSetting:(id)arg1 ;
-(NSDictionary *)userSettings;
-(void)setMemberQueueEffectiveWhitelistedAppsAndOptions:(NSArray *)arg1 ;
-(BOOL)_isValueSettingLockedDown:(id)arg1 effectiveSetting:(id)arg2 ;
-(void)setMemberQueueSystemNamespacedUserSettings:(NSMutableDictionary *)arg1 ;
-(id)memberQueueClientRestrictionsForClientUUID:(id)arg1 ;
-(int)appWhitelistState;
-(id)_settingsEventFromProcess:(id)arg1 withTag:(id)arg2 ;
-(id)restrictedAppBundleIDs;
-(void)clearEffectiveWhitelistedAppsAndOptionsCache;
-(id)init;
-(id)userInfoForClientUUID:(id)arg1 ;
-(void)setMemberQueueRestrictions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)memberQueueUserProfileRestrictions;
-(id)intersectedValuesSettingForFeature:(id)arg1 ;
-(BOOL)isSettingLockedDownByRestrictions:(id)arg1 ;
-(NSMutableDictionary *)memberQueueCombinedProfileRestrictions;
-(id)effectiveUnionValuesForSetting:(id)arg1 ;
-(id)parentalControlsBlacklistedAppBundleIDs;
-(id)allClientUUIDsForClientType:(id)arg1 ;
-(void)invalidateSettings;
-(BOOL)isIntersectionSettingLockedDownByRestrictions:(id)arg1 ;
-(NSArray *)memberQueueEffectiveWhitelistedAppsAndOptions;
-(BOOL)isInSingleAppMode;
-(int)effectiveRestrictedBoolForSetting:(id)arg1 configurationUUID:(id)arg2 ;
-(NSMutableDictionary *)memberQueueUserClientRestrictions;
-(int)restrictedBoolForFeature:(id)arg1 ;
-(NSMutableDictionary *)memberQueueCombinedSystemProfileRestrictions;
-(id)effectiveBlacklistedAppBundleIDs;
-(NSMutableDictionary *)memberQueueSystemProfileRestrictions;
-(NSMutableDictionary *)memberQueueSystemNamespacedUserSettings;
-(id)userClientRestrictions;
-(int)boolSettingForFeature:(id)arg1 ;
-(id)intersectedValuesForFeature:(id)arg1 ;
-(NSDictionary *)systemUserSettings;
-(void)setMemberQueueEffectiveUserSettings:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueSystemProfileRestrictions:(NSMutableDictionary *)arg1 ;
-(id)effectiveValueForSetting:(id)arg1 ;
-(NSMutableDictionary *)memberQueueUserNamespacedUserSettings;
-(NSMutableDictionary *)memberQueueUserUserSettings;
-(id)description;
-(id)restrictionEnforcedBlacklistedAppBundleIDs;
-(id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)arg1 outChangeDetected:(BOOL*)arg2 outError:(id*)arg3 ;
-(id)systemClientRestrictions;
-(void)setMemberQueueUserNamespacedUserSettings:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)defaultRestrictions;
-(id)exchangeUUIDsRestrictingSettings:(id)arg1 ;
-(id)unionValuesForFeature:(id)arg1 ;
-(id)restrictionEnforcedWhitelistedAppBundleIDs;
-(id)effectiveParametersForBoolSetting:(id)arg1 configurationUUID:(id)arg2 ;
-(void)setMemberQueueSystemUserSettings:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueUserProfileRestrictions:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)effectiveUserSettings;
-(BOOL)applyConfiguration:(id)arg1 toDomain:(unsigned long long)arg2 inNamespace:(id)arg3 fromSender:(id)arg4 ;
-(NSDictionary *)userUserSettings;
-(BOOL)_isBoolSettingLockedDown:(id)arg1 ;
-(id)valueSettingForFeature:(id)arg1 ;
-(BOOL)allowedToRunAppWithBundleID:(id)arg1 ;
-(void)invalidateRestrictions;
-(BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1 ;
-(NSMutableDictionary *)memberQueueSystemUserSettings;
-(id)restrictedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg1 ;
-(id)effectiveParametersForUnionSetting:(id)arg1 ;
-(id)singleAppModeBundleID;
-(id)memberQueueClientRestrictionsDictionaryForClientUUID:(id)arg1 ;
-(id)parentalControlsWhitelistedAppBundleIDs;
-(void)setMemberQueueSystemClientRestrictions:(NSMutableDictionary *)arg1 ;
-(id)objectForFeature:(id)arg1 ;
-(id)memberQueueUserInfoForClientUUID:(id)arg1 ;
-(NSMutableDictionary *)memberQueueSettingsEvents;
-(id)restrictionEnforcedBlacklistedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg1 ;
-(id)profileIdentifiersRestrictingSettings:(id)arg1 ;
-(void)setMemberQueueUserUserSettings:(NSMutableDictionary *)arg1 ;
-(id)effectiveWhitelistedAppBundleIDs;
-(id)effectiveIntersectedValuesForSetting:(id)arg1 ;
-(id)appsAndOptionsForClientUUID:(id)arg1 ;
-(BOOL)isUnionSettingLockedDownByRestrictions:(id)arg1 ;
-(id)effectiveBlacklistedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg1 ;
-(NSDictionary *)combinedProfileRestrictions;
-(id)effectiveParametersForIntersectedSetting:(id)arg1 ;
-(void)setMemberQueueSettingsEvents:(NSMutableDictionary *)arg1 ;
-(id)clientRestrictionsForClientUUID:(id)arg1 ;
-(BOOL)isValueSettingLockedDownByRestrictions:(id)arg1 ;
-(id)_updatedDomainSettingsEvents:(id)arg1 fromPreviousSettings:(id)arg2 toNewSettings:(id)arg3 sender:(id)arg4 ;
-(NSDictionary *)userProfileRestrictions;
-(NSMutableDictionary *)memberQueueEffectiveUserSettings;
-(id)memberQueueClientTypeForClientUUID:(id)arg1 ;
-(id)_effectiveUnionValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2 ;
-(void)setMemberQueueUserClientRestrictions:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)currentRestrictions;
-(id)_effectiveIntersectedValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2 ;
-(id)memberQueueAppsAndOptionsForClientUUID:(id)arg1 ;
-(int)effectiveRestrictedBoolForSetting:(id)arg1 ;
-(NSMutableDictionary *)memberQueueSystemClientRestrictions;
-(NSDictionary *)systemProfileRestrictions;
-(id)effectiveWhitelistedAppsAndOptions;
-(NSMutableDictionary *)memberQueueRestrictions;
-(id)unionValuesSettingForFeature:(id)arg1 ;
@end

