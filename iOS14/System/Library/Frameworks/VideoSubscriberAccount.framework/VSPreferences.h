/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSUndoManager, NSUserDefaults, VSDevice, NSURL;

@interface VSPreferences : NSObject {

	NSUndoManager* _undoManager;
	NSUserDefaults* _userDefaults;
	NSUserDefaults* _globalUserDefaults;
	VSDevice* _device;

}

@property (nonatomic,retain) NSUserDefaults * userDefaults;                         //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSUserDefaults * globalUserDefaults;                   //@synthesize globalUserDefaults=_globalUserDefaults - In the implementation block
@property (nonatomic,retain) VSDevice * device;                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager;                           //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,copy,readonly) NSURL * overridingAppBootURL; 
@property (nonatomic,readonly) BOOL shouldDisableRequestTimeouts; 
@property (nonatomic,readonly) BOOL shouldAlwaysAllowRemoteInspection; 
@property (nonatomic,readonly) BOOL shouldSkipSetup; 
@property (assign,nonatomic) long long cachedAvailabilityStatus; 
@property (assign,nonatomic) long long cachedDeveloperProviderStatus; 
@property (assign,nonatomic) long long cachedStoreProviderStatus; 
@property (nonatomic,readonly) BOOL hasSentWelcomeMessage; 
-(void)setCachedAvailabilityStatus:(long long)arg1 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUndoManager *)undoManager;
-(NSUserDefaults *)globalUserDefaults;
-(BOOL)hasSentWelcomeMessage;
-(BOOL)shouldAlwaysAllowRemoteInspection;
-(void)noteDesiredApp:(id)arg1 ;
-(id)metricUserIDLastGenerated;
-(void)setMetricUserID:(id)arg1 ;
-(void)setCachedStoreProviderStatus:(long long)arg1 ;
-(BOOL)shouldDisableRequestTimeouts;
-(BOOL)ignoreSetTopBoxProfile;
-(long long)cachedDeveloperProviderStatus;
-(void)noteDidSendWelcomeMessage;
-(NSURL *)overridingAppBootURL;
-(void)_updateValue:(id)arg1 forKey:(id)arg2 ;
-(VSDevice *)device;
-(NSUserDefaults *)userDefaults;
-(id)setTopBoxInfoProviderIdOverride;
-(void)removeSkipSetupPreset;
-(BOOL)isInSTBMode;
-(id)setTopBoxInfoBundleIdentifierOverride;
-(void)noteShouldSkipSetup;
-(id)setTopBoxInfoAppAdamIdOverride;
-(BOOL)hasChosenDesiredApp;
-(void)setCachedDeveloperProviderStatus:(long long)arg1 ;
-(BOOL)shouldSkipSetup;
-(long long)cachedAvailabilityStatus;
-(id)setTopBoxInfoProviderDisplayNameOverride;
-(BOOL)shouldIgnoreExtendedValidation;
-(id)metricUserID;
-(void)setDevice:(VSDevice *)arg1 ;
-(BOOL)setTopBoxInfoIsSetTopBoxOverride;
-(void)setIgnoreSetTopBoxProfile:(BOOL)arg1 ;
-(long long)cachedStoreProviderStatus;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)noteIsInSTBMode:(BOOL)arg1 ;
-(void)setGlobalUserDefaults:(NSUserDefaults *)arg1 ;
-(void)_updateShouldSkipSetupWithNumber:(id)arg1 ;
-(BOOL)allowInsecureAuthContext;
@end

