/*
* Generated on Thursday, January 14, 2021 at 2:23:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface NTPBSession : PBCodable <NSCopying> {

	SCD_Struct_NT10* _userSegmentationSegmentSetIds;
	SCD_Struct_NT19* _userSegmentationTreatmentIds;
	long long _appBuild;
	long long _appConfigTreatmentId;
	long long _lastAppOpenDate;
	long long _testBucket;
	long long _userStartDate;
	int _ageBracket;
	float _ageBracketConfidenceLevel;
	NSString* _amsCampaignId;
	NSString* _amsPurchaseId;
	NSString* _appBuildNumber;
	NSData* _appProcessLifetimeId;
	NSString* _appVersion;
	NSString* _browserLanguage;
	NSString* _campaignId;
	int _campaignType;
	NSString* _carrier;
	int _cellularRadioAccessTechnology;
	NSString* _clientName;
	NSString* _clientVersion;
	NSString* _countryCode;
	NSString* _deviceModel;
	NSString* _devicePlatform;
	int _ethnicity;
	float _ethnicityConfidenceLevel;
	int _gender;
	float _genderConfidenceLevel;
	int _incomeBracket;
	float _incomeBracketConfidenceLevel;
	NSString* _languageCode;
	int _newsWidgetModeGroup;
	NSString* _newsWidgetModeGroupId;
	NSString* _notwUserId;
	NSString* _originatingCampaignId;
	NSString* _originatingCampaignType;
	NSString* _originatingCreativeId;
	int _osInstallVariant;
	NSString* _osVersion;
	int _paywallConfigType;
	NSString* _personalizationPortraitVariantName;
	NSString* _previousAppVersion;
	NSString* _previousOsVersion;
	NSString* _productType;
	int _reachabilityStatus;
	NSMutableArray* _regionIds;
	NSData* _sessionId;
	NSData* _sessionIdWatch;
	int _textSize;
	NSString* _userId;
	NSString* _userStorefrontId;
	int _utcOffset;
	NSString* _watchSessionId;
	int _widgetDisplayMode;
	int _widgetDisplayModeSessionEnd;
	int _widgetModeType;
	NSData* _widgetSessionId;
	NSString* _widgetUserId;
	BOOL _iosSettingsNotificationsBadgeAppIconEnabled;
	BOOL _iosSettingsNotificationsEnabled;
	BOOL _iosSettingsNotificationsShowAsBannersEnabled;
	BOOL _iosSettingsNotificationsShowInHistoryEnabled;
	BOOL _iosSettingsNotificationsShowOnLockScreenEnabled;
	BOOL _iosSettingsNotificationsSoundEnabled;
	BOOL _isDiagnosticsUsageEnabled;
	BOOL _isNewUser;
	BOOL _isPaidSubscriber;
	BOOL _isPaidSubscriberFromAppStore;
	BOOL _isPaidSubscriberFromNews;
	BOOL _isPaidSubscriberFromThirdParty;
	BOOL _isStoreDemoModeEnabled;
	BOOL _locationPermissionGranted;
	BOOL _notificationsEnabled;
	BOOL _privateDataEncrypted;
	BOOL _privateDataSyncOn;
	BOOL _progressivePersonalizationAllowed;
	BOOL _runningObsolete;
	BOOL _signedIntoITunes;
	BOOL _signedIntoIcloud;
	BOOL _upgradedFromObsolete;
	SCD_Struct_NT20 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                                               //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasDevicePlatform; 
@property (nonatomic,retain) NSString * devicePlatform;                                            //@synthesize devicePlatform=_devicePlatform - In the implementation block
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion;                                                 //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAppVersion; 
@property (nonatomic,retain) NSString * appVersion;                                                //@synthesize appVersion=_appVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAppBuild; 
@property (assign,nonatomic) long long appBuild;                                                   //@synthesize appBuild=_appBuild - In the implementation block
@property (assign,nonatomic) BOOL hasUtcOffset; 
@property (assign,nonatomic) int utcOffset;                                                        //@synthesize utcOffset=_utcOffset - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                                               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                                              //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasCarrier; 
@property (nonatomic,retain) NSString * carrier;                                                   //@synthesize carrier=_carrier - In the implementation block
@property (assign,nonatomic) BOOL hasReachabilityStatus; 
@property (assign,nonatomic) int reachabilityStatus;                                               //@synthesize reachabilityStatus=_reachabilityStatus - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) int cellularRadioAccessTechnology;                                    //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
@property (assign,nonatomic) BOOL hasTextSize; 
@property (assign,nonatomic) int textSize;                                                         //@synthesize textSize=_textSize - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSData * sessionId;                                                   //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) NSString * userId;                                                    //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                                          //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
@property (assign,nonatomic) BOOL hasIsNewUser; 
@property (assign,nonatomic) BOOL isNewUser;                                                       //@synthesize isNewUser=_isNewUser - In the implementation block
@property (assign,nonatomic) BOOL hasUserStartDate; 
@property (assign,nonatomic) long long userStartDate;                                              //@synthesize userStartDate=_userStartDate - In the implementation block
@property (assign,nonatomic) BOOL hasLastAppOpenDate; 
@property (assign,nonatomic) long long lastAppOpenDate;                                            //@synthesize lastAppOpenDate=_lastAppOpenDate - In the implementation block
@property (assign,nonatomic) BOOL hasRunningObsolete; 
@property (assign,nonatomic) BOOL runningObsolete;                                                 //@synthesize runningObsolete=_runningObsolete - In the implementation block
@property (assign,nonatomic) BOOL hasUpgradedFromObsolete; 
@property (assign,nonatomic) BOOL upgradedFromObsolete;                                            //@synthesize upgradedFromObsolete=_upgradedFromObsolete - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousAppVersion; 
@property (nonatomic,retain) NSString * previousAppVersion;                                        //@synthesize previousAppVersion=_previousAppVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousOsVersion; 
@property (nonatomic,retain) NSString * previousOsVersion;                                         //@synthesize previousOsVersion=_previousOsVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSignedIntoIcloud; 
@property (assign,nonatomic) BOOL signedIntoIcloud;                                                //@synthesize signedIntoIcloud=_signedIntoIcloud - In the implementation block
@property (assign,nonatomic) BOOL hasOsInstallVariant; 
@property (assign,nonatomic) int osInstallVariant;                                                 //@synthesize osInstallVariant=_osInstallVariant - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                                //@synthesize campaignId=_campaignId - In the implementation block
@property (assign,nonatomic) BOOL hasCampaignType; 
@property (assign,nonatomic) int campaignType;                                                     //@synthesize campaignType=_campaignType - In the implementation block
@property (assign,nonatomic) BOOL hasPrivateDataSyncOn; 
@property (assign,nonatomic) BOOL privateDataSyncOn;                                               //@synthesize privateDataSyncOn=_privateDataSyncOn - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriber; 
@property (assign,nonatomic) BOOL isPaidSubscriber;                                                //@synthesize isPaidSubscriber=_isPaidSubscriber - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberFromNews; 
@property (assign,nonatomic) BOOL isPaidSubscriberFromNews;                                        //@synthesize isPaidSubscriberFromNews=_isPaidSubscriberFromNews - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberFromAppStore; 
@property (assign,nonatomic) BOOL isPaidSubscriberFromAppStore;                                    //@synthesize isPaidSubscriberFromAppStore=_isPaidSubscriberFromAppStore - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberFromThirdParty; 
@property (assign,nonatomic) BOOL isPaidSubscriberFromThirdParty;                                  //@synthesize isPaidSubscriberFromThirdParty=_isPaidSubscriberFromThirdParty - In the implementation block
@property (assign,nonatomic) BOOL hasNotificationsEnabled; 
@property (assign,nonatomic) BOOL notificationsEnabled;                                            //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginatingCampaignId; 
@property (nonatomic,retain) NSString * originatingCampaignId;                                     //@synthesize originatingCampaignId=_originatingCampaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginatingCampaignType; 
@property (nonatomic,retain) NSString * originatingCampaignType;                                   //@synthesize originatingCampaignType=_originatingCampaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginatingCreativeId; 
@property (nonatomic,retain) NSString * originatingCreativeId;                                     //@synthesize originatingCreativeId=_originatingCreativeId - In the implementation block
@property (assign,nonatomic) BOOL hasIosSettingsNotificationsEnabled; 
@property (assign,nonatomic) BOOL iosSettingsNotificationsEnabled;                                 //@synthesize iosSettingsNotificationsEnabled=_iosSettingsNotificationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetModeType; 
@property (assign,nonatomic) int widgetModeType;                                                   //@synthesize widgetModeType=_widgetModeType - In the implementation block
@property (assign,nonatomic) BOOL hasLocationPermissionGranted; 
@property (assign,nonatomic) BOOL locationPermissionGranted;                                       //@synthesize locationPermissionGranted=_locationPermissionGranted - In the implementation block
@property (assign,nonatomic) BOOL hasNewsWidgetModeGroup; 
@property (assign,nonatomic) int newsWidgetModeGroup;                                              //@synthesize newsWidgetModeGroup=_newsWidgetModeGroup - In the implementation block
@property (nonatomic,readonly) BOOL hasNewsWidgetModeGroupId; 
@property (nonatomic,retain) NSString * newsWidgetModeGroupId;                                     //@synthesize newsWidgetModeGroupId=_newsWidgetModeGroupId - In the implementation block
@property (assign,nonatomic) BOOL hasAgeBracket; 
@property (assign,nonatomic) int ageBracket;                                                       //@synthesize ageBracket=_ageBracket - In the implementation block
@property (assign,nonatomic) BOOL hasAgeBracketConfidenceLevel; 
@property (assign,nonatomic) float ageBracketConfidenceLevel;                                      //@synthesize ageBracketConfidenceLevel=_ageBracketConfidenceLevel - In the implementation block
@property (assign,nonatomic) BOOL hasGender; 
@property (assign,nonatomic) int gender;                                                           //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) BOOL hasGenderConfidenceLevel; 
@property (assign,nonatomic) float genderConfidenceLevel;                                          //@synthesize genderConfidenceLevel=_genderConfidenceLevel - In the implementation block
@property (assign,nonatomic) BOOL hasIncomeBracket; 
@property (assign,nonatomic) int incomeBracket;                                                    //@synthesize incomeBracket=_incomeBracket - In the implementation block
@property (assign,nonatomic) BOOL hasIncomeBracketConfidenceLevel; 
@property (assign,nonatomic) float incomeBracketConfidenceLevel;                                   //@synthesize incomeBracketConfidenceLevel=_incomeBracketConfidenceLevel - In the implementation block
@property (assign,nonatomic) BOOL hasEthnicity; 
@property (assign,nonatomic) int ethnicity;                                                        //@synthesize ethnicity=_ethnicity - In the implementation block
@property (assign,nonatomic) BOOL hasEthnicityConfidenceLevel; 
@property (assign,nonatomic) float ethnicityConfidenceLevel;                                       //@synthesize ethnicityConfidenceLevel=_ethnicityConfidenceLevel - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfigTreatmentId; 
@property (assign,nonatomic) long long appConfigTreatmentId;                                       //@synthesize appConfigTreatmentId=_appConfigTreatmentId - In the implementation block
@property (nonatomic,readonly) BOOL hasClientName; 
@property (nonatomic,retain) NSString * clientName;                                                //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) BOOL hasClientVersion; 
@property (nonatomic,retain) NSString * clientVersion;                                             //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasBrowserLanguage; 
@property (nonatomic,retain) NSString * browserLanguage;                                           //@synthesize browserLanguage=_browserLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasNotwUserId; 
@property (nonatomic,retain) NSString * notwUserId;                                                //@synthesize notwUserId=_notwUserId - In the implementation block
@property (assign,nonatomic) BOOL hasPrivateDataEncrypted; 
@property (assign,nonatomic) BOOL privateDataEncrypted;                                            //@synthesize privateDataEncrypted=_privateDataEncrypted - In the implementation block
@property (assign,nonatomic) BOOL hasProgressivePersonalizationAllowed; 
@property (assign,nonatomic) BOOL progressivePersonalizationAllowed;                               //@synthesize progressivePersonalizationAllowed=_progressivePersonalizationAllowed - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchSessionId; 
@property (nonatomic,retain) NSString * watchSessionId;                                            //@synthesize watchSessionId=_watchSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdWatch; 
@property (nonatomic,retain) NSData * sessionIdWatch;                                              //@synthesize sessionIdWatch=_sessionIdWatch - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetSessionId; 
@property (nonatomic,retain) NSData * widgetSessionId;                                             //@synthesize widgetSessionId=_widgetSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetDisplayMode; 
@property (assign,nonatomic) int widgetDisplayMode;                                                //@synthesize widgetDisplayMode=_widgetDisplayMode - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizationPortraitVariantName; 
@property (nonatomic,retain) NSString * personalizationPortraitVariantName;                        //@synthesize personalizationPortraitVariantName=_personalizationPortraitVariantName - In the implementation block
@property (nonatomic,readonly) BOOL hasAppProcessLifetimeId; 
@property (nonatomic,retain) NSData * appProcessLifetimeId;                                        //@synthesize appProcessLifetimeId=_appProcessLifetimeId - In the implementation block
@property (assign,nonatomic) BOOL hasTestBucket; 
@property (assign,nonatomic) long long testBucket;                                                 //@synthesize testBucket=_testBucket - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetUserId; 
@property (nonatomic,retain) NSString * widgetUserId;                                              //@synthesize widgetUserId=_widgetUserId - In the implementation block
@property (nonatomic,readonly) BOOL hasProductType; 
@property (nonatomic,retain) NSString * productType;                                               //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) unsigned long long userSegmentationTreatmentIdsCount; 
@property (nonatomic,readonly) long long* userSegmentationTreatmentIds; 
@property (nonatomic,readonly) unsigned long long userSegmentationSegmentSetIdsCount; 
@property (nonatomic,readonly) int* userSegmentationSegmentSetIds; 
@property (assign,nonatomic) BOOL hasIosSettingsNotificationsSoundEnabled; 
@property (assign,nonatomic) BOOL iosSettingsNotificationsSoundEnabled;                            //@synthesize iosSettingsNotificationsSoundEnabled=_iosSettingsNotificationsSoundEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIosSettingsNotificationsBadgeAppIconEnabled; 
@property (assign,nonatomic) BOOL iosSettingsNotificationsBadgeAppIconEnabled;                     //@synthesize iosSettingsNotificationsBadgeAppIconEnabled=_iosSettingsNotificationsBadgeAppIconEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIosSettingsNotificationsShowOnLockScreenEnabled; 
@property (assign,nonatomic) BOOL iosSettingsNotificationsShowOnLockScreenEnabled;                 //@synthesize iosSettingsNotificationsShowOnLockScreenEnabled=_iosSettingsNotificationsShowOnLockScreenEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIosSettingsNotificationsShowInHistoryEnabled; 
@property (assign,nonatomic) BOOL iosSettingsNotificationsShowInHistoryEnabled;                    //@synthesize iosSettingsNotificationsShowInHistoryEnabled=_iosSettingsNotificationsShowInHistoryEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIosSettingsNotificationsShowAsBannersEnabled; 
@property (assign,nonatomic) BOOL iosSettingsNotificationsShowAsBannersEnabled;                    //@synthesize iosSettingsNotificationsShowAsBannersEnabled=_iosSettingsNotificationsShowAsBannersEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetDisplayModeSessionEnd; 
@property (assign,nonatomic) int widgetDisplayModeSessionEnd;                                      //@synthesize widgetDisplayModeSessionEnd=_widgetDisplayModeSessionEnd - In the implementation block
@property (assign,nonatomic) BOOL hasSignedIntoITunes; 
@property (assign,nonatomic) BOOL signedIntoITunes;                                                //@synthesize signedIntoITunes=_signedIntoITunes - In the implementation block
@property (assign,nonatomic) BOOL hasIsStoreDemoModeEnabled; 
@property (assign,nonatomic) BOOL isStoreDemoModeEnabled;                                          //@synthesize isStoreDemoModeEnabled=_isStoreDemoModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsDiagnosticsUsageEnabled; 
@property (assign,nonatomic) BOOL isDiagnosticsUsageEnabled;                                       //@synthesize isDiagnosticsUsageEnabled=_isDiagnosticsUsageEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionIds;                                           //@synthesize regionIds=_regionIds - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBuildNumber; 
@property (nonatomic,retain) NSString * appBuildNumber;                                            //@synthesize appBuildNumber=_appBuildNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasAmsPurchaseId; 
@property (nonatomic,retain) NSString * amsPurchaseId;                                             //@synthesize amsPurchaseId=_amsPurchaseId - In the implementation block
@property (nonatomic,readonly) BOOL hasAmsCampaignId; 
@property (nonatomic,retain) NSString * amsCampaignId;                                             //@synthesize amsCampaignId=_amsCampaignId - In the implementation block
@property (assign,nonatomic) BOOL hasPaywallConfigType; 
@property (assign,nonatomic) int paywallConfigType;                                                //@synthesize paywallConfigType=_paywallConfigType - In the implementation block
+(Class)regionIdsType;
-(BOOL)hasAppVersion;
-(void)setUserId:(NSString *)arg1 ;
-(BOOL)hasAppBuildNumber;
-(NSData *)sessionId;
-(BOOL)hasCampaignId;
-(void)setHasAppBuild:(BOOL)arg1 ;
-(void)setSessionId:(NSData *)arg1 ;
-(int)StringAsOsInstallVariant:(id)arg1 ;
-(NSString *)campaignId;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setClientName:(NSString *)arg1 ;
-(BOOL)hasTestBucket;
-(void)setDevicePlatform:(NSString *)arg1 ;
-(int)textSize;
-(void)setAgeBracketConfidenceLevel:(float)arg1 ;
-(id)dictionaryRepresentation;
-(int)osInstallVariant;
-(BOOL)hasUserId;
-(BOOL)iosSettingsNotificationsShowInHistoryEnabled;
-(BOOL)hasSessionId;
-(BOOL)hasOsVersion;
-(void)setDeviceModel:(NSString *)arg1 ;
-(void)setSessionIdWatch:(NSData *)arg1 ;
-(NSString *)userId;
-(BOOL)signedIntoIcloud;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)appBuildNumber;
-(BOOL)hasDevicePlatform;
-(BOOL)hasLanguageCode;
-(void)setCampaignType:(int)arg1 ;
-(BOOL)hasAmsCampaignId;
-(void)setAppVersion:(NSString *)arg1 ;
-(BOOL)hasCampaignType;
-(BOOL)hasOsInstallVariant;
-(int)campaignType;
-(BOOL)hasUserStorefrontId;
-(NSString *)carrier;
-(NSString *)devicePlatform;
-(BOOL)hasCarrier;
-(void)setAppProcessLifetimeId:(NSData *)arg1 ;
-(void)setAppBuild:(long long)arg1 ;
-(void)setOsInstallVariant:(int)arg1 ;
-(NSString *)userStorefrontId;
-(long long)appBuild;
-(void)setHasOsInstallVariant:(BOOL)arg1 ;
-(void)setCarrier:(NSString *)arg1 ;
-(void)setCampaignId:(NSString *)arg1 ;
-(void)setAppBuildNumber:(NSString *)arg1 ;
-(id)osInstallVariantAsString:(int)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setHasCellularRadioAccessTechnology:(BOOL)arg1 ;
-(BOOL)hasCellularRadioAccessTechnology;
-(void)setHasTestBucket:(BOOL)arg1 ;
-(BOOL)iosSettingsNotificationsShowOnLockScreenEnabled;
-(void)setHasIosSettingsNotificationsBadgeAppIconEnabled:(BOOL)arg1 ;
-(NSString *)deviceModel;
-(void)setHasEthnicity:(BOOL)arg1 ;
-(void)setHasIsStoreDemoModeEnabled:(BOOL)arg1 ;
-(void)setUserSegmentationSegmentSetIds:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)cellularRadioAccessTechnology;
-(NSString *)countryCode;
-(NSData *)widgetSessionId;
-(BOOL)hasOriginatingCampaignType;
-(void)setCellularRadioAccessTechnology:(int)arg1 ;
-(BOOL)hasLocationPermissionGranted;
-(int)userSegmentationSegmentSetIdsAtIndex:(unsigned long long)arg1 ;
-(void)setHasReachabilityStatus:(BOOL)arg1 ;
-(void)setHasUpgradedFromObsolete:(BOOL)arg1 ;
-(NSString *)appVersion;
-(BOOL)hasPrivateDataSyncOn;
-(id)campaignTypeAsString:(int)arg1 ;
-(BOOL)hasAmsPurchaseId;
-(void)setTestBucket:(long long)arg1 ;
-(void)setHasIosSettingsNotificationsShowOnLockScreenEnabled:(BOOL)arg1 ;
-(NSString *)watchSessionId;
-(void)setHasAgeBracket:(BOOL)arg1 ;
-(int)widgetDisplayModeSessionEnd;
-(NSString *)clientName;
-(BOOL)hasDeviceModel;
-(int)utcOffset;
-(id)cellularRadioAccessTechnologyAsString:(int)arg1 ;
-(BOOL)hasCountryCode;
-(int)incomeBracket;
-(BOOL)hasLastAppOpenDate;
-(NSData *)appProcessLifetimeId;
-(void)setIsPaidSubscriberFromAppStore:(BOOL)arg1 ;
-(void)setLastAppOpenDate:(long long)arg1 ;
-(BOOL)hasWidgetDisplayModeSessionEnd;
-(void)setHasPrivateDataSyncOn:(BOOL)arg1 ;
-(long long*)userSegmentationTreatmentIds;
-(BOOL)isStoreDemoModeEnabled;
-(int)paywallConfigType;
-(void)setWidgetModeType:(int)arg1 ;
-(void)setHasGender:(BOOL)arg1 ;
-(BOOL)hasIncomeBracketConfidenceLevel;
-(BOOL)privateDataEncrypted;
-(void)setIosSettingsNotificationsBadgeAppIconEnabled:(BOOL)arg1 ;
-(NSString *)clientVersion;
-(void)setOriginatingCampaignId:(NSString *)arg1 ;
-(BOOL)hasPrivateDataEncrypted;
-(void)setLocationPermissionGranted:(BOOL)arg1 ;
-(void)setWidgetDisplayMode:(int)arg1 ;
-(BOOL)hasNewsWidgetModeGroup;
-(void)setIosSettingsNotificationsShowInHistoryEnabled:(BOOL)arg1 ;
-(NSString *)amsCampaignId;
-(NSString *)productType;
-(void)setIosSettingsNotificationsEnabled:(BOOL)arg1 ;
-(void)setHasIsPaidSubscriberFromNews:(BOOL)arg1 ;
-(void)setRegionIds:(NSMutableArray *)arg1 ;
-(BOOL)hasReachabilityStatus;
-(void)setHasIosSettingsNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)hasClientName;
-(BOOL)hasPersonalizationPortraitVariantName;
-(BOOL)hasWidgetDisplayMode;
-(void)setHasPaywallConfigType:(BOOL)arg1 ;
-(BOOL)hasWidgetSessionId;
-(BOOL)hasEthnicityConfidenceLevel;
-(void)setPrivateDataSyncOn:(BOOL)arg1 ;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(BOOL)hasNotificationsEnabled;
-(void)setHasAppConfigTreatmentId:(BOOL)arg1 ;
-(NSString *)osVersion;
-(BOOL)runningObsolete;
-(void)setIosSettingsNotificationsSoundEnabled:(BOOL)arg1 ;
-(BOOL)hasIsPaidSubscriberFromThirdParty;
-(void)setTextSize:(int)arg1 ;
-(NSString *)widgetUserId;
-(NSString *)languageCode;
-(void)mergeFrom:(id)arg1 ;
-(void)setPreviousOsVersion:(NSString *)arg1 ;
-(void)setProductType:(NSString *)arg1 ;
-(NSString *)previousOsVersion;
-(void)setHasIosSettingsNotificationsSoundEnabled:(BOOL)arg1 ;
-(long long)testBucket;
-(void)setHasLocationPermissionGranted:(BOOL)arg1 ;
-(void)setHasUtcOffset:(BOOL)arg1 ;
-(BOOL)hasGender;
-(void)setSignedIntoITunes:(BOOL)arg1 ;
-(void)clearRegionIds;
-(BOOL)hasWatchSessionId;
-(BOOL)isPaidSubscriber;
-(void)setHasIsNewUser:(BOOL)arg1 ;
-(NSString *)originatingCampaignId;
-(BOOL)hasIncomeBracket;
-(void)setHasGenderConfidenceLevel:(BOOL)arg1 ;
-(void)setHasUserStartDate:(BOOL)arg1 ;
-(BOOL)hasProductType;
-(int)widgetDisplayMode;
-(BOOL)hasIosSettingsNotificationsShowAsBannersEnabled;
-(int)StringAsCellularRadioAccessTechnology:(id)arg1 ;
-(void)setHasWidgetDisplayModeSessionEnd:(BOOL)arg1 ;
-(int)StringAsCampaignType:(id)arg1 ;
-(BOOL)hasNewsWidgetModeGroupId;
-(void)setOriginatingCreativeId:(NSString *)arg1 ;
-(void)setPersonalizationPortraitVariantName:(NSString *)arg1 ;
-(BOOL)locationPermissionGranted;
-(void)setGenderConfidenceLevel:(float)arg1 ;
-(id)newsWidgetModeGroupAsString:(int)arg1 ;
-(BOOL)isDiagnosticsUsageEnabled;
-(int)ageBracket;
-(NSString *)amsPurchaseId;
-(void)setIsDiagnosticsUsageEnabled:(BOOL)arg1 ;
-(void)setHasPrivateDataEncrypted:(BOOL)arg1 ;
-(void)setProgressivePersonalizationAllowed:(BOOL)arg1 ;
-(id)widgetDisplayModeSessionEndAsString:(int)arg1 ;
-(void)setHasProgressivePersonalizationAllowed:(BOOL)arg1 ;
-(void)setReachabilityStatus:(int)arg1 ;
-(void)setIncomeBracket:(int)arg1 ;
-(id)description;
-(void)setHasCampaignType:(BOOL)arg1 ;
-(void)setHasSignedIntoITunes:(BOOL)arg1 ;
-(int*)userSegmentationSegmentSetIds;
-(BOOL)hasAppBuild;
-(void)setRunningObsolete:(BOOL)arg1 ;
-(BOOL)hasIosSettingsNotificationsBadgeAppIconEnabled;
-(int)StringAsPaywallConfigType:(id)arg1 ;
-(BOOL)hasPreviousAppVersion;
-(void)setHasIsDiagnosticsUsageEnabled:(BOOL)arg1 ;
-(BOOL)hasIsPaidSubscriberFromAppStore;
-(void)setEthnicityConfidenceLevel:(float)arg1 ;
-(void)setHasWidgetModeType:(BOOL)arg1 ;
-(BOOL)privateDataSyncOn;
-(BOOL)hasIsPaidSubscriber;
-(int)ethnicity;
-(BOOL)hasOriginatingCreativeId;
-(BOOL)iosSettingsNotificationsSoundEnabled;
-(BOOL)hasIsDiagnosticsUsageEnabled;
-(void)clearUserSegmentationSegmentSetIds;
-(void)setHasIncomeBracket:(BOOL)arg1 ;
-(BOOL)hasTextSize;
-(NSString *)originatingCreativeId;
-(float)genderConfidenceLevel;
-(BOOL)hasProgressivePersonalizationAllowed;
-(void)setHasIsPaidSubscriberFromAppStore:(BOOL)arg1 ;
-(BOOL)hasEthnicity;
-(BOOL)notificationsEnabled;
-(void)clearUserSegmentationTreatmentIds;
-(int)StringAsWidgetModeType:(id)arg1 ;
-(BOOL)hasBrowserLanguage;
-(void)setHasIsPaidSubscriberFromThirdParty:(BOOL)arg1 ;
-(BOOL)hasClientVersion;
-(id)widgetDisplayModeAsString:(int)arg1 ;
-(BOOL)hasUpgradedFromObsolete;
-(void)setHasNewsWidgetModeGroup:(BOOL)arg1 ;
-(id)regionIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isPaidSubscriberFromNews;
-(void)setHasWidgetDisplayMode:(BOOL)arg1 ;
-(int)StringAsWidgetDisplayMode:(id)arg1 ;
-(BOOL)hasAppConfigTreatmentId;
-(BOOL)isNewUser;
-(void)setIsPaidSubscriberFromThirdParty:(BOOL)arg1 ;
-(int)StringAsNewsWidgetModeGroup:(id)arg1 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(id)paywallConfigTypeAsString:(int)arg1 ;
-(id)reachabilityStatusAsString:(int)arg1 ;
-(BOOL)iosSettingsNotificationsBadgeAppIconEnabled;
-(unsigned long long)hash;
-(void)setHasSignedIntoIcloud:(BOOL)arg1 ;
-(void)setAgeBracket:(int)arg1 ;
-(void)setSignedIntoIcloud:(BOOL)arg1 ;
-(void)setWidgetSessionId:(NSData *)arg1 ;
-(long long)userSegmentationTreatmentIdsAtIndex:(unsigned long long)arg1 ;
-(void)setNewsWidgetModeGroup:(int)arg1 ;
-(BOOL)hasUtcOffset;
-(BOOL)hasSessionIdWatch;
-(void)setAmsCampaignId:(NSString *)arg1 ;
-(void)setAmsPurchaseId:(NSString *)arg1 ;
-(unsigned long long)regionIdsCount;
-(unsigned long long)userSegmentationTreatmentIdsCount;
-(void)setAppConfigTreatmentId:(long long)arg1 ;
-(void)setHasAgeBracketConfidenceLevel:(BOOL)arg1 ;
-(NSString *)originatingCampaignType;
-(id)widgetModeTypeAsString:(int)arg1 ;
-(NSString *)browserLanguage;
-(int)newsWidgetModeGroup;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)signedIntoITunes;
-(void)setHasIosSettingsNotificationsShowAsBannersEnabled:(BOOL)arg1 ;
-(BOOL)isPaidSubscriberFromThirdParty;
-(unsigned long long)userSegmentationSegmentSetIdsCount;
-(float)ethnicityConfidenceLevel;
-(BOOL)hasIsPaidSubscriberFromNews;
-(void)setIosSettingsNotificationsShowOnLockScreenEnabled:(BOOL)arg1 ;
-(void)setIosSettingsNotificationsShowAsBannersEnabled:(BOOL)arg1 ;
-(BOOL)hasPaywallConfigType;
-(void)setNotwUserId:(NSString *)arg1 ;
-(NSData *)sessionIdWatch;
-(void)setGender:(int)arg1 ;
-(long long)appConfigTreatmentId;
-(void)writeTo:(id)arg1 ;
-(float)incomeBracketConfidenceLevel;
-(void)setWidgetUserId:(NSString *)arg1 ;
-(BOOL)iosSettingsNotificationsShowAsBannersEnabled;
-(void)setEthnicity:(int)arg1 ;
-(BOOL)hasNotwUserId;
-(NSString *)newsWidgetModeGroupId;
-(BOOL)hasRunningObsolete;
-(void)setHasTextSize:(BOOL)arg1 ;
-(void)setIsPaidSubscriberFromNews:(BOOL)arg1 ;
-(BOOL)hasAppProcessLifetimeId;
-(void)setIncomeBracketConfidenceLevel:(float)arg1 ;
-(int)gender;
-(BOOL)hasIosSettingsNotificationsShowOnLockScreenEnabled;
-(BOOL)hasSignedIntoIcloud;
-(BOOL)hasIosSettingsNotificationsEnabled;
-(void)setPaywallConfigType:(int)arg1 ;
-(BOOL)hasIsStoreDemoModeEnabled;
-(BOOL)hasWidgetModeType;
-(NSString *)notwUserId;
-(BOOL)hasAgeBracket;
-(BOOL)hasIosSettingsNotificationsShowInHistoryEnabled;
-(void)setBrowserLanguage:(NSString *)arg1 ;
-(void)setHasRunningObsolete:(BOOL)arg1 ;
-(void)setIsStoreDemoModeEnabled:(BOOL)arg1 ;
-(void)setUserSegmentationTreatmentIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasIsPaidSubscriber:(BOOL)arg1 ;
-(void)setHasIosSettingsNotificationsShowInHistoryEnabled:(BOOL)arg1 ;
-(void)setPreviousAppVersion:(NSString *)arg1 ;
-(float)ageBracketConfidenceLevel;
-(BOOL)hasGenderConfidenceLevel;
-(void)setWidgetDisplayModeSessionEnd:(int)arg1 ;
-(BOOL)hasWidgetUserId;
-(void)setPrivateDataEncrypted:(BOOL)arg1 ;
-(int)widgetModeType;
-(BOOL)hasUserStartDate;
-(void)setUserStartDate:(long long)arg1 ;
-(void)setWatchSessionId:(NSString *)arg1 ;
-(void)setIsNewUser:(BOOL)arg1 ;
-(int)StringAsWidgetDisplayModeSessionEnd:(id)arg1 ;
-(void)setHasLastAppOpenDate:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasPreviousOsVersion;
-(int)reachabilityStatus;
-(void)addUserSegmentationTreatmentIds:(long long)arg1 ;
-(void)setHasNotificationsEnabled:(BOOL)arg1 ;
-(void)addUserSegmentationSegmentSetIds:(int)arg1 ;
-(BOOL)isPaidSubscriberFromAppStore;
-(NSMutableArray *)regionIds;
-(NSString *)previousAppVersion;
-(BOOL)progressivePersonalizationAllowed;
-(BOOL)hasOriginatingCampaignId;
-(void)setOriginatingCampaignType:(NSString *)arg1 ;
-(void)addRegionIds:(id)arg1 ;
-(void)setClientVersion:(NSString *)arg1 ;
-(void)setUpgradedFromObsolete:(BOOL)arg1 ;
-(BOOL)hasSignedIntoITunes;
-(NSString *)personalizationPortraitVariantName;
-(BOOL)hasAgeBracketConfidenceLevel;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasIosSettingsNotificationsSoundEnabled;
-(void)dealloc;
-(long long)lastAppOpenDate;
-(void)setHasEthnicityConfidenceLevel:(BOOL)arg1 ;
-(void)setNewsWidgetModeGroupId:(NSString *)arg1 ;
-(BOOL)hasIsNewUser;
-(BOOL)iosSettingsNotificationsEnabled;
-(void)setUtcOffset:(int)arg1 ;
-(void)setIsPaidSubscriber:(BOOL)arg1 ;
-(void)setHasIncomeBracketConfidenceLevel:(BOOL)arg1 ;
-(long long)userStartDate;
-(int)StringAsReachabilityStatus:(id)arg1 ;
-(BOOL)upgradedFromObsolete;
@end

