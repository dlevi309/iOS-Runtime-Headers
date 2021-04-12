/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCTagSettingsDelegate.h>

@class FCTagSettings, NSDictionary, FCMTWriterLock, NSNumber, NSString, NSDate;

@interface FCUserInfo : FCPrivateDataController <FCTagSettingsDelegate> {

	BOOL _useParsecResults;
	FCTagSettings* _tagSettings;
	NSDictionary* _readOnlyUserInfo;
	FCMTWriterLock* _userInfoLock;

}

@property (nonatomic,retain) NSDictionary * readOnlyUserInfo;                                   //@synthesize readOnlyUserInfo=_readOnlyUserInfo - In the implementation block
@property (nonatomic,retain) FCMTWriterLock * userInfoLock;                                     //@synthesize userInfoLock=_userInfoLock - In the implementation block
@property (nonatomic,copy) NSNumber * onboardingVersionNumber; 
@property (nonatomic,copy) NSString * feldsparID; 
@property (nonatomic,copy,readonly) NSString * notificationsUserID; 
@property (nonatomic,copy) NSDate * dateLastOpened; 
@property (nonatomic,retain) FCTagSettings * tagSettings;                                       //@synthesize tagSettings=_tagSettings - In the implementation block
@property (nonatomic,copy) NSDate * userStartDate; 
@property (nonatomic,readonly) BOOL useParsecResults;                                           //@synthesize useParsecResults=_useParsecResults - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowDefaultForYou; 
@property (nonatomic,readonly) unsigned long long progressivePersonalization; 
@property (assign,nonatomic) BOOL hasShownProgressivePersonalizationWelcomeBrick; 
@property (assign,nonatomic) BOOL userHasCompletedFavoritesSetup; 
@property (nonatomic,copy) NSString * editorialArticleVersion; 
@property (nonatomic,copy) NSString * canonicalLanguage; 
@property (assign,nonatomic) BOOL marketingNotificationsEnabled; 
@property (assign,nonatomic) BOOL newIssueNotificationsEnabled; 
@property (nonatomic,copy) NSNumber * monthlyALaCarteSubscriptionMeteredCount; 
@property (nonatomic,copy) NSDate * aLaCarteSubscriptionMeteredCountLastResetDate; 
@property (nonatomic,copy) NSNumber * monthlyBundleSubscriptionMeteredCount; 
@property (nonatomic,copy) NSDate * bundleSubscriptionMeteredCountLastResetDate; 
@property (nonatomic,copy) NSNumber * upsellAppLaunchCount; 
@property (nonatomic,copy) NSString * lastAppLaunchUpsellInstanceID; 
@property (nonatomic,readonly) BOOL mightNeedToUpdateOnboardingVersion; 
@property (nonatomic,readonly) NSDate * dateLastViewedSaved; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)desiredKeys;
+(BOOL)requiresPushNotificationSupport;
+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(id)backingRecordZoneIDs;
+(id)backingRecordIDs;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(id)commandStoreFileName;
+(long long)commandQueueUrgency;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(id)overrideFeldsparID;
+(id)userInfoCKRecordFromUserInfoDictionary:(id)arg1 ;
+(id)iCloudDataKeys;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(id)asCKRecord;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(FCTagSettings *)tagSettings;
-(void)syncWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)feldsparID;
-(void)setFeldsparID:(NSString *)arg1 ;
-(void)prepareForUse;
-(NSString *)notificationsUserID;
-(void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(NSNumber *)onboardingVersionNumber;
-(id)_userInfoValueForKey:(id)arg1 ;
-(NSDate *)dateLastOpened;
-(unsigned long long)progressivePersonalization;
-(void)setMarketingNotificationsEnabled:(BOOL)arg1 ;
-(void)setOnboardingVersionNumber:(NSNumber *)arg1 ;
-(BOOL)mightNeedToUpdateOnboardingVersion;
-(BOOL)marketingNotificationsEnabled;
-(BOOL)newIssueNotificationsEnabled;
-(FCMTWriterLock *)userInfoLock;
-(NSDictionary *)readOnlyUserInfo;
-(void)setReadOnlyUserInfo:(NSDictionary *)arg1 ;
-(void)handleSyncWithUserInfoRecord:(id)arg1 ;
-(void)handleSyncWithDeletedUserInfoRecord;
-(void)_modifyUserInfoWithBlock:(/*^block*/id)arg1 ;
-(void)syncLocalNotificationsUserID:(id)arg1 withRemoteNotificationsUserID:(id)arg2 ;
-(void)_persistNotificationsUserID:(id)arg1 ;
-(void)addModifyTagSettingsCommandToCommandQueue:(id)arg1 ;
-(void)accessTokenDidChangeForTagID:(id)arg1 ;
-(void)accessTokenRemovedForTagID:(id)arg1 userInitiated:(BOOL)arg2 ;
-(NSString *)editorialArticleVersion;
-(NSString *)canonicalLanguage;
-(void)setUserStartDate:(NSDate *)arg1 ;
-(NSDate *)userStartDate;
-(void)setDateLastOpened:(NSDate *)arg1 ;
-(BOOL)shouldShowDefaultForYou;
-(BOOL)hasShownProgressivePersonalizationWelcomeBrick;
-(void)setHasShownProgressivePersonalizationWelcomeBrick:(BOOL)arg1 ;
-(BOOL)userHasCompletedFavoritesSetup;
-(void)setUserHasCompletedFavoritesSetup:(BOOL)arg1 ;
-(NSNumber *)monthlyALaCarteSubscriptionMeteredCount;
-(void)setMonthlyALaCarteSubscriptionMeteredCount:(NSNumber *)arg1 ;
-(NSDate *)aLaCarteSubscriptionMeteredCountLastResetDate;
-(void)setALaCarteSubscriptionMeteredCountLastResetDate:(NSDate *)arg1 ;
-(NSNumber *)monthlyBundleSubscriptionMeteredCount;
-(void)setMonthlyBundleSubscriptionMeteredCount:(NSNumber *)arg1 ;
-(NSDate *)bundleSubscriptionMeteredCountLastResetDate;
-(void)setBundleSubscriptionMeteredCountLastResetDate:(NSDate *)arg1 ;
-(NSNumber *)upsellAppLaunchCount;
-(void)setUpsellAppLaunchCount:(NSNumber *)arg1 ;
-(NSString *)lastAppLaunchUpsellInstanceID;
-(void)setLastAppLaunchUpsellInstanceID:(NSString *)arg1 ;
-(void)refreshOnboardingVersion:(/*^block*/id)arg1 ;
-(void)updateOnboardingVersion;
-(void)maybeUpdateOnboardingVersion:(/*^block*/id)arg1 ;
-(void)markSavedAsViewed;
-(NSDate *)dateLastViewedSaved;
-(void)setEditorialArticleVersion:(NSString *)arg1 ;
-(void)setCanonicalLanguage:(NSString *)arg1 ;
-(void)setNewIssueNotificationsEnabled:(BOOL)arg1 ;
-(void)setTagSettings:(FCTagSettings *)arg1 ;
-(BOOL)useParsecResults;
-(void)setUserInfoLock:(FCMTWriterLock *)arg1 ;
@end

