/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSUserDefaults, NSString, NSDictionary, NSNumber, NSDate;

@interface ICDefaults : NSObject {

	NSUserDefaults* _userDefaults;
	NSUserDefaults* _musicUserDefaults;
	BOOL _bypassBagSanityChecks;
	NSUserDefaults* _internalDefaults;

}

@property (nonatomic,readonly) NSUserDefaults * internalDefaults;                                                                        //@synthesize internalDefaults=_internalDefaults - In the implementation block
@property (nonatomic,copy) NSString * cloudMediaLibraryUID; 
@property (nonatomic,readonly) NSString * defaultStoreFront; 
@property (nonatomic,copy) NSDictionary * cachedSubscriptionStatus; 
@property (nonatomic,copy) NSDictionary * cachedMusicUserTokens; 
@property (nonatomic,copy) NSDictionary * pushNotificationState; 
@property (nonatomic,copy) NSDictionary * mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates; 
@property (nonatomic,copy) NSNumber * lastActiveAccountDSID; 
@property (nonatomic,copy) NSDictionary * lastCookieHeadersForRevokingMusicUserTokens; 
@property (nonatomic,copy) NSDate * lastAllowedInteractiveAuthenticationTime; 
@property (nonatomic,copy) NSDictionary * authServiceClientTokenCache; 
@property (assign,nonatomic) double lastAuthenticationDialogResponseTime; 
@property (nonatomic,copy) NSDictionary * lastKnownLocalStoreAccountProperties; 
@property (nonatomic,copy) NSDictionary * lastKnownSubscriptionStatusBaseCacheKey; 
@property (nonatomic,copy) NSDictionary * accountNotificationsShowInLibraryDictionary; 
@property (assign,nonatomic) BOOL ignoreExtendedCertificateValidation; 
@property (assign,nonatomic) BOOL bypassBagSanityChecks;                                                                                 //@synthesize bypassBagSanityChecks=_bypassBagSanityChecks - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceModelOverride; 
@property (nonatomic,copy,readonly) NSNumber * deviceClassOverride; 
@property (nonatomic,copy,readonly) NSNumber * fairPlayDeviceTypeOverride; 
@property (nonatomic,copy,readonly) NSString * productVersionOverride; 
@property (nonatomic,copy,readonly) NSString * hardwarePlatformOverride; 
@property (nonatomic,copy,readonly) NSString * productPlatformOverride; 
@property (nonatomic,copy,readonly) NSNumber * networkTypeOverride; 
@property (nonatomic,readonly) BOOL shouldForceiPhoneBehaviors; 
@property (nonatomic,copy,readonly) NSNumber * authServiceClientTokenTimeToLive; 
@property (assign,nonatomic) BOOL shouldRunAgeVerification; 
@property (nonatomic,copy) NSDate * ageVerificationExpirationDate; 
@property (assign,getter=isExplicitContentAllowedForCurrentYear,nonatomic) BOOL explicitContentAllowedForCurrentYear; 
@property (assign,getter=isExplicitContentAllowedForExpirationYear,nonatomic) BOOL explicitContentAllowedForExpirationYear; 
@property (assign,getter=isGrazingPathEnabled,nonatomic) BOOL grazingPathEnabled; 
@property (getter=isPrivacyAcknowledgementDisabledForMusic,nonatomic,readonly) BOOL privacyAcknowledgementDisabledForMusic; 
@property (nonatomic,readonly) BOOL shouldForceLibraryRecommendationAnalysis; 
@property (nonatomic,readonly) BOOL allowLowAffinityRecommendations; 
@property (nonatomic,readonly) BOOL shouldReduceLibraryRecommendationsXPCInterval; 
@property (nonatomic,readonly) BOOL shouldTreatSubscriptionStatusAsExpired; 
@property (nonatomic,readonly) BOOL shouldTreatSagaAddComputerCallAsFailed; 
@property (nonatomic,readonly) BOOL shouldTreatInitialSagaImportAsFailed; 
@property (nonatomic,readonly) BOOL shouldTreatSubscriptionStatusCheckAsIncomplete; 
@property (getter=isLegacyStoreCacheBusterEnabled,nonatomic,readonly) BOOL legacyStoreCacheBusterEnabled; 
@property (assign,nonatomic) BOOL automaticDownloadsEnabled; 
@property (nonatomic,copy) NSDictionary * lastKnownUserAgeVerificationState; 
+(id)standardDefaults;
-(double)lastAuthenticationDialogResponseTime;
-(BOOL)shouldTreatSubscriptionStatusAsExpired;
-(void)setShouldRunAgeVerification:(BOOL)arg1 ;
-(id)init;
-(void)setLastCookieHeadersForRevokingMusicUserTokens:(NSDictionary *)arg1 ;
-(BOOL)isExplicitContentAllowedForCurrentYear;
-(BOOL)isLegacyStoreCacheBusterEnabled;
-(void)setAuthServiceClientTokenCache:(NSDictionary *)arg1 ;
-(id)_musicUserDefaults;
-(void)setExplicitContentAllowedForCurrentYear:(BOOL)arg1 ;
-(NSDictionary *)lastKnownSubscriptionStatusBaseCacheKey;
-(void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)ignoreExtendedCertificateValidation;
-(NSDate *)ageVerificationExpirationDate;
-(void)setLastAllowedInteractiveAuthenticationTime:(NSDate *)arg1 ;
-(BOOL)shouldTreatSagaAddComputerCallAsFailed;
-(NSNumber *)authServiceClientTokenTimeToLive;
-(void)setIgnoreExtendedCertificateValidation:(BOOL)arg1 ;
-(void)setPushNotificationState:(NSDictionary *)arg1 ;
-(void)setGrazingPathEnabled:(BOOL)arg1 ;
-(BOOL)automaticDownloadsEnabled;
-(BOOL)isGrazingPathEnabled;
-(NSNumber *)fairPlayDeviceTypeOverride;
-(void)setLastKnownUserAgeVerificationState:(NSDictionary *)arg1 ;
-(NSDate *)lastAllowedInteractiveAuthenticationTime;
-(NSString *)cloudMediaLibraryUID;
-(NSString *)hardwarePlatformOverride;
-(void)setCachedSubscriptionStatus:(NSDictionary *)arg1 ;
-(void)setCachedMusicUserTokens:(NSDictionary *)arg1 ;
-(NSUserDefaults *)internalDefaults;
-(void)synchronize;
-(void)setLastKnownLocalStoreAccountProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)lastKnownLocalStoreAccountProperties;
-(BOOL)shouldTreatSubscriptionStatusCheckAsIncomplete;
-(void)setAgeVerificationExpirationDate:(NSDate *)arg1 ;
-(BOOL)shouldForceiPhoneBehaviors;
-(void)setAutomaticDownloadsEnabled:(BOOL)arg1 ;
-(NSDictionary *)lastKnownUserAgeVerificationState;
-(NSNumber *)networkTypeOverride;
-(BOOL)shouldTreatInitialSagaImportAsFailed;
-(void)deleteAutomaticDownloadsKey;
-(BOOL)isExplicitContentAllowedForExpirationYear;
-(void)setExplicitContentAllowedForExpirationYear:(BOOL)arg1 ;
-(void)setLastAuthenticationDialogResponseTime:(double)arg1 ;
-(NSNumber *)deviceClassOverride;
-(NSDictionary *)cachedSubscriptionStatus;
-(void)setMediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates:(NSDictionary *)arg1 ;
-(NSDictionary *)cachedMusicUserTokens;
-(NSString *)productPlatformOverride;
-(NSString *)productVersionOverride;
-(NSDictionary *)accountNotificationsShowInLibraryDictionary;
-(void)setLastActiveAccountDSID:(NSNumber *)arg1 ;
-(BOOL)shouldForceLibraryRecommendationAnalysis;
-(NSString *)defaultStoreFront;
-(void)setLastKnownSubscriptionStatusBaseCacheKey:(NSDictionary *)arg1 ;
-(NSDictionary *)authServiceClientTokenCache;
-(NSNumber *)lastActiveAccountDSID;
-(void)setBypassBagSanityChecks:(BOOL)arg1 ;
-(BOOL)shouldReduceLibraryRecommendationsXPCInterval;
-(NSDictionary *)pushNotificationState;
-(NSDictionary *)mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
-(NSString *)deviceModelOverride;
-(BOOL)_shouldSpoofIPhoneRequestProperties;
-(BOOL)allowLowAffinityRecommendations;
-(NSDictionary *)lastCookieHeadersForRevokingMusicUserTokens;
-(BOOL)bypassBagSanityChecks;
-(BOOL)isPrivacyAcknowledgementDisabledForMusic;
-(BOOL)shouldRunAgeVerification;
-(void)setCloudMediaLibraryUID:(NSString *)arg1 ;
-(void)setAccountNotificationsShowInLibraryDictionary:(NSDictionary *)arg1 ;
@end

