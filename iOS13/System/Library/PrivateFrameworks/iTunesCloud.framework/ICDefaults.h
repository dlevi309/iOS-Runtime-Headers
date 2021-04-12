/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,copy) NSDictionary * lastKnownUserAgeVerificationState; 
+(id)standardDefaults;
-(id)init;
-(void)synchronize;
-(NSDictionary *)lastKnownSubscriptionStatusBaseCacheKey;
-(void)setLastKnownSubscriptionStatusBaseCacheKey:(NSDictionary *)arg1 ;
-(NSDictionary *)cachedSubscriptionStatus;
-(void)setCachedSubscriptionStatus:(NSDictionary *)arg1 ;
-(BOOL)shouldRunAgeVerification;
-(NSDate *)ageVerificationExpirationDate;
-(BOOL)bypassBagSanityChecks;
-(NSNumber *)authServiceClientTokenTimeToLive;
-(void)setAgeVerificationExpirationDate:(NSDate *)arg1 ;
-(BOOL)ignoreExtendedCertificateValidation;
-(NSDictionary *)mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
-(NSString *)deviceModelOverride;
-(NSString *)hardwarePlatformOverride;
-(NSNumber *)deviceClassOverride;
-(NSString *)productVersionOverride;
-(NSString *)productPlatformOverride;
-(NSNumber *)fairPlayDeviceTypeOverride;
-(NSDictionary *)lastKnownUserAgeVerificationState;
-(void)setLastKnownUserAgeVerificationState:(NSDictionary *)arg1 ;
-(void)setLastAuthenticationDialogResponseTime:(double)arg1 ;
-(NSDate *)lastAllowedInteractiveAuthenticationTime;
-(void)setLastAllowedInteractiveAuthenticationTime:(NSDate *)arg1 ;
-(void)setAccountNotificationsShowInLibraryDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)accountNotificationsShowInLibraryDictionary;
-(NSString *)cloudMediaLibraryUID;
-(NSDictionary *)authServiceClientTokenCache;
-(void)setAuthServiceClientTokenCache:(NSDictionary *)arg1 ;
-(BOOL)isPrivacyAcknowledgementDisabledForMusic;
-(void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2 ;
-(NSUserDefaults *)internalDefaults;
-(BOOL)_shouldSpoofIPhoneRequestProperties;
-(id)_musicUserDefaults;
-(void)setCloudMediaLibraryUID:(NSString *)arg1 ;
-(NSString *)defaultStoreFront;
-(NSDictionary *)cachedMusicUserTokens;
-(void)setCachedMusicUserTokens:(NSDictionary *)arg1 ;
-(NSDictionary *)pushNotificationState;
-(void)setPushNotificationState:(NSDictionary *)arg1 ;
-(void)setMediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates:(NSDictionary *)arg1 ;
-(NSNumber *)lastActiveAccountDSID;
-(void)setLastActiveAccountDSID:(NSNumber *)arg1 ;
-(NSDictionary *)lastCookieHeadersForRevokingMusicUserTokens;
-(void)setLastCookieHeadersForRevokingMusicUserTokens:(NSDictionary *)arg1 ;
-(double)lastAuthenticationDialogResponseTime;
-(NSDictionary *)lastKnownLocalStoreAccountProperties;
-(void)setLastKnownLocalStoreAccountProperties:(NSDictionary *)arg1 ;
-(void)setIgnoreExtendedCertificateValidation:(BOOL)arg1 ;
-(NSNumber *)networkTypeOverride;
-(BOOL)shouldForceiPhoneBehaviors;
-(void)setShouldRunAgeVerification:(BOOL)arg1 ;
-(BOOL)isExplicitContentAllowedForCurrentYear;
-(void)setExplicitContentAllowedForCurrentYear:(BOOL)arg1 ;
-(BOOL)isExplicitContentAllowedForExpirationYear;
-(void)setExplicitContentAllowedForExpirationYear:(BOOL)arg1 ;
-(BOOL)isGrazingPathEnabled;
-(void)setGrazingPathEnabled:(BOOL)arg1 ;
-(BOOL)shouldForceLibraryRecommendationAnalysis;
-(BOOL)shouldReduceLibraryRecommendationsXPCInterval;
-(BOOL)allowLowAffinityRecommendations;
-(void)setBypassBagSanityChecks:(BOOL)arg1 ;
@end

