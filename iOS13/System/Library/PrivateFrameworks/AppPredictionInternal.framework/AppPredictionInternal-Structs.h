/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSString, NSMutableDictionary, NSMutableIndexSet, NSObject<NSCopying>;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned maxEntityScore : 1;
	unsigned sumCount : 1;
	unsigned titleMatch : 1;
	unsigned uniqueCount : 1;
} SCD_Struct_AT1;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW2;

typedef struct {
	unsigned actionType : 1;
	unsigned noMatchCount : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned anchor : 1;
} SCD_Struct_AT4;

typedef struct {
	double field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_AT5;

typedef struct {
	unsigned timestamp : 1;
	unsigned event : 1;
	unsigned pos : 1;
	unsigned isOffscreen : 1;
	unsigned topOfPile : 1;
} SCD_Struct_AT6;

typedef struct {
	unsigned score : 1;
	unsigned timestamp : 1;
	unsigned engagedApp : 1;
} SCD_Struct_AW7;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct {
	unsigned timestamp : 1;
	unsigned consumerSubType : 1;
	unsigned coreMotionCurrentMotionLaunches : 1;
	unsigned coreMotionLaunches : 1;
	unsigned currentLOIType : 1;
	unsigned dayOfWeek : 1;
	unsigned engagedApp : 1;
	unsigned locationDistanceFromGym : 1;
	unsigned locationDistanceFromHome : 1;
	unsigned locationDistanceFromSchool : 1;
	unsigned locationDistanceFromWork : 1;
	unsigned outcome : 1;
	unsigned predictionCacheAge : 1;
	unsigned sessionLogVersion : 1;
	unsigned timeOfDayInterval : 1;
	unsigned totalAirplaneModeLaunches : 1;
	unsigned totalCurrentDayOfWeekLaunches : 1;
	unsigned totalDayOfWeekLaunches : 1;
	unsigned totalLaunchSequences : 1;
	unsigned totalLaunches : 1;
	unsigned totalSSIDLaunches : 1;
	unsigned totalSpotlightLaunches : 1;
	unsigned totalSpotlightTimeOfDayLaunches : 1;
	unsigned totalTimeOfDayLaunches : 1;
	unsigned totalTrendingLaunches : 1;
	unsigned totalWifiLaunches : 1;
	unsigned inAirplaneMode : 1;
	unsigned isInternalBuild : 1;
} SCD_Struct_AW9;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct {
	unsigned appPopularity : 1;
	unsigned cleared : 1;
	unsigned defaultActions : 1;
	unsigned engaged : 1;
	unsigned ignored : 1;
	unsigned orbs : 1;
	unsigned received : 1;
	unsigned response : 1;
	unsigned stype : 1;
	unsigned suppActions : 1;
	unsigned tapCoalesce : 1;
	unsigned totalLaunches : 1;
} SCD_Struct_AT12;

typedef struct {
	unsigned timestamp : 1;
	unsigned aPRExplicitConfirmRatio : 1;
	unsigned aPRExplicitRejectRatio : 1;
	unsigned aPRImplicitConfirmRatio : 1;
	unsigned aPRImplicitRejectRatio : 1;
	unsigned aPRNonSiriKitIntentsRatio : 1;
	unsigned aPRSiriKitIntentsRatio : 1;
	unsigned aPRTotalExplicitConfirms : 1;
	unsigned aPRTotalExplicitRejects : 1;
	unsigned aPRTotalImplicitConfirms : 1;
	unsigned aPRTotalImplicitRejects : 1;
	unsigned aPRTotalNonSiriKitIntents : 1;
	unsigned aPRTotalSiriKitIntents : 1;
	unsigned actionCoarseTimeOfDayPopularity : 1;
	unsigned actionConfirmsAtCoarseGeoHashForAction : 1;
	unsigned actionConfirmsAtCoarseGeoHashForActionInContext : 1;
	unsigned actionConfirmsAtCoarseGeoHashInContext : 1;
	unsigned actionConfirmsAtDayOfWeekForAction : 1;
	unsigned actionConfirmsAtDayOfWeekForActionInContext : 1;
	unsigned actionConfirmsAtDayOfWeekInContext : 1;
	unsigned actionConfirmsAtSpecificGeoHashForAction : 1;
	unsigned actionConfirmsAtSpecificGeoHashForActionInContext : 1;
	unsigned actionConfirmsAtSpecificGeoHashInContext : 1;
	unsigned actionConfirmsAtTimeOfDayForAction : 1;
	unsigned actionConfirmsAtTimeOfDayForActionInContext : 1;
	unsigned actionConfirmsAtTimeOfDayInContext : 1;
	unsigned actionConfirmsCoarseTimePowLocationForAction : 1;
	unsigned actionConfirmsCoarseTimePowLocationForActionInContext : 1;
	unsigned actionConfirmsCoarseTimePowLocationForAllActionsAndContexts : 1;
	unsigned actionConfirmsCoarseTimePowLocationInContext : 1;
	unsigned actionConfirmsSpecificTimeDowLocationForAction : 1;
	unsigned actionConfirmsSpecificTimeDowLocationForActionInContext : 1;
	unsigned actionConfirmsSpecificTimeDowLocationForAllActionsAndContexts : 1;
	unsigned actionConfirmsSpecificTimeDowLocationInContext : 1;
	unsigned actionCoreMotionPopularity : 1;
	unsigned actionCoreMotionType : 1;
	unsigned actionDayAndLocationPopularity : 1;
	unsigned actionDayAndPreviousLocationPopularity : 1;
	unsigned actionDayOfWeekPopularity : 1;
	unsigned actionEntropyForCoarseGeoHash : 1;
	unsigned actionEntropyForDayOfWeek : 1;
	unsigned actionEntropyForSpecificGeoHash : 1;
	unsigned actionEntropyForTimeOfDay : 1;
	unsigned actionFeedbackMeanNumberOfSpotlightConfirmsPerDay : 1;
	unsigned actionFeedbackMeanNumberOfSpotlightLaunchesPerDay : 1;
	unsigned actionFeedbackTotalConfirmsInLockscreen : 1;
	unsigned actionFeedbackTotalConfirmsInSpotlight : 1;
	unsigned actionFeedbackTotalConfirmsTodayInLockscreen : 1;
	unsigned actionFeedbackTotalRejectsInLockscreen : 1;
	unsigned actionFeedbackTotalRejectsInSpotlight : 1;
	unsigned actionFeedbackTotalRejectsTodayInLockscreen : 1;
	unsigned actionHeuristicConfirmEvents : 1;
	unsigned actionHeuristicRejectEvents : 1;
	unsigned actionIsBackgroundExecutable : 1;
	unsigned actionIsFutureMedia : 1;
	unsigned actionKeyCategory : 1;
	unsigned actionLOIType : 1;
	unsigned actionLaunchPopularity : 1;
	unsigned actionLocationPopularity : 1;
	unsigned actionNumberOfCoarseGeohashesForAction : 1;
	unsigned actionNumberOfSpecificGeohashesForAction : 1;
	unsigned actionPartOfWeekAndLocationPopularity : 1;
	unsigned actionPartOfWeekAndTimePopularity : 1;
	unsigned actionPartOfWeekPopularity : 1;
	unsigned actionPreviousLocationAndCoreMotionPopularity : 1;
	unsigned actionPreviousLocationAndLocationPopularity : 1;
	unsigned actionPreviousLocationPopularity : 1;
	unsigned actionRejectsAtCoarseGeoHashForAction : 1;
	unsigned actionRejectsAtCoarseGeoHashForActionInContext : 1;
	unsigned actionRejectsAtCoarseGeoHashInContext : 1;
	unsigned actionRejectsAtDayOfWeekForAction : 1;
	unsigned actionRejectsAtDayOfWeekForActionInContext : 1;
	unsigned actionRejectsAtDayOfWeekInContext : 1;
	unsigned actionRejectsAtSpecificGeoHashForAction : 1;
	unsigned actionRejectsAtSpecificGeoHashForActionInContext : 1;
	unsigned actionRejectsAtSpecificGeoHashInContext : 1;
	unsigned actionRejectsAtTimeOfDayForAction : 1;
	unsigned actionRejectsAtTimeOfDayForActionInContext : 1;
	unsigned actionRejectsAtTimeOfDayInContext : 1;
	unsigned actionRejectsCoarseTimePowLocationForAction : 1;
	unsigned actionRejectsCoarseTimePowLocationForActionInContext : 1;
	unsigned actionRejectsCoarseTimePowLocationForAllActionsAndContexts : 1;
	unsigned actionRejectsCoarseTimePowLocationInContext : 1;
	unsigned actionRejectsSpecificTimeDowLocationForAction : 1;
	unsigned actionRejectsSpecificTimeDowLocationForActionInContext : 1;
	unsigned actionRejectsSpecificTimeDowLocationForAllActionsAndContexts : 1;
	unsigned actionRejectsSpecificTimeDowLocationInContext : 1;
	unsigned actionTimeAndDayAndLocationPopularity : 1;
	unsigned actionTimeAndDayPopularity : 1;
	unsigned actionTimeAndLocationPopularity : 1;
	unsigned actionTimeAndPreviousLocationPopularity : 1;
	unsigned actionTimeOfDayPopularity : 1;
	unsigned actionTimeOfDayWithEightHourWindowPopularity : 1;
	unsigned actionTimeOfDayWithHourWindowPopularity : 1;
	unsigned actionTimeOfDayWithThirtyMinuteWindowPopularity : 1;
	unsigned actionTotalConfirms : 1;
	unsigned actionTotalRejects : 1;
	unsigned actionsAtCoarseGeoHash0ForAction : 1;
	unsigned actionsAtCoarseGeoHash1ForAction : 1;
	unsigned actionsAtCoarseGeoHash2ForAction : 1;
	unsigned actionsAtCoarseGeoHash3ForAction : 1;
	unsigned actionsAtCoarseGeoHash4ForAction : 1;
	unsigned actionsAtCoarseGeoHash5ForAction : 1;
	unsigned actionsAtCoarseGeoHash6ForAction : 1;
	unsigned actionsAtCoarseGeoHash7ForAction : 1;
	unsigned actionsAtCoarseGeoHash8ForAction : 1;
	unsigned actionsAtCoarseGeoHash9ForAction : 1;
	unsigned actionsAtCoarseGeoHashForAction : 1;
	unsigned actionsAtCoarseGeoHashForActionInContext : 1;
	unsigned actionsAtCoarseGeoHashInContext : 1;
	unsigned actionsAtDayOfWeekForAction : 1;
	unsigned actionsAtDayOfWeekForActionInContext : 1;
	unsigned actionsAtDayOfWeekInContext : 1;
	unsigned actionsAtSpecificGeoHash0ForAction : 1;
	unsigned actionsAtSpecificGeoHash10ForAction : 1;
	unsigned actionsAtSpecificGeoHash11ForAction : 1;
	unsigned actionsAtSpecificGeoHash12ForAction : 1;
	unsigned actionsAtSpecificGeoHash13ForAction : 1;
	unsigned actionsAtSpecificGeoHash14ForAction : 1;
	unsigned actionsAtSpecificGeoHash1ForAction : 1;
	unsigned actionsAtSpecificGeoHash2ForAction : 1;
	unsigned actionsAtSpecificGeoHash3ForAction : 1;
	unsigned actionsAtSpecificGeoHash4ForAction : 1;
	unsigned actionsAtSpecificGeoHash5ForAction : 1;
	unsigned actionsAtSpecificGeoHash6ForAction : 1;
	unsigned actionsAtSpecificGeoHash7ForAction : 1;
	unsigned actionsAtSpecificGeoHash8ForAction : 1;
	unsigned actionsAtSpecificGeoHash9ForAction : 1;
	unsigned actionsAtSpecificGeoHashForAction : 1;
	unsigned actionsAtSpecificGeoHashForActionInContext : 1;
	unsigned actionsAtSpecificGeoHashInContext : 1;
	unsigned actionsAtTimeOfDayForAction : 1;
	unsigned actionsAtTimeOfDayForActionInContext : 1;
	unsigned actionsAtTimeOfDayInContext : 1;
	unsigned actionsCoarseTimePowLocationForAction : 1;
	unsigned actionsCoarseTimePowLocationForActionInContext : 1;
	unsigned actionsCoarseTimePowLocationForAllActionsAndContexts : 1;
	unsigned actionsCoarseTimePowLocationInContext : 1;
	unsigned actionsInTimeBucket0ForAction : 1;
	unsigned actionsInTimeBucket10ForAction : 1;
	unsigned actionsInTimeBucket11ForAction : 1;
	unsigned actionsInTimeBucket12ForAction : 1;
	unsigned actionsInTimeBucket13ForAction : 1;
	unsigned actionsInTimeBucket14ForAction : 1;
	unsigned actionsInTimeBucket15ForAction : 1;
	unsigned actionsInTimeBucket16ForAction : 1;
	unsigned actionsInTimeBucket17ForAction : 1;
	unsigned actionsInTimeBucket18ForAction : 1;
	unsigned actionsInTimeBucket19ForAction : 1;
	unsigned actionsInTimeBucket1ForAction : 1;
	unsigned actionsInTimeBucket20ForAction : 1;
	unsigned actionsInTimeBucket21ForAction : 1;
	unsigned actionsInTimeBucket22ForAction : 1;
	unsigned actionsInTimeBucket23ForAction : 1;
	unsigned actionsInTimeBucket24ForAction : 1;
	unsigned actionsInTimeBucket2ForAction : 1;
	unsigned actionsInTimeBucket3ForAction : 1;
	unsigned actionsInTimeBucket4ForAction : 1;
	unsigned actionsInTimeBucket5ForAction : 1;
	unsigned actionsInTimeBucket6ForAction : 1;
	unsigned actionsInTimeBucket7ForAction : 1;
	unsigned actionsInTimeBucket8ForAction : 1;
	unsigned actionsInTimeBucket9ForAction : 1;
	unsigned actionsOnDayOfWeekFridayForAction : 1;
	unsigned actionsOnDayOfWeekMondayForAction : 1;
	unsigned actionsOnDayOfWeekSaturdayForAction : 1;
	unsigned actionsOnDayOfWeekSundayForAction : 1;
	unsigned actionsOnDayOfWeekThursdayForAction : 1;
	unsigned actionsOnDayOfWeekTuesdayForAction : 1;
	unsigned actionsOnDayOfWeekWednesdayForAction : 1;
	unsigned actionsSpecificTimeDowLocationForAction : 1;
	unsigned actionsSpecificTimeDowLocationForActionInContext : 1;
	unsigned actionsSpecificTimeDowLocationForAllActionsAndContexts : 1;
	unsigned actionsSpecificTimeDowLocationInContext : 1;
	unsigned airplaneModePopularity : 1;
	unsigned ambientLightTypeLaunchPopularity : 1;
	unsigned ambientLightTypePopularity : 1;
	unsigned app2VecClusterCount : 1;
	unsigned app2VecClusterDayOfWeekPopularity : 1;
	unsigned app2VecClusterLocationPopularity : 1;
	unsigned app2VecClusterSequencePopularity : 1;
	unsigned app2VecClusterTimeOfDayPopularity : 1;
	unsigned app2VecClusterTrendingPopularity : 1;
	unsigned appActionConfirmEvents : 1;
	unsigned appActionLogProbability : 1;
	unsigned appActionRejectEvents : 1;
	unsigned appActionScore : 1;
	unsigned appBlendedDayOfWeekPopularity : 1;
	unsigned appBlendedDayOfWeekSampledPopularity : 1;
	unsigned appBlendedLOITypePopularity : 1;
	unsigned appBlendedLOITypeSampledPopularity : 1;
	unsigned appBlendedLastAppPopularity : 1;
	unsigned appBlendedLastAppSampledPopularity : 1;
	unsigned appBlendedTimeOfDayPopularity : 1;
	unsigned appBlendedTimeOfDaySampledPopularity : 1;
	unsigned appCategory : 1;
	unsigned appCoarseTimeAssociationScore : 1;
	unsigned appConfirmsAtCoarseGeoHashForApp : 1;
	unsigned appConfirmsAtCoarseGeoHashForAppInContext : 1;
	unsigned appConfirmsAtCoarseGeoHashInContext : 1;
	unsigned appConfirmsAtDayOfWeekForApp : 1;
	unsigned appConfirmsAtDayOfWeekForAppInContext : 1;
	unsigned appConfirmsAtDayOfWeekInContext : 1;
	unsigned appConfirmsAtSpecificGeoHashForApp : 1;
	unsigned appConfirmsAtSpecificGeoHashForAppInContext : 1;
	unsigned appConfirmsAtSpecificGeoHashInContext : 1;
	unsigned appConfirmsCoarseTimePowLocationForAllAppsAndContexts : 1;
	unsigned appConfirmsCoarseTimePowLocationForApp : 1;
	unsigned appConfirmsCoarseTimePowLocationForAppInContext : 1;
	unsigned appConfirmsCoarseTimePowLocationInContext : 1;
	unsigned appConfirmsForAllAppsAndContextsDecayedAtCoarseContextRate : 1;
	unsigned appConfirmsForAllAppsAndContextsDecayedAtSpecificContextRate : 1;
	unsigned appConfirmsInTwoHourTimeBucketForApp : 1;
	unsigned appConfirmsInTwoHourTimeBucketForAppInContext : 1;
	unsigned appConfirmsInTwoHourTimeBucketInContext : 1;
	unsigned appConfirmsSpecificTimeDowLocationForAllAppsAndContexts : 1;
	unsigned appConfirmsSpecificTimeDowLocationForApp : 1;
	unsigned appConfirmsSpecificTimeDowLocationForAppInContext : 1;
	unsigned appConfirmsSpecificTimeDowLocationInContext : 1;
	unsigned appCount : 1;
	unsigned appDailyDose : 1;
	unsigned appDailyDoseRemaining : 1;
	unsigned appDailyDoseSmoothedError : 1;
	unsigned appDayOfWeekLaunches : 1;
	unsigned appEntropyForCoarseGeoHash : 1;
	unsigned appEntropyForSpecificGeoHash : 1;
	unsigned appEntropyForTimeBuckets : 1;
	unsigned appEntropyForZoom7GeoHash : 1;
	unsigned appForAllActionsConfirmEvents : 1;
	unsigned appForAllActionsRejectEvents : 1;
	unsigned appForAllIntentsAirplaneModePopularity : 1;
	unsigned appForAllIntentsCoarseTimeOfDayPopularity : 1;
	unsigned appForAllIntentsCoreMotionPopularity : 1;
	unsigned appForAllIntentsCount : 1;
	unsigned appForAllIntentsDayOfWeekPopularity : 1;
	unsigned appForAllIntentsDistanceDayOfWeekToLaunchPopularity : 1;
	unsigned appForAllIntentsDistanceSSIDToLaunchPopularity : 1;
	unsigned appForAllIntentsDistanceTrendingToLaunchPopularity : 1;
	unsigned appForAllIntentsEntropyDayOfWeekPopularity : 1;
	unsigned appForAllIntentsEntropyDayOfWeekPopularityByApp : 1;
	unsigned appForAllIntentsEntropyDayOfWeekPopularityByDay : 1;
	unsigned appForAllIntentsEntropyLaunchPopularity : 1;
	unsigned appForAllIntentsEntropySSIDPopularity : 1;
	unsigned appForAllIntentsEntropySSIDPopularityByApp : 1;
	unsigned appForAllIntentsEntropySSIDPopularityBySSID : 1;
	unsigned appForAllIntentsEntropyTrendingPopularity : 1;
	unsigned appForAllIntentsLaunchDayOfWeekPopularity : 1;
	unsigned appForAllIntentsLaunchLocationPopularity : 1;
	unsigned appForAllIntentsLaunchPopularity : 1;
	unsigned appForAllIntentsLaunchTimePopularity : 1;
	unsigned appForAllIntentsSSIDPopularity : 1;
	unsigned appForAllIntentsTimeOfDayPopularity : 1;
	unsigned appForAllIntentsTotalNumberOfAirplaneModeLaunches : 1;
	unsigned appForAllIntentsTotalNumberOfCoreMotionLaunches : 1;
	unsigned appForAllIntentsTotalNumberOfLaunches : 1;
	unsigned appForAllIntentsTotalNumberOfSSIDLaunches : 1;
	unsigned appForAllIntentsTotalNumberOfTrendingLaunches : 1;
	unsigned appForAllIntentsTrendingPopularity : 1;
	unsigned appForAllIntentsUnlockTime : 1;
	unsigned appGeoAssociationScoreAtZoom13 : 1;
	unsigned appGeoAssociationScoreAtZoom16 : 1;
	unsigned appGeoAssociationScoreAtZoom7 : 1;
	unsigned appGlobalScoreGivenTimeDayAndLocation : 1;
	unsigned appGlobalScoreGivenTimeDayLocationAndLastApp : 1;
	unsigned appInFolder : 1;
	unsigned appIntentAirplaneModePopularity : 1;
	unsigned appIntentAmbientLightTypeLaunchPopularity : 1;
	unsigned appIntentAmbientLightTypePopularity : 1;
	unsigned appIntentAppLaunchSequencePopularity : 1;
	unsigned appIntentAverageSecondsBetweenAppActions : 1;
	unsigned appIntentCoarseTimeOfDayPopularity : 1;
	unsigned appIntentCoreMotionPopularity : 1;
	unsigned appIntentCount : 1;
	unsigned appIntentDayOfWeekPopularity : 1;
	unsigned appIntentDayZeroPoints : 1;
	unsigned appIntentDistanceDayOfWeekToLaunchPopularity : 1;
	unsigned appIntentDistanceSSIDToLaunchPopularity : 1;
	unsigned appIntentDistanceTrendingToLaunchPopularity : 1;
	unsigned appIntentEntropyDayOfWeekPopularity : 1;
	unsigned appIntentEntropyDayOfWeekPopularityByAppIntent : 1;
	unsigned appIntentEntropyDayOfWeekPopularityByDay : 1;
	unsigned appIntentEntropyLaunchPopularity : 1;
	unsigned appIntentEntropySSIDPopularity : 1;
	unsigned appIntentEntropySSIDPopularityByAppIntent : 1;
	unsigned appIntentEntropySSIDPopularityBySSID : 1;
	unsigned appIntentEntropyTrendingPopularity : 1;
	unsigned appIntentLastLaunchAge : 1;
	unsigned appIntentLaunchDayOfWeekPopularity : 1;
	unsigned appIntentLaunchLocationPopularity : 1;
	unsigned appIntentLaunchMicroLocationPopularity : 1;
	unsigned appIntentLaunchPartOfWeekPopularity : 1;
	unsigned appIntentLaunchPopularity : 1;
	unsigned appIntentLaunchSequencePopularity : 1;
	unsigned appIntentLaunchTimePopularity : 1;
	unsigned appIntentMedianSecondsBetweenAppActions : 1;
	unsigned appIntentPartOfWeekPopularity : 1;
	unsigned appIntentSSIDPopularity : 1;
	unsigned appIntentSlotCountForAllAppActions : 1;
	unsigned appIntentStaticPoints : 1;
	unsigned appIntentTimeOfDayPopularity : 1;
	unsigned appIntentTotalNumberOfAirplaneModeLaunches : 1;
	unsigned appIntentTotalNumberOfCoreMotionLaunches : 1;
	unsigned appIntentTotalNumberOfLaunches : 1;
	unsigned appIntentTotalNumberOfSSIDLaunches : 1;
	unsigned appIntentTotalNumberOfTrendingLaunches : 1;
	unsigned appIntentTrendingPopularity : 1;
	unsigned appIntentUnlockTime : 1;
	unsigned appIntentValueScore : 1;
	unsigned appLOITypeAssociationScore : 1;
	unsigned appLOITypeLaunches : 1;
	unsigned appLastAppLaunches : 1;
	unsigned appLaunchMicroLocationPopularity : 1;
	unsigned appLaunchesAtCoarseGeoHash0ForApp : 1;
	unsigned appLaunchesAtCoarseGeoHash1ForApp : 1;
	unsigned appLaunchesAtCoarseGeoHash2ForApp : 1;
	unsigned appLaunchesAtCoarseGeoHash3ForApp : 1;
	unsigned appLaunchesAtCoarseGeoHash4ForApp : 1;
	unsigned appLaunchesAtCoarseGeoHash5ForApp : 1;
	unsigned appLaunchesAtCoarseGeoHash6ForApp : 1;
	unsigned appLaunchesAtCoarseGeoHash7ForApp : 1;
	unsigned appLaunchesAtCoarseGeoHash8ForApp : 1;
	unsigned appLaunchesAtCoarseGeoHash9ForApp : 1;
	unsigned appLaunchesAtCoarseGeoHashForApp : 1;
	unsigned appLaunchesAtCoarseGeoHashForAppInContext : 1;
	unsigned appLaunchesAtCoarseGeoHashInContext : 1;
	unsigned appLaunchesAtDayOfWeekForApp : 1;
	unsigned appLaunchesAtDayOfWeekInContext : 1;
	unsigned appLaunchesAtSSIDForApp : 1;
	unsigned appLaunchesAtSSIDForAppInContext : 1;
	unsigned appLaunchesAtSpecificGeoHash0ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash10ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash11ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash12ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash13ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash14ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash1ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash2ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash3ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash4ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash5ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash6ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash7ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash8ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHash9ForApp : 1;
	unsigned appLaunchesAtSpecificGeoHashForApp : 1;
	unsigned appLaunchesAtSpecificGeoHashForAppInContext : 1;
	unsigned appLaunchesAtSpecificGeoHashInContext : 1;
	unsigned appLaunchesAtTimeAndDayForApp : 1;
	unsigned appLaunchesAtTimeAndDayForAppInContext : 1;
	unsigned appLaunchesAtTimeAndDayInContext : 1;
	unsigned appLaunchesAtZoom7GeoHash0ForApp : 1;
	unsigned appLaunchesAtZoom7GeoHash1ForApp : 1;
	unsigned appLaunchesAtZoom7GeoHash2ForApp : 1;
	unsigned appLaunchesAtZoom7GeoHash3ForApp : 1;
	unsigned appLaunchesAtZoom7GeoHash4ForApp : 1;
	unsigned appLaunchesAtZoom7GeoHash5ForApp : 1;
	unsigned appLaunchesAtZoom7GeoHash6ForApp : 1;
	unsigned appLaunchesAtZoom7GeoHash7ForApp : 1;
	unsigned appLaunchesAtZoom7GeoHash8ForApp : 1;
	unsigned appLaunchesAtZoom7GeoHash9ForApp : 1;
	unsigned appLaunchesAtZoom7GeoHashForApp : 1;
	unsigned appLaunchesAtZoom7GeoHashForAppInContext : 1;
	unsigned appLaunchesAtZoom7GeoHashInContext : 1;
	unsigned appLaunchesCoarseTimePowLocationForAllAppsAndContexts : 1;
	unsigned appLaunchesCoarseTimePowLocationForApp : 1;
	unsigned appLaunchesCoarseTimePowLocationForAppInContext : 1;
	unsigned appLaunchesCoarseTimePowLocationInContext : 1;
	unsigned appLaunchesForAllAppsAndContextsDecayedAtCoarseContextRate : 1;
	unsigned appLaunchesForAllAppsAndContextsDecayedAtSpecificContextRate : 1;
	unsigned appLaunchesForCoreMotionForAppInContext : 1;
	unsigned appLaunchesInAirplaneModeForAppInContext : 1;
	unsigned appLaunchesInTimeBucket0ForApp : 1;
	unsigned appLaunchesInTimeBucket10ForApp : 1;
	unsigned appLaunchesInTimeBucket11ForApp : 1;
	unsigned appLaunchesInTimeBucket12ForApp : 1;
	unsigned appLaunchesInTimeBucket13ForApp : 1;
	unsigned appLaunchesInTimeBucket14ForApp : 1;
	unsigned appLaunchesInTimeBucket15ForApp : 1;
	unsigned appLaunchesInTimeBucket16ForApp : 1;
	unsigned appLaunchesInTimeBucket17ForApp : 1;
	unsigned appLaunchesInTimeBucket18ForApp : 1;
	unsigned appLaunchesInTimeBucket19ForApp : 1;
	unsigned appLaunchesInTimeBucket1ForApp : 1;
	unsigned appLaunchesInTimeBucket20ForApp : 1;
	unsigned appLaunchesInTimeBucket21ForApp : 1;
	unsigned appLaunchesInTimeBucket22ForApp : 1;
	unsigned appLaunchesInTimeBucket23ForApp : 1;
	unsigned appLaunchesInTimeBucket24ForApp : 1;
	unsigned appLaunchesInTimeBucket2ForApp : 1;
	unsigned appLaunchesInTimeBucket3ForApp : 1;
	unsigned appLaunchesInTimeBucket4ForApp : 1;
	unsigned appLaunchesInTimeBucket5ForApp : 1;
	unsigned appLaunchesInTimeBucket6ForApp : 1;
	unsigned appLaunchesInTimeBucket7ForApp : 1;
	unsigned appLaunchesInTimeBucket8ForApp : 1;
	unsigned appLaunchesInTimeBucket9ForApp : 1;
	unsigned appLaunchesInTwoHourTimeBucketForApp : 1;
	unsigned appLaunchesInTwoHourTimeBucketForAppInContext : 1;
	unsigned appLaunchesInTwoHourTimeBucketInContext : 1;
	unsigned appLaunchesOnDayOfWeekFridayForApp : 1;
	unsigned appLaunchesOnDayOfWeekMondayForApp : 1;
	unsigned appLaunchesOnDayOfWeekSaturdayForApp : 1;
	unsigned appLaunchesOnDayOfWeekSundayForApp : 1;
	unsigned appLaunchesOnDayOfWeekThursdayForApp : 1;
	unsigned appLaunchesOnDayOfWeekTuesdayForApp : 1;
	unsigned appLaunchesOnDayOfWeekWednesdayForApp : 1;
	unsigned appLaunchesSpecificTimeDowLocationForAllAppsAndContexts : 1;
	unsigned appLaunchesSpecificTimeDowLocationForApp : 1;
	unsigned appLaunchesSpecificTimeDowLocationForAppInContext : 1;
	unsigned appLaunchesSpecificTimeDowLocationInContext : 1;
	unsigned appNumberOfCoarseGeohashesForApp : 1;
	unsigned appNumberOfSpecificGeohashesForApp : 1;
	unsigned appNumberOfZoom7GeohashesForApp : 1;
	unsigned appPartOfWeekAssociationScore : 1;
	unsigned appPopularityGivenTimeAndDayOfWeek : 1;
	unsigned appPopularityOfTimeAndDayOfWeekGivenApp : 1;
	unsigned appPreferenceBundleBoost : 1;
	unsigned appRejectsAtCoarseGeoHashForApp : 1;
	unsigned appRejectsAtCoarseGeoHashForAppInContext : 1;
	unsigned appRejectsAtCoarseGeoHashInContext : 1;
	unsigned appRejectsAtDayOfWeekForApp : 1;
	unsigned appRejectsAtDayOfWeekForAppInContext : 1;
	unsigned appRejectsAtDayOfWeekInContext : 1;
	unsigned appRejectsAtSpecificGeoHashForApp : 1;
	unsigned appRejectsAtSpecificGeoHashForAppInContext : 1;
	unsigned appRejectsAtSpecificGeoHashInContext : 1;
	unsigned appRejectsCoarseTimePowLocationForAllAppsAndContexts : 1;
	unsigned appRejectsCoarseTimePowLocationForApp : 1;
	unsigned appRejectsCoarseTimePowLocationForAppInContext : 1;
	unsigned appRejectsCoarseTimePowLocationInContext : 1;
	unsigned appRejectsForAllAppsAndContextsDecayedAtCoarseContextRate : 1;
	unsigned appRejectsForAllAppsAndContextsDecayedAtSpecificContextRate : 1;
	unsigned appRejectsInTwoHourTimeBucketForApp : 1;
	unsigned appRejectsInTwoHourTimeBucketForAppInContext : 1;
	unsigned appRejectsInTwoHourTimeBucketInContext : 1;
	unsigned appRejectsSpecificTimeDowLocationForAllAppsAndContexts : 1;
	unsigned appRejectsSpecificTimeDowLocationForApp : 1;
	unsigned appRejectsSpecificTimeDowLocationForAppInContext : 1;
	unsigned appRejectsSpecificTimeDowLocationInContext : 1;
	unsigned appTimeAndDayOfWeekPopularity : 1;
	unsigned appTimeOfDayLaunches : 1;
	unsigned appTotalNumberOfTimeAndDayOfWeekLaunches : 1;
	unsigned averageSecondsBetweenLaunches : 1;
	unsigned coarseTimeOfDayPopularity : 1;
	unsigned coreMotionPopularity : 1;
	unsigned currentDose : 1;
	unsigned currentTimeBucketFromZeroToTwentyFour : 1;
	unsigned dayOfWeekBucket : 1;
	unsigned dayOfWeekPopularity : 1;
	unsigned dayZeroPoints : 1;
	unsigned distanceDayOfWeekToLaunchPopularity : 1;
	unsigned distanceSSIDToLaunchPopularity : 1;
	unsigned distanceToExplicitLaunchPrediction : 1;
	unsigned distanceTrendingToLaunchPopularity : 1;
	unsigned entropyDayOfWeekPopularity : 1;
	unsigned entropyDayOfWeekPopularityByApp : 1;
	unsigned entropyDayOfWeekPopularityByDay : 1;
	unsigned entropyLaunchPopularity : 1;
	unsigned entropySSIDPopularity : 1;
	unsigned entropySSIDPopularityByApp : 1;
	unsigned entropySSIDPopularityBySSID : 1;
	unsigned entropyTrendingPopularity : 1;
	unsigned feedback : 1;
	unsigned feedbackConfirms : 1;
	unsigned feedbackRejects : 1;
	unsigned folderPage : 1;
	unsigned genreAirplaneModePopularity : 1;
	unsigned genreDailyDoseRemaining : 1;
	unsigned genreDayOfWeekPopularity : 1;
	unsigned genreLocationPopularity : 1;
	unsigned genreSSIDPopularity : 1;
	unsigned genreSequencePopularity : 1;
	unsigned genreSpotlightLaunchPopularity : 1;
	unsigned genreTimeOfDayPopularity : 1;
	unsigned heroAppConfidence : 1;
	unsigned heroAppPredictionReason : 1;
	unsigned installAge : 1;
	unsigned intentCategory : 1;
	unsigned intentCategoryFromIntentDefinition : 1;
	unsigned isDateInWeekendOnDevice : 1;
	unsigned isLocationServicesDisabled : 1;
	unsigned lastLaunchAge : 1;
	unsigned lastSpotlightLaunchAge : 1;
	unsigned launchDayOfWeekPopularity : 1;
	unsigned launchLocationPopularity : 1;
	unsigned launchPopularity : 1;
	unsigned launchSequencePopularity : 1;
	unsigned launchTimePopularity : 1;
	unsigned magicalMomentsConfidence : 1;
	unsigned magicalMomentsHeroAppPredictionIndex : 1;
	unsigned magicalMomentsHeroAppPredictionTotalPredictions : 1;
	unsigned magicalMomentsPredictionReason : 1;
	unsigned medianSecondsBetweenLaunches : 1;
	unsigned mostRecentNotificationAge : 1;
	unsigned nonSiriKitIntentParzen : 1;
	unsigned onSpringBoardDock : 1;
	unsigned onWifi : 1;
	unsigned randomScore : 1;
	unsigned randomSessionValue : 1;
	unsigned sSIDPopularity : 1;
	unsigned siriKitIntentParzen : 1;
	unsigned slotCoarseTimeOfDayPopularity : 1;
	unsigned slotCoreMotionPopularity : 1;
	unsigned slotCount : 1;
	unsigned slotDayAndLocationPopularity : 1;
	unsigned slotDayAndPreviousLocationPopularity : 1;
	unsigned slotDayOfWeekPopularity : 1;
	unsigned slotEntropyForSlotSet : 1;
	unsigned slotFeedbackConfirmRatio : 1;
	unsigned slotFeedbackConfirmRatioCount : 1;
	unsigned slotFeedbackConfirmRatioMean : 1;
	unsigned slotFeedbackConfirmRatioStdDev : 1;
	unsigned slotFeedbackConfirmsCoarseTimeOfDayCountInLockscreen : 1;
	unsigned slotFeedbackConfirmsCoarseTimeOfDayCountInSpotlight : 1;
	unsigned slotFeedbackConfirmsDayCountInLockscreen : 1;
	unsigned slotFeedbackConfirmsDayCountInSpotlight : 1;
	unsigned slotFeedbackConfirmsPartOfWeekCountInLockscreen : 1;
	unsigned slotFeedbackConfirmsPartOfWeekCountInSpotlight : 1;
	unsigned slotFeedbackConfirmsTimeOfDayCountInLockscreen : 1;
	unsigned slotFeedbackConfirmsTimeOfDayCountInSpotlight : 1;
	unsigned slotFeedbackMinutesSinceLastConfirmInLockscreen : 1;
	unsigned slotFeedbackMinutesSinceLastConfirmInSpotlight : 1;
	unsigned slotFeedbackMinutesSinceLastExplicitRejectInLockscreen : 1;
	unsigned slotFeedbackMinutesSinceLastExplicitRejectInSpotlight : 1;
	unsigned slotFeedbackMinutesSinceLastRejectInLockscreen : 1;
	unsigned slotFeedbackTotalConfirmsForAllSlots : 1;
	unsigned slotFeedbackTotalConfirmsForSlot : 1;
	unsigned slotFeedbackTotalConfirmsForSlotInLastHourInSpotlight : 1;
	unsigned slotFeedbackTotalConfirmsForSlotInLastTwoHoursInSpotlight : 1;
	unsigned slotFeedbackTotalConfirmsForSlotInLockscreen : 1;
	unsigned slotFeedbackTotalConfirmsForSlotInSpotlight : 1;
	unsigned slotFeedbackTotalConfirmsForSlotTodayInLockscreen : 1;
	unsigned slotFeedbackTotalConfirmsForSlotTodayInSpotlight : 1;
	unsigned slotFeedbackTotalConfirmsInLockscreenForAllSlots : 1;
	unsigned slotFeedbackTotalConfirmsInSpotlightForAllSlots : 1;
	unsigned slotFeedbackTotalConfirmsTodayInLockscreenForAllSlots : 1;
	unsigned slotFeedbackTotalRejectsForAllSlots : 1;
	unsigned slotFeedbackTotalRejectsForSlot : 1;
	unsigned slotFeedbackTotalRejectsForSlotInLastHourInSpotlight : 1;
	unsigned slotFeedbackTotalRejectsForSlotInLastTwoHoursInSpotlight : 1;
	unsigned slotFeedbackTotalRejectsForSlotInLockscreen : 1;
	unsigned slotFeedbackTotalRejectsForSlotInSpotlight : 1;
	unsigned slotFeedbackTotalRejectsForSlotTodayInLockscreen : 1;
	unsigned slotFeedbackTotalRejectsForSlotTodayInSpotlight : 1;
	unsigned slotFeedbackTotalRejectsInLockscreenForAllSlots : 1;
	unsigned slotFeedbackTotalRejectsInSpotlightForAllSlots : 1;
	unsigned slotFeedbackTotalRejectsTodayInLockscreenForAllSlots : 1;
	unsigned slotIsCustomIntent : 1;
	unsigned slotIsNSUserActivity : 1;
	unsigned slotIsSiriKitIntent : 1;
	unsigned slotLOIBoost : 1;
	unsigned slotLaunchCoarseTimeCount : 1;
	unsigned slotLaunchCoarseTimePopularity : 1;
	unsigned slotLaunchCoreMotionCount : 1;
	unsigned slotLaunchCoreMotionPopularity : 1;
	unsigned slotLaunchDayAndLocationPopularity : 1;
	unsigned slotLaunchDayAndPreviousLocationPopularity : 1;
	unsigned slotLaunchDayOfWeekCount : 1;
	unsigned slotLaunchDayOfWeekPopularity : 1;
	unsigned slotLaunchLocationCount : 1;
	unsigned slotLaunchLocationPopularity : 1;
	unsigned slotLaunchPartOfWeekAndLocationPopularity : 1;
	unsigned slotLaunchPartOfWeekAndTimePopularity : 1;
	unsigned slotLaunchPartOfWeekCount : 1;
	unsigned slotLaunchPartOfWeekPopularity : 1;
	unsigned slotLaunchPopularity : 1;
	unsigned slotLaunchPreviousLocationAndCoreMotionPopularity : 1;
	unsigned slotLaunchPreviousLocationAndLocationPopularity : 1;
	unsigned slotLaunchPreviousLocationCount : 1;
	unsigned slotLaunchPreviousLocationPopularity : 1;
	unsigned slotLaunchTimeAndDayAndLocationPopularity : 1;
	unsigned slotLaunchTimeAndDayPopularity : 1;
	unsigned slotLaunchTimeAndLocationPopularity : 1;
	unsigned slotLaunchTimeAndPreviousLocationPopularity : 1;
	unsigned slotLaunchTimeCount : 1;
	unsigned slotLaunchTimePopularity : 1;
	unsigned slotLaunchTimeWithEightHourWindowCount : 1;
	unsigned slotLaunchTimeWithHourWindowCount : 1;
	unsigned slotLaunchTimeWithThirtyMinuteWindowCount : 1;
	unsigned slotLocationPopularity : 1;
	unsigned slotLogProbability : 1;
	unsigned slotNumDocFreqForRootOfApp : 1;
	unsigned slotNumSessionStartsForRootOfApp : 1;
	unsigned slotNumberOfParameters : 1;
	unsigned slotNumberOfUniqueDaysLaunchedForSlot : 1;
	unsigned slotOnlyLaunchedWithinShortTimeSpan : 1;
	unsigned slotPartOfWeekAndLocationPopularity : 1;
	unsigned slotPartOfWeekAndTimePopularity : 1;
	unsigned slotPartOfWeekPopularity : 1;
	unsigned slotPreviousLocationAndCoreMotionPopularity : 1;
	unsigned slotPreviousLocationAndLocationPopularity : 1;
	unsigned slotPreviousLocationPopularity : 1;
	unsigned slotScore : 1;
	unsigned slotSecondsSinceLastSlot : 1;
	unsigned slotTimeAndDayAndLocationPopularity : 1;
	unsigned slotTimeAndDayPopularity : 1;
	unsigned slotTimeAndLocationPopularity : 1;
	unsigned slotTimeAndPreviousLocationPopularity : 1;
	unsigned slotTimeOfDayBudgetMeanForSlot : 1;
	unsigned slotTimeOfDayBudgetStdDevForSlot : 1;
	unsigned slotTimeOfDayPopularity : 1;
	unsigned slotTimeOfDayWithEightHourWindowPopularity : 1;
	unsigned slotTimeOfDayWithHourWindowPopularity : 1;
	unsigned slotTimeOfDayWithThirtyMinuteWindowPopularity : 1;
	unsigned slotTodaysTimeOfDayBudgetForSlot : 1;
	unsigned slotTotalNumSessionsForRootOfApp : 1;
	unsigned slotTotalNumberOfLaunches : 1;
	unsigned slotTotalNumberOfLaunchesForSlot : 1;
	unsigned slotTotalNumberOfLaunchesForSlotSet : 1;
	unsigned slotTotalNumberOfUndecayedLaunchesForSlot : 1;
	unsigned slotTotalNumberOfUniqueDaysLaunched : 1;
	unsigned spotlightLaunchPopularity : 1;
	unsigned spotlightLaunchTimePopularity : 1;
	unsigned spotlightTimeOfDayPopularity : 1;
	unsigned springBoardPage : 1;
	unsigned staticAppPoints : 1;
	unsigned supportsMedia : 1;
	unsigned timeOfDayBucket : 1;
	unsigned timeOfDayPopularity : 1;
	unsigned totalActionHeuristicConfirmEvents : 1;
	unsigned totalActionHeuristicRejectEvents : 1;
	unsigned totalAppActionConfirmEvents : 1;
	unsigned totalAppActionRejectEvents : 1;
	unsigned totalAppForAllActionsConfirmEvents : 1;
	unsigned totalAppForAllActionsRejectEvents : 1;
	unsigned totalLaunchesForAllActionsUsingCoreMotionDecay : 1;
	unsigned totalLaunchesForAllActionsUsingDayAndLocationDecay : 1;
	unsigned totalLaunchesForAllActionsUsingDayAndPreviousLocationDecay : 1;
	unsigned totalLaunchesForAllActionsUsingDayOfWeekDecay : 1;
	unsigned totalLaunchesForAllActionsUsingLocationDecay : 1;
	unsigned totalLaunchesForAllActionsUsingPartOfWeekAndLocationDecay : 1;
	unsigned totalLaunchesForAllActionsUsingPartOfWeekAndTimeDecay : 1;
	unsigned totalLaunchesForAllActionsUsingPartOfWeekDecay : 1;
	unsigned totalLaunchesForAllActionsUsingPreviousLocationAndCoreMotionDecay : 1;
	unsigned totalLaunchesForAllActionsUsingPreviousLocationAndLocationDecay : 1;
	unsigned totalLaunchesForAllActionsUsingPreviousLocationDecay : 1;
	unsigned totalLaunchesForAllActionsUsingTimeAndDayAndLocationDecay : 1;
	unsigned totalLaunchesForAllActionsUsingTimeAndDayDecay : 1;
	unsigned totalLaunchesForAllActionsUsingTimeAndLocationDecay : 1;
	unsigned totalLaunchesForAllActionsUsingTimeAndPreviousLocationDecay : 1;
	unsigned totalLaunchesForAllActionsUsingTimeDecay : 1;
	unsigned totalLaunchesForSlotUsingCoreMotionDecay : 1;
	unsigned totalLaunchesForSlotUsingDayAndLocationDecay : 1;
	unsigned totalLaunchesForSlotUsingDayAndPreviousLocationDecay : 1;
	unsigned totalLaunchesForSlotUsingDayOfWeekDecay : 1;
	unsigned totalLaunchesForSlotUsingLocationDecay : 1;
	unsigned totalLaunchesForSlotUsingPartOfWeekAndLocationDecay : 1;
	unsigned totalLaunchesForSlotUsingPartOfWeekAndTimeDecay : 1;
	unsigned totalLaunchesForSlotUsingPartOfWeekDecay : 1;
	unsigned totalLaunchesForSlotUsingPreviousLocationAndCoreMotionDecay : 1;
	unsigned totalLaunchesForSlotUsingPreviousLocationAndLocationDecay : 1;
	unsigned totalLaunchesForSlotUsingPreviousLocationDecay : 1;
	unsigned totalLaunchesForSlotUsingTimeAndDayAndLocationDecay : 1;
	unsigned totalLaunchesForSlotUsingTimeAndDayDecay : 1;
	unsigned totalLaunchesForSlotUsingTimeAndLocationDecay : 1;
	unsigned totalLaunchesForSlotUsingTimeAndPreviousLocationDecay : 1;
	unsigned totalLaunchesForSlotUsingTimeDecay : 1;
	unsigned totalNumberOfAirplaneModeLaunches : 1;
	unsigned totalNumberOfCoreMotionLaunches : 1;
	unsigned totalNumberOfLaunches : 1;
	unsigned totalNumberOfSSIDLaunches : 1;
	unsigned totalNumberOfSpotlightLaunches : 1;
	unsigned totalNumberOfTrendingLaunches : 1;
	unsigned trendingGenrePopularity : 1;
	unsigned trendingPopularity : 1;
	unsigned unlockTime : 1;
} SCD_Struct_AW13;

typedef struct {
	unsigned score : 1;
	unsigned timestamp : 1;
	unsigned cacheRank : 1;
	unsigned engagedAction : 1;
	unsigned futureMedia : 1;
	unsigned shown : 1;
} SCD_Struct_AW14;

typedef struct ATXPredictionItem {
	NSString* key;
	unsigned long long actionHash;
	float inputSignals[669];
	float score;
} ATXPredictionItem;

typedef struct {
	unsigned anchorEventType : 1;
	unsigned anchorType : 1;
	unsigned dayOfMonth : 1;
	unsigned dayOfWeek : 1;
	unsigned hourOfDay : 1;
	unsigned locationType : 1;
	unsigned month : 1;
} SCD_Struct_AT16;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
} SCD_Struct_AT18;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<ATXAction *, int>, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true>, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true>, std::__1::allocator<std::__1::__hash_value_type<ATXAction *, int> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true> > __p3_;
} hash_table<std::__1::__hash_value_type<ATXAction *, int>, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true>, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true>, std::__1::allocator<std::__1::__hash_value_type<ATXAction *, int> > >;

