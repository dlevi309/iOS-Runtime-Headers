/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSObject, NSDictionary, NSArray, NSString, _ATXAppLaunchLocation, _ATXAppDailyDose, _ATXRecentInstallCache, _ATXAppLaunchMonitor, APRAppIntentMonitor, _ATXAppInstallMonitor, ATXAppLaunchLogger, ATXBBNotificationManager, ATXMagicalMomentsUpdateMonitor, ATXHeroAppPredictions, ATXMagicalMomentsNowPlayingUpdateMonitor, ATXAmbientLightMonitor, NSUserDefaults, ATXAppPredictionBlacklist, ATXActionPredictionBlacklist, ATXMediaApplications, _ATXAppInfoManager, ATXAppLaunchMicroLocation;

@interface _ATXAppPredictor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _dayZeroParameters;
	NSDictionary* _dayZeroIntentParameters;
	NSDictionary* _sasBundleScoreBoost;
	NSArray* _interpreters;
	NSArray* _finalSubScores;
	NSArray* _abGroupIdentifiers;
	NSString* _dayZeroABGroupIdentifier;
	NSString* _dayZeroIntentABGroupIdentifier;
	_ATXAppLaunchLocation* _appLaunchLocation;
	_ATXAppDailyDose* _appDailyDose;
	_ATXRecentInstallCache* _recentInstallCache;
	_ATXAppLaunchMonitor* _appLaunchMonitor;
	APRAppIntentMonitor* _appIntentMonitor;
	_ATXAppInstallMonitor* _appInstallMonitor;
	ATXAppLaunchLogger* _appLaunchLogger;
	ATXBBNotificationManager* _notificationManager;
	ATXMagicalMomentsUpdateMonitor* _mmPredictionMonitor;
	ATXHeroAppPredictions* _heroPredictionServer;
	ATXMagicalMomentsNowPlayingUpdateMonitor* _mmNowPlayingPredictionMonitor;
	ATXAmbientLightMonitor* _ambientLightMonitor;
	AB _appLaunchAndInstallMonitorsInitialized;
	NSUserDefaults* _userDefaults;
	ATXAppPredictionBlacklist* _appPredictionBlacklist;
	ATXActionPredictionBlacklist* _actionPredictionBlacklist;
	ATXMediaApplications* _mediaApps;
	_ATXAppInfoManager* _appInfoManager;
	ATXAppLaunchMicroLocation* _microLocation;

}

