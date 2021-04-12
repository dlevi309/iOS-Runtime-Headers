/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(VSDevice *)device;
-(NSUserDefaults *)userDefaults;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(NSUndoManager *)undoManager;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)setDevice:(VSDevice *)arg1 ;
-(id)metricUserID;
-(id)metricUserIDLastGenerated;
-(void)setMetricUserID:(id)arg1 ;
-(void)_updateValue:(id)arg1 forKey:(id)arg2 ;
-(void)_updateShouldSkipSetupWithNumber:(id)arg1 ;
-(NSUserDefaults *)globalUserDefaults;
-(NSURL *)overridingAppBootURL;
-(BOOL)shouldDisableRequestTimeouts;
-(BOOL)shouldAlwaysAllowRemoteInspection;
-(BOOL)shouldSkipSetup;
-(void)noteShouldSkipSetup;
-(void)removeSkipSetupPreset;
-(long long)cachedAvailabilityStatus;
-(void)setCachedAvailabilityStatus:(long long)arg1 ;
-(long long)cachedDeveloperProviderStatus;
-(void)setCachedDeveloperProviderStatus:(long long)arg1 ;
-(long long)cachedStoreProviderStatus;
-(void)setCachedStoreProviderStatus:(long long)arg1 ;
-(BOOL)hasSentWelcomeMessage;
-(void)noteDidSendWelcomeMessage;
-(BOOL)hasChosenDesiredApp;
-(void)noteDesiredApp:(id)arg1 ;
-(BOOL)isInSTBMode;
-(BOOL)shouldIgnoreExtendedValidation;
-(BOOL)allowInsecureAuthContext;
-(void)noteIsInSTBMode:(BOOL)arg1 ;
-(BOOL)setTopBoxInfoIsSetTopBoxOverride;
-(id)setTopBoxInfoProviderIdOverride;
-(id)setTopBoxInfoProviderDisplayNameOverride;
-(id)setTopBoxInfoAppAdamIdOverride;
-(id)setTopBoxInfoBundleIdentifierOverride;
-(void)setIgnoreSetTopBoxProfile:(BOOL)arg1 ;
-(BOOL)ignoreSetTopBoxProfile;
-(void)setGlobalUserDefaults:(NSUserDefaults *)arg1 ;
@end