typedef struct unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::__1::allocator<std::__1::pair<ATXAction *const, int> > > {
	hash_table<std::__1::__hash_value_type<ATXAction *, int>, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true>, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true>, std::__1::allocator<std::__1::__hash_value_type<ATXAction *, int> > > __table_;
} unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::__1::allocator<std::__1::pair<ATXAction *const, int> > >;

typedef struct _compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > {
	ATXPredictionItem __value_;
} compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> >;

typedef struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > {
	ATXPredictionItem __begin_;
	ATXPredictionItem __end_;
	compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > __end_cap_;
} vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >;

typedef struct sqlite3* sqlite3Ref;

typedef struct {
	unsigned appsAllowed : 1;
	unsigned appsAllowedThird : 1;
	unsigned appsDenied : 1;
	unsigned appsDeniedThird : 1;
	unsigned appsInstalled : 1;
	unsigned appsInstalledThird : 1;
	unsigned appsLockscreen : 1;
	unsigned appsLockscreenThird : 1;
} SCD_Struct_AT32;

typedef struct _compressed_pair<float * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))> > {
	 __value_;
} compressed_pair<float * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))> >;

typedef struct _compressed_pair<int * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))> > {
	 __value_;
} compressed_pair<int * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))> >;

typedef struct vector<int __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))> > {
	 __begin_;
	 __end_;
	compressed_pair<int * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))> > __end_cap_;
} vector<int __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))> >;