@property (nonatomic,retain) NSArray * abGroupIdentifiers;              //@synthesize abGroupIdentifiers=_abGroupIdentifiers - In the implementation block
+(id)sharedInstance;
+(void)removeOldLaunchInfoFrom:(id)arg1 appLaunchHistogram:(id)arg2 spotlightLaunchHistogram:(id)arg3 unlockTimeHistogram:(id)arg4 dayOfWeekHistogram:(id)arg5 airplaneModeLaunchHistogram:(id)arg6 trendingLaunchHistogram:(id)arg7 wifiLaunchHistogram:(id)arg8 coreMotionLaunchHistogram:(id)arg9 timeAndDayHistogram:(id)arg10 appCoarseTimePOWLocationLaunchesHistogram:(id)arg11 appSpecificTimeDOWLocationLaunchesHistogram:(id)arg12 appCoarseTimePOWLocationConfirmsHistogram:(id)arg13 appSpecificTimeDOWLocationConfirmsHistogram:(id)arg14 appCoarseTimePOWLocationRejectsHistogram:(id)arg15 appSpecificTimeDOWLocationRejectsHistogram:(id)arg16 appSpecificGeoHashHistogram:(id)arg17 appCoarseGeoHashHistogram:(id)arg18 appZoom7GeoHashHistogram:(id)arg19 appLaunchesTwoHourTimeInterval:(id)arg20 appConfirmsTwoHourTimeInterval:(id)arg21 appRejectsTwoHourTimeInterval:(id)arg22 appConfirmsDayOfWeek:(id)arg23 appRejectsDayOfWeek:(id)arg24 appConfirmsCoarseGeoHash:(id)arg25 appRejectsCoarseGeoHash:(id)arg26 appConfirmsSpecificGeoHash:(id)arg27 appRejectsSpecificGeoHash:(id)arg28 appIntentLaunchHistogram:(id)arg29 appIntentUnlockTimeHistogram:(id)arg30 appIntentDayOfWeekHistogram:(id)arg31 appIntentAirplaneModeLaunchHistogram:(id)arg32 appIntentTrendingLaunchHistogram:(id)arg33 appIntentWifiHistogram:(id)arg34 appIntentCoreMotionLaunchHistogram:(id)arg35 appForAllIntentsLaunchHistogram:(id)arg36 appForAllIntentsUnlockTimeHistogram:(id)arg37 appForAllIntentsDayOfWeekHistogram:(id)arg38 appForAllIntentsAirplaneModeLaunchHistogram:(id)arg39 appForAllIntentsTrendingLaunchHistogram:(id)arg40 appForAllIntentsWifiHistogram:(id)arg41 appForAllIntentsCoreMotionLaunchHistogram:(id)arg42 launchSequenceManager:(id)arg43 bundleIdTable:(id)arg44 aprExplicitConfirmsHistogram:(id)arg45 aprExplicitRejectsHistogram:(id)arg46 aprImplicitConfirmsHistogram:(id)arg47 aprImplicitRejectsHistogram:(id)arg48 aprSiriKitIntentsHistogram:(id)arg49 aprNonSiriKitIntentsHistogram:(id)arg50 actionConfirmsHistogram:(id)arg51 actionRejectsHistogram:(id)arg52 heuristicConfirmsHistogram:(id)arg53 heuristicRejectsHistogram:(id)arg54 appIntentPartOfWeekHistogram:(id)arg55 ;
+(double)time:(double)arg1 toAccuracyInSeconds:(double)arg2 ;
+(float)_computeL2DistanceFromBundleId:(id)arg1 to:(const float*)arg2 app2vecMapping:(id)arg3 ;
+(BOOL)_predictNextAppLaunchEmbedding:(id)arg1 into:(float*)arg2 ;
+(id)recreateSharedInstanceWithCurrentABGroup;
+(id)getParseTreeForConsumerSubType:(unsigned char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initInternal;
-(void)train;
-(void)updateLaunchHistoryFromDuet;
-(id)_appPredictionsSeedAppsGivenSBAppList:(id)arg1 consumerSubType:(unsigned char)arg2 ;
-(id)_phoneAppsForWatchBundleIds:(id)arg1 ;
-(id)_appsToPredictWithConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 allSBApps:(id)arg4 appPredictionBlacklist:(id)arg5 digitalHealthBlacklist:(id)arg6 ;
-(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)_evalFeaturesForApps:(id)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 scoreLogger:(id)arg4 ;
-(void)setDistributionBasedScoreInputsForTimeAndDay:(ATXPredictionItem*)arg1 forBundleId:(id)arg2 withTimeOfDayHistogram:(id)arg3 withDayOfWeekHistogram:(id)arg4 ;
-(void)setDistributionBasedScoreInputsForItem:(ATXPredictionItem*)arg1 withGeoHashResolution:(unsigned long long)arg2 withGeoHashLaunchCounts:(id)arg3 ;
-(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)_evalFeaturesForAppForAllIntents:(id)arg1 scoreLogger:(id)arg2 ;
-(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)_evalFeaturesForAppIntents:(id)arg1 scoreLogger:(id)arg2 ;
-(unordered_map<NSString *, const ATXPredictionItem *, ATXNSStringHash, ATXNSStringEqual, std::__1::allocator<std::__1::pair<NSString *const, const ATXPredictionItem *> > >*)_createMapOfKeyToItemForPredictionItems:(const vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg1 ;
-(void)_copyValidScoreInputsFromPredictionItem:(const ATXPredictionItem*)arg1 toPredictionItem:(ATXPredictionItem*)arg2 ;
-(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)_evalFeaturesForActions:(id)arg1 scoreLogger:(id)arg2 ;
-(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)_getPredictionForItems:(id)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 scoreLogger:(id)arg4 ;
-(void)setupScoreLogger:(id)arg1 forConsumerSubType:(unsigned char)arg2 ;
-(double)predictionScoreForItem:(const ATXPredictionItem*)arg1 consumerSubType:(unsigned char)arg2 ;
-(double)_predictionScoreForItem:(const ATXPredictionItem*)arg1 consumerSubType:(unsigned char)arg2 scoreLogger:(id)arg3 intentType:(id)arg4 ;
-(id)subscoresForInputScores:(id)arg1 consumerSubType:(unsigned char)arg2 intentType:(id)arg3 ;
-(void)_updateFromAsset;
-(void)_updateFromZeroDayAsset;
-(void)_addZeroDayAppIntentKeysToBundleIdTable:(id)arg1 ;
-(void)iterZeroDayAppIntentKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_updateFromZeroDayIntentAsset;
-(void)_updateFromAppPreferencePredictorAsset;
-(BOOL)_initAppLaunchAndInstallMonitors;
-(void)_setActionBlacklist:(id)arg1 ;
-(id)appLaunchMonitor;
-(id)appIntentMonitor;
-(void)resetRecentInstallCache;
-(id)appInstallMonitor;
-(id)predictWithLimit:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 candidateBundleIdentifiers:(id)arg4 candidateActiontypes:(id)arg5 scoreLogger:(id)arg6 ;
-(id)predictWithLimit:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 candidateBundleIdentifiers:(id)arg4 candidateActiontypes:(id)arg5 scoreLogger:(id)arg6 predictionItemsToKeep:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg7 ;
-(id)getPredictionModelDetailsForConsumerSubType:(unsigned char)arg1 ;
-(id)getABGroups;
-(void)receiveFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 atxResponse:(id)arg3 aprResponse:(id)arg4 engagementType:(unsigned long long)arg5 engagedBundleId:(id)arg6 bundleIdsShown:(id)arg7 ;
-(NSArray *)abGroupIdentifiers;
-(void)setAbGroupIdentifiers:(NSArray *)arg1 ;
@end