typedef struct SimdVector<int __attribute__((ext_vector_type(8))), unsigned int> {
	vector<int __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))> > chunks;
	unsigned long long count;
} SimdVector<int __attribute__((ext_vector_type(8))), unsigned int>;

typedef struct vector<float __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))> > {
	 __begin_;
	 __end_;
	compressed_pair<float * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))> > __end_cap_;
} vector<float __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))> >;

typedef struct SimdVector<float __attribute__((ext_vector_type(8))), float> {
	vector<float __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))> > chunks;
	unsigned long long count;
} SimdVector<float __attribute__((ext_vector_type(8))), float>;

typedef struct HDGuardedData {
	SimdVector<float __attribute__((ext_vector_type(8))), float> scores;
	SimdVector<int __attribute__((ext_vector_type(8))), unsigned int> abs;
	BOOL enumerationInProgress;
} HDGuardedData;

typedef struct _compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> *, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> > > {
	SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> __value_;
} compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> *, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> > >;

typedef struct unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> > > {
	compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> *, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> > > __ptr_;
} unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> > >;

typedef struct HTGuardedData {
	NSMutableDictionary* dict;
	NSMutableIndexSet* usedIds;
	NSObject<NSCopying>* prevKey;
	unsigned short prevEventId;
} HTGuardedData;

typedef struct _compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> *, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > > {
	SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> __value_;
} compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> *, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > >;

typedef struct unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > > {
	compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> *, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > > __ptr_;
} unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > >;

typedef struct {
	double field1[669];
	double field2;
} SCD_Struct_AT45;

typedef struct {
	unsigned appLaunchPopularity : 1;
	unsigned cleared : 1;
	unsigned defaction : 1;
	unsigned engaged : 1;
	unsigned ignored : 1;
	unsigned location : 1;
	unsigned motionAtRecieve : 1;
	unsigned orb : 1;
	unsigned received : 1;
	unsigned suppaction : 1;
	unsigned tapcoa : 1;
	unsigned totalLaunches : 1;
	unsigned visits : 1;
	unsigned isStationary : 1;
} SCD_Struct_AT46;

typedef struct fixpt_meta_s {
	float base;
	float incr;
} fixpt_meta_s;

typedef struct header_s {
	unsigned nvectors;
	unsigned length;
	fixpt_meta_s fixinfo;
} header_s;

typedef struct _CFBurstTrie* CFBurstTrieRef;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct __IOHIDServiceClient* IOHIDServiceClientRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned appPopularity : 1;
	unsigned cleared : 1;
	unsigned defaultActions : 1;
	unsigned engaged : 1;
	unsigned ignored : 1;
	unsigned orbs : 1;
	unsigned received : 1;
	unsigned suppActions : 1;
	unsigned tapCoalesce : 1;
	unsigned totalLaunches : 1;
} SCD_Struct_AT53;

typedef struct {
	double field1;
	unsigned field2;
	unsigned short field3;
} SCD_Struct_AT54;

typedef struct {
	unsigned timestamp : 1;
	unsigned appActionCoreMotionCurrentMotionLaunches : 1;
	unsigned appForAllActionsCoreMotionCurrentMotionLaunches : 1;
	unsigned consumerSubType : 1;
	unsigned currentLOIType : 1;
	unsigned dayOfWeek : 1;
	unsigned engagementType : 1;
	unsigned intentDonationDelay : 1;
	unsigned locationDistanceFromHome : 1;
	unsigned locationDistanceFromWork : 1;
	unsigned logType : 1;
	unsigned predictionAge : 1;
	unsigned sessionLogVersion : 1;
	unsigned timeOfDayInterval : 1;
	unsigned totalAppActionAirplaneModeLaunches : 1;
	unsigned totalAppActionCoarseTimeOfDayLaunches : 1;
	unsigned totalAppActionCurrentDayOfWeekLaunches : 1;
	unsigned totalAppActionTimeOfDayLaunches : 1;
	unsigned totalAppForAllActionTimeOfDayLaunches : 1;
	unsigned totalAppForAllActionsAirplaneModeLaunches : 1;
	unsigned totalAppForAllActionsCoarseTimeOfDayLaunches : 1;
	unsigned totalAppForAllActionsCurrentDayOfWeekLaunches : 1;
	unsigned uiFeedbackDelay : 1;
	unsigned inAirplaneMode : 1;
	unsigned isInternalBuild : 1;
} SCD_Struct_AW55;

