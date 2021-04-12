/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveAppPredictionSubscores : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _aPRExplicitConfirmRatio;
	int _aPRExplicitRejectRatio;
	int _aPRImplicitConfirmRatio;
	int _aPRImplicitRejectRatio;
	int _aPRNonSiriKitIntentsRatio;
	int _aPRSiriKitIntentsRatio;
	int _aPRTotalExplicitConfirms;
	int _aPRTotalExplicitRejects;
	int _aPRTotalImplicitConfirms;
	int _aPRTotalImplicitRejects;
	int _aPRTotalNonSiriKitIntents;
	int _aPRTotalSiriKitIntents;
	int _actionCoarseTimeOfDayPopularity;
	int _actionConfirmsAtCoarseGeoHashForAction;
	int _actionConfirmsAtCoarseGeoHashForActionInContext;
	int _actionConfirmsAtCoarseGeoHashInContext;
	int _actionConfirmsAtDayOfWeekForAction;
	int _actionConfirmsAtDayOfWeekForActionInContext;
	int _actionConfirmsAtDayOfWeekInContext;
	int _actionConfirmsAtSpecificGeoHashForAction;
	int _actionConfirmsAtSpecificGeoHashForActionInContext;
	int _actionConfirmsAtSpecificGeoHashInContext;
	int _actionConfirmsAtTimeOfDayForAction;
	int _actionConfirmsAtTimeOfDayForActionInContext;
	int _actionConfirmsAtTimeOfDayInContext;
	int _actionConfirmsCoarseTimePowLocationForAction;
	int _actionConfirmsCoarseTimePowLocationForActionInContext;
	int _actionConfirmsCoarseTimePowLocationForAllActionsAndContexts;
	int _actionConfirmsCoarseTimePowLocationInContext;
	int _actionConfirmsSpecificTimeDowLocationForAction;
	int _actionConfirmsSpecificTimeDowLocationForActionInContext;
	int _actionConfirmsSpecificTimeDowLocationForAllActionsAndContexts;
	int _actionConfirmsSpecificTimeDowLocationInContext;
	int _actionCoreMotionPopularity;
	int _actionCoreMotionType;
	int _actionDayAndLocationPopularity;
	int _actionDayAndPreviousLocationPopularity;
	int _actionDayOfWeekPopularity;
	int _actionEntropyForCoarseGeoHash;
	int _actionEntropyForDayOfWeek;
	int _actionEntropyForSpecificGeoHash;
	int _actionEntropyForTimeOfDay;
	int _actionFeedbackMeanNumberOfSpotlightConfirmsPerDay;
	int _actionFeedbackMeanNumberOfSpotlightLaunchesPerDay;
	int _actionFeedbackTotalConfirmsInLockscreen;
	int _actionFeedbackTotalConfirmsInSpotlight;
	int _actionFeedbackTotalConfirmsTodayInLockscreen;
	int _actionFeedbackTotalRejectsInLockscreen;
	int _actionFeedbackTotalRejectsInSpotlight;
	int _actionFeedbackTotalRejectsTodayInLockscreen;
	int _actionHeuristicConfirmEvents;
	int _actionHeuristicRejectEvents;
	int _actionIsBackgroundExecutable;
	int _actionIsFutureMedia;
	int _actionKeyCategory;
	int _actionLOIType;
	int _actionLaunchPopularity;
	int _actionLocationPopularity;
	int _actionNumberOfCoarseGeohashesForAction;
	int _actionNumberOfSpecificGeohashesForAction;
	int _actionPartOfWeekAndLocationPopularity;
	int _actionPartOfWeekAndTimePopularity;
	int _actionPartOfWeekPopularity;
	int _actionPreviousLocationAndCoreMotionPopularity;
	int _actionPreviousLocationAndLocationPopularity;
	int _actionPreviousLocationPopularity;
	int _actionRejectsAtCoarseGeoHashForAction;
	int _actionRejectsAtCoarseGeoHashForActionInContext;
	int _actionRejectsAtCoarseGeoHashInContext;
	int _actionRejectsAtDayOfWeekForAction;
	int _actionRejectsAtDayOfWeekForActionInContext;
	int _actionRejectsAtDayOfWeekInContext;
	int _actionRejectsAtSpecificGeoHashForAction;
	int _actionRejectsAtSpecificGeoHashForActionInContext;
	int _actionRejectsAtSpecificGeoHashInContext;
	int _actionRejectsAtTimeOfDayForAction;
	int _actionRejectsAtTimeOfDayForActionInContext;
	int _actionRejectsAtTimeOfDayInContext;
	int _actionRejectsCoarseTimePowLocationForAction;
	int _actionRejectsCoarseTimePowLocationForActionInContext;
	int _actionRejectsCoarseTimePowLocationForAllActionsAndContexts;
	int _actionRejectsCoarseTimePowLocationInContext;
	int _actionRejectsSpecificTimeDowLocationForAction;
	int _actionRejectsSpecificTimeDowLocationForActionInContext;
	int _actionRejectsSpecificTimeDowLocationForAllActionsAndContexts;
	int _actionRejectsSpecificTimeDowLocationInContext;
	int _actionTimeAndDayAndLocationPopularity;
	int _actionTimeAndDayPopularity;
	int _actionTimeAndLocationPopularity;
	int _actionTimeAndPreviousLocationPopularity;
	int _actionTimeOfDayPopularity;
	int _actionTimeOfDayWithEightHourWindowPopularity;
	int _actionTimeOfDayWithHourWindowPopularity;
	int _actionTimeOfDayWithThirtyMinuteWindowPopularity;
	int _actionTotalConfirms;
	int _actionTotalRejects;
	int _actionsAtCoarseGeoHash0ForAction;
	int _actionsAtCoarseGeoHash1ForAction;
	int _actionsAtCoarseGeoHash2ForAction;
	int _actionsAtCoarseGeoHash3ForAction;
	int _actionsAtCoarseGeoHash4ForAction;
	int _actionsAtCoarseGeoHash5ForAction;
	int _actionsAtCoarseGeoHash6ForAction;
	int _actionsAtCoarseGeoHash7ForAction;
	int _actionsAtCoarseGeoHash8ForAction;
	int _actionsAtCoarseGeoHash9ForAction;
	int _actionsAtCoarseGeoHashForAction;
	int _actionsAtCoarseGeoHashForActionInContext;
	int _actionsAtCoarseGeoHashInContext;
	int _actionsAtDayOfWeekForAction;
	int _actionsAtDayOfWeekForActionInContext;
	int _actionsAtDayOfWeekInContext;
	int _actionsAtSpecificGeoHash0ForAction;
	int _actionsAtSpecificGeoHash10ForAction;
	int _actionsAtSpecificGeoHash11ForAction;
	int _actionsAtSpecificGeoHash12ForAction;
	int _actionsAtSpecificGeoHash13ForAction;
	int _actionsAtSpecificGeoHash14ForAction;
	int _actionsAtSpecificGeoHash1ForAction;
	int _actionsAtSpecificGeoHash2ForAction;
	int _actionsAtSpecificGeoHash3ForAction;
	int _actionsAtSpecificGeoHash4ForAction;
	int _actionsAtSpecificGeoHash5ForAction;
	int _actionsAtSpecificGeoHash6ForAction;
	int _actionsAtSpecificGeoHash7ForAction;
	int _actionsAtSpecificGeoHash8ForAction;
	int _actionsAtSpecificGeoHash9ForAction;
	int _actionsAtSpecificGeoHashForAction;
	int _actionsAtSpecificGeoHashForActionInContext;
	int _actionsAtSpecificGeoHashInContext;
	int _actionsAtTimeOfDayForAction;
	int _actionsAtTimeOfDayForActionInContext;
	int _actionsAtTimeOfDayInContext;
	int _actionsCoarseTimePowLocationForAction;
	int _actionsCoarseTimePowLocationForActionInContext;
	int _actionsCoarseTimePowLocationForAllActionsAndContexts;
	int _actionsCoarseTimePowLocationInContext;
	int _actionsInTimeBucket0ForAction;
	int _actionsInTimeBucket10ForAction;
	int _actionsInTimeBucket11ForAction;
	int _actionsInTimeBucket12ForAction;
	int _actionsInTimeBucket13ForAction;
	int _actionsInTimeBucket14ForAction;
	int _actionsInTimeBucket15ForAction;
	int _actionsInTimeBucket16ForAction;
	int _actionsInTimeBucket17ForAction;
	int _actionsInTimeBucket18ForAction;
	int _actionsInTimeBucket19ForAction;
	int _actionsInTimeBucket1ForAction;
	int _actionsInTimeBucket20ForAction;
	int _actionsInTimeBucket21ForAction;
	int _actionsInTimeBucket22ForAction;
	int _actionsInTimeBucket23ForAction;
	int _actionsInTimeBucket24ForAction;
	int _actionsInTimeBucket2ForAction;
	int _actionsInTimeBucket3ForAction;
	int _actionsInTimeBucket4ForAction;
	int _actionsInTimeBucket5ForAction;
	int _actionsInTimeBucket6ForAction;
	int _actionsInTimeBucket7ForAction;
	int _actionsInTimeBucket8ForAction;
	int _actionsInTimeBucket9ForAction;
	int _actionsOnDayOfWeekFridayForAction;
	int _actionsOnDayOfWeekMondayForAction;
	int _actionsOnDayOfWeekSaturdayForAction;
	int _actionsOnDayOfWeekSundayForAction;
	int _actionsOnDayOfWeekThursdayForAction;
	int _actionsOnDayOfWeekTuesdayForAction;
	int _actionsOnDayOfWeekWednesdayForAction;
	int _actionsSpecificTimeDowLocationForAction;
	int _actionsSpecificTimeDowLocationForActionInContext;
	int _actionsSpecificTimeDowLocationForAllActionsAndContexts;
	int _actionsSpecificTimeDowLocationInContext;
	int _airplaneModePopularity;
	int _ambientLightTypeLaunchPopularity;
	int _ambientLightTypePopularity;
	int _app2VecClusterCount;
	int _app2VecClusterDayOfWeekPopularity;
	int _app2VecClusterLocationPopularity;
	int _app2VecClusterSequencePopularity;
	int _app2VecClusterTimeOfDayPopularity;
	int _app2VecClusterTrendingPopularity;
	int _appActionConfirmEvents;
	int _appActionLogProbability;
	int _appActionRejectEvents;
	int _appActionScore;
	int _appBlendedDayOfWeekPopularity;
	int _appBlendedDayOfWeekSampledPopularity;
	int _appBlendedLOITypePopularity;
	int _appBlendedLOITypeSampledPopularity;
	int _appBlendedLastAppPopularity;
	int _appBlendedLastAppSampledPopularity;
	int _appBlendedTimeOfDayPopularity;
	int _appBlendedTimeOfDaySampledPopularity;
	int _appCategory;
	int _appCoarseTimeAssociationScore;
	int _appConfirmsAtCoarseGeoHashForApp;
	int _appConfirmsAtCoarseGeoHashForAppInContext;
	int _appConfirmsAtCoarseGeoHashInContext;
	int _appConfirmsAtDayOfWeekForApp;
	int _appConfirmsAtDayOfWeekForAppInContext;
	int _appConfirmsAtDayOfWeekInContext;
	int _appConfirmsAtSpecificGeoHashForApp;
	int _appConfirmsAtSpecificGeoHashForAppInContext;
	int _appConfirmsAtSpecificGeoHashInContext;
	int _appConfirmsCoarseTimePowLocationForAllAppsAndContexts;
	int _appConfirmsCoarseTimePowLocationForApp;
	int _appConfirmsCoarseTimePowLocationForAppInContext;
	int _appConfirmsCoarseTimePowLocationInContext;
	int _appConfirmsForAllAppsAndContextsDecayedAtCoarseContextRate;
	int _appConfirmsForAllAppsAndContextsDecayedAtSpecificContextRate;
	int _appConfirmsInTwoHourTimeBucketForApp;
	int _appConfirmsInTwoHourTimeBucketForAppInContext;
	int _appConfirmsInTwoHourTimeBucketInContext;
	int _appConfirmsSpecificTimeDowLocationForAllAppsAndContexts;
	int _appConfirmsSpecificTimeDowLocationForApp;
	int _appConfirmsSpecificTimeDowLocationForAppInContext;
	int _appConfirmsSpecificTimeDowLocationInContext;
	int _appCount;
	int _appDailyDose;
	int _appDailyDoseRemaining;
	int _appDailyDoseSmoothedError;
	int _appDayOfWeekLaunches;
	int _appEntropyForCoarseGeoHash;
	int _appEntropyForSpecificGeoHash;
	int _appEntropyForTimeBuckets;
	int _appEntropyForZoom7GeoHash;
	int _appForAllActionsConfirmEvents;
	int _appForAllActionsRejectEvents;
	int _appForAllIntentsAirplaneModePopularity;
	int _appForAllIntentsCoarseTimeOfDayPopularity;
	int _appForAllIntentsCoreMotionPopularity;
	int _appForAllIntentsCount;
	int _appForAllIntentsDayOfWeekPopularity;
	int _appForAllIntentsDistanceDayOfWeekToLaunchPopularity;
	int _appForAllIntentsDistanceSSIDToLaunchPopularity;
	int _appForAllIntentsDistanceTrendingToLaunchPopularity;
	int _appForAllIntentsEntropyDayOfWeekPopularity;
	int _appForAllIntentsEntropyDayOfWeekPopularityByApp;
	int _appForAllIntentsEntropyDayOfWeekPopularityByDay;
	int _appForAllIntentsEntropyLaunchPopularity;
	int _appForAllIntentsEntropySSIDPopularity;
	int _appForAllIntentsEntropySSIDPopularityByApp;
	int _appForAllIntentsEntropySSIDPopularityBySSID;
	int _appForAllIntentsEntropyTrendingPopularity;
	int _appForAllIntentsLaunchDayOfWeekPopularity;
	int _appForAllIntentsLaunchLocationPopularity;
	int _appForAllIntentsLaunchPopularity;
	int _appForAllIntentsLaunchTimePopularity;
	int _appForAllIntentsSSIDPopularity;
	int _appForAllIntentsTimeOfDayPopularity;
	int _appForAllIntentsTotalNumberOfAirplaneModeLaunches;
	int _appForAllIntentsTotalNumberOfCoreMotionLaunches;
	int _appForAllIntentsTotalNumberOfLaunches;
	int _appForAllIntentsTotalNumberOfSSIDLaunches;
	int _appForAllIntentsTotalNumberOfTrendingLaunches;
	int _appForAllIntentsTrendingPopularity;
	int _appForAllIntentsUnlockTime;
	int _appGeoAssociationScoreAtZoom13;
	int _appGeoAssociationScoreAtZoom16;
	int _appGeoAssociationScoreAtZoom7;
	int _appGlobalScoreGivenTimeDayAndLocation;
	int _appGlobalScoreGivenTimeDayLocationAndLastApp;
	int _appInFolder;
	int _appIntentAirplaneModePopularity;
	int _appIntentAmbientLightTypeLaunchPopularity;
	int _appIntentAmbientLightTypePopularity;
	int _appIntentAppLaunchSequencePopularity;
	int _appIntentAverageSecondsBetweenAppActions;
	int _appIntentCoarseTimeOfDayPopularity;
	int _appIntentCoreMotionPopularity;
	int _appIntentCount;
	int _appIntentDayOfWeekPopularity;
	int _appIntentDayZeroPoints;
	int _appIntentDistanceDayOfWeekToLaunchPopularity;
	int _appIntentDistanceSSIDToLaunchPopularity;
	int _appIntentDistanceTrendingToLaunchPopularity;
	int _appIntentEntropyDayOfWeekPopularity;
	int _appIntentEntropyDayOfWeekPopularityByAppIntent;
	int _appIntentEntropyDayOfWeekPopularityByDay;
	int _appIntentEntropyLaunchPopularity;
	int _appIntentEntropySSIDPopularity;
	int _appIntentEntropySSIDPopularityByAppIntent;
	int _appIntentEntropySSIDPopularityBySSID;
	int _appIntentEntropyTrendingPopularity;
	int _appIntentLastLaunchAge;
	int _appIntentLaunchDayOfWeekPopularity;
	int _appIntentLaunchLocationPopularity;
	int _appIntentLaunchMicroLocationPopularity;
	int _appIntentLaunchPartOfWeekPopularity;
	int _appIntentLaunchPopularity;
	int _appIntentLaunchSequencePopularity;
	int _appIntentLaunchTimePopularity;
	int _appIntentMedianSecondsBetweenAppActions;
	int _appIntentPartOfWeekPopularity;
	int _appIntentSSIDPopularity;
	int _appIntentSlotCountForAllAppActions;
	int _appIntentStaticPoints;
	int _appIntentTimeOfDayPopularity;
	int _appIntentTotalNumberOfAirplaneModeLaunches;
	int _appIntentTotalNumberOfCoreMotionLaunches;
	int _appIntentTotalNumberOfLaunches;
	int _appIntentTotalNumberOfSSIDLaunches;
	int _appIntentTotalNumberOfTrendingLaunches;
	int _appIntentTrendingPopularity;
	int _appIntentUnlockTime;
	int _appIntentValueScore;
	int _appLOITypeAssociationScore;
	int _appLOITypeLaunches;
	int _appLastAppLaunches;
	int _appLaunchMicroLocationPopularity;
	int _appLaunchesAtCoarseGeoHash0ForApp;
	int _appLaunchesAtCoarseGeoHash1ForApp;
	int _appLaunchesAtCoarseGeoHash2ForApp;
	int _appLaunchesAtCoarseGeoHash3ForApp;
	int _appLaunchesAtCoarseGeoHash4ForApp;
	int _appLaunchesAtCoarseGeoHash5ForApp;
	int _appLaunchesAtCoarseGeoHash6ForApp;
	int _appLaunchesAtCoarseGeoHash7ForApp;
	int _appLaunchesAtCoarseGeoHash8ForApp;
	int _appLaunchesAtCoarseGeoHash9ForApp;
	int _appLaunchesAtCoarseGeoHashForApp;
	int _appLaunchesAtCoarseGeoHashForAppInContext;
	int _appLaunchesAtCoarseGeoHashInContext;
	int _appLaunchesAtDayOfWeekForApp;
	int _appLaunchesAtDayOfWeekInContext;
	int _appLaunchesAtSSIDForApp;
	int _appLaunchesAtSSIDForAppInContext;
	int _appLaunchesAtSpecificGeoHash0ForApp;
	int _appLaunchesAtSpecificGeoHash10ForApp;
	int _appLaunchesAtSpecificGeoHash11ForApp;
	int _appLaunchesAtSpecificGeoHash12ForApp;
	int _appLaunchesAtSpecificGeoHash13ForApp;
	int _appLaunchesAtSpecificGeoHash14ForApp;
	int _appLaunchesAtSpecificGeoHash1ForApp;
	int _appLaunchesAtSpecificGeoHash2ForApp;
	int _appLaunchesAtSpecificGeoHash3ForApp;
	int _appLaunchesAtSpecificGeoHash4ForApp;
	int _appLaunchesAtSpecificGeoHash5ForApp;
	int _appLaunchesAtSpecificGeoHash6ForApp;
	int _appLaunchesAtSpecificGeoHash7ForApp;
	int _appLaunchesAtSpecificGeoHash8ForApp;
	int _appLaunchesAtSpecificGeoHash9ForApp;
	int _appLaunchesAtSpecificGeoHashForApp;
	int _appLaunchesAtSpecificGeoHashForAppInContext;
	int _appLaunchesAtSpecificGeoHashInContext;
	int _appLaunchesAtTimeAndDayForApp;
	int _appLaunchesAtTimeAndDayForAppInContext;
	int _appLaunchesAtTimeAndDayInContext;
	int _appLaunchesAtZoom7GeoHash0ForApp;
	int _appLaunchesAtZoom7GeoHash1ForApp;
	int _appLaunchesAtZoom7GeoHash2ForApp;
	int _appLaunchesAtZoom7GeoHash3ForApp;
	int _appLaunchesAtZoom7GeoHash4ForApp;
	int _appLaunchesAtZoom7GeoHash5ForApp;
	int _appLaunchesAtZoom7GeoHash6ForApp;
	int _appLaunchesAtZoom7GeoHash7ForApp;
	int _appLaunchesAtZoom7GeoHash8ForApp;
	int _appLaunchesAtZoom7GeoHash9ForApp;
	int _appLaunchesAtZoom7GeoHashForApp;
	int _appLaunchesAtZoom7GeoHashForAppInContext;
	int _appLaunchesAtZoom7GeoHashInContext;
	int _appLaunchesCoarseTimePowLocationForAllAppsAndContexts;
	int _appLaunchesCoarseTimePowLocationForApp;
	int _appLaunchesCoarseTimePowLocationForAppInContext;
	int _appLaunchesCoarseTimePowLocationInContext;
	int _appLaunchesForAllAppsAndContextsDecayedAtCoarseContextRate;
	int _appLaunchesForAllAppsAndContextsDecayedAtSpecificContextRate;
	int _appLaunchesForCoreMotionForAppInContext;
	int _appLaunchesInAirplaneModeForAppInContext;
	int _appLaunchesInTimeBucket0ForApp;
	int _appLaunchesInTimeBucket10ForApp;
	int _appLaunchesInTimeBucket11ForApp;
	int _appLaunchesInTimeBucket12ForApp;
	int _appLaunchesInTimeBucket13ForApp;
	int _appLaunchesInTimeBucket14ForApp;
	int _appLaunchesInTimeBucket15ForApp;
	int _appLaunchesInTimeBucket16ForApp;
	int _appLaunchesInTimeBucket17ForApp;
	int _appLaunchesInTimeBucket18ForApp;
	int _appLaunchesInTimeBucket19ForApp;
	int _appLaunchesInTimeBucket1ForApp;
	int _appLaunchesInTimeBucket20ForApp;
	int _appLaunchesInTimeBucket21ForApp;
	int _appLaunchesInTimeBucket22ForApp;
	int _appLaunchesInTimeBucket23ForApp;
	int _appLaunchesInTimeBucket24ForApp;
	int _appLaunchesInTimeBucket2ForApp;
	int _appLaunchesInTimeBucket3ForApp;
	int _appLaunchesInTimeBucket4ForApp;
	int _appLaunchesInTimeBucket5ForApp;
	int _appLaunchesInTimeBucket6ForApp;
	int _appLaunchesInTimeBucket7ForApp;
	int _appLaunchesInTimeBucket8ForApp;
	int _appLaunchesInTimeBucket9ForApp;
	int _appLaunchesInTwoHourTimeBucketForApp;
	int _appLaunchesInTwoHourTimeBucketForAppInContext;
	int _appLaunchesInTwoHourTimeBucketInContext;
	int _appLaunchesOnDayOfWeekFridayForApp;
	int _appLaunchesOnDayOfWeekMondayForApp;
	int _appLaunchesOnDayOfWeekSaturdayForApp;
	int _appLaunchesOnDayOfWeekSundayForApp;
	int _appLaunchesOnDayOfWeekThursdayForApp;
	int _appLaunchesOnDayOfWeekTuesdayForApp;
	int _appLaunchesOnDayOfWeekWednesdayForApp;
	int _appLaunchesSpecificTimeDowLocationForAllAppsAndContexts;
	int _appLaunchesSpecificTimeDowLocationForApp;
	int _appLaunchesSpecificTimeDowLocationForAppInContext;
	int _appLaunchesSpecificTimeDowLocationInContext;
	int _appNumberOfCoarseGeohashesForApp;
	int _appNumberOfSpecificGeohashesForApp;
	int _appNumberOfZoom7GeohashesForApp;
	int _appPartOfWeekAssociationScore;
	int _appPopularityGivenTimeAndDayOfWeek;
	int _appPopularityOfTimeAndDayOfWeekGivenApp;
	int _appPreferenceBundleBoost;
	int _appRejectsAtCoarseGeoHashForApp;
	int _appRejectsAtCoarseGeoHashForAppInContext;
	int _appRejectsAtCoarseGeoHashInContext;
	int _appRejectsAtDayOfWeekForApp;
	int _appRejectsAtDayOfWeekForAppInContext;
	int _appRejectsAtDayOfWeekInContext;
	int _appRejectsAtSpecificGeoHashForApp;
	int _appRejectsAtSpecificGeoHashForAppInContext;
	int _appRejectsAtSpecificGeoHashInContext;
	int _appRejectsCoarseTimePowLocationForAllAppsAndContexts;
	int _appRejectsCoarseTimePowLocationForApp;
	int _appRejectsCoarseTimePowLocationForAppInContext;
	int _appRejectsCoarseTimePowLocationInContext;
	int _appRejectsForAllAppsAndContextsDecayedAtCoarseContextRate;
	int _appRejectsForAllAppsAndContextsDecayedAtSpecificContextRate;
	int _appRejectsInTwoHourTimeBucketForApp;
	int _appRejectsInTwoHourTimeBucketForAppInContext;
	int _appRejectsInTwoHourTimeBucketInContext;
	int _appRejectsSpecificTimeDowLocationForAllAppsAndContexts;
	int _appRejectsSpecificTimeDowLocationForApp;
	int _appRejectsSpecificTimeDowLocationForAppInContext;
	int _appRejectsSpecificTimeDowLocationInContext;
	int _appTimeAndDayOfWeekPopularity;
	int _appTimeOfDayLaunches;
	int _appTotalNumberOfTimeAndDayOfWeekLaunches;
	int _averageSecondsBetweenLaunches;
	int _coarseTimeOfDayPopularity;
	int _coreMotionPopularity;
	int _currentDose;
	int _currentTimeBucketFromZeroToTwentyFour;
	int _dayOfWeekBucket;
	int _dayOfWeekPopularity;
	int _dayZeroPoints;
	int _distanceDayOfWeekToLaunchPopularity;
	int _distanceSSIDToLaunchPopularity;
	int _distanceToExplicitLaunchPrediction;
	int _distanceTrendingToLaunchPopularity;
	int _entropyDayOfWeekPopularity;
	int _entropyDayOfWeekPopularityByApp;
	int _entropyDayOfWeekPopularityByDay;
	int _entropyLaunchPopularity;
	int _entropySSIDPopularity;
	int _entropySSIDPopularityByApp;
	int _entropySSIDPopularityBySSID;
	int _entropyTrendingPopularity;
	int _feedback;
	int _feedbackConfirms;
	int _feedbackRejects;
	int _folderPage;
	int _genreAirplaneModePopularity;
	int _genreDailyDoseRemaining;
	int _genreDayOfWeekPopularity;
	int _genreLocationPopularity;
	int _genreSSIDPopularity;
	int _genreSequencePopularity;
	int _genreSpotlightLaunchPopularity;
	int _genreTimeOfDayPopularity;
	int _heroAppConfidence;
	int _heroAppPredictionReason;
	int _installAge;
	int _intentCategory;
	int _intentCategoryFromIntentDefinition;
	int _isDateInWeekendOnDevice;
	int _isLocationServicesDisabled;
	int _lastLaunchAge;
	int _lastSpotlightLaunchAge;
	int _launchDayOfWeekPopularity;
	int _launchLocationPopularity;
	int _launchPopularity;
	int _launchSequencePopularity;
	int _launchTimePopularity;
	int _magicalMomentsConfidence;
	int _magicalMomentsHeroAppPredictionIndex;
	int _magicalMomentsHeroAppPredictionTotalPredictions;
	int _magicalMomentsPredictionReason;
	int _medianSecondsBetweenLaunches;
	int _mostRecentNotificationAge;
	int _nonSiriKitIntentParzen;
	int _onSpringBoardDock;
	int _onWifi;
	int _randomScore;
	int _randomSessionValue;
	int _sSIDPopularity;
	int _siriKitIntentParzen;
	int _slotCoarseTimeOfDayPopularity;
	int _slotCoreMotionPopularity;
	int _slotCount;
	int _slotDayAndLocationPopularity;
	int _slotDayAndPreviousLocationPopularity;
	int _slotDayOfWeekPopularity;
	int _slotEntropyForSlotSet;
	int _slotFeedbackConfirmRatio;
	int _slotFeedbackConfirmRatioCount;
	int _slotFeedbackConfirmRatioMean;
	int _slotFeedbackConfirmRatioStdDev;
	int _slotFeedbackConfirmsCoarseTimeOfDayCountInLockscreen;
	int _slotFeedbackConfirmsCoarseTimeOfDayCountInSpotlight;
	int _slotFeedbackConfirmsDayCountInLockscreen;
	int _slotFeedbackConfirmsDayCountInSpotlight;
	int _slotFeedbackConfirmsPartOfWeekCountInLockscreen;
	int _slotFeedbackConfirmsPartOfWeekCountInSpotlight;
	int _slotFeedbackConfirmsTimeOfDayCountInLockscreen;
	int _slotFeedbackConfirmsTimeOfDayCountInSpotlight;
	int _slotFeedbackMinutesSinceLastConfirmInLockscreen;
	int _slotFeedbackMinutesSinceLastConfirmInSpotlight;
	int _slotFeedbackMinutesSinceLastExplicitRejectInLockscreen;
	int _slotFeedbackMinutesSinceLastExplicitRejectInSpotlight;
	int _slotFeedbackMinutesSinceLastRejectInLockscreen;
	int _slotFeedbackTotalConfirmsForAllSlots;
	int _slotFeedbackTotalConfirmsForSlot;
	int _slotFeedbackTotalConfirmsForSlotInLastHourInSpotlight;
	int _slotFeedbackTotalConfirmsForSlotInLastTwoHoursInSpotlight;
	int _slotFeedbackTotalConfirmsForSlotInLockscreen;
	int _slotFeedbackTotalConfirmsForSlotInSpotlight;
	int _slotFeedbackTotalConfirmsForSlotTodayInLockscreen;
	int _slotFeedbackTotalConfirmsForSlotTodayInSpotlight;
	int _slotFeedbackTotalConfirmsInLockscreenForAllSlots;
	int _slotFeedbackTotalConfirmsInSpotlightForAllSlots;
	int _slotFeedbackTotalConfirmsTodayInLockscreenForAllSlots;
	int _slotFeedbackTotalRejectsForAllSlots;
	int _slotFeedbackTotalRejectsForSlot;
	int _slotFeedbackTotalRejectsForSlotInLastHourInSpotlight;
	int _slotFeedbackTotalRejectsForSlotInLastTwoHoursInSpotlight;
	int _slotFeedbackTotalRejectsForSlotInLockscreen;
	int _slotFeedbackTotalRejectsForSlotInSpotlight;
	int _slotFeedbackTotalRejectsForSlotTodayInLockscreen;
	int _slotFeedbackTotalRejectsForSlotTodayInSpotlight;
	int _slotFeedbackTotalRejectsInLockscreenForAllSlots;
	int _slotFeedbackTotalRejectsInSpotlightForAllSlots;
	int _slotFeedbackTotalRejectsTodayInLockscreenForAllSlots;
	int _slotIsCustomIntent;
	int _slotIsNSUserActivity;
	int _slotIsSiriKitIntent;
	int _slotLOIBoost;
	int _slotLaunchCoarseTimeCount;
	int _slotLaunchCoarseTimePopularity;
	int _slotLaunchCoreMotionCount;
	int _slotLaunchCoreMotionPopularity;
	int _slotLaunchDayAndLocationPopularity;
	int _slotLaunchDayAndPreviousLocationPopularity;
	int _slotLaunchDayOfWeekCount;
	int _slotLaunchDayOfWeekPopularity;
	int _slotLaunchLocationCount;
	int _slotLaunchLocationPopularity;
	int _slotLaunchPartOfWeekAndLocationPopularity;
	int _slotLaunchPartOfWeekAndTimePopularity;
	int _slotLaunchPartOfWeekCount;
	int _slotLaunchPartOfWeekPopularity;
	int _slotLaunchPopularity;
	int _slotLaunchPreviousLocationAndCoreMotionPopularity;
	int _slotLaunchPreviousLocationAndLocationPopularity;
	int _slotLaunchPreviousLocationCount;
	int _slotLaunchPreviousLocationPopularity;
	int _slotLaunchTimeAndDayAndLocationPopularity;
	int _slotLaunchTimeAndDayPopularity;
	int _slotLaunchTimeAndLocationPopularity;
	int _slotLaunchTimeAndPreviousLocationPopularity;
	int _slotLaunchTimeCount;
	int _slotLaunchTimePopularity;
	int _slotLaunchTimeWithEightHourWindowCount;
	int _slotLaunchTimeWithHourWindowCount;
	int _slotLaunchTimeWithThirtyMinuteWindowCount;
	int _slotLocationPopularity;
	int _slotLogProbability;
	int _slotNumDocFreqForRootOfApp;
	int _slotNumSessionStartsForRootOfApp;
	int _slotNumberOfParameters;
	int _slotNumberOfUniqueDaysLaunchedForSlot;
	int _slotOnlyLaunchedWithinShortTimeSpan;
	int _slotPartOfWeekAndLocationPopularity;
	int _slotPartOfWeekAndTimePopularity;
	int _slotPartOfWeekPopularity;
	int _slotPreviousLocationAndCoreMotionPopularity;
	int _slotPreviousLocationAndLocationPopularity;
	int _slotPreviousLocationPopularity;
	int _slotScore;
	int _slotSecondsSinceLastSlot;
	int _slotTimeAndDayAndLocationPopularity;
	int _slotTimeAndDayPopularity;
	int _slotTimeAndLocationPopularity;
	int _slotTimeAndPreviousLocationPopularity;
	int _slotTimeOfDayBudgetMeanForSlot;
	int _slotTimeOfDayBudgetStdDevForSlot;
	int _slotTimeOfDayPopularity;
	int _slotTimeOfDayWithEightHourWindowPopularity;
	int _slotTimeOfDayWithHourWindowPopularity;
	int _slotTimeOfDayWithThirtyMinuteWindowPopularity;
	int _slotTodaysTimeOfDayBudgetForSlot;
	int _slotTotalNumSessionsForRootOfApp;
	int _slotTotalNumberOfLaunches;
	int _slotTotalNumberOfLaunchesForSlot;
	int _slotTotalNumberOfLaunchesForSlotSet;
	int _slotTotalNumberOfUndecayedLaunchesForSlot;
	int _slotTotalNumberOfUniqueDaysLaunched;
	int _spotlightLaunchPopularity;
	int _spotlightLaunchTimePopularity;
	int _spotlightTimeOfDayPopularity;
	int _springBoardPage;
	int _staticAppPoints;
	int _supportsMedia;
	int _timeOfDayBucket;
	int _timeOfDayPopularity;
	int _totalActionHeuristicConfirmEvents;
	int _totalActionHeuristicRejectEvents;
	int _totalAppActionConfirmEvents;
	int _totalAppActionRejectEvents;
	int _totalAppForAllActionsConfirmEvents;
	int _totalAppForAllActionsRejectEvents;
	int _totalLaunchesForAllActionsUsingCoreMotionDecay;
	int _totalLaunchesForAllActionsUsingDayAndLocationDecay;
	int _totalLaunchesForAllActionsUsingDayAndPreviousLocationDecay;
	int _totalLaunchesForAllActionsUsingDayOfWeekDecay;
	int _totalLaunchesForAllActionsUsingLocationDecay;
	int _totalLaunchesForAllActionsUsingPartOfWeekAndLocationDecay;
	int _totalLaunchesForAllActionsUsingPartOfWeekAndTimeDecay;
	int _totalLaunchesForAllActionsUsingPartOfWeekDecay;
	int _totalLaunchesForAllActionsUsingPreviousLocationAndCoreMotionDecay;
	int _totalLaunchesForAllActionsUsingPreviousLocationAndLocationDecay;
	int _totalLaunchesForAllActionsUsingPreviousLocationDecay;
	int _totalLaunchesForAllActionsUsingTimeAndDayAndLocationDecay;
	int _totalLaunchesForAllActionsUsingTimeAndDayDecay;
	int _totalLaunchesForAllActionsUsingTimeAndLocationDecay;
	int _totalLaunchesForAllActionsUsingTimeAndPreviousLocationDecay;
	int _totalLaunchesForAllActionsUsingTimeDecay;
	int _totalLaunchesForSlotUsingCoreMotionDecay;
	int _totalLaunchesForSlotUsingDayAndLocationDecay;
	int _totalLaunchesForSlotUsingDayAndPreviousLocationDecay;
	int _totalLaunchesForSlotUsingDayOfWeekDecay;
	int _totalLaunchesForSlotUsingLocationDecay;
	int _totalLaunchesForSlotUsingPartOfWeekAndLocationDecay;
	int _totalLaunchesForSlotUsingPartOfWeekAndTimeDecay;
	int _totalLaunchesForSlotUsingPartOfWeekDecay;
	int _totalLaunchesForSlotUsingPreviousLocationAndCoreMotionDecay;
	int _totalLaunchesForSlotUsingPreviousLocationAndLocationDecay;
	int _totalLaunchesForSlotUsingPreviousLocationDecay;
	int _totalLaunchesForSlotUsingTimeAndDayAndLocationDecay;
	int _totalLaunchesForSlotUsingTimeAndDayDecay;
	int _totalLaunchesForSlotUsingTimeAndLocationDecay;
	int _totalLaunchesForSlotUsingTimeAndPreviousLocationDecay;
	int _totalLaunchesForSlotUsingTimeDecay;
	int _totalNumberOfAirplaneModeLaunches;
	int _totalNumberOfCoreMotionLaunches;
	int _totalNumberOfLaunches;
	int _totalNumberOfSSIDLaunches;
	int _totalNumberOfSpotlightLaunches;
	int _totalNumberOfTrendingLaunches;
	int _trendingGenrePopularity;
	int _trendingPopularity;
	int _unlockTime;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInstallAge; 
@property (assign,nonatomic) int installAge;                                                                         //@synthesize installAge=_installAge - In the implementation block
@property (assign,nonatomic) BOOL hasLastSpotlightLaunchAge; 
@property (assign,nonatomic) int lastSpotlightLaunchAge;                                                             //@synthesize lastSpotlightLaunchAge=_lastSpotlightLaunchAge - In the implementation block
@property (assign,nonatomic) BOOL hasLastLaunchAge; 
@property (assign,nonatomic) int lastLaunchAge;                                                                      //@synthesize lastLaunchAge=_lastLaunchAge - In the implementation block
@property (assign,nonatomic) BOOL hasMedianSecondsBetweenLaunches; 
@property (assign,nonatomic) int medianSecondsBetweenLaunches;                                                       //@synthesize medianSecondsBetweenLaunches=_medianSecondsBetweenLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAverageSecondsBetweenLaunches; 
@property (assign,nonatomic) int averageSecondsBetweenLaunches;                                                      //@synthesize averageSecondsBetweenLaunches=_averageSecondsBetweenLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasUnlockTime; 
@property (assign,nonatomic) int unlockTime;                                                                         //@synthesize unlockTime=_unlockTime - In the implementation block
@property (assign,nonatomic) BOOL hasAppInFolder; 
@property (assign,nonatomic) int appInFolder;                                                                        //@synthesize appInFolder=_appInFolder - In the implementation block
@property (assign,nonatomic) BOOL hasFolderPage; 
@property (assign,nonatomic) int folderPage;                                                                         //@synthesize folderPage=_folderPage - In the implementation block
@property (assign,nonatomic) BOOL hasSpringBoardPage; 
@property (assign,nonatomic) int springBoardPage;                                                                    //@synthesize springBoardPage=_springBoardPage - In the implementation block
@property (assign,nonatomic) BOOL hasOnSpringBoardDock; 
@property (assign,nonatomic) int onSpringBoardDock;                                                                  //@synthesize onSpringBoardDock=_onSpringBoardDock - In the implementation block
@property (assign,nonatomic) BOOL hasFeedback; 
@property (assign,nonatomic) int feedback;                                                                           //@synthesize feedback=_feedback - In the implementation block
@property (assign,nonatomic) BOOL hasFeedbackConfirms; 
@property (assign,nonatomic) int feedbackConfirms;                                                                   //@synthesize feedbackConfirms=_feedbackConfirms - In the implementation block
@property (assign,nonatomic) BOOL hasFeedbackRejects; 
@property (assign,nonatomic) int feedbackRejects;                                                                    //@synthesize feedbackRejects=_feedbackRejects - In the implementation block
@property (assign,nonatomic) BOOL hasAPRExplicitConfirmRatio; 
@property (assign,nonatomic) int aPRExplicitConfirmRatio;                                                            //@synthesize aPRExplicitConfirmRatio=_aPRExplicitConfirmRatio - In the implementation block
@property (assign,nonatomic) BOOL hasAPRExplicitRejectRatio; 
@property (assign,nonatomic) int aPRExplicitRejectRatio;                                                             //@synthesize aPRExplicitRejectRatio=_aPRExplicitRejectRatio - In the implementation block
@property (assign,nonatomic) BOOL hasAPRImplicitConfirmRatio; 
@property (assign,nonatomic) int aPRImplicitConfirmRatio;                                                            //@synthesize aPRImplicitConfirmRatio=_aPRImplicitConfirmRatio - In the implementation block
@property (assign,nonatomic) BOOL hasAPRImplicitRejectRatio; 
@property (assign,nonatomic) int aPRImplicitRejectRatio;                                                             //@synthesize aPRImplicitRejectRatio=_aPRImplicitRejectRatio - In the implementation block
@property (assign,nonatomic) BOOL hasAPRSiriKitIntentsRatio; 
@property (assign,nonatomic) int aPRSiriKitIntentsRatio;                                                             //@synthesize aPRSiriKitIntentsRatio=_aPRSiriKitIntentsRatio - In the implementation block
@property (assign,nonatomic) BOOL hasAPRNonSiriKitIntentsRatio; 
@property (assign,nonatomic) int aPRNonSiriKitIntentsRatio;                                                          //@synthesize aPRNonSiriKitIntentsRatio=_aPRNonSiriKitIntentsRatio - In the implementation block
@property (assign,nonatomic) BOOL hasAPRTotalExplicitConfirms; 
@property (assign,nonatomic) int aPRTotalExplicitConfirms;                                                           //@synthesize aPRTotalExplicitConfirms=_aPRTotalExplicitConfirms - In the implementation block
@property (assign,nonatomic) BOOL hasAPRTotalExplicitRejects; 
@property (assign,nonatomic) int aPRTotalExplicitRejects;                                                            //@synthesize aPRTotalExplicitRejects=_aPRTotalExplicitRejects - In the implementation block
@property (assign,nonatomic) BOOL hasAPRTotalImplicitConfirms; 
@property (assign,nonatomic) int aPRTotalImplicitConfirms;                                                           //@synthesize aPRTotalImplicitConfirms=_aPRTotalImplicitConfirms - In the implementation block
@property (assign,nonatomic) BOOL hasAPRTotalImplicitRejects; 
@property (assign,nonatomic) int aPRTotalImplicitRejects;                                                            //@synthesize aPRTotalImplicitRejects=_aPRTotalImplicitRejects - In the implementation block
@property (assign,nonatomic) BOOL hasAPRTotalSiriKitIntents; 
@property (assign,nonatomic) int aPRTotalSiriKitIntents;                                                             //@synthesize aPRTotalSiriKitIntents=_aPRTotalSiriKitIntents - In the implementation block
@property (assign,nonatomic) BOOL hasAPRTotalNonSiriKitIntents; 
@property (assign,nonatomic) int aPRTotalNonSiriKitIntents;                                                          //@synthesize aPRTotalNonSiriKitIntents=_aPRTotalNonSiriKitIntents - In the implementation block
@property (assign,nonatomic) BOOL hasLaunchTimePopularity; 
@property (assign,nonatomic) int launchTimePopularity;                                                               //@synthesize launchTimePopularity=_launchTimePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasTimeOfDayPopularity; 
@property (assign,nonatomic) int timeOfDayPopularity;                                                                //@synthesize timeOfDayPopularity=_timeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasCoarseTimeOfDayPopularity; 
@property (assign,nonatomic) int coarseTimeOfDayPopularity;                                                          //@synthesize coarseTimeOfDayPopularity=_coarseTimeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasLaunchPopularity; 
@property (assign,nonatomic) int launchPopularity;                                                                   //@synthesize launchPopularity=_launchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSpotlightLaunchTimePopularity; 
@property (assign,nonatomic) int spotlightLaunchTimePopularity;                                                      //@synthesize spotlightLaunchTimePopularity=_spotlightLaunchTimePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSpotlightTimeOfDayPopularity; 
@property (assign,nonatomic) int spotlightTimeOfDayPopularity;                                                       //@synthesize spotlightTimeOfDayPopularity=_spotlightTimeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSpotlightLaunchPopularity; 
@property (assign,nonatomic) int spotlightLaunchPopularity;                                                          //@synthesize spotlightLaunchPopularity=_spotlightLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasDayZeroPoints; 
@property (assign,nonatomic) int dayZeroPoints;                                                                      //@synthesize dayZeroPoints=_dayZeroPoints - In the implementation block
@property (assign,nonatomic) BOOL hasStaticAppPoints; 
@property (assign,nonatomic) int staticAppPoints;                                                                    //@synthesize staticAppPoints=_staticAppPoints - In the implementation block
@property (assign,nonatomic) BOOL hasLaunchDayOfWeekPopularity; 
@property (assign,nonatomic) int launchDayOfWeekPopularity;                                                          //@synthesize launchDayOfWeekPopularity=_launchDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfWeekPopularity; 
@property (assign,nonatomic) int dayOfWeekPopularity;                                                                //@synthesize dayOfWeekPopularity=_dayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasLaunchSequencePopularity; 
@property (assign,nonatomic) int launchSequencePopularity;                                                           //@synthesize launchSequencePopularity=_launchSequencePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasLaunchLocationPopularity; 
@property (assign,nonatomic) int launchLocationPopularity;                                                           //@synthesize launchLocationPopularity=_launchLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasEntropyLaunchPopularity; 
@property (assign,nonatomic) int entropyLaunchPopularity;                                                            //@synthesize entropyLaunchPopularity=_entropyLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasEntropyDayOfWeekPopularity; 
@property (assign,nonatomic) int entropyDayOfWeekPopularity;                                                         //@synthesize entropyDayOfWeekPopularity=_entropyDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasEntropyDayOfWeekPopularityByDay; 
@property (assign,nonatomic) int entropyDayOfWeekPopularityByDay;                                                    //@synthesize entropyDayOfWeekPopularityByDay=_entropyDayOfWeekPopularityByDay - In the implementation block
@property (assign,nonatomic) BOOL hasEntropyDayOfWeekPopularityByApp; 
@property (assign,nonatomic) int entropyDayOfWeekPopularityByApp;                                                    //@synthesize entropyDayOfWeekPopularityByApp=_entropyDayOfWeekPopularityByApp - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceDayOfWeekToLaunchPopularity; 
@property (assign,nonatomic) int distanceDayOfWeekToLaunchPopularity;                                                //@synthesize distanceDayOfWeekToLaunchPopularity=_distanceDayOfWeekToLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasEntropyTrendingPopularity; 
@property (assign,nonatomic) int entropyTrendingPopularity;                                                          //@synthesize entropyTrendingPopularity=_entropyTrendingPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceTrendingToLaunchPopularity; 
@property (assign,nonatomic) int distanceTrendingToLaunchPopularity;                                                 //@synthesize distanceTrendingToLaunchPopularity=_distanceTrendingToLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasEntropySSIDPopularity; 
@property (assign,nonatomic) int entropySSIDPopularity;                                                              //@synthesize entropySSIDPopularity=_entropySSIDPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasEntropySSIDPopularityBySSID; 
@property (assign,nonatomic) int entropySSIDPopularityBySSID;                                                        //@synthesize entropySSIDPopularityBySSID=_entropySSIDPopularityBySSID - In the implementation block
@property (assign,nonatomic) BOOL hasEntropySSIDPopularityByApp; 
@property (assign,nonatomic) int entropySSIDPopularityByApp;                                                         //@synthesize entropySSIDPopularityByApp=_entropySSIDPopularityByApp - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceSSIDToLaunchPopularity; 
@property (assign,nonatomic) int distanceSSIDToLaunchPopularity;                                                     //@synthesize distanceSSIDToLaunchPopularity=_distanceSSIDToLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppCount; 
@property (assign,nonatomic) int appCount;                                                                           //@synthesize appCount=_appCount - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceToExplicitLaunchPrediction; 
@property (assign,nonatomic) int distanceToExplicitLaunchPrediction;                                                 //@synthesize distanceToExplicitLaunchPrediction=_distanceToExplicitLaunchPrediction - In the implementation block
@property (assign,nonatomic) BOOL hasSiriKitIntentParzen; 
@property (assign,nonatomic) int siriKitIntentParzen;                                                                //@synthesize siriKitIntentParzen=_siriKitIntentParzen - In the implementation block
@property (assign,nonatomic) BOOL hasNonSiriKitIntentParzen; 
@property (assign,nonatomic) int nonSiriKitIntentParzen;                                                             //@synthesize nonSiriKitIntentParzen=_nonSiriKitIntentParzen - In the implementation block
@property (assign,nonatomic) BOOL hasAppDailyDose; 
@property (assign,nonatomic) int appDailyDose;                                                                       //@synthesize appDailyDose=_appDailyDose - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentDose; 
@property (assign,nonatomic) int currentDose;                                                                        //@synthesize currentDose=_currentDose - In the implementation block
@property (assign,nonatomic) BOOL hasAppDailyDoseRemaining; 
@property (assign,nonatomic) int appDailyDoseRemaining;                                                              //@synthesize appDailyDoseRemaining=_appDailyDoseRemaining - In the implementation block
@property (assign,nonatomic) BOOL hasAppDailyDoseSmoothedError; 
@property (assign,nonatomic) int appDailyDoseSmoothedError;                                                          //@synthesize appDailyDoseSmoothedError=_appDailyDoseSmoothedError - In the implementation block
@property (assign,nonatomic) BOOL hasTotalNumberOfLaunches; 
@property (assign,nonatomic) int totalNumberOfLaunches;                                                              //@synthesize totalNumberOfLaunches=_totalNumberOfLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTotalNumberOfSpotlightLaunches; 
@property (assign,nonatomic) int totalNumberOfSpotlightLaunches;                                                     //@synthesize totalNumberOfSpotlightLaunches=_totalNumberOfSpotlightLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAirplaneModePopularity; 
@property (assign,nonatomic) int airplaneModePopularity;                                                             //@synthesize airplaneModePopularity=_airplaneModePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasTotalNumberOfAirplaneModeLaunches; 
@property (assign,nonatomic) int totalNumberOfAirplaneModeLaunches;                                                  //@synthesize totalNumberOfAirplaneModeLaunches=_totalNumberOfAirplaneModeLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasTrendingPopularity; 
@property (assign,nonatomic) int trendingPopularity;                                                                 //@synthesize trendingPopularity=_trendingPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasTotalNumberOfTrendingLaunches; 
@property (assign,nonatomic) int totalNumberOfTrendingLaunches;                                                      //@synthesize totalNumberOfTrendingLaunches=_totalNumberOfTrendingLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasSSIDPopularity; 
@property (assign,nonatomic) int sSIDPopularity;                                                                     //@synthesize sSIDPopularity=_sSIDPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasTotalNumberOfSSIDLaunches; 
@property (assign,nonatomic) int totalNumberOfSSIDLaunches;                                                          //@synthesize totalNumberOfSSIDLaunches=_totalNumberOfSSIDLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasOnWifi; 
@property (assign,nonatomic) int onWifi;                                                                             //@synthesize onWifi=_onWifi - In the implementation block
@property (assign,nonatomic) BOOL hasCoreMotionPopularity; 
@property (assign,nonatomic) int coreMotionPopularity;                                                               //@synthesize coreMotionPopularity=_coreMotionPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasTotalNumberOfCoreMotionLaunches; 
@property (assign,nonatomic) int totalNumberOfCoreMotionLaunches;                                                    //@synthesize totalNumberOfCoreMotionLaunches=_totalNumberOfCoreMotionLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasMagicalMomentsConfidence; 
@property (assign,nonatomic) int magicalMomentsConfidence;                                                           //@synthesize magicalMomentsConfidence=_magicalMomentsConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasMagicalMomentsPredictionReason; 
@property (assign,nonatomic) int magicalMomentsPredictionReason;                                                     //@synthesize magicalMomentsPredictionReason=_magicalMomentsPredictionReason - In the implementation block
@property (assign,nonatomic) BOOL hasHeroAppConfidence; 
@property (assign,nonatomic) int heroAppConfidence;                                                                  //@synthesize heroAppConfidence=_heroAppConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasHeroAppPredictionReason; 
@property (assign,nonatomic) int heroAppPredictionReason;                                                            //@synthesize heroAppPredictionReason=_heroAppPredictionReason - In the implementation block
@property (assign,nonatomic) BOOL hasMagicalMomentsHeroAppPredictionIndex; 
@property (assign,nonatomic) int magicalMomentsHeroAppPredictionIndex;                                               //@synthesize magicalMomentsHeroAppPredictionIndex=_magicalMomentsHeroAppPredictionIndex - In the implementation block
@property (assign,nonatomic) BOOL hasMagicalMomentsHeroAppPredictionTotalPredictions; 
@property (assign,nonatomic) int magicalMomentsHeroAppPredictionTotalPredictions;                                    //@synthesize magicalMomentsHeroAppPredictionTotalPredictions=_magicalMomentsHeroAppPredictionTotalPredictions - In the implementation block
@property (assign,nonatomic) BOOL hasMostRecentNotificationAge; 
@property (assign,nonatomic) int mostRecentNotificationAge;                                                          //@synthesize mostRecentNotificationAge=_mostRecentNotificationAge - In the implementation block
@property (assign,nonatomic) BOOL hasAppPreferenceBundleBoost; 
@property (assign,nonatomic) int appPreferenceBundleBoost;                                                           //@synthesize appPreferenceBundleBoost=_appPreferenceBundleBoost - In the implementation block
@property (assign,nonatomic) BOOL hasGenreTimeOfDayPopularity; 
@property (assign,nonatomic) int genreTimeOfDayPopularity;                                                           //@synthesize genreTimeOfDayPopularity=_genreTimeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasGenreSequencePopularity; 
@property (assign,nonatomic) int genreSequencePopularity;                                                            //@synthesize genreSequencePopularity=_genreSequencePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasGenreDayOfWeekPopularity; 
@property (assign,nonatomic) int genreDayOfWeekPopularity;                                                           //@synthesize genreDayOfWeekPopularity=_genreDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasGenreSpotlightLaunchPopularity; 
@property (assign,nonatomic) int genreSpotlightLaunchPopularity;                                                     //@synthesize genreSpotlightLaunchPopularity=_genreSpotlightLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasTrendingGenrePopularity; 
@property (assign,nonatomic) int trendingGenrePopularity;                                                            //@synthesize trendingGenrePopularity=_trendingGenrePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasGenreAirplaneModePopularity; 
@property (assign,nonatomic) int genreAirplaneModePopularity;                                                        //@synthesize genreAirplaneModePopularity=_genreAirplaneModePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasGenreDailyDoseRemaining; 
@property (assign,nonatomic) int genreDailyDoseRemaining;                                                            //@synthesize genreDailyDoseRemaining=_genreDailyDoseRemaining - In the implementation block
@property (assign,nonatomic) BOOL hasGenreLocationPopularity; 
@property (assign,nonatomic) int genreLocationPopularity;                                                            //@synthesize genreLocationPopularity=_genreLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasGenreSSIDPopularity; 
@property (assign,nonatomic) int genreSSIDPopularity;                                                                //@synthesize genreSSIDPopularity=_genreSSIDPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasApp2VecClusterTimeOfDayPopularity; 
@property (assign,nonatomic) int app2VecClusterTimeOfDayPopularity;                                                  //@synthesize app2VecClusterTimeOfDayPopularity=_app2VecClusterTimeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasApp2VecClusterSequencePopularity; 
@property (assign,nonatomic) int app2VecClusterSequencePopularity;                                                   //@synthesize app2VecClusterSequencePopularity=_app2VecClusterSequencePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasApp2VecClusterDayOfWeekPopularity; 
@property (assign,nonatomic) int app2VecClusterDayOfWeekPopularity;                                                  //@synthesize app2VecClusterDayOfWeekPopularity=_app2VecClusterDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasApp2VecClusterTrendingPopularity; 
@property (assign,nonatomic) int app2VecClusterTrendingPopularity;                                                   //@synthesize app2VecClusterTrendingPopularity=_app2VecClusterTrendingPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasApp2VecClusterLocationPopularity; 
@property (assign,nonatomic) int app2VecClusterLocationPopularity;                                                   //@synthesize app2VecClusterLocationPopularity=_app2VecClusterLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasApp2VecClusterCount; 
@property (assign,nonatomic) int app2VecClusterCount;                                                                //@synthesize app2VecClusterCount=_app2VecClusterCount - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsMedia; 
@property (assign,nonatomic) int supportsMedia;                                                                      //@synthesize supportsMedia=_supportsMedia - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentLaunchPopularity; 
@property (assign,nonatomic) int appIntentLaunchPopularity;                                                          //@synthesize appIntentLaunchPopularity=_appIntentLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentLaunchTimePopularity; 
@property (assign,nonatomic) int appIntentLaunchTimePopularity;                                                      //@synthesize appIntentLaunchTimePopularity=_appIntentLaunchTimePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentTimeOfDayPopularity; 
@property (assign,nonatomic) int appIntentTimeOfDayPopularity;                                                       //@synthesize appIntentTimeOfDayPopularity=_appIntentTimeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentLastLaunchAge; 
@property (assign,nonatomic) int appIntentLastLaunchAge;                                                             //@synthesize appIntentLastLaunchAge=_appIntentLastLaunchAge - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentAverageSecondsBetweenAppActions; 
@property (assign,nonatomic) int appIntentAverageSecondsBetweenAppActions;                                           //@synthesize appIntentAverageSecondsBetweenAppActions=_appIntentAverageSecondsBetweenAppActions - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentMedianSecondsBetweenAppActions; 
@property (assign,nonatomic) int appIntentMedianSecondsBetweenAppActions;                                            //@synthesize appIntentMedianSecondsBetweenAppActions=_appIntentMedianSecondsBetweenAppActions - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentLaunchDayOfWeekPopularity; 
@property (assign,nonatomic) int appIntentLaunchDayOfWeekPopularity;                                                 //@synthesize appIntentLaunchDayOfWeekPopularity=_appIntentLaunchDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentDayOfWeekPopularity; 
@property (assign,nonatomic) int appIntentDayOfWeekPopularity;                                                       //@synthesize appIntentDayOfWeekPopularity=_appIntentDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentCoarseTimeOfDayPopularity; 
@property (assign,nonatomic) int appIntentCoarseTimeOfDayPopularity;                                                 //@synthesize appIntentCoarseTimeOfDayPopularity=_appIntentCoarseTimeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentTotalNumberOfLaunches; 
@property (assign,nonatomic) int appIntentTotalNumberOfLaunches;                                                     //@synthesize appIntentTotalNumberOfLaunches=_appIntentTotalNumberOfLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentUnlockTime; 
@property (assign,nonatomic) int appIntentUnlockTime;                                                                //@synthesize appIntentUnlockTime=_appIntentUnlockTime - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentAirplaneModePopularity; 
@property (assign,nonatomic) int appIntentAirplaneModePopularity;                                                    //@synthesize appIntentAirplaneModePopularity=_appIntentAirplaneModePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentTotalNumberOfAirplaneModeLaunches; 
@property (assign,nonatomic) int appIntentTotalNumberOfAirplaneModeLaunches;                                         //@synthesize appIntentTotalNumberOfAirplaneModeLaunches=_appIntentTotalNumberOfAirplaneModeLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentSSIDPopularity; 
@property (assign,nonatomic) int appIntentSSIDPopularity;                                                            //@synthesize appIntentSSIDPopularity=_appIntentSSIDPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentTotalNumberOfSSIDLaunches; 
@property (assign,nonatomic) int appIntentTotalNumberOfSSIDLaunches;                                                 //@synthesize appIntentTotalNumberOfSSIDLaunches=_appIntentTotalNumberOfSSIDLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentCoreMotionPopularity; 
@property (assign,nonatomic) int appIntentCoreMotionPopularity;                                                      //@synthesize appIntentCoreMotionPopularity=_appIntentCoreMotionPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentTotalNumberOfCoreMotionLaunches; 
@property (assign,nonatomic) int appIntentTotalNumberOfCoreMotionLaunches;                                           //@synthesize appIntentTotalNumberOfCoreMotionLaunches=_appIntentTotalNumberOfCoreMotionLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentTrendingPopularity; 
@property (assign,nonatomic) int appIntentTrendingPopularity;                                                        //@synthesize appIntentTrendingPopularity=_appIntentTrendingPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentTotalNumberOfTrendingLaunches; 
@property (assign,nonatomic) int appIntentTotalNumberOfTrendingLaunches;                                             //@synthesize appIntentTotalNumberOfTrendingLaunches=_appIntentTotalNumberOfTrendingLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentLaunchLocationPopularity; 
@property (assign,nonatomic) int appIntentLaunchLocationPopularity;                                                  //@synthesize appIntentLaunchLocationPopularity=_appIntentLaunchLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentDayZeroPoints; 
@property (assign,nonatomic) int appIntentDayZeroPoints;                                                             //@synthesize appIntentDayZeroPoints=_appIntentDayZeroPoints - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentStaticPoints; 
@property (assign,nonatomic) int appIntentStaticPoints;                                                              //@synthesize appIntentStaticPoints=_appIntentStaticPoints - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentLaunchSequencePopularity; 
@property (assign,nonatomic) int appIntentLaunchSequencePopularity;                                                  //@synthesize appIntentLaunchSequencePopularity=_appIntentLaunchSequencePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentAppLaunchSequencePopularity; 
@property (assign,nonatomic) int appIntentAppLaunchSequencePopularity;                                               //@synthesize appIntentAppLaunchSequencePopularity=_appIntentAppLaunchSequencePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentEntropyLaunchPopularity; 
@property (assign,nonatomic) int appIntentEntropyLaunchPopularity;                                                   //@synthesize appIntentEntropyLaunchPopularity=_appIntentEntropyLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentEntropyDayOfWeekPopularity; 
@property (assign,nonatomic) int appIntentEntropyDayOfWeekPopularity;                                                //@synthesize appIntentEntropyDayOfWeekPopularity=_appIntentEntropyDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentEntropyDayOfWeekPopularityByDay; 
@property (assign,nonatomic) int appIntentEntropyDayOfWeekPopularityByDay;                                           //@synthesize appIntentEntropyDayOfWeekPopularityByDay=_appIntentEntropyDayOfWeekPopularityByDay - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentEntropyDayOfWeekPopularityByAppIntent; 
@property (assign,nonatomic) int appIntentEntropyDayOfWeekPopularityByAppIntent;                                     //@synthesize appIntentEntropyDayOfWeekPopularityByAppIntent=_appIntentEntropyDayOfWeekPopularityByAppIntent - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentDistanceDayOfWeekToLaunchPopularity; 
@property (assign,nonatomic) int appIntentDistanceDayOfWeekToLaunchPopularity;                                       //@synthesize appIntentDistanceDayOfWeekToLaunchPopularity=_appIntentDistanceDayOfWeekToLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentEntropyTrendingPopularity; 
@property (assign,nonatomic) int appIntentEntropyTrendingPopularity;                                                 //@synthesize appIntentEntropyTrendingPopularity=_appIntentEntropyTrendingPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentDistanceTrendingToLaunchPopularity; 
@property (assign,nonatomic) int appIntentDistanceTrendingToLaunchPopularity;                                        //@synthesize appIntentDistanceTrendingToLaunchPopularity=_appIntentDistanceTrendingToLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentEntropySSIDPopularity; 
@property (assign,nonatomic) int appIntentEntropySSIDPopularity;                                                     //@synthesize appIntentEntropySSIDPopularity=_appIntentEntropySSIDPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentEntropySSIDPopularityBySSID; 
@property (assign,nonatomic) int appIntentEntropySSIDPopularityBySSID;                                               //@synthesize appIntentEntropySSIDPopularityBySSID=_appIntentEntropySSIDPopularityBySSID - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentEntropySSIDPopularityByAppIntent; 
@property (assign,nonatomic) int appIntentEntropySSIDPopularityByAppIntent;                                          //@synthesize appIntentEntropySSIDPopularityByAppIntent=_appIntentEntropySSIDPopularityByAppIntent - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentDistanceSSIDToLaunchPopularity; 
@property (assign,nonatomic) int appIntentDistanceSSIDToLaunchPopularity;                                            //@synthesize appIntentDistanceSSIDToLaunchPopularity=_appIntentDistanceSSIDToLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentCount; 
@property (assign,nonatomic) int appIntentCount;                                                                     //@synthesize appIntentCount=_appIntentCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppActionConfirmEvents; 
@property (assign,nonatomic) int appActionConfirmEvents;                                                             //@synthesize appActionConfirmEvents=_appActionConfirmEvents - In the implementation block
@property (assign,nonatomic) BOOL hasAppActionRejectEvents; 
@property (assign,nonatomic) int appActionRejectEvents;                                                              //@synthesize appActionRejectEvents=_appActionRejectEvents - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAppActionConfirmEvents; 
@property (assign,nonatomic) int totalAppActionConfirmEvents;                                                        //@synthesize totalAppActionConfirmEvents=_totalAppActionConfirmEvents - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAppActionRejectEvents; 
@property (assign,nonatomic) int totalAppActionRejectEvents;                                                         //@synthesize totalAppActionRejectEvents=_totalAppActionRejectEvents - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllActionsConfirmEvents; 
@property (assign,nonatomic) int appForAllActionsConfirmEvents;                                                      //@synthesize appForAllActionsConfirmEvents=_appForAllActionsConfirmEvents - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllActionsRejectEvents; 
@property (assign,nonatomic) int appForAllActionsRejectEvents;                                                       //@synthesize appForAllActionsRejectEvents=_appForAllActionsRejectEvents - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAppForAllActionsConfirmEvents; 
@property (assign,nonatomic) int totalAppForAllActionsConfirmEvents;                                                 //@synthesize totalAppForAllActionsConfirmEvents=_totalAppForAllActionsConfirmEvents - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAppForAllActionsRejectEvents; 
@property (assign,nonatomic) int totalAppForAllActionsRejectEvents;                                                  //@synthesize totalAppForAllActionsRejectEvents=_totalAppForAllActionsRejectEvents - In the implementation block
@property (assign,nonatomic) BOOL hasActionHeuristicConfirmEvents; 
@property (assign,nonatomic) int actionHeuristicConfirmEvents;                                                       //@synthesize actionHeuristicConfirmEvents=_actionHeuristicConfirmEvents - In the implementation block
@property (assign,nonatomic) BOOL hasActionHeuristicRejectEvents; 
@property (assign,nonatomic) int actionHeuristicRejectEvents;                                                        //@synthesize actionHeuristicRejectEvents=_actionHeuristicRejectEvents - In the implementation block
@property (assign,nonatomic) BOOL hasTotalActionHeuristicConfirmEvents; 
@property (assign,nonatomic) int totalActionHeuristicConfirmEvents;                                                  //@synthesize totalActionHeuristicConfirmEvents=_totalActionHeuristicConfirmEvents - In the implementation block
@property (assign,nonatomic) BOOL hasTotalActionHeuristicRejectEvents; 
@property (assign,nonatomic) int totalActionHeuristicRejectEvents;                                                   //@synthesize totalActionHeuristicRejectEvents=_totalActionHeuristicRejectEvents - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsLaunchPopularity; 
@property (assign,nonatomic) int appForAllIntentsLaunchPopularity;                                                   //@synthesize appForAllIntentsLaunchPopularity=_appForAllIntentsLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsLaunchTimePopularity; 
@property (assign,nonatomic) int appForAllIntentsLaunchTimePopularity;                                               //@synthesize appForAllIntentsLaunchTimePopularity=_appForAllIntentsLaunchTimePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsTimeOfDayPopularity; 
@property (assign,nonatomic) int appForAllIntentsTimeOfDayPopularity;                                                //@synthesize appForAllIntentsTimeOfDayPopularity=_appForAllIntentsTimeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsLaunchDayOfWeekPopularity; 
@property (assign,nonatomic) int appForAllIntentsLaunchDayOfWeekPopularity;                                          //@synthesize appForAllIntentsLaunchDayOfWeekPopularity=_appForAllIntentsLaunchDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsDayOfWeekPopularity; 
@property (assign,nonatomic) int appForAllIntentsDayOfWeekPopularity;                                                //@synthesize appForAllIntentsDayOfWeekPopularity=_appForAllIntentsDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsCoarseTimeOfDayPopularity; 
@property (assign,nonatomic) int appForAllIntentsCoarseTimeOfDayPopularity;                                          //@synthesize appForAllIntentsCoarseTimeOfDayPopularity=_appForAllIntentsCoarseTimeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsTotalNumberOfLaunches; 
@property (assign,nonatomic) int appForAllIntentsTotalNumberOfLaunches;                                              //@synthesize appForAllIntentsTotalNumberOfLaunches=_appForAllIntentsTotalNumberOfLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsUnlockTime; 
@property (assign,nonatomic) int appForAllIntentsUnlockTime;                                                         //@synthesize appForAllIntentsUnlockTime=_appForAllIntentsUnlockTime - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsAirplaneModePopularity; 
@property (assign,nonatomic) int appForAllIntentsAirplaneModePopularity;                                             //@synthesize appForAllIntentsAirplaneModePopularity=_appForAllIntentsAirplaneModePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsTotalNumberOfAirplaneModeLaunches; 
@property (assign,nonatomic) int appForAllIntentsTotalNumberOfAirplaneModeLaunches;                                  //@synthesize appForAllIntentsTotalNumberOfAirplaneModeLaunches=_appForAllIntentsTotalNumberOfAirplaneModeLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsSSIDPopularity; 
@property (assign,nonatomic) int appForAllIntentsSSIDPopularity;                                                     //@synthesize appForAllIntentsSSIDPopularity=_appForAllIntentsSSIDPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsTotalNumberOfSSIDLaunches; 
@property (assign,nonatomic) int appForAllIntentsTotalNumberOfSSIDLaunches;                                          //@synthesize appForAllIntentsTotalNumberOfSSIDLaunches=_appForAllIntentsTotalNumberOfSSIDLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsTrendingPopularity; 
@property (assign,nonatomic) int appForAllIntentsTrendingPopularity;                                                 //@synthesize appForAllIntentsTrendingPopularity=_appForAllIntentsTrendingPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsTotalNumberOfTrendingLaunches; 
@property (assign,nonatomic) int appForAllIntentsTotalNumberOfTrendingLaunches;                                      //@synthesize appForAllIntentsTotalNumberOfTrendingLaunches=_appForAllIntentsTotalNumberOfTrendingLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsLaunchLocationPopularity; 
@property (assign,nonatomic) int appForAllIntentsLaunchLocationPopularity;                                           //@synthesize appForAllIntentsLaunchLocationPopularity=_appForAllIntentsLaunchLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsEntropyLaunchPopularity; 
@property (assign,nonatomic) int appForAllIntentsEntropyLaunchPopularity;                                            //@synthesize appForAllIntentsEntropyLaunchPopularity=_appForAllIntentsEntropyLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsEntropyDayOfWeekPopularity; 
@property (assign,nonatomic) int appForAllIntentsEntropyDayOfWeekPopularity;                                         //@synthesize appForAllIntentsEntropyDayOfWeekPopularity=_appForAllIntentsEntropyDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsEntropyDayOfWeekPopularityByDay; 
@property (assign,nonatomic) int appForAllIntentsEntropyDayOfWeekPopularityByDay;                                    //@synthesize appForAllIntentsEntropyDayOfWeekPopularityByDay=_appForAllIntentsEntropyDayOfWeekPopularityByDay - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsEntropyDayOfWeekPopularityByApp; 
@property (assign,nonatomic) int appForAllIntentsEntropyDayOfWeekPopularityByApp;                                    //@synthesize appForAllIntentsEntropyDayOfWeekPopularityByApp=_appForAllIntentsEntropyDayOfWeekPopularityByApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsDistanceDayOfWeekToLaunchPopularity; 
@property (assign,nonatomic) int appForAllIntentsDistanceDayOfWeekToLaunchPopularity;                                //@synthesize appForAllIntentsDistanceDayOfWeekToLaunchPopularity=_appForAllIntentsDistanceDayOfWeekToLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsEntropyTrendingPopularity; 
@property (assign,nonatomic) int appForAllIntentsEntropyTrendingPopularity;                                          //@synthesize appForAllIntentsEntropyTrendingPopularity=_appForAllIntentsEntropyTrendingPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsDistanceTrendingToLaunchPopularity; 
@property (assign,nonatomic) int appForAllIntentsDistanceTrendingToLaunchPopularity;                                 //@synthesize appForAllIntentsDistanceTrendingToLaunchPopularity=_appForAllIntentsDistanceTrendingToLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsEntropySSIDPopularity; 
@property (assign,nonatomic) int appForAllIntentsEntropySSIDPopularity;                                              //@synthesize appForAllIntentsEntropySSIDPopularity=_appForAllIntentsEntropySSIDPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsEntropySSIDPopularityBySSID; 
@property (assign,nonatomic) int appForAllIntentsEntropySSIDPopularityBySSID;                                        //@synthesize appForAllIntentsEntropySSIDPopularityBySSID=_appForAllIntentsEntropySSIDPopularityBySSID - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsEntropySSIDPopularityByApp; 
@property (assign,nonatomic) int appForAllIntentsEntropySSIDPopularityByApp;                                         //@synthesize appForAllIntentsEntropySSIDPopularityByApp=_appForAllIntentsEntropySSIDPopularityByApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsDistanceSSIDToLaunchPopularity; 
@property (assign,nonatomic) int appForAllIntentsDistanceSSIDToLaunchPopularity;                                     //@synthesize appForAllIntentsDistanceSSIDToLaunchPopularity=_appForAllIntentsDistanceSSIDToLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsCount; 
@property (assign,nonatomic) int appForAllIntentsCount;                                                              //@synthesize appForAllIntentsCount=_appForAllIntentsCount - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchPopularity; 
@property (assign,nonatomic) int slotLaunchPopularity;                                                               //@synthesize slotLaunchPopularity=_slotLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchTimePopularity; 
@property (assign,nonatomic) int slotLaunchTimePopularity;                                                           //@synthesize slotLaunchTimePopularity=_slotLaunchTimePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchCoreMotionPopularity; 
@property (assign,nonatomic) int slotLaunchCoreMotionPopularity;                                                     //@synthesize slotLaunchCoreMotionPopularity=_slotLaunchCoreMotionPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchPreviousLocationPopularity; 
@property (assign,nonatomic) int slotLaunchPreviousLocationPopularity;                                               //@synthesize slotLaunchPreviousLocationPopularity=_slotLaunchPreviousLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTimeOfDayPopularity; 
@property (assign,nonatomic) int slotTimeOfDayPopularity;                                                            //@synthesize slotTimeOfDayPopularity=_slotTimeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchDayOfWeekPopularity; 
@property (assign,nonatomic) int slotLaunchDayOfWeekPopularity;                                                      //@synthesize slotLaunchDayOfWeekPopularity=_slotLaunchDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotDayOfWeekPopularity; 
@property (assign,nonatomic) int slotDayOfWeekPopularity;                                                            //@synthesize slotDayOfWeekPopularity=_slotDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchCoarseTimePopularity; 
@property (assign,nonatomic) int slotLaunchCoarseTimePopularity;                                                     //@synthesize slotLaunchCoarseTimePopularity=_slotLaunchCoarseTimePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotCoarseTimeOfDayPopularity; 
@property (assign,nonatomic) int slotCoarseTimeOfDayPopularity;                                                      //@synthesize slotCoarseTimeOfDayPopularity=_slotCoarseTimeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotSecondsSinceLastSlot; 
@property (assign,nonatomic) int slotSecondsSinceLastSlot;                                                           //@synthesize slotSecondsSinceLastSlot=_slotSecondsSinceLastSlot - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchLocationPopularity; 
@property (assign,nonatomic) int slotLaunchLocationPopularity;                                                       //@synthesize slotLaunchLocationPopularity=_slotLaunchLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLocationPopularity; 
@property (assign,nonatomic) int slotLocationPopularity;                                                             //@synthesize slotLocationPopularity=_slotLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotNumberOfParameters; 
@property (assign,nonatomic) int slotNumberOfParameters;                                                             //@synthesize slotNumberOfParameters=_slotNumberOfParameters - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTotalNumberOfLaunchesForSlot; 
@property (assign,nonatomic) int slotTotalNumberOfLaunchesForSlot;                                                   //@synthesize slotTotalNumberOfLaunchesForSlot=_slotTotalNumberOfLaunchesForSlot - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTotalNumberOfLaunches; 
@property (assign,nonatomic) int slotTotalNumberOfLaunches;                                                          //@synthesize slotTotalNumberOfLaunches=_slotTotalNumberOfLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasSlotCount; 
@property (assign,nonatomic) int slotCount;                                                                          //@synthesize slotCount=_slotCount - In the implementation block
@property (assign,nonatomic) BOOL hasSlotNumSessionStartsForRootOfApp; 
@property (assign,nonatomic) int slotNumSessionStartsForRootOfApp;                                                   //@synthesize slotNumSessionStartsForRootOfApp=_slotNumSessionStartsForRootOfApp - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTotalNumSessionsForRootOfApp; 
@property (assign,nonatomic) int slotTotalNumSessionsForRootOfApp;                                                   //@synthesize slotTotalNumSessionsForRootOfApp=_slotTotalNumSessionsForRootOfApp - In the implementation block
@property (assign,nonatomic) BOOL hasSlotEntropyForSlotSet; 
@property (assign,nonatomic) int slotEntropyForSlotSet;                                                              //@synthesize slotEntropyForSlotSet=_slotEntropyForSlotSet - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTotalNumberOfLaunchesForSlotSet; 
@property (assign,nonatomic) int slotTotalNumberOfLaunchesForSlotSet;                                                //@synthesize slotTotalNumberOfLaunchesForSlotSet=_slotTotalNumberOfLaunchesForSlotSet - In the implementation block
@property (assign,nonatomic) BOOL hasSlotNumberOfUniqueDaysLaunchedForSlot; 
@property (assign,nonatomic) int slotNumberOfUniqueDaysLaunchedForSlot;                                              //@synthesize slotNumberOfUniqueDaysLaunchedForSlot=_slotNumberOfUniqueDaysLaunchedForSlot - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTotalNumberOfUniqueDaysLaunched; 
@property (assign,nonatomic) int slotTotalNumberOfUniqueDaysLaunched;                                                //@synthesize slotTotalNumberOfUniqueDaysLaunched=_slotTotalNumberOfUniqueDaysLaunched - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTimeOfDayBudgetMeanForSlot; 
@property (assign,nonatomic) int slotTimeOfDayBudgetMeanForSlot;                                                     //@synthesize slotTimeOfDayBudgetMeanForSlot=_slotTimeOfDayBudgetMeanForSlot - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTimeOfDayBudgetStdDevForSlot; 
@property (assign,nonatomic) int slotTimeOfDayBudgetStdDevForSlot;                                                   //@synthesize slotTimeOfDayBudgetStdDevForSlot=_slotTimeOfDayBudgetStdDevForSlot - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTodaysTimeOfDayBudgetForSlot; 
@property (assign,nonatomic) int slotTodaysTimeOfDayBudgetForSlot;                                                   //@synthesize slotTodaysTimeOfDayBudgetForSlot=_slotTodaysTimeOfDayBudgetForSlot - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTimeAndDayPopularity; 
@property (assign,nonatomic) int slotTimeAndDayPopularity;                                                           //@synthesize slotTimeAndDayPopularity=_slotTimeAndDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTimeAndLocationPopularity; 
@property (assign,nonatomic) int slotTimeAndLocationPopularity;                                                      //@synthesize slotTimeAndLocationPopularity=_slotTimeAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotDayAndLocationPopularity; 
@property (assign,nonatomic) int slotDayAndLocationPopularity;                                                       //@synthesize slotDayAndLocationPopularity=_slotDayAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTimeAndDayAndLocationPopularity; 
@property (assign,nonatomic) int slotTimeAndDayAndLocationPopularity;                                                //@synthesize slotTimeAndDayAndLocationPopularity=_slotTimeAndDayAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotCoreMotionPopularity; 
@property (assign,nonatomic) int slotCoreMotionPopularity;                                                           //@synthesize slotCoreMotionPopularity=_slotCoreMotionPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotPreviousLocationPopularity; 
@property (assign,nonatomic) int slotPreviousLocationPopularity;                                                     //@synthesize slotPreviousLocationPopularity=_slotPreviousLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotPreviousLocationAndCoreMotionPopularity; 
@property (assign,nonatomic) int slotPreviousLocationAndCoreMotionPopularity;                                        //@synthesize slotPreviousLocationAndCoreMotionPopularity=_slotPreviousLocationAndCoreMotionPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotPreviousLocationAndLocationPopularity; 
@property (assign,nonatomic) int slotPreviousLocationAndLocationPopularity;                                          //@synthesize slotPreviousLocationAndLocationPopularity=_slotPreviousLocationAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTimeAndPreviousLocationPopularity; 
@property (assign,nonatomic) int slotTimeAndPreviousLocationPopularity;                                              //@synthesize slotTimeAndPreviousLocationPopularity=_slotTimeAndPreviousLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotDayAndPreviousLocationPopularity; 
@property (assign,nonatomic) int slotDayAndPreviousLocationPopularity;                                               //@synthesize slotDayAndPreviousLocationPopularity=_slotDayAndPreviousLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalConfirmsForSlot; 
@property (assign,nonatomic) int slotFeedbackTotalConfirmsForSlot;                                                   //@synthesize slotFeedbackTotalConfirmsForSlot=_slotFeedbackTotalConfirmsForSlot - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalRejectsForSlot; 
@property (assign,nonatomic) int slotFeedbackTotalRejectsForSlot;                                                    //@synthesize slotFeedbackTotalRejectsForSlot=_slotFeedbackTotalRejectsForSlot - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalConfirmsForAllSlots; 
@property (assign,nonatomic) int slotFeedbackTotalConfirmsForAllSlots;                                               //@synthesize slotFeedbackTotalConfirmsForAllSlots=_slotFeedbackTotalConfirmsForAllSlots - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalRejectsForAllSlots; 
@property (assign,nonatomic) int slotFeedbackTotalRejectsForAllSlots;                                                //@synthesize slotFeedbackTotalRejectsForAllSlots=_slotFeedbackTotalRejectsForAllSlots - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackConfirmRatio; 
@property (assign,nonatomic) int slotFeedbackConfirmRatio;                                                           //@synthesize slotFeedbackConfirmRatio=_slotFeedbackConfirmRatio - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackConfirmRatioStdDev; 
@property (assign,nonatomic) int slotFeedbackConfirmRatioStdDev;                                                     //@synthesize slotFeedbackConfirmRatioStdDev=_slotFeedbackConfirmRatioStdDev - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackConfirmRatioMean; 
@property (assign,nonatomic) int slotFeedbackConfirmRatioMean;                                                       //@synthesize slotFeedbackConfirmRatioMean=_slotFeedbackConfirmRatioMean - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackConfirmRatioCount; 
@property (assign,nonatomic) int slotFeedbackConfirmRatioCount;                                                      //@synthesize slotFeedbackConfirmRatioCount=_slotFeedbackConfirmRatioCount - In the implementation block
@property (assign,nonatomic) BOOL hasActionLaunchPopularity; 
@property (assign,nonatomic) int actionLaunchPopularity;                                                             //@synthesize actionLaunchPopularity=_actionLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionTimeOfDayPopularity; 
@property (assign,nonatomic) int actionTimeOfDayPopularity;                                                          //@synthesize actionTimeOfDayPopularity=_actionTimeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionCoarseTimeOfDayPopularity; 
@property (assign,nonatomic) int actionCoarseTimeOfDayPopularity;                                                    //@synthesize actionCoarseTimeOfDayPopularity=_actionCoarseTimeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionDayOfWeekPopularity; 
@property (assign,nonatomic) int actionDayOfWeekPopularity;                                                          //@synthesize actionDayOfWeekPopularity=_actionDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionLocationPopularity; 
@property (assign,nonatomic) int actionLocationPopularity;                                                           //@synthesize actionLocationPopularity=_actionLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionTimeAndDayPopularity; 
@property (assign,nonatomic) int actionTimeAndDayPopularity;                                                         //@synthesize actionTimeAndDayPopularity=_actionTimeAndDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionTimeAndLocationPopularity; 
@property (assign,nonatomic) int actionTimeAndLocationPopularity;                                                    //@synthesize actionTimeAndLocationPopularity=_actionTimeAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionDayAndLocationPopularity; 
@property (assign,nonatomic) int actionDayAndLocationPopularity;                                                     //@synthesize actionDayAndLocationPopularity=_actionDayAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionTimeAndDayAndLocationPopularity; 
@property (assign,nonatomic) int actionTimeAndDayAndLocationPopularity;                                              //@synthesize actionTimeAndDayAndLocationPopularity=_actionTimeAndDayAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionCoreMotionPopularity; 
@property (assign,nonatomic) int actionCoreMotionPopularity;                                                         //@synthesize actionCoreMotionPopularity=_actionCoreMotionPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionPreviousLocationPopularity; 
@property (assign,nonatomic) int actionPreviousLocationPopularity;                                                   //@synthesize actionPreviousLocationPopularity=_actionPreviousLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionPreviousLocationAndCoreMotionPopularity; 
@property (assign,nonatomic) int actionPreviousLocationAndCoreMotionPopularity;                                      //@synthesize actionPreviousLocationAndCoreMotionPopularity=_actionPreviousLocationAndCoreMotionPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionPreviousLocationAndLocationPopularity; 
@property (assign,nonatomic) int actionPreviousLocationAndLocationPopularity;                                        //@synthesize actionPreviousLocationAndLocationPopularity=_actionPreviousLocationAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionTimeAndPreviousLocationPopularity; 
@property (assign,nonatomic) int actionTimeAndPreviousLocationPopularity;                                            //@synthesize actionTimeAndPreviousLocationPopularity=_actionTimeAndPreviousLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionDayAndPreviousLocationPopularity; 
@property (assign,nonatomic) int actionDayAndPreviousLocationPopularity;                                             //@synthesize actionDayAndPreviousLocationPopularity=_actionDayAndPreviousLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionTotalConfirms; 
@property (assign,nonatomic) int actionTotalConfirms;                                                                //@synthesize actionTotalConfirms=_actionTotalConfirms - In the implementation block
@property (assign,nonatomic) BOOL hasActionTotalRejects; 
@property (assign,nonatomic) int actionTotalRejects;                                                                 //@synthesize actionTotalRejects=_actionTotalRejects - In the implementation block
@property (assign,nonatomic) BOOL hasAppActionScore; 
@property (assign,nonatomic) int appActionScore;                                                                     //@synthesize appActionScore=_appActionScore - In the implementation block
@property (assign,nonatomic) BOOL hasAppActionLogProbability; 
@property (assign,nonatomic) int appActionLogProbability;                                                            //@synthesize appActionLogProbability=_appActionLogProbability - In the implementation block
@property (assign,nonatomic) BOOL hasSlotScore; 
@property (assign,nonatomic) int slotScore;                                                                          //@synthesize slotScore=_slotScore - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLogProbability; 
@property (assign,nonatomic) int slotLogProbability;                                                                 //@synthesize slotLogProbability=_slotLogProbability - In the implementation block
@property (assign,nonatomic) BOOL hasActionIsFutureMedia; 
@property (assign,nonatomic) int actionIsFutureMedia;                                                                //@synthesize actionIsFutureMedia=_actionIsFutureMedia - In the implementation block
@property (assign,nonatomic) BOOL hasActionIsBackgroundExecutable; 
@property (assign,nonatomic) int actionIsBackgroundExecutable;                                                       //@synthesize actionIsBackgroundExecutable=_actionIsBackgroundExecutable - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentSlotCountForAllAppActions; 
@property (assign,nonatomic) int appIntentSlotCountForAllAppActions;                                                 //@synthesize appIntentSlotCountForAllAppActions=_appIntentSlotCountForAllAppActions - In the implementation block
@property (assign,nonatomic) BOOL hasSlotNumDocFreqForRootOfApp; 
@property (assign,nonatomic) int slotNumDocFreqForRootOfApp;                                                         //@synthesize slotNumDocFreqForRootOfApp=_slotNumDocFreqForRootOfApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsCoreMotionPopularity; 
@property (assign,nonatomic) int appForAllIntentsCoreMotionPopularity;                                               //@synthesize appForAllIntentsCoreMotionPopularity=_appForAllIntentsCoreMotionPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppForAllIntentsTotalNumberOfCoreMotionLaunches; 
@property (assign,nonatomic) int appForAllIntentsTotalNumberOfCoreMotionLaunches;                                    //@synthesize appForAllIntentsTotalNumberOfCoreMotionLaunches=_appForAllIntentsTotalNumberOfCoreMotionLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchTimeCount; 
@property (assign,nonatomic) int slotLaunchTimeCount;                                                                //@synthesize slotLaunchTimeCount=_slotLaunchTimeCount - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchDayOfWeekCount; 
@property (assign,nonatomic) int slotLaunchDayOfWeekCount;                                                           //@synthesize slotLaunchDayOfWeekCount=_slotLaunchDayOfWeekCount - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchCoarseTimeCount; 
@property (assign,nonatomic) int slotLaunchCoarseTimeCount;                                                          //@synthesize slotLaunchCoarseTimeCount=_slotLaunchCoarseTimeCount - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchLocationCount; 
@property (assign,nonatomic) int slotLaunchLocationCount;                                                            //@synthesize slotLaunchLocationCount=_slotLaunchLocationCount - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchCoreMotionCount; 
@property (assign,nonatomic) int slotLaunchCoreMotionCount;                                                          //@synthesize slotLaunchCoreMotionCount=_slotLaunchCoreMotionCount - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchPreviousLocationCount; 
@property (assign,nonatomic) int slotLaunchPreviousLocationCount;                                                    //@synthesize slotLaunchPreviousLocationCount=_slotLaunchPreviousLocationCount - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchTimeAndDayPopularity; 
@property (assign,nonatomic) int slotLaunchTimeAndDayPopularity;                                                     //@synthesize slotLaunchTimeAndDayPopularity=_slotLaunchTimeAndDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchTimeAndLocationPopularity; 
@property (assign,nonatomic) int slotLaunchTimeAndLocationPopularity;                                                //@synthesize slotLaunchTimeAndLocationPopularity=_slotLaunchTimeAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchDayAndLocationPopularity; 
@property (assign,nonatomic) int slotLaunchDayAndLocationPopularity;                                                 //@synthesize slotLaunchDayAndLocationPopularity=_slotLaunchDayAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchTimeAndDayAndLocationPopularity; 
@property (assign,nonatomic) int slotLaunchTimeAndDayAndLocationPopularity;                                          //@synthesize slotLaunchTimeAndDayAndLocationPopularity=_slotLaunchTimeAndDayAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchPreviousLocationAndCoreMotionPopularity; 
@property (assign,nonatomic) int slotLaunchPreviousLocationAndCoreMotionPopularity;                                  //@synthesize slotLaunchPreviousLocationAndCoreMotionPopularity=_slotLaunchPreviousLocationAndCoreMotionPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchPreviousLocationAndLocationPopularity; 
@property (assign,nonatomic) int slotLaunchPreviousLocationAndLocationPopularity;                                    //@synthesize slotLaunchPreviousLocationAndLocationPopularity=_slotLaunchPreviousLocationAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchTimeAndPreviousLocationPopularity; 
@property (assign,nonatomic) int slotLaunchTimeAndPreviousLocationPopularity;                                        //@synthesize slotLaunchTimeAndPreviousLocationPopularity=_slotLaunchTimeAndPreviousLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchDayAndPreviousLocationPopularity; 
@property (assign,nonatomic) int slotLaunchDayAndPreviousLocationPopularity;                                         //@synthesize slotLaunchDayAndPreviousLocationPopularity=_slotLaunchDayAndPreviousLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotIsSiriKitIntent; 
@property (assign,nonatomic) int slotIsSiriKitIntent;                                                                //@synthesize slotIsSiriKitIntent=_slotIsSiriKitIntent - In the implementation block
@property (assign,nonatomic) BOOL hasSlotIsCustomIntent; 
@property (assign,nonatomic) int slotIsCustomIntent;                                                                 //@synthesize slotIsCustomIntent=_slotIsCustomIntent - In the implementation block
@property (assign,nonatomic) BOOL hasSlotIsNSUserActivity; 
@property (assign,nonatomic) int slotIsNSUserActivity;                                                               //@synthesize slotIsNSUserActivity=_slotIsNSUserActivity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTotalNumberOfUndecayedLaunchesForSlot; 
@property (assign,nonatomic) int slotTotalNumberOfUndecayedLaunchesForSlot;                                          //@synthesize slotTotalNumberOfUndecayedLaunchesForSlot=_slotTotalNumberOfUndecayedLaunchesForSlot - In the implementation block
@property (assign,nonatomic) BOOL hasSlotOnlyLaunchedWithinShortTimeSpan; 
@property (assign,nonatomic) int slotOnlyLaunchedWithinShortTimeSpan;                                                //@synthesize slotOnlyLaunchedWithinShortTimeSpan=_slotOnlyLaunchedWithinShortTimeSpan - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLOIBoost; 
@property (assign,nonatomic) int slotLOIBoost;                                                                       //@synthesize slotLOIBoost=_slotLOIBoost - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentValueScore; 
@property (assign,nonatomic) int appIntentValueScore;                                                                //@synthesize appIntentValueScore=_appIntentValueScore - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchMicroLocationPopularity; 
@property (assign,nonatomic) int appLaunchMicroLocationPopularity;                                                   //@synthesize appLaunchMicroLocationPopularity=_appLaunchMicroLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentLaunchMicroLocationPopularity; 
@property (assign,nonatomic) int appIntentLaunchMicroLocationPopularity;                                             //@synthesize appIntentLaunchMicroLocationPopularity=_appIntentLaunchMicroLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppCategory; 
@property (assign,nonatomic) int appCategory;                                                                        //@synthesize appCategory=_appCategory - In the implementation block
@property (assign,nonatomic) BOOL hasIntentCategory; 
@property (assign,nonatomic) int intentCategory;                                                                     //@synthesize intentCategory=_intentCategory - In the implementation block
@property (assign,nonatomic) BOOL hasActionKeyCategory; 
@property (assign,nonatomic) int actionKeyCategory;                                                                  //@synthesize actionKeyCategory=_actionKeyCategory - In the implementation block
@property (assign,nonatomic) BOOL hasIntentCategoryFromIntentDefinition; 
@property (assign,nonatomic) int intentCategoryFromIntentDefinition;                                                 //@synthesize intentCategoryFromIntentDefinition=_intentCategoryFromIntentDefinition - In the implementation block
@property (assign,nonatomic) BOOL hasTimeOfDayBucket; 
@property (assign,nonatomic) int timeOfDayBucket;                                                                    //@synthesize timeOfDayBucket=_timeOfDayBucket - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfWeekBucket; 
@property (assign,nonatomic) int dayOfWeekBucket;                                                                    //@synthesize dayOfWeekBucket=_dayOfWeekBucket - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentPartOfWeekPopularity; 
@property (assign,nonatomic) int appIntentPartOfWeekPopularity;                                                      //@synthesize appIntentPartOfWeekPopularity=_appIntentPartOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentLaunchPartOfWeekPopularity; 
@property (assign,nonatomic) int appIntentLaunchPartOfWeekPopularity;                                                //@synthesize appIntentLaunchPartOfWeekPopularity=_appIntentLaunchPartOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchPartOfWeekCount; 
@property (assign,nonatomic) int slotLaunchPartOfWeekCount;                                                          //@synthesize slotLaunchPartOfWeekCount=_slotLaunchPartOfWeekCount - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchPartOfWeekPopularity; 
@property (assign,nonatomic) int slotLaunchPartOfWeekPopularity;                                                     //@synthesize slotLaunchPartOfWeekPopularity=_slotLaunchPartOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotPartOfWeekPopularity; 
@property (assign,nonatomic) int slotPartOfWeekPopularity;                                                           //@synthesize slotPartOfWeekPopularity=_slotPartOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionPartOfWeekPopularity; 
@property (assign,nonatomic) int actionPartOfWeekPopularity;                                                         //@synthesize actionPartOfWeekPopularity=_actionPartOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackMinutesSinceLastConfirmInSpotlight; 
@property (assign,nonatomic) int slotFeedbackMinutesSinceLastConfirmInSpotlight;                                     //@synthesize slotFeedbackMinutesSinceLastConfirmInSpotlight=_slotFeedbackMinutesSinceLastConfirmInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackMinutesSinceLastExplicitRejectInSpotlight; 
@property (assign,nonatomic) int slotFeedbackMinutesSinceLastExplicitRejectInSpotlight;                              //@synthesize slotFeedbackMinutesSinceLastExplicitRejectInSpotlight=_slotFeedbackMinutesSinceLastExplicitRejectInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalConfirmsForSlotInLastHourInSpotlight; 
@property (assign,nonatomic) int slotFeedbackTotalConfirmsForSlotInLastHourInSpotlight;                              //@synthesize slotFeedbackTotalConfirmsForSlotInLastHourInSpotlight=_slotFeedbackTotalConfirmsForSlotInLastHourInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalRejectsForSlotInLastHourInSpotlight; 
@property (assign,nonatomic) int slotFeedbackTotalRejectsForSlotInLastHourInSpotlight;                               //@synthesize slotFeedbackTotalRejectsForSlotInLastHourInSpotlight=_slotFeedbackTotalRejectsForSlotInLastHourInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalConfirmsForSlotInLastTwoHoursInSpotlight; 
@property (assign,nonatomic) int slotFeedbackTotalConfirmsForSlotInLastTwoHoursInSpotlight;                          //@synthesize slotFeedbackTotalConfirmsForSlotInLastTwoHoursInSpotlight=_slotFeedbackTotalConfirmsForSlotInLastTwoHoursInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalRejectsForSlotInLastTwoHoursInSpotlight; 
@property (assign,nonatomic) int slotFeedbackTotalRejectsForSlotInLastTwoHoursInSpotlight;                           //@synthesize slotFeedbackTotalRejectsForSlotInLastTwoHoursInSpotlight=_slotFeedbackTotalRejectsForSlotInLastTwoHoursInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalConfirmsForSlotTodayInSpotlight; 
@property (assign,nonatomic) int slotFeedbackTotalConfirmsForSlotTodayInSpotlight;                                   //@synthesize slotFeedbackTotalConfirmsForSlotTodayInSpotlight=_slotFeedbackTotalConfirmsForSlotTodayInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalRejectsForSlotTodayInSpotlight; 
@property (assign,nonatomic) int slotFeedbackTotalRejectsForSlotTodayInSpotlight;                                    //@synthesize slotFeedbackTotalRejectsForSlotTodayInSpotlight=_slotFeedbackTotalRejectsForSlotTodayInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalConfirmsForSlotInSpotlight; 
@property (assign,nonatomic) int slotFeedbackTotalConfirmsForSlotInSpotlight;                                        //@synthesize slotFeedbackTotalConfirmsForSlotInSpotlight=_slotFeedbackTotalConfirmsForSlotInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalRejectsForSlotInSpotlight; 
@property (assign,nonatomic) int slotFeedbackTotalRejectsForSlotInSpotlight;                                         //@synthesize slotFeedbackTotalRejectsForSlotInSpotlight=_slotFeedbackTotalRejectsForSlotInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackConfirmsPartOfWeekCountInSpotlight; 
@property (assign,nonatomic) int slotFeedbackConfirmsPartOfWeekCountInSpotlight;                                     //@synthesize slotFeedbackConfirmsPartOfWeekCountInSpotlight=_slotFeedbackConfirmsPartOfWeekCountInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackConfirmsDayCountInSpotlight; 
@property (assign,nonatomic) int slotFeedbackConfirmsDayCountInSpotlight;                                            //@synthesize slotFeedbackConfirmsDayCountInSpotlight=_slotFeedbackConfirmsDayCountInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackConfirmsTimeOfDayCountInSpotlight; 
@property (assign,nonatomic) int slotFeedbackConfirmsTimeOfDayCountInSpotlight;                                      //@synthesize slotFeedbackConfirmsTimeOfDayCountInSpotlight=_slotFeedbackConfirmsTimeOfDayCountInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackConfirmsCoarseTimeOfDayCountInSpotlight; 
@property (assign,nonatomic) int slotFeedbackConfirmsCoarseTimeOfDayCountInSpotlight;                                //@synthesize slotFeedbackConfirmsCoarseTimeOfDayCountInSpotlight=_slotFeedbackConfirmsCoarseTimeOfDayCountInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalConfirmsForSlotTodayInLockscreen; 
@property (assign,nonatomic) int slotFeedbackTotalConfirmsForSlotTodayInLockscreen;                                  //@synthesize slotFeedbackTotalConfirmsForSlotTodayInLockscreen=_slotFeedbackTotalConfirmsForSlotTodayInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalRejectsForSlotTodayInLockscreen; 
@property (assign,nonatomic) int slotFeedbackTotalRejectsForSlotTodayInLockscreen;                                   //@synthesize slotFeedbackTotalRejectsForSlotTodayInLockscreen=_slotFeedbackTotalRejectsForSlotTodayInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackMinutesSinceLastConfirmInLockscreen; 
@property (assign,nonatomic) int slotFeedbackMinutesSinceLastConfirmInLockscreen;                                    //@synthesize slotFeedbackMinutesSinceLastConfirmInLockscreen=_slotFeedbackMinutesSinceLastConfirmInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackMinutesSinceLastRejectInLockscreen; 
@property (assign,nonatomic) int slotFeedbackMinutesSinceLastRejectInLockscreen;                                     //@synthesize slotFeedbackMinutesSinceLastRejectInLockscreen=_slotFeedbackMinutesSinceLastRejectInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackMinutesSinceLastExplicitRejectInLockscreen; 
@property (assign,nonatomic) int slotFeedbackMinutesSinceLastExplicitRejectInLockscreen;                             //@synthesize slotFeedbackMinutesSinceLastExplicitRejectInLockscreen=_slotFeedbackMinutesSinceLastExplicitRejectInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalConfirmsForSlotInLockscreen; 
@property (assign,nonatomic) int slotFeedbackTotalConfirmsForSlotInLockscreen;                                       //@synthesize slotFeedbackTotalConfirmsForSlotInLockscreen=_slotFeedbackTotalConfirmsForSlotInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalRejectsForSlotInLockscreen; 
@property (assign,nonatomic) int slotFeedbackTotalRejectsForSlotInLockscreen;                                        //@synthesize slotFeedbackTotalRejectsForSlotInLockscreen=_slotFeedbackTotalRejectsForSlotInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackConfirmsPartOfWeekCountInLockscreen; 
@property (assign,nonatomic) int slotFeedbackConfirmsPartOfWeekCountInLockscreen;                                    //@synthesize slotFeedbackConfirmsPartOfWeekCountInLockscreen=_slotFeedbackConfirmsPartOfWeekCountInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackConfirmsDayCountInLockscreen; 
@property (assign,nonatomic) int slotFeedbackConfirmsDayCountInLockscreen;                                           //@synthesize slotFeedbackConfirmsDayCountInLockscreen=_slotFeedbackConfirmsDayCountInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackConfirmsTimeOfDayCountInLockscreen; 
@property (assign,nonatomic) int slotFeedbackConfirmsTimeOfDayCountInLockscreen;                                     //@synthesize slotFeedbackConfirmsTimeOfDayCountInLockscreen=_slotFeedbackConfirmsTimeOfDayCountInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackConfirmsCoarseTimeOfDayCountInLockscreen; 
@property (assign,nonatomic) int slotFeedbackConfirmsCoarseTimeOfDayCountInLockscreen;                               //@synthesize slotFeedbackConfirmsCoarseTimeOfDayCountInLockscreen=_slotFeedbackConfirmsCoarseTimeOfDayCountInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalConfirmsTodayInLockscreenForAllSlots; 
@property (assign,nonatomic) int slotFeedbackTotalConfirmsTodayInLockscreenForAllSlots;                              //@synthesize slotFeedbackTotalConfirmsTodayInLockscreenForAllSlots=_slotFeedbackTotalConfirmsTodayInLockscreenForAllSlots - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalRejectsTodayInLockscreenForAllSlots; 
@property (assign,nonatomic) int slotFeedbackTotalRejectsTodayInLockscreenForAllSlots;                               //@synthesize slotFeedbackTotalRejectsTodayInLockscreenForAllSlots=_slotFeedbackTotalRejectsTodayInLockscreenForAllSlots - In the implementation block
@property (assign,nonatomic) BOOL hasActionFeedbackTotalConfirmsInSpotlight; 
@property (assign,nonatomic) int actionFeedbackTotalConfirmsInSpotlight;                                             //@synthesize actionFeedbackTotalConfirmsInSpotlight=_actionFeedbackTotalConfirmsInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasActionFeedbackTotalRejectsInSpotlight; 
@property (assign,nonatomic) int actionFeedbackTotalRejectsInSpotlight;                                              //@synthesize actionFeedbackTotalRejectsInSpotlight=_actionFeedbackTotalRejectsInSpotlight - In the implementation block
@property (assign,nonatomic) BOOL hasActionFeedbackTotalConfirmsTodayInLockscreen; 
@property (assign,nonatomic) int actionFeedbackTotalConfirmsTodayInLockscreen;                                       //@synthesize actionFeedbackTotalConfirmsTodayInLockscreen=_actionFeedbackTotalConfirmsTodayInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasActionFeedbackTotalRejectsTodayInLockscreen; 
@property (assign,nonatomic) int actionFeedbackTotalRejectsTodayInLockscreen;                                        //@synthesize actionFeedbackTotalRejectsTodayInLockscreen=_actionFeedbackTotalRejectsTodayInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasActionFeedbackTotalConfirmsInLockscreen; 
@property (assign,nonatomic) int actionFeedbackTotalConfirmsInLockscreen;                                            //@synthesize actionFeedbackTotalConfirmsInLockscreen=_actionFeedbackTotalConfirmsInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasActionFeedbackTotalRejectsInLockscreen; 
@property (assign,nonatomic) int actionFeedbackTotalRejectsInLockscreen;                                             //@synthesize actionFeedbackTotalRejectsInLockscreen=_actionFeedbackTotalRejectsInLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalConfirmsInSpotlightForAllSlots; 
@property (assign,nonatomic) int slotFeedbackTotalConfirmsInSpotlightForAllSlots;                                    //@synthesize slotFeedbackTotalConfirmsInSpotlightForAllSlots=_slotFeedbackTotalConfirmsInSpotlightForAllSlots - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalRejectsInSpotlightForAllSlots; 
@property (assign,nonatomic) int slotFeedbackTotalRejectsInSpotlightForAllSlots;                                     //@synthesize slotFeedbackTotalRejectsInSpotlightForAllSlots=_slotFeedbackTotalRejectsInSpotlightForAllSlots - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalConfirmsInLockscreenForAllSlots; 
@property (assign,nonatomic) int slotFeedbackTotalConfirmsInLockscreenForAllSlots;                                   //@synthesize slotFeedbackTotalConfirmsInLockscreenForAllSlots=_slotFeedbackTotalConfirmsInLockscreenForAllSlots - In the implementation block
@property (assign,nonatomic) BOOL hasSlotFeedbackTotalRejectsInLockscreenForAllSlots; 
@property (assign,nonatomic) int slotFeedbackTotalRejectsInLockscreenForAllSlots;                                    //@synthesize slotFeedbackTotalRejectsInLockscreenForAllSlots=_slotFeedbackTotalRejectsInLockscreenForAllSlots - In the implementation block
@property (assign,nonatomic) BOOL hasSlotPartOfWeekAndLocationPopularity; 
@property (assign,nonatomic) int slotPartOfWeekAndLocationPopularity;                                                //@synthesize slotPartOfWeekAndLocationPopularity=_slotPartOfWeekAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchPartOfWeekAndLocationPopularity; 
@property (assign,nonatomic) int slotLaunchPartOfWeekAndLocationPopularity;                                          //@synthesize slotLaunchPartOfWeekAndLocationPopularity=_slotLaunchPartOfWeekAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionPartOfWeekAndLocationPopularity; 
@property (assign,nonatomic) int actionPartOfWeekAndLocationPopularity;                                              //@synthesize actionPartOfWeekAndLocationPopularity=_actionPartOfWeekAndLocationPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchPartOfWeekAndTimePopularity; 
@property (assign,nonatomic) int slotLaunchPartOfWeekAndTimePopularity;                                              //@synthesize slotLaunchPartOfWeekAndTimePopularity=_slotLaunchPartOfWeekAndTimePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotPartOfWeekAndTimePopularity; 
@property (assign,nonatomic) int slotPartOfWeekAndTimePopularity;                                                    //@synthesize slotPartOfWeekAndTimePopularity=_slotPartOfWeekAndTimePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionPartOfWeekAndTimePopularity; 
@property (assign,nonatomic) int actionPartOfWeekAndTimePopularity;                                                  //@synthesize actionPartOfWeekAndTimePopularity=_actionPartOfWeekAndTimePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingTimeDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingTimeDecay;                                           //@synthesize totalLaunchesForAllActionsUsingTimeDecay=_totalLaunchesForAllActionsUsingTimeDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingDayOfWeekDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingDayOfWeekDecay;                                      //@synthesize totalLaunchesForAllActionsUsingDayOfWeekDecay=_totalLaunchesForAllActionsUsingDayOfWeekDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingLocationDecay;                                       //@synthesize totalLaunchesForAllActionsUsingLocationDecay=_totalLaunchesForAllActionsUsingLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingCoreMotionDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingCoreMotionDecay;                                     //@synthesize totalLaunchesForAllActionsUsingCoreMotionDecay=_totalLaunchesForAllActionsUsingCoreMotionDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingPreviousLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingPreviousLocationDecay;                               //@synthesize totalLaunchesForAllActionsUsingPreviousLocationDecay=_totalLaunchesForAllActionsUsingPreviousLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingPartOfWeekDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingPartOfWeekDecay;                                     //@synthesize totalLaunchesForAllActionsUsingPartOfWeekDecay=_totalLaunchesForAllActionsUsingPartOfWeekDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingPreviousLocationAndCoreMotionDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingPreviousLocationAndCoreMotionDecay;                  //@synthesize totalLaunchesForAllActionsUsingPreviousLocationAndCoreMotionDecay=_totalLaunchesForAllActionsUsingPreviousLocationAndCoreMotionDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingPreviousLocationAndLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingPreviousLocationAndLocationDecay;                    //@synthesize totalLaunchesForAllActionsUsingPreviousLocationAndLocationDecay=_totalLaunchesForAllActionsUsingPreviousLocationAndLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingTimeAndPreviousLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingTimeAndPreviousLocationDecay;                        //@synthesize totalLaunchesForAllActionsUsingTimeAndPreviousLocationDecay=_totalLaunchesForAllActionsUsingTimeAndPreviousLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingDayAndPreviousLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingDayAndPreviousLocationDecay;                         //@synthesize totalLaunchesForAllActionsUsingDayAndPreviousLocationDecay=_totalLaunchesForAllActionsUsingDayAndPreviousLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingTimeAndDayDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingTimeAndDayDecay;                                     //@synthesize totalLaunchesForAllActionsUsingTimeAndDayDecay=_totalLaunchesForAllActionsUsingTimeAndDayDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingTimeAndLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingTimeAndLocationDecay;                                //@synthesize totalLaunchesForAllActionsUsingTimeAndLocationDecay=_totalLaunchesForAllActionsUsingTimeAndLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingDayAndLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingDayAndLocationDecay;                                 //@synthesize totalLaunchesForAllActionsUsingDayAndLocationDecay=_totalLaunchesForAllActionsUsingDayAndLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingTimeAndDayAndLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingTimeAndDayAndLocationDecay;                          //@synthesize totalLaunchesForAllActionsUsingTimeAndDayAndLocationDecay=_totalLaunchesForAllActionsUsingTimeAndDayAndLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingPartOfWeekAndLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingPartOfWeekAndLocationDecay;                          //@synthesize totalLaunchesForAllActionsUsingPartOfWeekAndLocationDecay=_totalLaunchesForAllActionsUsingPartOfWeekAndLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForAllActionsUsingPartOfWeekAndTimeDecay; 
@property (assign,nonatomic) int totalLaunchesForAllActionsUsingPartOfWeekAndTimeDecay;                              //@synthesize totalLaunchesForAllActionsUsingPartOfWeekAndTimeDecay=_totalLaunchesForAllActionsUsingPartOfWeekAndTimeDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingTimeDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingTimeDecay;                                                 //@synthesize totalLaunchesForSlotUsingTimeDecay=_totalLaunchesForSlotUsingTimeDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingDayOfWeekDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingDayOfWeekDecay;                                            //@synthesize totalLaunchesForSlotUsingDayOfWeekDecay=_totalLaunchesForSlotUsingDayOfWeekDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingLocationDecay;                                             //@synthesize totalLaunchesForSlotUsingLocationDecay=_totalLaunchesForSlotUsingLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingCoreMotionDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingCoreMotionDecay;                                           //@synthesize totalLaunchesForSlotUsingCoreMotionDecay=_totalLaunchesForSlotUsingCoreMotionDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingPreviousLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingPreviousLocationDecay;                                     //@synthesize totalLaunchesForSlotUsingPreviousLocationDecay=_totalLaunchesForSlotUsingPreviousLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingPartOfWeekDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingPartOfWeekDecay;                                           //@synthesize totalLaunchesForSlotUsingPartOfWeekDecay=_totalLaunchesForSlotUsingPartOfWeekDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingTimeAndDayDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingTimeAndDayDecay;                                           //@synthesize totalLaunchesForSlotUsingTimeAndDayDecay=_totalLaunchesForSlotUsingTimeAndDayDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingTimeAndLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingTimeAndLocationDecay;                                      //@synthesize totalLaunchesForSlotUsingTimeAndLocationDecay=_totalLaunchesForSlotUsingTimeAndLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingDayAndLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingDayAndLocationDecay;                                       //@synthesize totalLaunchesForSlotUsingDayAndLocationDecay=_totalLaunchesForSlotUsingDayAndLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingTimeAndDayAndLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingTimeAndDayAndLocationDecay;                                //@synthesize totalLaunchesForSlotUsingTimeAndDayAndLocationDecay=_totalLaunchesForSlotUsingTimeAndDayAndLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingPreviousLocationAndLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingPreviousLocationAndLocationDecay;                          //@synthesize totalLaunchesForSlotUsingPreviousLocationAndLocationDecay=_totalLaunchesForSlotUsingPreviousLocationAndLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingPreviousLocationAndCoreMotionDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingPreviousLocationAndCoreMotionDecay;                        //@synthesize totalLaunchesForSlotUsingPreviousLocationAndCoreMotionDecay=_totalLaunchesForSlotUsingPreviousLocationAndCoreMotionDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingTimeAndPreviousLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingTimeAndPreviousLocationDecay;                              //@synthesize totalLaunchesForSlotUsingTimeAndPreviousLocationDecay=_totalLaunchesForSlotUsingTimeAndPreviousLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingDayAndPreviousLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingDayAndPreviousLocationDecay;                               //@synthesize totalLaunchesForSlotUsingDayAndPreviousLocationDecay=_totalLaunchesForSlotUsingDayAndPreviousLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingPartOfWeekAndLocationDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingPartOfWeekAndLocationDecay;                                //@synthesize totalLaunchesForSlotUsingPartOfWeekAndLocationDecay=_totalLaunchesForSlotUsingPartOfWeekAndLocationDecay - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLaunchesForSlotUsingPartOfWeekAndTimeDecay; 
@property (assign,nonatomic) int totalLaunchesForSlotUsingPartOfWeekAndTimeDecay;                                    //@synthesize totalLaunchesForSlotUsingPartOfWeekAndTimeDecay=_totalLaunchesForSlotUsingPartOfWeekAndTimeDecay - In the implementation block
@property (assign,nonatomic) BOOL hasIsDateInWeekendOnDevice; 
@property (assign,nonatomic) int isDateInWeekendOnDevice;                                                            //@synthesize isDateInWeekendOnDevice=_isDateInWeekendOnDevice - In the implementation block
@property (assign,nonatomic) BOOL hasActionCoreMotionType; 
@property (assign,nonatomic) int actionCoreMotionType;                                                               //@synthesize actionCoreMotionType=_actionCoreMotionType - In the implementation block
@property (assign,nonatomic) BOOL hasActionLOIType; 
@property (assign,nonatomic) int actionLOIType;                                                                      //@synthesize actionLOIType=_actionLOIType - In the implementation block
@property (assign,nonatomic) BOOL hasActionFeedbackMeanNumberOfSpotlightLaunchesPerDay; 
@property (assign,nonatomic) int actionFeedbackMeanNumberOfSpotlightLaunchesPerDay;                                  //@synthesize actionFeedbackMeanNumberOfSpotlightLaunchesPerDay=_actionFeedbackMeanNumberOfSpotlightLaunchesPerDay - In the implementation block
@property (assign,nonatomic) BOOL hasActionFeedbackMeanNumberOfSpotlightConfirmsPerDay; 
@property (assign,nonatomic) int actionFeedbackMeanNumberOfSpotlightConfirmsPerDay;                                  //@synthesize actionFeedbackMeanNumberOfSpotlightConfirmsPerDay=_actionFeedbackMeanNumberOfSpotlightConfirmsPerDay - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchTimeWithThirtyMinuteWindowCount; 
@property (assign,nonatomic) int slotLaunchTimeWithThirtyMinuteWindowCount;                                          //@synthesize slotLaunchTimeWithThirtyMinuteWindowCount=_slotLaunchTimeWithThirtyMinuteWindowCount - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchTimeWithHourWindowCount; 
@property (assign,nonatomic) int slotLaunchTimeWithHourWindowCount;                                                  //@synthesize slotLaunchTimeWithHourWindowCount=_slotLaunchTimeWithHourWindowCount - In the implementation block
@property (assign,nonatomic) BOOL hasSlotLaunchTimeWithEightHourWindowCount; 
@property (assign,nonatomic) int slotLaunchTimeWithEightHourWindowCount;                                             //@synthesize slotLaunchTimeWithEightHourWindowCount=_slotLaunchTimeWithEightHourWindowCount - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTimeOfDayWithThirtyMinuteWindowPopularity; 
@property (assign,nonatomic) int slotTimeOfDayWithThirtyMinuteWindowPopularity;                                      //@synthesize slotTimeOfDayWithThirtyMinuteWindowPopularity=_slotTimeOfDayWithThirtyMinuteWindowPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTimeOfDayWithHourWindowPopularity; 
@property (assign,nonatomic) int slotTimeOfDayWithHourWindowPopularity;                                              //@synthesize slotTimeOfDayWithHourWindowPopularity=_slotTimeOfDayWithHourWindowPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasSlotTimeOfDayWithEightHourWindowPopularity; 
@property (assign,nonatomic) int slotTimeOfDayWithEightHourWindowPopularity;                                         //@synthesize slotTimeOfDayWithEightHourWindowPopularity=_slotTimeOfDayWithEightHourWindowPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionTimeOfDayWithThirtyMinuteWindowPopularity; 
@property (assign,nonatomic) int actionTimeOfDayWithThirtyMinuteWindowPopularity;                                    //@synthesize actionTimeOfDayWithThirtyMinuteWindowPopularity=_actionTimeOfDayWithThirtyMinuteWindowPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionTimeOfDayWithHourWindowPopularity; 
@property (assign,nonatomic) int actionTimeOfDayWithHourWindowPopularity;                                            //@synthesize actionTimeOfDayWithHourWindowPopularity=_actionTimeOfDayWithHourWindowPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasActionTimeOfDayWithEightHourWindowPopularity; 
@property (assign,nonatomic) int actionTimeOfDayWithEightHourWindowPopularity;                                       //@synthesize actionTimeOfDayWithEightHourWindowPopularity=_actionTimeOfDayWithEightHourWindowPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasRandomSessionValue; 
@property (assign,nonatomic) int randomSessionValue;                                                                 //@synthesize randomSessionValue=_randomSessionValue - In the implementation block
@property (assign,nonatomic) BOOL hasRandomScore; 
@property (assign,nonatomic) int randomScore;                                                                        //@synthesize randomScore=_randomScore - In the implementation block
@property (assign,nonatomic) BOOL hasAmbientLightTypePopularity; 
@property (assign,nonatomic) int ambientLightTypePopularity;                                                         //@synthesize ambientLightTypePopularity=_ambientLightTypePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAmbientLightTypeLaunchPopularity; 
@property (assign,nonatomic) int ambientLightTypeLaunchPopularity;                                                   //@synthesize ambientLightTypeLaunchPopularity=_ambientLightTypeLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentAmbientLightTypePopularity; 
@property (assign,nonatomic) int appIntentAmbientLightTypePopularity;                                                //@synthesize appIntentAmbientLightTypePopularity=_appIntentAmbientLightTypePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppIntentAmbientLightTypeLaunchPopularity; 
@property (assign,nonatomic) int appIntentAmbientLightTypeLaunchPopularity;                                          //@synthesize appIntentAmbientLightTypeLaunchPopularity=_appIntentAmbientLightTypeLaunchPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppLOITypeLaunches; 
@property (assign,nonatomic) int appLOITypeLaunches;                                                                 //@synthesize appLOITypeLaunches=_appLOITypeLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppLastAppLaunches; 
@property (assign,nonatomic) int appLastAppLaunches;                                                                 //@synthesize appLastAppLaunches=_appLastAppLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppTimeOfDayLaunches; 
@property (assign,nonatomic) int appTimeOfDayLaunches;                                                               //@synthesize appTimeOfDayLaunches=_appTimeOfDayLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppDayOfWeekLaunches; 
@property (assign,nonatomic) int appDayOfWeekLaunches;                                                               //@synthesize appDayOfWeekLaunches=_appDayOfWeekLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppBlendedLOITypePopularity; 
@property (assign,nonatomic) int appBlendedLOITypePopularity;                                                        //@synthesize appBlendedLOITypePopularity=_appBlendedLOITypePopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppBlendedLastAppPopularity; 
@property (assign,nonatomic) int appBlendedLastAppPopularity;                                                        //@synthesize appBlendedLastAppPopularity=_appBlendedLastAppPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppBlendedTimeOfDayPopularity; 
@property (assign,nonatomic) int appBlendedTimeOfDayPopularity;                                                      //@synthesize appBlendedTimeOfDayPopularity=_appBlendedTimeOfDayPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppBlendedDayOfWeekPopularity; 
@property (assign,nonatomic) int appBlendedDayOfWeekPopularity;                                                      //@synthesize appBlendedDayOfWeekPopularity=_appBlendedDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppBlendedLOITypeSampledPopularity; 
@property (assign,nonatomic) int appBlendedLOITypeSampledPopularity;                                                 //@synthesize appBlendedLOITypeSampledPopularity=_appBlendedLOITypeSampledPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppBlendedLastAppSampledPopularity; 
@property (assign,nonatomic) int appBlendedLastAppSampledPopularity;                                                 //@synthesize appBlendedLastAppSampledPopularity=_appBlendedLastAppSampledPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppBlendedTimeOfDaySampledPopularity; 
@property (assign,nonatomic) int appBlendedTimeOfDaySampledPopularity;                                               //@synthesize appBlendedTimeOfDaySampledPopularity=_appBlendedTimeOfDaySampledPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppBlendedDayOfWeekSampledPopularity; 
@property (assign,nonatomic) int appBlendedDayOfWeekSampledPopularity;                                               //@synthesize appBlendedDayOfWeekSampledPopularity=_appBlendedDayOfWeekSampledPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppGlobalScoreGivenTimeDayLocationAndLastApp; 
@property (assign,nonatomic) int appGlobalScoreGivenTimeDayLocationAndLastApp;                                       //@synthesize appGlobalScoreGivenTimeDayLocationAndLastApp=_appGlobalScoreGivenTimeDayLocationAndLastApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppGlobalScoreGivenTimeDayAndLocation; 
@property (assign,nonatomic) int appGlobalScoreGivenTimeDayAndLocation;                                              //@synthesize appGlobalScoreGivenTimeDayAndLocation=_appGlobalScoreGivenTimeDayAndLocation - In the implementation block
@property (assign,nonatomic) BOOL hasAppTimeAndDayOfWeekPopularity; 
@property (assign,nonatomic) int appTimeAndDayOfWeekPopularity;                                                      //@synthesize appTimeAndDayOfWeekPopularity=_appTimeAndDayOfWeekPopularity - In the implementation block
@property (assign,nonatomic) BOOL hasAppPopularityGivenTimeAndDayOfWeek; 
@property (assign,nonatomic) int appPopularityGivenTimeAndDayOfWeek;                                                 //@synthesize appPopularityGivenTimeAndDayOfWeek=_appPopularityGivenTimeAndDayOfWeek - In the implementation block
@property (assign,nonatomic) BOOL hasAppPopularityOfTimeAndDayOfWeekGivenApp; 
@property (assign,nonatomic) int appPopularityOfTimeAndDayOfWeekGivenApp;                                            //@synthesize appPopularityOfTimeAndDayOfWeekGivenApp=_appPopularityOfTimeAndDayOfWeekGivenApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppTotalNumberOfTimeAndDayOfWeekLaunches; 
@property (assign,nonatomic) int appTotalNumberOfTimeAndDayOfWeekLaunches;                                           //@synthesize appTotalNumberOfTimeAndDayOfWeekLaunches=_appTotalNumberOfTimeAndDayOfWeekLaunches - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesCoarseTimePowLocationForAppInContext; 
@property (assign,nonatomic) int appLaunchesCoarseTimePowLocationForAppInContext;                                    //@synthesize appLaunchesCoarseTimePowLocationForAppInContext=_appLaunchesCoarseTimePowLocationForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesCoarseTimePowLocationInContext; 
@property (assign,nonatomic) int appLaunchesCoarseTimePowLocationInContext;                                          //@synthesize appLaunchesCoarseTimePowLocationInContext=_appLaunchesCoarseTimePowLocationInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesCoarseTimePowLocationForApp; 
@property (assign,nonatomic) int appLaunchesCoarseTimePowLocationForApp;                                             //@synthesize appLaunchesCoarseTimePowLocationForApp=_appLaunchesCoarseTimePowLocationForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesCoarseTimePowLocationForAllAppsAndContexts; 
@property (assign,nonatomic) int appLaunchesCoarseTimePowLocationForAllAppsAndContexts;                              //@synthesize appLaunchesCoarseTimePowLocationForAllAppsAndContexts=_appLaunchesCoarseTimePowLocationForAllAppsAndContexts - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsCoarseTimePowLocationForAppInContext; 
@property (assign,nonatomic) int appConfirmsCoarseTimePowLocationForAppInContext;                                    //@synthesize appConfirmsCoarseTimePowLocationForAppInContext=_appConfirmsCoarseTimePowLocationForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsCoarseTimePowLocationInContext; 
@property (assign,nonatomic) int appConfirmsCoarseTimePowLocationInContext;                                          //@synthesize appConfirmsCoarseTimePowLocationInContext=_appConfirmsCoarseTimePowLocationInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsCoarseTimePowLocationForApp; 
@property (assign,nonatomic) int appConfirmsCoarseTimePowLocationForApp;                                             //@synthesize appConfirmsCoarseTimePowLocationForApp=_appConfirmsCoarseTimePowLocationForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsCoarseTimePowLocationForAllAppsAndContexts; 
@property (assign,nonatomic) int appConfirmsCoarseTimePowLocationForAllAppsAndContexts;                              //@synthesize appConfirmsCoarseTimePowLocationForAllAppsAndContexts=_appConfirmsCoarseTimePowLocationForAllAppsAndContexts - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsCoarseTimePowLocationForAppInContext; 
@property (assign,nonatomic) int appRejectsCoarseTimePowLocationForAppInContext;                                     //@synthesize appRejectsCoarseTimePowLocationForAppInContext=_appRejectsCoarseTimePowLocationForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsCoarseTimePowLocationInContext; 
@property (assign,nonatomic) int appRejectsCoarseTimePowLocationInContext;                                           //@synthesize appRejectsCoarseTimePowLocationInContext=_appRejectsCoarseTimePowLocationInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsCoarseTimePowLocationForApp; 
@property (assign,nonatomic) int appRejectsCoarseTimePowLocationForApp;                                              //@synthesize appRejectsCoarseTimePowLocationForApp=_appRejectsCoarseTimePowLocationForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsCoarseTimePowLocationForAllAppsAndContexts; 
@property (assign,nonatomic) int appRejectsCoarseTimePowLocationForAllAppsAndContexts;                               //@synthesize appRejectsCoarseTimePowLocationForAllAppsAndContexts=_appRejectsCoarseTimePowLocationForAllAppsAndContexts - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesSpecificTimeDowLocationForAppInContext; 
@property (assign,nonatomic) int appLaunchesSpecificTimeDowLocationForAppInContext;                                  //@synthesize appLaunchesSpecificTimeDowLocationForAppInContext=_appLaunchesSpecificTimeDowLocationForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesSpecificTimeDowLocationInContext; 
@property (assign,nonatomic) int appLaunchesSpecificTimeDowLocationInContext;                                        //@synthesize appLaunchesSpecificTimeDowLocationInContext=_appLaunchesSpecificTimeDowLocationInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesSpecificTimeDowLocationForApp; 
@property (assign,nonatomic) int appLaunchesSpecificTimeDowLocationForApp;                                           //@synthesize appLaunchesSpecificTimeDowLocationForApp=_appLaunchesSpecificTimeDowLocationForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesSpecificTimeDowLocationForAllAppsAndContexts; 
@property (assign,nonatomic) int appLaunchesSpecificTimeDowLocationForAllAppsAndContexts;                            //@synthesize appLaunchesSpecificTimeDowLocationForAllAppsAndContexts=_appLaunchesSpecificTimeDowLocationForAllAppsAndContexts - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsSpecificTimeDowLocationForAppInContext; 
@property (assign,nonatomic) int appConfirmsSpecificTimeDowLocationForAppInContext;                                  //@synthesize appConfirmsSpecificTimeDowLocationForAppInContext=_appConfirmsSpecificTimeDowLocationForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsSpecificTimeDowLocationInContext; 
@property (assign,nonatomic) int appConfirmsSpecificTimeDowLocationInContext;                                        //@synthesize appConfirmsSpecificTimeDowLocationInContext=_appConfirmsSpecificTimeDowLocationInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsSpecificTimeDowLocationForApp; 
@property (assign,nonatomic) int appConfirmsSpecificTimeDowLocationForApp;                                           //@synthesize appConfirmsSpecificTimeDowLocationForApp=_appConfirmsSpecificTimeDowLocationForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsSpecificTimeDowLocationForAllAppsAndContexts; 
@property (assign,nonatomic) int appConfirmsSpecificTimeDowLocationForAllAppsAndContexts;                            //@synthesize appConfirmsSpecificTimeDowLocationForAllAppsAndContexts=_appConfirmsSpecificTimeDowLocationForAllAppsAndContexts - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsSpecificTimeDowLocationForAppInContext; 
@property (assign,nonatomic) int appRejectsSpecificTimeDowLocationForAppInContext;                                   //@synthesize appRejectsSpecificTimeDowLocationForAppInContext=_appRejectsSpecificTimeDowLocationForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsSpecificTimeDowLocationInContext; 
@property (assign,nonatomic) int appRejectsSpecificTimeDowLocationInContext;                                         //@synthesize appRejectsSpecificTimeDowLocationInContext=_appRejectsSpecificTimeDowLocationInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsSpecificTimeDowLocationForApp; 
@property (assign,nonatomic) int appRejectsSpecificTimeDowLocationForApp;                                            //@synthesize appRejectsSpecificTimeDowLocationForApp=_appRejectsSpecificTimeDowLocationForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsSpecificTimeDowLocationForAllAppsAndContexts; 
@property (assign,nonatomic) int appRejectsSpecificTimeDowLocationForAllAppsAndContexts;                             //@synthesize appRejectsSpecificTimeDowLocationForAllAppsAndContexts=_appRejectsSpecificTimeDowLocationForAllAppsAndContexts - In the implementation block
@property (assign,nonatomic) BOOL hasActionsCoarseTimePowLocationForActionInContext; 
@property (assign,nonatomic) int actionsCoarseTimePowLocationForActionInContext;                                     //@synthesize actionsCoarseTimePowLocationForActionInContext=_actionsCoarseTimePowLocationForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionsCoarseTimePowLocationInContext; 
@property (assign,nonatomic) int actionsCoarseTimePowLocationInContext;                                              //@synthesize actionsCoarseTimePowLocationInContext=_actionsCoarseTimePowLocationInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionsCoarseTimePowLocationForAction; 
@property (assign,nonatomic) int actionsCoarseTimePowLocationForAction;                                              //@synthesize actionsCoarseTimePowLocationForAction=_actionsCoarseTimePowLocationForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsCoarseTimePowLocationForAllActionsAndContexts; 
@property (assign,nonatomic) int actionsCoarseTimePowLocationForAllActionsAndContexts;                               //@synthesize actionsCoarseTimePowLocationForAllActionsAndContexts=_actionsCoarseTimePowLocationForAllActionsAndContexts - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsCoarseTimePowLocationForActionInContext; 
@property (assign,nonatomic) int actionConfirmsCoarseTimePowLocationForActionInContext;                              //@synthesize actionConfirmsCoarseTimePowLocationForActionInContext=_actionConfirmsCoarseTimePowLocationForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsCoarseTimePowLocationInContext; 
@property (assign,nonatomic) int actionConfirmsCoarseTimePowLocationInContext;                                       //@synthesize actionConfirmsCoarseTimePowLocationInContext=_actionConfirmsCoarseTimePowLocationInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsCoarseTimePowLocationForAction; 
@property (assign,nonatomic) int actionConfirmsCoarseTimePowLocationForAction;                                       //@synthesize actionConfirmsCoarseTimePowLocationForAction=_actionConfirmsCoarseTimePowLocationForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsCoarseTimePowLocationForAllActionsAndContexts; 
@property (assign,nonatomic) int actionConfirmsCoarseTimePowLocationForAllActionsAndContexts;                        //@synthesize actionConfirmsCoarseTimePowLocationForAllActionsAndContexts=_actionConfirmsCoarseTimePowLocationForAllActionsAndContexts - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsCoarseTimePowLocationForActionInContext; 
@property (assign,nonatomic) int actionRejectsCoarseTimePowLocationForActionInContext;                               //@synthesize actionRejectsCoarseTimePowLocationForActionInContext=_actionRejectsCoarseTimePowLocationForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsCoarseTimePowLocationInContext; 
@property (assign,nonatomic) int actionRejectsCoarseTimePowLocationInContext;                                        //@synthesize actionRejectsCoarseTimePowLocationInContext=_actionRejectsCoarseTimePowLocationInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsCoarseTimePowLocationForAction; 
@property (assign,nonatomic) int actionRejectsCoarseTimePowLocationForAction;                                        //@synthesize actionRejectsCoarseTimePowLocationForAction=_actionRejectsCoarseTimePowLocationForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsCoarseTimePowLocationForAllActionsAndContexts; 
@property (assign,nonatomic) int actionRejectsCoarseTimePowLocationForAllActionsAndContexts;                         //@synthesize actionRejectsCoarseTimePowLocationForAllActionsAndContexts=_actionRejectsCoarseTimePowLocationForAllActionsAndContexts - In the implementation block
@property (assign,nonatomic) BOOL hasActionsSpecificTimeDowLocationForActionInContext; 
@property (assign,nonatomic) int actionsSpecificTimeDowLocationForActionInContext;                                   //@synthesize actionsSpecificTimeDowLocationForActionInContext=_actionsSpecificTimeDowLocationForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionsSpecificTimeDowLocationInContext; 
@property (assign,nonatomic) int actionsSpecificTimeDowLocationInContext;                                            //@synthesize actionsSpecificTimeDowLocationInContext=_actionsSpecificTimeDowLocationInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionsSpecificTimeDowLocationForAction; 
@property (assign,nonatomic) int actionsSpecificTimeDowLocationForAction;                                            //@synthesize actionsSpecificTimeDowLocationForAction=_actionsSpecificTimeDowLocationForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsSpecificTimeDowLocationForAllActionsAndContexts; 
@property (assign,nonatomic) int actionsSpecificTimeDowLocationForAllActionsAndContexts;                             //@synthesize actionsSpecificTimeDowLocationForAllActionsAndContexts=_actionsSpecificTimeDowLocationForAllActionsAndContexts - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsSpecificTimeDowLocationForActionInContext; 
@property (assign,nonatomic) int actionConfirmsSpecificTimeDowLocationForActionInContext;                            //@synthesize actionConfirmsSpecificTimeDowLocationForActionInContext=_actionConfirmsSpecificTimeDowLocationForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsSpecificTimeDowLocationInContext; 
@property (assign,nonatomic) int actionConfirmsSpecificTimeDowLocationInContext;                                     //@synthesize actionConfirmsSpecificTimeDowLocationInContext=_actionConfirmsSpecificTimeDowLocationInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsSpecificTimeDowLocationForAction; 
@property (assign,nonatomic) int actionConfirmsSpecificTimeDowLocationForAction;                                     //@synthesize actionConfirmsSpecificTimeDowLocationForAction=_actionConfirmsSpecificTimeDowLocationForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsSpecificTimeDowLocationForAllActionsAndContexts; 
@property (assign,nonatomic) int actionConfirmsSpecificTimeDowLocationForAllActionsAndContexts;                      //@synthesize actionConfirmsSpecificTimeDowLocationForAllActionsAndContexts=_actionConfirmsSpecificTimeDowLocationForAllActionsAndContexts - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsSpecificTimeDowLocationForActionInContext; 
@property (assign,nonatomic) int actionRejectsSpecificTimeDowLocationForActionInContext;                             //@synthesize actionRejectsSpecificTimeDowLocationForActionInContext=_actionRejectsSpecificTimeDowLocationForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsSpecificTimeDowLocationInContext; 
@property (assign,nonatomic) int actionRejectsSpecificTimeDowLocationInContext;                                      //@synthesize actionRejectsSpecificTimeDowLocationInContext=_actionRejectsSpecificTimeDowLocationInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsSpecificTimeDowLocationForAction; 
@property (assign,nonatomic) int actionRejectsSpecificTimeDowLocationForAction;                                      //@synthesize actionRejectsSpecificTimeDowLocationForAction=_actionRejectsSpecificTimeDowLocationForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsSpecificTimeDowLocationForAllActionsAndContexts; 
@property (assign,nonatomic) int actionRejectsSpecificTimeDowLocationForAllActionsAndContexts;                       //@synthesize actionRejectsSpecificTimeDowLocationForAllActionsAndContexts=_actionRejectsSpecificTimeDowLocationForAllActionsAndContexts - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket0ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket0ForApp;                                                     //@synthesize appLaunchesInTimeBucket0ForApp=_appLaunchesInTimeBucket0ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket1ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket1ForApp;                                                     //@synthesize appLaunchesInTimeBucket1ForApp=_appLaunchesInTimeBucket1ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket2ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket2ForApp;                                                     //@synthesize appLaunchesInTimeBucket2ForApp=_appLaunchesInTimeBucket2ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket3ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket3ForApp;                                                     //@synthesize appLaunchesInTimeBucket3ForApp=_appLaunchesInTimeBucket3ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket4ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket4ForApp;                                                     //@synthesize appLaunchesInTimeBucket4ForApp=_appLaunchesInTimeBucket4ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket5ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket5ForApp;                                                     //@synthesize appLaunchesInTimeBucket5ForApp=_appLaunchesInTimeBucket5ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket6ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket6ForApp;                                                     //@synthesize appLaunchesInTimeBucket6ForApp=_appLaunchesInTimeBucket6ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket7ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket7ForApp;                                                     //@synthesize appLaunchesInTimeBucket7ForApp=_appLaunchesInTimeBucket7ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket8ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket8ForApp;                                                     //@synthesize appLaunchesInTimeBucket8ForApp=_appLaunchesInTimeBucket8ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket9ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket9ForApp;                                                     //@synthesize appLaunchesInTimeBucket9ForApp=_appLaunchesInTimeBucket9ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket10ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket10ForApp;                                                    //@synthesize appLaunchesInTimeBucket10ForApp=_appLaunchesInTimeBucket10ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket11ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket11ForApp;                                                    //@synthesize appLaunchesInTimeBucket11ForApp=_appLaunchesInTimeBucket11ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket12ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket12ForApp;                                                    //@synthesize appLaunchesInTimeBucket12ForApp=_appLaunchesInTimeBucket12ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket13ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket13ForApp;                                                    //@synthesize appLaunchesInTimeBucket13ForApp=_appLaunchesInTimeBucket13ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket14ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket14ForApp;                                                    //@synthesize appLaunchesInTimeBucket14ForApp=_appLaunchesInTimeBucket14ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket15ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket15ForApp;                                                    //@synthesize appLaunchesInTimeBucket15ForApp=_appLaunchesInTimeBucket15ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket16ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket16ForApp;                                                    //@synthesize appLaunchesInTimeBucket16ForApp=_appLaunchesInTimeBucket16ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket17ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket17ForApp;                                                    //@synthesize appLaunchesInTimeBucket17ForApp=_appLaunchesInTimeBucket17ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket18ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket18ForApp;                                                    //@synthesize appLaunchesInTimeBucket18ForApp=_appLaunchesInTimeBucket18ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket19ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket19ForApp;                                                    //@synthesize appLaunchesInTimeBucket19ForApp=_appLaunchesInTimeBucket19ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket20ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket20ForApp;                                                    //@synthesize appLaunchesInTimeBucket20ForApp=_appLaunchesInTimeBucket20ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket21ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket21ForApp;                                                    //@synthesize appLaunchesInTimeBucket21ForApp=_appLaunchesInTimeBucket21ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket22ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket22ForApp;                                                    //@synthesize appLaunchesInTimeBucket22ForApp=_appLaunchesInTimeBucket22ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket23ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket23ForApp;                                                    //@synthesize appLaunchesInTimeBucket23ForApp=_appLaunchesInTimeBucket23ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTimeBucket24ForApp; 
@property (assign,nonatomic) int appLaunchesInTimeBucket24ForApp;                                                    //@synthesize appLaunchesInTimeBucket24ForApp=_appLaunchesInTimeBucket24ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesOnDayOfWeekSundayForApp; 
@property (assign,nonatomic) int appLaunchesOnDayOfWeekSundayForApp;                                                 //@synthesize appLaunchesOnDayOfWeekSundayForApp=_appLaunchesOnDayOfWeekSundayForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesOnDayOfWeekMondayForApp; 
@property (assign,nonatomic) int appLaunchesOnDayOfWeekMondayForApp;                                                 //@synthesize appLaunchesOnDayOfWeekMondayForApp=_appLaunchesOnDayOfWeekMondayForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesOnDayOfWeekTuesdayForApp; 
@property (assign,nonatomic) int appLaunchesOnDayOfWeekTuesdayForApp;                                                //@synthesize appLaunchesOnDayOfWeekTuesdayForApp=_appLaunchesOnDayOfWeekTuesdayForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesOnDayOfWeekWednesdayForApp; 
@property (assign,nonatomic) int appLaunchesOnDayOfWeekWednesdayForApp;                                              //@synthesize appLaunchesOnDayOfWeekWednesdayForApp=_appLaunchesOnDayOfWeekWednesdayForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesOnDayOfWeekThursdayForApp; 
@property (assign,nonatomic) int appLaunchesOnDayOfWeekThursdayForApp;                                               //@synthesize appLaunchesOnDayOfWeekThursdayForApp=_appLaunchesOnDayOfWeekThursdayForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesOnDayOfWeekFridayForApp; 
@property (assign,nonatomic) int appLaunchesOnDayOfWeekFridayForApp;                                                 //@synthesize appLaunchesOnDayOfWeekFridayForApp=_appLaunchesOnDayOfWeekFridayForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesOnDayOfWeekSaturdayForApp; 
@property (assign,nonatomic) int appLaunchesOnDayOfWeekSaturdayForApp;                                               //@synthesize appLaunchesOnDayOfWeekSaturdayForApp=_appLaunchesOnDayOfWeekSaturdayForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtCoarseGeoHash0ForApp; 
@property (assign,nonatomic) int appLaunchesAtCoarseGeoHash0ForApp;                                                  //@synthesize appLaunchesAtCoarseGeoHash0ForApp=_appLaunchesAtCoarseGeoHash0ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtCoarseGeoHash1ForApp; 
@property (assign,nonatomic) int appLaunchesAtCoarseGeoHash1ForApp;                                                  //@synthesize appLaunchesAtCoarseGeoHash1ForApp=_appLaunchesAtCoarseGeoHash1ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtCoarseGeoHash2ForApp; 
@property (assign,nonatomic) int appLaunchesAtCoarseGeoHash2ForApp;                                                  //@synthesize appLaunchesAtCoarseGeoHash2ForApp=_appLaunchesAtCoarseGeoHash2ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtCoarseGeoHash3ForApp; 
@property (assign,nonatomic) int appLaunchesAtCoarseGeoHash3ForApp;                                                  //@synthesize appLaunchesAtCoarseGeoHash3ForApp=_appLaunchesAtCoarseGeoHash3ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtCoarseGeoHash4ForApp; 
@property (assign,nonatomic) int appLaunchesAtCoarseGeoHash4ForApp;                                                  //@synthesize appLaunchesAtCoarseGeoHash4ForApp=_appLaunchesAtCoarseGeoHash4ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtCoarseGeoHash5ForApp; 
@property (assign,nonatomic) int appLaunchesAtCoarseGeoHash5ForApp;                                                  //@synthesize appLaunchesAtCoarseGeoHash5ForApp=_appLaunchesAtCoarseGeoHash5ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtCoarseGeoHash6ForApp; 
@property (assign,nonatomic) int appLaunchesAtCoarseGeoHash6ForApp;                                                  //@synthesize appLaunchesAtCoarseGeoHash6ForApp=_appLaunchesAtCoarseGeoHash6ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtCoarseGeoHash7ForApp; 
@property (assign,nonatomic) int appLaunchesAtCoarseGeoHash7ForApp;                                                  //@synthesize appLaunchesAtCoarseGeoHash7ForApp=_appLaunchesAtCoarseGeoHash7ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtCoarseGeoHash8ForApp; 
@property (assign,nonatomic) int appLaunchesAtCoarseGeoHash8ForApp;                                                  //@synthesize appLaunchesAtCoarseGeoHash8ForApp=_appLaunchesAtCoarseGeoHash8ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtCoarseGeoHash9ForApp; 
@property (assign,nonatomic) int appLaunchesAtCoarseGeoHash9ForApp;                                                  //@synthesize appLaunchesAtCoarseGeoHash9ForApp=_appLaunchesAtCoarseGeoHash9ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash0ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash0ForApp;                                                //@synthesize appLaunchesAtSpecificGeoHash0ForApp=_appLaunchesAtSpecificGeoHash0ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash1ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash1ForApp;                                                //@synthesize appLaunchesAtSpecificGeoHash1ForApp=_appLaunchesAtSpecificGeoHash1ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash2ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash2ForApp;                                                //@synthesize appLaunchesAtSpecificGeoHash2ForApp=_appLaunchesAtSpecificGeoHash2ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash3ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash3ForApp;                                                //@synthesize appLaunchesAtSpecificGeoHash3ForApp=_appLaunchesAtSpecificGeoHash3ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash4ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash4ForApp;                                                //@synthesize appLaunchesAtSpecificGeoHash4ForApp=_appLaunchesAtSpecificGeoHash4ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash5ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash5ForApp;                                                //@synthesize appLaunchesAtSpecificGeoHash5ForApp=_appLaunchesAtSpecificGeoHash5ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash6ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash6ForApp;                                                //@synthesize appLaunchesAtSpecificGeoHash6ForApp=_appLaunchesAtSpecificGeoHash6ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash7ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash7ForApp;                                                //@synthesize appLaunchesAtSpecificGeoHash7ForApp=_appLaunchesAtSpecificGeoHash7ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash8ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash8ForApp;                                                //@synthesize appLaunchesAtSpecificGeoHash8ForApp=_appLaunchesAtSpecificGeoHash8ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash9ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash9ForApp;                                                //@synthesize appLaunchesAtSpecificGeoHash9ForApp=_appLaunchesAtSpecificGeoHash9ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash10ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash10ForApp;                                               //@synthesize appLaunchesAtSpecificGeoHash10ForApp=_appLaunchesAtSpecificGeoHash10ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash11ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash11ForApp;                                               //@synthesize appLaunchesAtSpecificGeoHash11ForApp=_appLaunchesAtSpecificGeoHash11ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash12ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash12ForApp;                                               //@synthesize appLaunchesAtSpecificGeoHash12ForApp=_appLaunchesAtSpecificGeoHash12ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash13ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash13ForApp;                                               //@synthesize appLaunchesAtSpecificGeoHash13ForApp=_appLaunchesAtSpecificGeoHash13ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHash14ForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHash14ForApp;                                               //@synthesize appLaunchesAtSpecificGeoHash14ForApp=_appLaunchesAtSpecificGeoHash14ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppNumberOfSpecificGeohashesForApp; 
@property (assign,nonatomic) int appNumberOfSpecificGeohashesForApp;                                                 //@synthesize appNumberOfSpecificGeohashesForApp=_appNumberOfSpecificGeohashesForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppNumberOfCoarseGeohashesForApp; 
@property (assign,nonatomic) int appNumberOfCoarseGeohashesForApp;                                                   //@synthesize appNumberOfCoarseGeohashesForApp=_appNumberOfCoarseGeohashesForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppEntropyForTimeBuckets; 
@property (assign,nonatomic) int appEntropyForTimeBuckets;                                                           //@synthesize appEntropyForTimeBuckets=_appEntropyForTimeBuckets - In the implementation block
@property (assign,nonatomic) BOOL hasAppEntropyForSpecificGeoHash; 
@property (assign,nonatomic) int appEntropyForSpecificGeoHash;                                                       //@synthesize appEntropyForSpecificGeoHash=_appEntropyForSpecificGeoHash - In the implementation block
@property (assign,nonatomic) BOOL hasAppEntropyForCoarseGeoHash; 
@property (assign,nonatomic) int appEntropyForCoarseGeoHash;                                                         //@synthesize appEntropyForCoarseGeoHash=_appEntropyForCoarseGeoHash - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtCoarseGeoHashForAppInContext; 
@property (assign,nonatomic) int appLaunchesAtCoarseGeoHashForAppInContext;                                          //@synthesize appLaunchesAtCoarseGeoHashForAppInContext=_appLaunchesAtCoarseGeoHashForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHashForAppInContext; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHashForAppInContext;                                        //@synthesize appLaunchesAtSpecificGeoHashForAppInContext=_appLaunchesAtSpecificGeoHashForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtDayOfWeekInContext; 
@property (assign,nonatomic) int appLaunchesAtDayOfWeekInContext;                                                    //@synthesize appLaunchesAtDayOfWeekInContext=_appLaunchesAtDayOfWeekInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtDayOfWeekForApp; 
@property (assign,nonatomic) int appLaunchesAtDayOfWeekForApp;                                                       //@synthesize appLaunchesAtDayOfWeekForApp=_appLaunchesAtDayOfWeekForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtTimeAndDayForAppInContext; 
@property (assign,nonatomic) int appLaunchesAtTimeAndDayForAppInContext;                                             //@synthesize appLaunchesAtTimeAndDayForAppInContext=_appLaunchesAtTimeAndDayForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtTimeAndDayInContext; 
@property (assign,nonatomic) int appLaunchesAtTimeAndDayInContext;                                                   //@synthesize appLaunchesAtTimeAndDayInContext=_appLaunchesAtTimeAndDayInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtTimeAndDayForApp; 
@property (assign,nonatomic) int appLaunchesAtTimeAndDayForApp;                                                      //@synthesize appLaunchesAtTimeAndDayForApp=_appLaunchesAtTimeAndDayForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtCoarseGeoHashInContext; 
@property (assign,nonatomic) int appLaunchesAtCoarseGeoHashInContext;                                                //@synthesize appLaunchesAtCoarseGeoHashInContext=_appLaunchesAtCoarseGeoHashInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtCoarseGeoHashForApp; 
@property (assign,nonatomic) int appLaunchesAtCoarseGeoHashForApp;                                                   //@synthesize appLaunchesAtCoarseGeoHashForApp=_appLaunchesAtCoarseGeoHashForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHashInContext; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHashInContext;                                              //@synthesize appLaunchesAtSpecificGeoHashInContext=_appLaunchesAtSpecificGeoHashInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSpecificGeoHashForApp; 
@property (assign,nonatomic) int appLaunchesAtSpecificGeoHashForApp;                                                 //@synthesize appLaunchesAtSpecificGeoHashForApp=_appLaunchesAtSpecificGeoHashForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesForAllAppsAndContextsDecayedAtCoarseContextRate; 
@property (assign,nonatomic) int appLaunchesForAllAppsAndContextsDecayedAtCoarseContextRate;                         //@synthesize appLaunchesForAllAppsAndContextsDecayedAtCoarseContextRate=_appLaunchesForAllAppsAndContextsDecayedAtCoarseContextRate - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesForAllAppsAndContextsDecayedAtSpecificContextRate; 
@property (assign,nonatomic) int appLaunchesForAllAppsAndContextsDecayedAtSpecificContextRate;                       //@synthesize appLaunchesForAllAppsAndContextsDecayedAtSpecificContextRate=_appLaunchesForAllAppsAndContextsDecayedAtSpecificContextRate - In the implementation block
@property (assign,nonatomic) BOOL hasIsLocationServicesDisabled; 
@property (assign,nonatomic) int isLocationServicesDisabled;                                                         //@synthesize isLocationServicesDisabled=_isLocationServicesDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTwoHourTimeBucketForAppInContext; 
@property (assign,nonatomic) int appLaunchesInTwoHourTimeBucketForAppInContext;                                      //@synthesize appLaunchesInTwoHourTimeBucketForAppInContext=_appLaunchesInTwoHourTimeBucketForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTwoHourTimeBucketInContext; 
@property (assign,nonatomic) int appLaunchesInTwoHourTimeBucketInContext;                                            //@synthesize appLaunchesInTwoHourTimeBucketInContext=_appLaunchesInTwoHourTimeBucketInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInTwoHourTimeBucketForApp; 
@property (assign,nonatomic) int appLaunchesInTwoHourTimeBucketForApp;                                               //@synthesize appLaunchesInTwoHourTimeBucketForApp=_appLaunchesInTwoHourTimeBucketForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsInTwoHourTimeBucketForAppInContext; 
@property (assign,nonatomic) int appConfirmsInTwoHourTimeBucketForAppInContext;                                      //@synthesize appConfirmsInTwoHourTimeBucketForAppInContext=_appConfirmsInTwoHourTimeBucketForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsInTwoHourTimeBucketInContext; 
@property (assign,nonatomic) int appConfirmsInTwoHourTimeBucketInContext;                                            //@synthesize appConfirmsInTwoHourTimeBucketInContext=_appConfirmsInTwoHourTimeBucketInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsInTwoHourTimeBucketForApp; 
@property (assign,nonatomic) int appConfirmsInTwoHourTimeBucketForApp;                                               //@synthesize appConfirmsInTwoHourTimeBucketForApp=_appConfirmsInTwoHourTimeBucketForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsInTwoHourTimeBucketForAppInContext; 
@property (assign,nonatomic) int appRejectsInTwoHourTimeBucketForAppInContext;                                       //@synthesize appRejectsInTwoHourTimeBucketForAppInContext=_appRejectsInTwoHourTimeBucketForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsInTwoHourTimeBucketInContext; 
@property (assign,nonatomic) int appRejectsInTwoHourTimeBucketInContext;                                             //@synthesize appRejectsInTwoHourTimeBucketInContext=_appRejectsInTwoHourTimeBucketInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsInTwoHourTimeBucketForApp; 
@property (assign,nonatomic) int appRejectsInTwoHourTimeBucketForApp;                                                //@synthesize appRejectsInTwoHourTimeBucketForApp=_appRejectsInTwoHourTimeBucketForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsAtDayOfWeekForAppInContext; 
@property (assign,nonatomic) int appConfirmsAtDayOfWeekForAppInContext;                                              //@synthesize appConfirmsAtDayOfWeekForAppInContext=_appConfirmsAtDayOfWeekForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsAtDayOfWeekInContext; 
@property (assign,nonatomic) int appConfirmsAtDayOfWeekInContext;                                                    //@synthesize appConfirmsAtDayOfWeekInContext=_appConfirmsAtDayOfWeekInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsAtDayOfWeekForApp; 
@property (assign,nonatomic) int appConfirmsAtDayOfWeekForApp;                                                       //@synthesize appConfirmsAtDayOfWeekForApp=_appConfirmsAtDayOfWeekForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsAtDayOfWeekForAppInContext; 
@property (assign,nonatomic) int appRejectsAtDayOfWeekForAppInContext;                                               //@synthesize appRejectsAtDayOfWeekForAppInContext=_appRejectsAtDayOfWeekForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsAtDayOfWeekInContext; 
@property (assign,nonatomic) int appRejectsAtDayOfWeekInContext;                                                     //@synthesize appRejectsAtDayOfWeekInContext=_appRejectsAtDayOfWeekInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsAtDayOfWeekForApp; 
@property (assign,nonatomic) int appRejectsAtDayOfWeekForApp;                                                        //@synthesize appRejectsAtDayOfWeekForApp=_appRejectsAtDayOfWeekForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsAtCoarseGeoHashForAppInContext; 
@property (assign,nonatomic) int appConfirmsAtCoarseGeoHashForAppInContext;                                          //@synthesize appConfirmsAtCoarseGeoHashForAppInContext=_appConfirmsAtCoarseGeoHashForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsAtCoarseGeoHashInContext; 
@property (assign,nonatomic) int appConfirmsAtCoarseGeoHashInContext;                                                //@synthesize appConfirmsAtCoarseGeoHashInContext=_appConfirmsAtCoarseGeoHashInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsAtCoarseGeoHashForApp; 
@property (assign,nonatomic) int appConfirmsAtCoarseGeoHashForApp;                                                   //@synthesize appConfirmsAtCoarseGeoHashForApp=_appConfirmsAtCoarseGeoHashForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsAtCoarseGeoHashForAppInContext; 
@property (assign,nonatomic) int appRejectsAtCoarseGeoHashForAppInContext;                                           //@synthesize appRejectsAtCoarseGeoHashForAppInContext=_appRejectsAtCoarseGeoHashForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsAtCoarseGeoHashInContext; 
@property (assign,nonatomic) int appRejectsAtCoarseGeoHashInContext;                                                 //@synthesize appRejectsAtCoarseGeoHashInContext=_appRejectsAtCoarseGeoHashInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsAtCoarseGeoHashForApp; 
@property (assign,nonatomic) int appRejectsAtCoarseGeoHashForApp;                                                    //@synthesize appRejectsAtCoarseGeoHashForApp=_appRejectsAtCoarseGeoHashForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsAtSpecificGeoHashForAppInContext; 
@property (assign,nonatomic) int appConfirmsAtSpecificGeoHashForAppInContext;                                        //@synthesize appConfirmsAtSpecificGeoHashForAppInContext=_appConfirmsAtSpecificGeoHashForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsAtSpecificGeoHashInContext; 
@property (assign,nonatomic) int appConfirmsAtSpecificGeoHashInContext;                                              //@synthesize appConfirmsAtSpecificGeoHashInContext=_appConfirmsAtSpecificGeoHashInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsAtSpecificGeoHashForApp; 
@property (assign,nonatomic) int appConfirmsAtSpecificGeoHashForApp;                                                 //@synthesize appConfirmsAtSpecificGeoHashForApp=_appConfirmsAtSpecificGeoHashForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsAtSpecificGeoHashForAppInContext; 
@property (assign,nonatomic) int appRejectsAtSpecificGeoHashForAppInContext;                                         //@synthesize appRejectsAtSpecificGeoHashForAppInContext=_appRejectsAtSpecificGeoHashForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsAtSpecificGeoHashInContext; 
@property (assign,nonatomic) int appRejectsAtSpecificGeoHashInContext;                                               //@synthesize appRejectsAtSpecificGeoHashInContext=_appRejectsAtSpecificGeoHashInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsAtSpecificGeoHashForApp; 
@property (assign,nonatomic) int appRejectsAtSpecificGeoHashForApp;                                                  //@synthesize appRejectsAtSpecificGeoHashForApp=_appRejectsAtSpecificGeoHashForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsForAllAppsAndContextsDecayedAtCoarseContextRate; 
@property (assign,nonatomic) int appConfirmsForAllAppsAndContextsDecayedAtCoarseContextRate;                         //@synthesize appConfirmsForAllAppsAndContextsDecayedAtCoarseContextRate=_appConfirmsForAllAppsAndContextsDecayedAtCoarseContextRate - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfirmsForAllAppsAndContextsDecayedAtSpecificContextRate; 
@property (assign,nonatomic) int appConfirmsForAllAppsAndContextsDecayedAtSpecificContextRate;                       //@synthesize appConfirmsForAllAppsAndContextsDecayedAtSpecificContextRate=_appConfirmsForAllAppsAndContextsDecayedAtSpecificContextRate - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsForAllAppsAndContextsDecayedAtCoarseContextRate; 
@property (assign,nonatomic) int appRejectsForAllAppsAndContextsDecayedAtCoarseContextRate;                          //@synthesize appRejectsForAllAppsAndContextsDecayedAtCoarseContextRate=_appRejectsForAllAppsAndContextsDecayedAtCoarseContextRate - In the implementation block
@property (assign,nonatomic) BOOL hasAppRejectsForAllAppsAndContextsDecayedAtSpecificContextRate; 
@property (assign,nonatomic) int appRejectsForAllAppsAndContextsDecayedAtSpecificContextRate;                        //@synthesize appRejectsForAllAppsAndContextsDecayedAtSpecificContextRate=_appRejectsForAllAppsAndContextsDecayedAtSpecificContextRate - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentTimeBucketFromZeroToTwentyFour; 
@property (assign,nonatomic) int currentTimeBucketFromZeroToTwentyFour;                                              //@synthesize currentTimeBucketFromZeroToTwentyFour=_currentTimeBucketFromZeroToTwentyFour - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtDayOfWeekForActionInContext; 
@property (assign,nonatomic) int actionsAtDayOfWeekForActionInContext;                                               //@synthesize actionsAtDayOfWeekForActionInContext=_actionsAtDayOfWeekForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtDayOfWeekInContext; 
@property (assign,nonatomic) int actionsAtDayOfWeekInContext;                                                        //@synthesize actionsAtDayOfWeekInContext=_actionsAtDayOfWeekInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtDayOfWeekForAction; 
@property (assign,nonatomic) int actionsAtDayOfWeekForAction;                                                        //@synthesize actionsAtDayOfWeekForAction=_actionsAtDayOfWeekForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtCoarseGeoHashForActionInContext; 
@property (assign,nonatomic) int actionsAtCoarseGeoHashForActionInContext;                                           //@synthesize actionsAtCoarseGeoHashForActionInContext=_actionsAtCoarseGeoHashForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtCoarseGeoHashInContext; 
@property (assign,nonatomic) int actionsAtCoarseGeoHashInContext;                                                    //@synthesize actionsAtCoarseGeoHashInContext=_actionsAtCoarseGeoHashInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtCoarseGeoHashForAction; 
@property (assign,nonatomic) int actionsAtCoarseGeoHashForAction;                                                    //@synthesize actionsAtCoarseGeoHashForAction=_actionsAtCoarseGeoHashForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHashForActionInContext; 
@property (assign,nonatomic) int actionsAtSpecificGeoHashForActionInContext;                                         //@synthesize actionsAtSpecificGeoHashForActionInContext=_actionsAtSpecificGeoHashForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHashInContext; 
@property (assign,nonatomic) int actionsAtSpecificGeoHashInContext;                                                  //@synthesize actionsAtSpecificGeoHashInContext=_actionsAtSpecificGeoHashInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHashForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHashForAction;                                                  //@synthesize actionsAtSpecificGeoHashForAction=_actionsAtSpecificGeoHashForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtTimeOfDayForActionInContext; 
@property (assign,nonatomic) int actionsAtTimeOfDayForActionInContext;                                               //@synthesize actionsAtTimeOfDayForActionInContext=_actionsAtTimeOfDayForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtTimeOfDayInContext; 
@property (assign,nonatomic) int actionsAtTimeOfDayInContext;                                                        //@synthesize actionsAtTimeOfDayInContext=_actionsAtTimeOfDayInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtTimeOfDayForAction; 
@property (assign,nonatomic) int actionsAtTimeOfDayForAction;                                                        //@synthesize actionsAtTimeOfDayForAction=_actionsAtTimeOfDayForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsAtTimeOfDayForActionInContext; 
@property (assign,nonatomic) int actionConfirmsAtTimeOfDayForActionInContext;                                        //@synthesize actionConfirmsAtTimeOfDayForActionInContext=_actionConfirmsAtTimeOfDayForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsAtTimeOfDayInContext; 
@property (assign,nonatomic) int actionConfirmsAtTimeOfDayInContext;                                                 //@synthesize actionConfirmsAtTimeOfDayInContext=_actionConfirmsAtTimeOfDayInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsAtTimeOfDayForAction; 
@property (assign,nonatomic) int actionConfirmsAtTimeOfDayForAction;                                                 //@synthesize actionConfirmsAtTimeOfDayForAction=_actionConfirmsAtTimeOfDayForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsAtTimeOfDayForActionInContext; 
@property (assign,nonatomic) int actionRejectsAtTimeOfDayForActionInContext;                                         //@synthesize actionRejectsAtTimeOfDayForActionInContext=_actionRejectsAtTimeOfDayForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsAtTimeOfDayInContext; 
@property (assign,nonatomic) int actionRejectsAtTimeOfDayInContext;                                                  //@synthesize actionRejectsAtTimeOfDayInContext=_actionRejectsAtTimeOfDayInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsAtTimeOfDayForAction; 
@property (assign,nonatomic) int actionRejectsAtTimeOfDayForAction;                                                  //@synthesize actionRejectsAtTimeOfDayForAction=_actionRejectsAtTimeOfDayForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsAtDayOfWeekForActionInContext; 
@property (assign,nonatomic) int actionConfirmsAtDayOfWeekForActionInContext;                                        //@synthesize actionConfirmsAtDayOfWeekForActionInContext=_actionConfirmsAtDayOfWeekForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsAtDayOfWeekInContext; 
@property (assign,nonatomic) int actionConfirmsAtDayOfWeekInContext;                                                 //@synthesize actionConfirmsAtDayOfWeekInContext=_actionConfirmsAtDayOfWeekInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsAtDayOfWeekForAction; 
@property (assign,nonatomic) int actionConfirmsAtDayOfWeekForAction;                                                 //@synthesize actionConfirmsAtDayOfWeekForAction=_actionConfirmsAtDayOfWeekForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsAtDayOfWeekForActionInContext; 
@property (assign,nonatomic) int actionRejectsAtDayOfWeekForActionInContext;                                         //@synthesize actionRejectsAtDayOfWeekForActionInContext=_actionRejectsAtDayOfWeekForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsAtDayOfWeekInContext; 
@property (assign,nonatomic) int actionRejectsAtDayOfWeekInContext;                                                  //@synthesize actionRejectsAtDayOfWeekInContext=_actionRejectsAtDayOfWeekInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsAtDayOfWeekForAction; 
@property (assign,nonatomic) int actionRejectsAtDayOfWeekForAction;                                                  //@synthesize actionRejectsAtDayOfWeekForAction=_actionRejectsAtDayOfWeekForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsAtCoarseGeoHashForActionInContext; 
@property (assign,nonatomic) int actionConfirmsAtCoarseGeoHashForActionInContext;                                    //@synthesize actionConfirmsAtCoarseGeoHashForActionInContext=_actionConfirmsAtCoarseGeoHashForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsAtCoarseGeoHashInContext; 
@property (assign,nonatomic) int actionConfirmsAtCoarseGeoHashInContext;                                             //@synthesize actionConfirmsAtCoarseGeoHashInContext=_actionConfirmsAtCoarseGeoHashInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsAtCoarseGeoHashForAction; 
@property (assign,nonatomic) int actionConfirmsAtCoarseGeoHashForAction;                                             //@synthesize actionConfirmsAtCoarseGeoHashForAction=_actionConfirmsAtCoarseGeoHashForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsAtCoarseGeoHashForActionInContext; 
@property (assign,nonatomic) int actionRejectsAtCoarseGeoHashForActionInContext;                                     //@synthesize actionRejectsAtCoarseGeoHashForActionInContext=_actionRejectsAtCoarseGeoHashForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsAtCoarseGeoHashInContext; 
@property (assign,nonatomic) int actionRejectsAtCoarseGeoHashInContext;                                              //@synthesize actionRejectsAtCoarseGeoHashInContext=_actionRejectsAtCoarseGeoHashInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsAtCoarseGeoHashForAction; 
@property (assign,nonatomic) int actionRejectsAtCoarseGeoHashForAction;                                              //@synthesize actionRejectsAtCoarseGeoHashForAction=_actionRejectsAtCoarseGeoHashForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsAtSpecificGeoHashForActionInContext; 
@property (assign,nonatomic) int actionConfirmsAtSpecificGeoHashForActionInContext;                                  //@synthesize actionConfirmsAtSpecificGeoHashForActionInContext=_actionConfirmsAtSpecificGeoHashForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsAtSpecificGeoHashInContext; 
@property (assign,nonatomic) int actionConfirmsAtSpecificGeoHashInContext;                                           //@synthesize actionConfirmsAtSpecificGeoHashInContext=_actionConfirmsAtSpecificGeoHashInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionConfirmsAtSpecificGeoHashForAction; 
@property (assign,nonatomic) int actionConfirmsAtSpecificGeoHashForAction;                                           //@synthesize actionConfirmsAtSpecificGeoHashForAction=_actionConfirmsAtSpecificGeoHashForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsAtSpecificGeoHashForActionInContext; 
@property (assign,nonatomic) int actionRejectsAtSpecificGeoHashForActionInContext;                                   //@synthesize actionRejectsAtSpecificGeoHashForActionInContext=_actionRejectsAtSpecificGeoHashForActionInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsAtSpecificGeoHashInContext; 
@property (assign,nonatomic) int actionRejectsAtSpecificGeoHashInContext;                                            //@synthesize actionRejectsAtSpecificGeoHashInContext=_actionRejectsAtSpecificGeoHashInContext - In the implementation block
@property (assign,nonatomic) BOOL hasActionRejectsAtSpecificGeoHashForAction; 
@property (assign,nonatomic) int actionRejectsAtSpecificGeoHashForAction;                                            //@synthesize actionRejectsAtSpecificGeoHashForAction=_actionRejectsAtSpecificGeoHashForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket0ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket0ForAction;                                                      //@synthesize actionsInTimeBucket0ForAction=_actionsInTimeBucket0ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket1ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket1ForAction;                                                      //@synthesize actionsInTimeBucket1ForAction=_actionsInTimeBucket1ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket2ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket2ForAction;                                                      //@synthesize actionsInTimeBucket2ForAction=_actionsInTimeBucket2ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket3ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket3ForAction;                                                      //@synthesize actionsInTimeBucket3ForAction=_actionsInTimeBucket3ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket4ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket4ForAction;                                                      //@synthesize actionsInTimeBucket4ForAction=_actionsInTimeBucket4ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket5ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket5ForAction;                                                      //@synthesize actionsInTimeBucket5ForAction=_actionsInTimeBucket5ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket6ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket6ForAction;                                                      //@synthesize actionsInTimeBucket6ForAction=_actionsInTimeBucket6ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket7ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket7ForAction;                                                      //@synthesize actionsInTimeBucket7ForAction=_actionsInTimeBucket7ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket8ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket8ForAction;                                                      //@synthesize actionsInTimeBucket8ForAction=_actionsInTimeBucket8ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket9ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket9ForAction;                                                      //@synthesize actionsInTimeBucket9ForAction=_actionsInTimeBucket9ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket10ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket10ForAction;                                                     //@synthesize actionsInTimeBucket10ForAction=_actionsInTimeBucket10ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket11ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket11ForAction;                                                     //@synthesize actionsInTimeBucket11ForAction=_actionsInTimeBucket11ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket12ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket12ForAction;                                                     //@synthesize actionsInTimeBucket12ForAction=_actionsInTimeBucket12ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket13ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket13ForAction;                                                     //@synthesize actionsInTimeBucket13ForAction=_actionsInTimeBucket13ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket14ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket14ForAction;                                                     //@synthesize actionsInTimeBucket14ForAction=_actionsInTimeBucket14ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket15ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket15ForAction;                                                     //@synthesize actionsInTimeBucket15ForAction=_actionsInTimeBucket15ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket16ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket16ForAction;                                                     //@synthesize actionsInTimeBucket16ForAction=_actionsInTimeBucket16ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket17ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket17ForAction;                                                     //@synthesize actionsInTimeBucket17ForAction=_actionsInTimeBucket17ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket18ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket18ForAction;                                                     //@synthesize actionsInTimeBucket18ForAction=_actionsInTimeBucket18ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket19ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket19ForAction;                                                     //@synthesize actionsInTimeBucket19ForAction=_actionsInTimeBucket19ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket20ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket20ForAction;                                                     //@synthesize actionsInTimeBucket20ForAction=_actionsInTimeBucket20ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket21ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket21ForAction;                                                     //@synthesize actionsInTimeBucket21ForAction=_actionsInTimeBucket21ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket22ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket22ForAction;                                                     //@synthesize actionsInTimeBucket22ForAction=_actionsInTimeBucket22ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket23ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket23ForAction;                                                     //@synthesize actionsInTimeBucket23ForAction=_actionsInTimeBucket23ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsInTimeBucket24ForAction; 
@property (assign,nonatomic) int actionsInTimeBucket24ForAction;                                                     //@synthesize actionsInTimeBucket24ForAction=_actionsInTimeBucket24ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsOnDayOfWeekSundayForAction; 
@property (assign,nonatomic) int actionsOnDayOfWeekSundayForAction;                                                  //@synthesize actionsOnDayOfWeekSundayForAction=_actionsOnDayOfWeekSundayForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsOnDayOfWeekMondayForAction; 
@property (assign,nonatomic) int actionsOnDayOfWeekMondayForAction;                                                  //@synthesize actionsOnDayOfWeekMondayForAction=_actionsOnDayOfWeekMondayForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsOnDayOfWeekTuesdayForAction; 
@property (assign,nonatomic) int actionsOnDayOfWeekTuesdayForAction;                                                 //@synthesize actionsOnDayOfWeekTuesdayForAction=_actionsOnDayOfWeekTuesdayForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsOnDayOfWeekWednesdayForAction; 
@property (assign,nonatomic) int actionsOnDayOfWeekWednesdayForAction;                                               //@synthesize actionsOnDayOfWeekWednesdayForAction=_actionsOnDayOfWeekWednesdayForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsOnDayOfWeekThursdayForAction; 
@property (assign,nonatomic) int actionsOnDayOfWeekThursdayForAction;                                                //@synthesize actionsOnDayOfWeekThursdayForAction=_actionsOnDayOfWeekThursdayForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsOnDayOfWeekFridayForAction; 
@property (assign,nonatomic) int actionsOnDayOfWeekFridayForAction;                                                  //@synthesize actionsOnDayOfWeekFridayForAction=_actionsOnDayOfWeekFridayForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsOnDayOfWeekSaturdayForAction; 
@property (assign,nonatomic) int actionsOnDayOfWeekSaturdayForAction;                                                //@synthesize actionsOnDayOfWeekSaturdayForAction=_actionsOnDayOfWeekSaturdayForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtCoarseGeoHash0ForAction; 
@property (assign,nonatomic) int actionsAtCoarseGeoHash0ForAction;                                                   //@synthesize actionsAtCoarseGeoHash0ForAction=_actionsAtCoarseGeoHash0ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtCoarseGeoHash1ForAction; 
@property (assign,nonatomic) int actionsAtCoarseGeoHash1ForAction;                                                   //@synthesize actionsAtCoarseGeoHash1ForAction=_actionsAtCoarseGeoHash1ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtCoarseGeoHash2ForAction; 
@property (assign,nonatomic) int actionsAtCoarseGeoHash2ForAction;                                                   //@synthesize actionsAtCoarseGeoHash2ForAction=_actionsAtCoarseGeoHash2ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtCoarseGeoHash3ForAction; 
@property (assign,nonatomic) int actionsAtCoarseGeoHash3ForAction;                                                   //@synthesize actionsAtCoarseGeoHash3ForAction=_actionsAtCoarseGeoHash3ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtCoarseGeoHash4ForAction; 
@property (assign,nonatomic) int actionsAtCoarseGeoHash4ForAction;                                                   //@synthesize actionsAtCoarseGeoHash4ForAction=_actionsAtCoarseGeoHash4ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtCoarseGeoHash5ForAction; 
@property (assign,nonatomic) int actionsAtCoarseGeoHash5ForAction;                                                   //@synthesize actionsAtCoarseGeoHash5ForAction=_actionsAtCoarseGeoHash5ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtCoarseGeoHash6ForAction; 
@property (assign,nonatomic) int actionsAtCoarseGeoHash6ForAction;                                                   //@synthesize actionsAtCoarseGeoHash6ForAction=_actionsAtCoarseGeoHash6ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtCoarseGeoHash7ForAction; 
@property (assign,nonatomic) int actionsAtCoarseGeoHash7ForAction;                                                   //@synthesize actionsAtCoarseGeoHash7ForAction=_actionsAtCoarseGeoHash7ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtCoarseGeoHash8ForAction; 
@property (assign,nonatomic) int actionsAtCoarseGeoHash8ForAction;                                                   //@synthesize actionsAtCoarseGeoHash8ForAction=_actionsAtCoarseGeoHash8ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtCoarseGeoHash9ForAction; 
@property (assign,nonatomic) int actionsAtCoarseGeoHash9ForAction;                                                   //@synthesize actionsAtCoarseGeoHash9ForAction=_actionsAtCoarseGeoHash9ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash0ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash0ForAction;                                                 //@synthesize actionsAtSpecificGeoHash0ForAction=_actionsAtSpecificGeoHash0ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash1ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash1ForAction;                                                 //@synthesize actionsAtSpecificGeoHash1ForAction=_actionsAtSpecificGeoHash1ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash2ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash2ForAction;                                                 //@synthesize actionsAtSpecificGeoHash2ForAction=_actionsAtSpecificGeoHash2ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash3ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash3ForAction;                                                 //@synthesize actionsAtSpecificGeoHash3ForAction=_actionsAtSpecificGeoHash3ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash4ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash4ForAction;                                                 //@synthesize actionsAtSpecificGeoHash4ForAction=_actionsAtSpecificGeoHash4ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash5ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash5ForAction;                                                 //@synthesize actionsAtSpecificGeoHash5ForAction=_actionsAtSpecificGeoHash5ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash6ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash6ForAction;                                                 //@synthesize actionsAtSpecificGeoHash6ForAction=_actionsAtSpecificGeoHash6ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash7ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash7ForAction;                                                 //@synthesize actionsAtSpecificGeoHash7ForAction=_actionsAtSpecificGeoHash7ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash8ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash8ForAction;                                                 //@synthesize actionsAtSpecificGeoHash8ForAction=_actionsAtSpecificGeoHash8ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash9ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash9ForAction;                                                 //@synthesize actionsAtSpecificGeoHash9ForAction=_actionsAtSpecificGeoHash9ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash10ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash10ForAction;                                                //@synthesize actionsAtSpecificGeoHash10ForAction=_actionsAtSpecificGeoHash10ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash11ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash11ForAction;                                                //@synthesize actionsAtSpecificGeoHash11ForAction=_actionsAtSpecificGeoHash11ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash12ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash12ForAction;                                                //@synthesize actionsAtSpecificGeoHash12ForAction=_actionsAtSpecificGeoHash12ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash13ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash13ForAction;                                                //@synthesize actionsAtSpecificGeoHash13ForAction=_actionsAtSpecificGeoHash13ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionsAtSpecificGeoHash14ForAction; 
@property (assign,nonatomic) int actionsAtSpecificGeoHash14ForAction;                                                //@synthesize actionsAtSpecificGeoHash14ForAction=_actionsAtSpecificGeoHash14ForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionEntropyForTimeOfDay; 
@property (assign,nonatomic) int actionEntropyForTimeOfDay;                                                          //@synthesize actionEntropyForTimeOfDay=_actionEntropyForTimeOfDay - In the implementation block
@property (assign,nonatomic) BOOL hasActionEntropyForDayOfWeek; 
@property (assign,nonatomic) int actionEntropyForDayOfWeek;                                                          //@synthesize actionEntropyForDayOfWeek=_actionEntropyForDayOfWeek - In the implementation block
@property (assign,nonatomic) BOOL hasActionEntropyForCoarseGeoHash; 
@property (assign,nonatomic) int actionEntropyForCoarseGeoHash;                                                      //@synthesize actionEntropyForCoarseGeoHash=_actionEntropyForCoarseGeoHash - In the implementation block
@property (assign,nonatomic) BOOL hasActionEntropyForSpecificGeoHash; 
@property (assign,nonatomic) int actionEntropyForSpecificGeoHash;                                                    //@synthesize actionEntropyForSpecificGeoHash=_actionEntropyForSpecificGeoHash - In the implementation block
@property (assign,nonatomic) BOOL hasActionNumberOfSpecificGeohashesForAction; 
@property (assign,nonatomic) int actionNumberOfSpecificGeohashesForAction;                                           //@synthesize actionNumberOfSpecificGeohashesForAction=_actionNumberOfSpecificGeohashesForAction - In the implementation block
@property (assign,nonatomic) BOOL hasActionNumberOfCoarseGeohashesForAction; 
@property (assign,nonatomic) int actionNumberOfCoarseGeohashesForAction;                                             //@synthesize actionNumberOfCoarseGeohashesForAction=_actionNumberOfCoarseGeohashesForAction - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtZoom7GeoHashForAppInContext; 
@property (assign,nonatomic) int appLaunchesAtZoom7GeoHashForAppInContext;                                           //@synthesize appLaunchesAtZoom7GeoHashForAppInContext=_appLaunchesAtZoom7GeoHashForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtZoom7GeoHashInContext; 
@property (assign,nonatomic) int appLaunchesAtZoom7GeoHashInContext;                                                 //@synthesize appLaunchesAtZoom7GeoHashInContext=_appLaunchesAtZoom7GeoHashInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtZoom7GeoHashForApp; 
@property (assign,nonatomic) int appLaunchesAtZoom7GeoHashForApp;                                                    //@synthesize appLaunchesAtZoom7GeoHashForApp=_appLaunchesAtZoom7GeoHashForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtZoom7GeoHash0ForApp; 
@property (assign,nonatomic) int appLaunchesAtZoom7GeoHash0ForApp;                                                   //@synthesize appLaunchesAtZoom7GeoHash0ForApp=_appLaunchesAtZoom7GeoHash0ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtZoom7GeoHash1ForApp; 
@property (assign,nonatomic) int appLaunchesAtZoom7GeoHash1ForApp;                                                   //@synthesize appLaunchesAtZoom7GeoHash1ForApp=_appLaunchesAtZoom7GeoHash1ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtZoom7GeoHash2ForApp; 
@property (assign,nonatomic) int appLaunchesAtZoom7GeoHash2ForApp;                                                   //@synthesize appLaunchesAtZoom7GeoHash2ForApp=_appLaunchesAtZoom7GeoHash2ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtZoom7GeoHash3ForApp; 
@property (assign,nonatomic) int appLaunchesAtZoom7GeoHash3ForApp;                                                   //@synthesize appLaunchesAtZoom7GeoHash3ForApp=_appLaunchesAtZoom7GeoHash3ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtZoom7GeoHash4ForApp; 
@property (assign,nonatomic) int appLaunchesAtZoom7GeoHash4ForApp;                                                   //@synthesize appLaunchesAtZoom7GeoHash4ForApp=_appLaunchesAtZoom7GeoHash4ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtZoom7GeoHash5ForApp; 
@property (assign,nonatomic) int appLaunchesAtZoom7GeoHash5ForApp;                                                   //@synthesize appLaunchesAtZoom7GeoHash5ForApp=_appLaunchesAtZoom7GeoHash5ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtZoom7GeoHash6ForApp; 
@property (assign,nonatomic) int appLaunchesAtZoom7GeoHash6ForApp;                                                   //@synthesize appLaunchesAtZoom7GeoHash6ForApp=_appLaunchesAtZoom7GeoHash6ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtZoom7GeoHash7ForApp; 
@property (assign,nonatomic) int appLaunchesAtZoom7GeoHash7ForApp;                                                   //@synthesize appLaunchesAtZoom7GeoHash7ForApp=_appLaunchesAtZoom7GeoHash7ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtZoom7GeoHash8ForApp; 
@property (assign,nonatomic) int appLaunchesAtZoom7GeoHash8ForApp;                                                   //@synthesize appLaunchesAtZoom7GeoHash8ForApp=_appLaunchesAtZoom7GeoHash8ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtZoom7GeoHash9ForApp; 
@property (assign,nonatomic) int appLaunchesAtZoom7GeoHash9ForApp;                                                   //@synthesize appLaunchesAtZoom7GeoHash9ForApp=_appLaunchesAtZoom7GeoHash9ForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppEntropyForZoom7GeoHash; 
@property (assign,nonatomic) int appEntropyForZoom7GeoHash;                                                          //@synthesize appEntropyForZoom7GeoHash=_appEntropyForZoom7GeoHash - In the implementation block
@property (assign,nonatomic) BOOL hasAppNumberOfZoom7GeohashesForApp; 
@property (assign,nonatomic) int appNumberOfZoom7GeohashesForApp;                                                    //@synthesize appNumberOfZoom7GeohashesForApp=_appNumberOfZoom7GeohashesForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppGeoAssociationScoreAtZoom7; 
@property (assign,nonatomic) int appGeoAssociationScoreAtZoom7;                                                      //@synthesize appGeoAssociationScoreAtZoom7=_appGeoAssociationScoreAtZoom7 - In the implementation block
@property (assign,nonatomic) BOOL hasAppGeoAssociationScoreAtZoom13; 
@property (assign,nonatomic) int appGeoAssociationScoreAtZoom13;                                                     //@synthesize appGeoAssociationScoreAtZoom13=_appGeoAssociationScoreAtZoom13 - In the implementation block
@property (assign,nonatomic) BOOL hasAppGeoAssociationScoreAtZoom16; 
@property (assign,nonatomic) int appGeoAssociationScoreAtZoom16;                                                     //@synthesize appGeoAssociationScoreAtZoom16=_appGeoAssociationScoreAtZoom16 - In the implementation block
@property (assign,nonatomic) BOOL hasAppPartOfWeekAssociationScore; 
@property (assign,nonatomic) int appPartOfWeekAssociationScore;                                                      //@synthesize appPartOfWeekAssociationScore=_appPartOfWeekAssociationScore - In the implementation block
@property (assign,nonatomic) BOOL hasAppCoarseTimeAssociationScore; 
@property (assign,nonatomic) int appCoarseTimeAssociationScore;                                                      //@synthesize appCoarseTimeAssociationScore=_appCoarseTimeAssociationScore - In the implementation block
@property (assign,nonatomic) BOOL hasAppLOITypeAssociationScore; 
@property (assign,nonatomic) int appLOITypeAssociationScore;                                                         //@synthesize appLOITypeAssociationScore=_appLOITypeAssociationScore - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSSIDForAppInContext; 
@property (assign,nonatomic) int appLaunchesAtSSIDForAppInContext;                                                   //@synthesize appLaunchesAtSSIDForAppInContext=_appLaunchesAtSSIDForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesAtSSIDForApp; 
@property (assign,nonatomic) int appLaunchesAtSSIDForApp;                                                            //@synthesize appLaunchesAtSSIDForApp=_appLaunchesAtSSIDForApp - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesForCoreMotionForAppInContext; 
@property (assign,nonatomic) int appLaunchesForCoreMotionForAppInContext;                                            //@synthesize appLaunchesForCoreMotionForAppInContext=_appLaunchesForCoreMotionForAppInContext - In the implementation block
@property (assign,nonatomic) BOOL hasAppLaunchesInAirplaneModeForAppInContext; 
@property (assign,nonatomic) int appLaunchesInAirplaneModeForAppInContext;                                           //@synthesize appLaunchesInAirplaneModeForAppInContext=_appLaunchesInAirplaneModeForAppInContext - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)feedback;
-(void)setFeedback:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasFeedback;
-(int)appCount;
-(void)setAppCount:(int)arg1 ;
-(void)setHasAppCount:(BOOL)arg1 ;
-(BOOL)hasAppCount;
-(int)intentCategory;
-(void)setIntentCategory:(int)arg1 ;
-(BOOL)hasIntentCategory;
-(void)setHasIntentCategory:(BOOL)arg1 ;
-(void)setHasFeedback:(BOOL)arg1 ;
-(int)folderPage;
-(void)setFolderPage:(int)arg1 ;
-(int)onWifi;
-(void)setInstallAge:(int)arg1 ;
-(void)setHasInstallAge:(BOOL)arg1 ;
-(BOOL)hasInstallAge;
-(void)setLastSpotlightLaunchAge:(int)arg1 ;
-(void)setHasLastSpotlightLaunchAge:(BOOL)arg1 ;
-(BOOL)hasLastSpotlightLaunchAge;
-(void)setLastLaunchAge:(int)arg1 ;
-(void)setHasLastLaunchAge:(BOOL)arg1 ;
-(BOOL)hasLastLaunchAge;
-(void)setMedianSecondsBetweenLaunches:(int)arg1 ;
-(void)setHasMedianSecondsBetweenLaunches:(BOOL)arg1 ;
-(BOOL)hasMedianSecondsBetweenLaunches;
-(void)setAverageSecondsBetweenLaunches:(int)arg1 ;
-(void)setHasAverageSecondsBetweenLaunches:(BOOL)arg1 ;
-(BOOL)hasAverageSecondsBetweenLaunches;
-(void)setUnlockTime:(int)arg1 ;
-(void)setHasUnlockTime:(BOOL)arg1 ;
-(BOOL)hasUnlockTime;
-(void)setAppInFolder:(int)arg1 ;
-(void)setHasAppInFolder:(BOOL)arg1 ;
-(BOOL)hasAppInFolder;
-(void)setHasFolderPage:(BOOL)arg1 ;
-(BOOL)hasFolderPage;
-(void)setSpringBoardPage:(int)arg1 ;
-(void)setHasSpringBoardPage:(BOOL)arg1 ;
-(BOOL)hasSpringBoardPage;
-(void)setOnSpringBoardDock:(int)arg1 ;
-(void)setHasOnSpringBoardDock:(BOOL)arg1 ;
-(BOOL)hasOnSpringBoardDock;
-(void)setFeedbackConfirms:(int)arg1 ;
-(void)setHasFeedbackConfirms:(BOOL)arg1 ;
-(BOOL)hasFeedbackConfirms;
-(void)setFeedbackRejects:(int)arg1 ;
-(void)setHasFeedbackRejects:(BOOL)arg1 ;
-(BOOL)hasFeedbackRejects;
-(void)setAPRExplicitConfirmRatio:(int)arg1 ;
-(void)setHasAPRExplicitConfirmRatio:(BOOL)arg1 ;
-(BOOL)hasAPRExplicitConfirmRatio;
-(void)setAPRExplicitRejectRatio:(int)arg1 ;
-(void)setHasAPRExplicitRejectRatio:(BOOL)arg1 ;
-(BOOL)hasAPRExplicitRejectRatio;
-(void)setAPRImplicitConfirmRatio:(int)arg1 ;
-(void)setHasAPRImplicitConfirmRatio:(BOOL)arg1 ;
-(BOOL)hasAPRImplicitConfirmRatio;
-(void)setAPRImplicitRejectRatio:(int)arg1 ;
-(void)setHasAPRImplicitRejectRatio:(BOOL)arg1 ;
-(BOOL)hasAPRImplicitRejectRatio;
-(void)setAPRSiriKitIntentsRatio:(int)arg1 ;
-(void)setHasAPRSiriKitIntentsRatio:(BOOL)arg1 ;
-(BOOL)hasAPRSiriKitIntentsRatio;
-(void)setAPRNonSiriKitIntentsRatio:(int)arg1 ;
-(void)setHasAPRNonSiriKitIntentsRatio:(BOOL)arg1 ;
-(BOOL)hasAPRNonSiriKitIntentsRatio;
-(void)setAPRTotalExplicitConfirms:(int)arg1 ;
-(void)setHasAPRTotalExplicitConfirms:(BOOL)arg1 ;
-(BOOL)hasAPRTotalExplicitConfirms;
-(void)setAPRTotalExplicitRejects:(int)arg1 ;
-(void)setHasAPRTotalExplicitRejects:(BOOL)arg1 ;
-(BOOL)hasAPRTotalExplicitRejects;
-(void)setAPRTotalImplicitConfirms:(int)arg1 ;
-(void)setHasAPRTotalImplicitConfirms:(BOOL)arg1 ;
-(BOOL)hasAPRTotalImplicitConfirms;
-(void)setAPRTotalImplicitRejects:(int)arg1 ;
-(void)setHasAPRTotalImplicitRejects:(BOOL)arg1 ;
-(BOOL)hasAPRTotalImplicitRejects;
-(void)setAPRTotalSiriKitIntents:(int)arg1 ;
-(void)setHasAPRTotalSiriKitIntents:(BOOL)arg1 ;
-(BOOL)hasAPRTotalSiriKitIntents;
-(void)setAPRTotalNonSiriKitIntents:(int)arg1 ;
-(void)setHasAPRTotalNonSiriKitIntents:(BOOL)arg1 ;
-(BOOL)hasAPRTotalNonSiriKitIntents;
-(void)setLaunchTimePopularity:(int)arg1 ;
-(void)setHasLaunchTimePopularity:(BOOL)arg1 ;
-(BOOL)hasLaunchTimePopularity;
-(void)setTimeOfDayPopularity:(int)arg1 ;
-(void)setHasTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasTimeOfDayPopularity;
-(void)setCoarseTimeOfDayPopularity:(int)arg1 ;
-(void)setHasCoarseTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasCoarseTimeOfDayPopularity;
-(void)setLaunchPopularity:(int)arg1 ;
-(void)setHasLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasLaunchPopularity;
-(void)setSpotlightLaunchTimePopularity:(int)arg1 ;
-(void)setHasSpotlightLaunchTimePopularity:(BOOL)arg1 ;
-(BOOL)hasSpotlightLaunchTimePopularity;
-(void)setSpotlightTimeOfDayPopularity:(int)arg1 ;
-(void)setHasSpotlightTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasSpotlightTimeOfDayPopularity;
-(void)setSpotlightLaunchPopularity:(int)arg1 ;
-(void)setHasSpotlightLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasSpotlightLaunchPopularity;
-(void)setDayZeroPoints:(int)arg1 ;
-(void)setHasDayZeroPoints:(BOOL)arg1 ;
-(BOOL)hasDayZeroPoints;
-(void)setStaticAppPoints:(int)arg1 ;
-(void)setHasStaticAppPoints:(BOOL)arg1 ;
-(BOOL)hasStaticAppPoints;
-(void)setLaunchDayOfWeekPopularity:(int)arg1 ;
-(void)setHasLaunchDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasLaunchDayOfWeekPopularity;
-(void)setDayOfWeekPopularity:(int)arg1 ;
-(void)setHasDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasDayOfWeekPopularity;
-(void)setLaunchSequencePopularity:(int)arg1 ;
-(void)setHasLaunchSequencePopularity:(BOOL)arg1 ;
-(BOOL)hasLaunchSequencePopularity;
-(void)setLaunchLocationPopularity:(int)arg1 ;
-(void)setHasLaunchLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasLaunchLocationPopularity;
-(void)setEntropyLaunchPopularity:(int)arg1 ;
-(void)setHasEntropyLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasEntropyLaunchPopularity;
-(void)setEntropyDayOfWeekPopularity:(int)arg1 ;
-(void)setHasEntropyDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasEntropyDayOfWeekPopularity;
-(void)setEntropyDayOfWeekPopularityByDay:(int)arg1 ;
-(void)setHasEntropyDayOfWeekPopularityByDay:(BOOL)arg1 ;
-(BOOL)hasEntropyDayOfWeekPopularityByDay;
-(void)setEntropyDayOfWeekPopularityByApp:(int)arg1 ;
-(void)setHasEntropyDayOfWeekPopularityByApp:(BOOL)arg1 ;
-(BOOL)hasEntropyDayOfWeekPopularityByApp;
-(void)setDistanceDayOfWeekToLaunchPopularity:(int)arg1 ;
-(void)setHasDistanceDayOfWeekToLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasDistanceDayOfWeekToLaunchPopularity;
-(void)setEntropyTrendingPopularity:(int)arg1 ;
-(void)setHasEntropyTrendingPopularity:(BOOL)arg1 ;
-(BOOL)hasEntropyTrendingPopularity;
-(void)setDistanceTrendingToLaunchPopularity:(int)arg1 ;
-(void)setHasDistanceTrendingToLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasDistanceTrendingToLaunchPopularity;
-(void)setEntropySSIDPopularity:(int)arg1 ;
-(void)setHasEntropySSIDPopularity:(BOOL)arg1 ;
-(BOOL)hasEntropySSIDPopularity;
-(void)setEntropySSIDPopularityBySSID:(int)arg1 ;
-(void)setHasEntropySSIDPopularityBySSID:(BOOL)arg1 ;
-(BOOL)hasEntropySSIDPopularityBySSID;
-(void)setEntropySSIDPopularityByApp:(int)arg1 ;
-(void)setHasEntropySSIDPopularityByApp:(BOOL)arg1 ;
-(BOOL)hasEntropySSIDPopularityByApp;
-(void)setDistanceSSIDToLaunchPopularity:(int)arg1 ;
-(void)setHasDistanceSSIDToLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasDistanceSSIDToLaunchPopularity;
-(void)setDistanceToExplicitLaunchPrediction:(int)arg1 ;
-(void)setHasDistanceToExplicitLaunchPrediction:(BOOL)arg1 ;
-(BOOL)hasDistanceToExplicitLaunchPrediction;
-(void)setSiriKitIntentParzen:(int)arg1 ;
-(void)setHasSiriKitIntentParzen:(BOOL)arg1 ;
-(BOOL)hasSiriKitIntentParzen;
-(void)setNonSiriKitIntentParzen:(int)arg1 ;
-(void)setHasNonSiriKitIntentParzen:(BOOL)arg1 ;
-(BOOL)hasNonSiriKitIntentParzen;
-(void)setAppDailyDose:(int)arg1 ;
-(void)setHasAppDailyDose:(BOOL)arg1 ;
-(BOOL)hasAppDailyDose;
-(void)setCurrentDose:(int)arg1 ;
-(void)setHasCurrentDose:(BOOL)arg1 ;
-(BOOL)hasCurrentDose;
-(void)setAppDailyDoseRemaining:(int)arg1 ;
-(void)setHasAppDailyDoseRemaining:(BOOL)arg1 ;
-(BOOL)hasAppDailyDoseRemaining;
-(void)setAppDailyDoseSmoothedError:(int)arg1 ;
-(void)setHasAppDailyDoseSmoothedError:(BOOL)arg1 ;
-(BOOL)hasAppDailyDoseSmoothedError;
-(void)setTotalNumberOfLaunches:(int)arg1 ;
-(void)setHasTotalNumberOfLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalNumberOfLaunches;
-(void)setTotalNumberOfSpotlightLaunches:(int)arg1 ;
-(void)setHasTotalNumberOfSpotlightLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalNumberOfSpotlightLaunches;
-(void)setAirplaneModePopularity:(int)arg1 ;
-(void)setHasAirplaneModePopularity:(BOOL)arg1 ;
-(BOOL)hasAirplaneModePopularity;
-(void)setTotalNumberOfAirplaneModeLaunches:(int)arg1 ;
-(void)setHasTotalNumberOfAirplaneModeLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalNumberOfAirplaneModeLaunches;
-(void)setTrendingPopularity:(int)arg1 ;
-(void)setHasTrendingPopularity:(BOOL)arg1 ;
-(BOOL)hasTrendingPopularity;
-(void)setTotalNumberOfTrendingLaunches:(int)arg1 ;
-(void)setHasTotalNumberOfTrendingLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalNumberOfTrendingLaunches;
-(void)setSSIDPopularity:(int)arg1 ;
-(void)setHasSSIDPopularity:(BOOL)arg1 ;
-(BOOL)hasSSIDPopularity;
-(void)setTotalNumberOfSSIDLaunches:(int)arg1 ;
-(void)setHasTotalNumberOfSSIDLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalNumberOfSSIDLaunches;
-(void)setOnWifi:(int)arg1 ;
-(void)setHasOnWifi:(BOOL)arg1 ;
-(BOOL)hasOnWifi;
-(void)setCoreMotionPopularity:(int)arg1 ;
-(void)setHasCoreMotionPopularity:(BOOL)arg1 ;
-(BOOL)hasCoreMotionPopularity;
-(void)setTotalNumberOfCoreMotionLaunches:(int)arg1 ;
-(void)setHasTotalNumberOfCoreMotionLaunches:(BOOL)arg1 ;
-(BOOL)hasTotalNumberOfCoreMotionLaunches;
-(void)setMagicalMomentsConfidence:(int)arg1 ;
-(void)setHasMagicalMomentsConfidence:(BOOL)arg1 ;
-(BOOL)hasMagicalMomentsConfidence;
-(void)setMagicalMomentsPredictionReason:(int)arg1 ;
-(void)setHasMagicalMomentsPredictionReason:(BOOL)arg1 ;
-(BOOL)hasMagicalMomentsPredictionReason;
-(void)setHeroAppConfidence:(int)arg1 ;
-(void)setHasHeroAppConfidence:(BOOL)arg1 ;
-(BOOL)hasHeroAppConfidence;
-(void)setHeroAppPredictionReason:(int)arg1 ;
-(void)setHasHeroAppPredictionReason:(BOOL)arg1 ;
-(BOOL)hasHeroAppPredictionReason;
-(void)setMagicalMomentsHeroAppPredictionIndex:(int)arg1 ;
-(void)setHasMagicalMomentsHeroAppPredictionIndex:(BOOL)arg1 ;
-(BOOL)hasMagicalMomentsHeroAppPredictionIndex;
-(void)setMagicalMomentsHeroAppPredictionTotalPredictions:(int)arg1 ;
-(void)setHasMagicalMomentsHeroAppPredictionTotalPredictions:(BOOL)arg1 ;
-(BOOL)hasMagicalMomentsHeroAppPredictionTotalPredictions;
-(void)setMostRecentNotificationAge:(int)arg1 ;
-(void)setHasMostRecentNotificationAge:(BOOL)arg1 ;
-(BOOL)hasMostRecentNotificationAge;
-(void)setAppPreferenceBundleBoost:(int)arg1 ;
-(void)setHasAppPreferenceBundleBoost:(BOOL)arg1 ;
-(BOOL)hasAppPreferenceBundleBoost;
-(void)setGenreTimeOfDayPopularity:(int)arg1 ;
-(void)setHasGenreTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasGenreTimeOfDayPopularity;
-(void)setGenreSequencePopularity:(int)arg1 ;
-(void)setHasGenreSequencePopularity:(BOOL)arg1 ;
-(BOOL)hasGenreSequencePopularity;
-(void)setGenreDayOfWeekPopularity:(int)arg1 ;
-(void)setHasGenreDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasGenreDayOfWeekPopularity;
-(void)setGenreSpotlightLaunchPopularity:(int)arg1 ;
-(void)setHasGenreSpotlightLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasGenreSpotlightLaunchPopularity;
-(void)setTrendingGenrePopularity:(int)arg1 ;
-(void)setHasTrendingGenrePopularity:(BOOL)arg1 ;
-(BOOL)hasTrendingGenrePopularity;
-(void)setGenreAirplaneModePopularity:(int)arg1 ;
-(void)setHasGenreAirplaneModePopularity:(BOOL)arg1 ;
-(BOOL)hasGenreAirplaneModePopularity;
-(void)setGenreDailyDoseRemaining:(int)arg1 ;
-(void)setHasGenreDailyDoseRemaining:(BOOL)arg1 ;
-(BOOL)hasGenreDailyDoseRemaining;
-(void)setGenreLocationPopularity:(int)arg1 ;
-(void)setHasGenreLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasGenreLocationPopularity;
-(void)setGenreSSIDPopularity:(int)arg1 ;
-(void)setHasGenreSSIDPopularity:(BOOL)arg1 ;
-(BOOL)hasGenreSSIDPopularity;
-(void)setApp2VecClusterTimeOfDayPopularity:(int)arg1 ;
-(void)setHasApp2VecClusterTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasApp2VecClusterTimeOfDayPopularity;
-(void)setApp2VecClusterSequencePopularity:(int)arg1 ;
-(void)setHasApp2VecClusterSequencePopularity:(BOOL)arg1 ;
-(BOOL)hasApp2VecClusterSequencePopularity;
-(void)setApp2VecClusterDayOfWeekPopularity:(int)arg1 ;
-(void)setHasApp2VecClusterDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasApp2VecClusterDayOfWeekPopularity;
-(void)setApp2VecClusterTrendingPopularity:(int)arg1 ;
-(void)setHasApp2VecClusterTrendingPopularity:(BOOL)arg1 ;
-(BOOL)hasApp2VecClusterTrendingPopularity;
-(void)setApp2VecClusterLocationPopularity:(int)arg1 ;
-(void)setHasApp2VecClusterLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasApp2VecClusterLocationPopularity;
-(void)setApp2VecClusterCount:(int)arg1 ;
-(void)setHasApp2VecClusterCount:(BOOL)arg1 ;
-(BOOL)hasApp2VecClusterCount;
-(void)setSupportsMedia:(int)arg1 ;
-(void)setHasSupportsMedia:(BOOL)arg1 ;
-(BOOL)hasSupportsMedia;
-(void)setAppIntentLaunchPopularity:(int)arg1 ;
-(void)setHasAppIntentLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentLaunchPopularity;
-(void)setAppIntentLaunchTimePopularity:(int)arg1 ;
-(void)setHasAppIntentLaunchTimePopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentLaunchTimePopularity;
-(void)setAppIntentTimeOfDayPopularity:(int)arg1 ;
-(void)setHasAppIntentTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentTimeOfDayPopularity;
-(void)setAppIntentLastLaunchAge:(int)arg1 ;
-(void)setHasAppIntentLastLaunchAge:(BOOL)arg1 ;
-(BOOL)hasAppIntentLastLaunchAge;
-(void)setAppIntentAverageSecondsBetweenAppActions:(int)arg1 ;
-(void)setHasAppIntentAverageSecondsBetweenAppActions:(BOOL)arg1 ;
-(BOOL)hasAppIntentAverageSecondsBetweenAppActions;
-(void)setAppIntentMedianSecondsBetweenAppActions:(int)arg1 ;
-(void)setHasAppIntentMedianSecondsBetweenAppActions:(BOOL)arg1 ;
-(BOOL)hasAppIntentMedianSecondsBetweenAppActions;
-(void)setAppIntentLaunchDayOfWeekPopularity:(int)arg1 ;
-(void)setHasAppIntentLaunchDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentLaunchDayOfWeekPopularity;
-(void)setAppIntentDayOfWeekPopularity:(int)arg1 ;
-(void)setHasAppIntentDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentDayOfWeekPopularity;
-(void)setAppIntentCoarseTimeOfDayPopularity:(int)arg1 ;
-(void)setHasAppIntentCoarseTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentCoarseTimeOfDayPopularity;
-(void)setAppIntentTotalNumberOfLaunches:(int)arg1 ;
-(void)setHasAppIntentTotalNumberOfLaunches:(BOOL)arg1 ;
-(BOOL)hasAppIntentTotalNumberOfLaunches;
-(void)setAppIntentUnlockTime:(int)arg1 ;
-(void)setHasAppIntentUnlockTime:(BOOL)arg1 ;
-(BOOL)hasAppIntentUnlockTime;
-(void)setAppIntentAirplaneModePopularity:(int)arg1 ;
-(void)setHasAppIntentAirplaneModePopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentAirplaneModePopularity;
-(void)setAppIntentTotalNumberOfAirplaneModeLaunches:(int)arg1 ;
-(void)setHasAppIntentTotalNumberOfAirplaneModeLaunches:(BOOL)arg1 ;
-(BOOL)hasAppIntentTotalNumberOfAirplaneModeLaunches;
-(void)setAppIntentSSIDPopularity:(int)arg1 ;
-(void)setHasAppIntentSSIDPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentSSIDPopularity;
-(void)setAppIntentTotalNumberOfSSIDLaunches:(int)arg1 ;
-(void)setHasAppIntentTotalNumberOfSSIDLaunches:(BOOL)arg1 ;
-(BOOL)hasAppIntentTotalNumberOfSSIDLaunches;
-(void)setAppIntentCoreMotionPopularity:(int)arg1 ;
-(void)setHasAppIntentCoreMotionPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentCoreMotionPopularity;
-(void)setAppIntentTotalNumberOfCoreMotionLaunches:(int)arg1 ;
-(void)setHasAppIntentTotalNumberOfCoreMotionLaunches:(BOOL)arg1 ;
-(BOOL)hasAppIntentTotalNumberOfCoreMotionLaunches;
-(void)setAppIntentTrendingPopularity:(int)arg1 ;
-(void)setHasAppIntentTrendingPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentTrendingPopularity;
-(void)setAppIntentTotalNumberOfTrendingLaunches:(int)arg1 ;
-(void)setHasAppIntentTotalNumberOfTrendingLaunches:(BOOL)arg1 ;
-(BOOL)hasAppIntentTotalNumberOfTrendingLaunches;
-(void)setAppIntentLaunchLocationPopularity:(int)arg1 ;
-(void)setHasAppIntentLaunchLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentLaunchLocationPopularity;
-(void)setAppIntentDayZeroPoints:(int)arg1 ;
-(void)setHasAppIntentDayZeroPoints:(BOOL)arg1 ;
-(BOOL)hasAppIntentDayZeroPoints;
-(void)setAppIntentStaticPoints:(int)arg1 ;
-(void)setHasAppIntentStaticPoints:(BOOL)arg1 ;
-(BOOL)hasAppIntentStaticPoints;
-(void)setAppIntentLaunchSequencePopularity:(int)arg1 ;
-(void)setHasAppIntentLaunchSequencePopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentLaunchSequencePopularity;
-(void)setAppIntentAppLaunchSequencePopularity:(int)arg1 ;
-(void)setHasAppIntentAppLaunchSequencePopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentAppLaunchSequencePopularity;
-(void)setAppIntentEntropyLaunchPopularity:(int)arg1 ;
-(void)setHasAppIntentEntropyLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentEntropyLaunchPopularity;
-(void)setAppIntentEntropyDayOfWeekPopularity:(int)arg1 ;
-(void)setHasAppIntentEntropyDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentEntropyDayOfWeekPopularity;
-(void)setAppIntentEntropyDayOfWeekPopularityByDay:(int)arg1 ;
-(void)setHasAppIntentEntropyDayOfWeekPopularityByDay:(BOOL)arg1 ;
-(BOOL)hasAppIntentEntropyDayOfWeekPopularityByDay;
-(void)setAppIntentEntropyDayOfWeekPopularityByAppIntent:(int)arg1 ;
-(void)setHasAppIntentEntropyDayOfWeekPopularityByAppIntent:(BOOL)arg1 ;
-(BOOL)hasAppIntentEntropyDayOfWeekPopularityByAppIntent;
-(void)setAppIntentDistanceDayOfWeekToLaunchPopularity:(int)arg1 ;
-(void)setHasAppIntentDistanceDayOfWeekToLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentDistanceDayOfWeekToLaunchPopularity;
-(void)setAppIntentEntropyTrendingPopularity:(int)arg1 ;
-(void)setHasAppIntentEntropyTrendingPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentEntropyTrendingPopularity;
-(void)setAppIntentDistanceTrendingToLaunchPopularity:(int)arg1 ;
-(void)setHasAppIntentDistanceTrendingToLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentDistanceTrendingToLaunchPopularity;
-(void)setAppIntentEntropySSIDPopularity:(int)arg1 ;
-(void)setHasAppIntentEntropySSIDPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentEntropySSIDPopularity;
-(void)setAppIntentEntropySSIDPopularityBySSID:(int)arg1 ;
-(void)setHasAppIntentEntropySSIDPopularityBySSID:(BOOL)arg1 ;
-(BOOL)hasAppIntentEntropySSIDPopularityBySSID;
-(void)setAppIntentEntropySSIDPopularityByAppIntent:(int)arg1 ;
-(void)setHasAppIntentEntropySSIDPopularityByAppIntent:(BOOL)arg1 ;
-(BOOL)hasAppIntentEntropySSIDPopularityByAppIntent;
-(void)setAppIntentDistanceSSIDToLaunchPopularity:(int)arg1 ;
-(void)setHasAppIntentDistanceSSIDToLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentDistanceSSIDToLaunchPopularity;
-(void)setAppIntentCount:(int)arg1 ;
-(void)setHasAppIntentCount:(BOOL)arg1 ;
-(BOOL)hasAppIntentCount;
-(void)setAppActionConfirmEvents:(int)arg1 ;
-(void)setHasAppActionConfirmEvents:(BOOL)arg1 ;
-(BOOL)hasAppActionConfirmEvents;
-(void)setAppActionRejectEvents:(int)arg1 ;
-(void)setHasAppActionRejectEvents:(BOOL)arg1 ;
-(BOOL)hasAppActionRejectEvents;
-(void)setTotalAppActionConfirmEvents:(int)arg1 ;
-(void)setHasTotalAppActionConfirmEvents:(BOOL)arg1 ;
-(BOOL)hasTotalAppActionConfirmEvents;
-(void)setTotalAppActionRejectEvents:(int)arg1 ;
-(void)setHasTotalAppActionRejectEvents:(BOOL)arg1 ;
-(BOOL)hasTotalAppActionRejectEvents;
-(void)setAppForAllActionsConfirmEvents:(int)arg1 ;
-(void)setHasAppForAllActionsConfirmEvents:(BOOL)arg1 ;
-(BOOL)hasAppForAllActionsConfirmEvents;
-(void)setAppForAllActionsRejectEvents:(int)arg1 ;
-(void)setHasAppForAllActionsRejectEvents:(BOOL)arg1 ;
-(BOOL)hasAppForAllActionsRejectEvents;
-(void)setTotalAppForAllActionsConfirmEvents:(int)arg1 ;
-(void)setHasTotalAppForAllActionsConfirmEvents:(BOOL)arg1 ;
-(BOOL)hasTotalAppForAllActionsConfirmEvents;
-(void)setTotalAppForAllActionsRejectEvents:(int)arg1 ;
-(void)setHasTotalAppForAllActionsRejectEvents:(BOOL)arg1 ;
-(BOOL)hasTotalAppForAllActionsRejectEvents;
-(void)setActionHeuristicConfirmEvents:(int)arg1 ;
-(void)setHasActionHeuristicConfirmEvents:(BOOL)arg1 ;
-(BOOL)hasActionHeuristicConfirmEvents;
-(void)setActionHeuristicRejectEvents:(int)arg1 ;
-(void)setHasActionHeuristicRejectEvents:(BOOL)arg1 ;
-(BOOL)hasActionHeuristicRejectEvents;
-(void)setTotalActionHeuristicConfirmEvents:(int)arg1 ;
-(void)setHasTotalActionHeuristicConfirmEvents:(BOOL)arg1 ;
-(BOOL)hasTotalActionHeuristicConfirmEvents;
-(void)setTotalActionHeuristicRejectEvents:(int)arg1 ;
-(void)setHasTotalActionHeuristicRejectEvents:(BOOL)arg1 ;
-(BOOL)hasTotalActionHeuristicRejectEvents;
-(void)setAppForAllIntentsLaunchPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsLaunchPopularity;
-(void)setAppForAllIntentsLaunchTimePopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsLaunchTimePopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsLaunchTimePopularity;
-(void)setAppForAllIntentsTimeOfDayPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsTimeOfDayPopularity;
-(void)setAppForAllIntentsLaunchDayOfWeekPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsLaunchDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsLaunchDayOfWeekPopularity;
-(void)setAppForAllIntentsDayOfWeekPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsDayOfWeekPopularity;
-(void)setAppForAllIntentsCoarseTimeOfDayPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsCoarseTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsCoarseTimeOfDayPopularity;
-(void)setAppForAllIntentsTotalNumberOfLaunches:(int)arg1 ;
-(void)setHasAppForAllIntentsTotalNumberOfLaunches:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsTotalNumberOfLaunches;
-(void)setAppForAllIntentsUnlockTime:(int)arg1 ;
-(void)setHasAppForAllIntentsUnlockTime:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsUnlockTime;
-(void)setAppForAllIntentsAirplaneModePopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsAirplaneModePopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsAirplaneModePopularity;
-(void)setAppForAllIntentsTotalNumberOfAirplaneModeLaunches:(int)arg1 ;
-(void)setHasAppForAllIntentsTotalNumberOfAirplaneModeLaunches:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsTotalNumberOfAirplaneModeLaunches;
-(void)setAppForAllIntentsSSIDPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsSSIDPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsSSIDPopularity;
-(void)setAppForAllIntentsTotalNumberOfSSIDLaunches:(int)arg1 ;
-(void)setHasAppForAllIntentsTotalNumberOfSSIDLaunches:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsTotalNumberOfSSIDLaunches;
-(void)setAppForAllIntentsTrendingPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsTrendingPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsTrendingPopularity;
-(void)setAppForAllIntentsTotalNumberOfTrendingLaunches:(int)arg1 ;
-(void)setHasAppForAllIntentsTotalNumberOfTrendingLaunches:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsTotalNumberOfTrendingLaunches;
-(void)setAppForAllIntentsLaunchLocationPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsLaunchLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsLaunchLocationPopularity;
-(void)setAppForAllIntentsEntropyLaunchPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsEntropyLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsEntropyLaunchPopularity;
-(void)setAppForAllIntentsEntropyDayOfWeekPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsEntropyDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsEntropyDayOfWeekPopularity;
-(void)setAppForAllIntentsEntropyDayOfWeekPopularityByDay:(int)arg1 ;
-(void)setHasAppForAllIntentsEntropyDayOfWeekPopularityByDay:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsEntropyDayOfWeekPopularityByDay;
-(void)setAppForAllIntentsEntropyDayOfWeekPopularityByApp:(int)arg1 ;
-(void)setHasAppForAllIntentsEntropyDayOfWeekPopularityByApp:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsEntropyDayOfWeekPopularityByApp;
-(void)setAppForAllIntentsDistanceDayOfWeekToLaunchPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsDistanceDayOfWeekToLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsDistanceDayOfWeekToLaunchPopularity;
-(void)setAppForAllIntentsEntropyTrendingPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsEntropyTrendingPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsEntropyTrendingPopularity;
-(void)setAppForAllIntentsDistanceTrendingToLaunchPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsDistanceTrendingToLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsDistanceTrendingToLaunchPopularity;
-(void)setAppForAllIntentsEntropySSIDPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsEntropySSIDPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsEntropySSIDPopularity;
-(void)setAppForAllIntentsEntropySSIDPopularityBySSID:(int)arg1 ;
-(void)setHasAppForAllIntentsEntropySSIDPopularityBySSID:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsEntropySSIDPopularityBySSID;
-(void)setAppForAllIntentsEntropySSIDPopularityByApp:(int)arg1 ;
-(void)setHasAppForAllIntentsEntropySSIDPopularityByApp:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsEntropySSIDPopularityByApp;
-(void)setAppForAllIntentsDistanceSSIDToLaunchPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsDistanceSSIDToLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsDistanceSSIDToLaunchPopularity;
-(void)setAppForAllIntentsCount:(int)arg1 ;
-(void)setHasAppForAllIntentsCount:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsCount;
-(void)setSlotLaunchPopularity:(int)arg1 ;
-(void)setHasSlotLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchPopularity;
-(void)setSlotLaunchTimePopularity:(int)arg1 ;
-(void)setHasSlotLaunchTimePopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchTimePopularity;
-(void)setSlotLaunchCoreMotionPopularity:(int)arg1 ;
-(void)setHasSlotLaunchCoreMotionPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchCoreMotionPopularity;
-(void)setSlotLaunchPreviousLocationPopularity:(int)arg1 ;
-(void)setHasSlotLaunchPreviousLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchPreviousLocationPopularity;
-(void)setSlotTimeOfDayPopularity:(int)arg1 ;
-(void)setHasSlotTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotTimeOfDayPopularity;
-(void)setSlotLaunchDayOfWeekPopularity:(int)arg1 ;
-(void)setHasSlotLaunchDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchDayOfWeekPopularity;
-(void)setSlotDayOfWeekPopularity:(int)arg1 ;
-(void)setHasSlotDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotDayOfWeekPopularity;
-(void)setSlotLaunchCoarseTimePopularity:(int)arg1 ;
-(void)setHasSlotLaunchCoarseTimePopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchCoarseTimePopularity;
-(void)setSlotCoarseTimeOfDayPopularity:(int)arg1 ;
-(void)setHasSlotCoarseTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotCoarseTimeOfDayPopularity;
-(void)setSlotSecondsSinceLastSlot:(int)arg1 ;
-(void)setHasSlotSecondsSinceLastSlot:(BOOL)arg1 ;
-(BOOL)hasSlotSecondsSinceLastSlot;
-(void)setSlotLaunchLocationPopularity:(int)arg1 ;
-(void)setHasSlotLaunchLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchLocationPopularity;
-(void)setSlotLocationPopularity:(int)arg1 ;
-(void)setHasSlotLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLocationPopularity;
-(void)setSlotNumberOfParameters:(int)arg1 ;
-(void)setHasSlotNumberOfParameters:(BOOL)arg1 ;
-(BOOL)hasSlotNumberOfParameters;
-(void)setSlotTotalNumberOfLaunchesForSlot:(int)arg1 ;
-(void)setHasSlotTotalNumberOfLaunchesForSlot:(BOOL)arg1 ;
-(BOOL)hasSlotTotalNumberOfLaunchesForSlot;
-(void)setSlotTotalNumberOfLaunches:(int)arg1 ;
-(void)setHasSlotTotalNumberOfLaunches:(BOOL)arg1 ;
-(BOOL)hasSlotTotalNumberOfLaunches;
-(void)setSlotCount:(int)arg1 ;
-(void)setHasSlotCount:(BOOL)arg1 ;
-(BOOL)hasSlotCount;
-(void)setSlotNumSessionStartsForRootOfApp:(int)arg1 ;
-(void)setHasSlotNumSessionStartsForRootOfApp:(BOOL)arg1 ;
-(BOOL)hasSlotNumSessionStartsForRootOfApp;
-(void)setSlotTotalNumSessionsForRootOfApp:(int)arg1 ;
-(void)setHasSlotTotalNumSessionsForRootOfApp:(BOOL)arg1 ;
-(BOOL)hasSlotTotalNumSessionsForRootOfApp;
-(void)setSlotEntropyForSlotSet:(int)arg1 ;
-(void)setHasSlotEntropyForSlotSet:(BOOL)arg1 ;
-(BOOL)hasSlotEntropyForSlotSet;
-(void)setSlotTotalNumberOfLaunchesForSlotSet:(int)arg1 ;
-(void)setHasSlotTotalNumberOfLaunchesForSlotSet:(BOOL)arg1 ;
-(BOOL)hasSlotTotalNumberOfLaunchesForSlotSet;
-(void)setSlotNumberOfUniqueDaysLaunchedForSlot:(int)arg1 ;
-(void)setHasSlotNumberOfUniqueDaysLaunchedForSlot:(BOOL)arg1 ;
-(BOOL)hasSlotNumberOfUniqueDaysLaunchedForSlot;
-(void)setSlotTotalNumberOfUniqueDaysLaunched:(int)arg1 ;
-(void)setHasSlotTotalNumberOfUniqueDaysLaunched:(BOOL)arg1 ;
-(BOOL)hasSlotTotalNumberOfUniqueDaysLaunched;
-(void)setSlotTimeOfDayBudgetMeanForSlot:(int)arg1 ;
-(void)setHasSlotTimeOfDayBudgetMeanForSlot:(BOOL)arg1 ;
-(BOOL)hasSlotTimeOfDayBudgetMeanForSlot;
-(void)setSlotTimeOfDayBudgetStdDevForSlot:(int)arg1 ;
-(void)setHasSlotTimeOfDayBudgetStdDevForSlot:(BOOL)arg1 ;
-(BOOL)hasSlotTimeOfDayBudgetStdDevForSlot;
-(void)setSlotTodaysTimeOfDayBudgetForSlot:(int)arg1 ;
-(void)setHasSlotTodaysTimeOfDayBudgetForSlot:(BOOL)arg1 ;
-(BOOL)hasSlotTodaysTimeOfDayBudgetForSlot;
-(void)setSlotTimeAndDayPopularity:(int)arg1 ;
-(void)setHasSlotTimeAndDayPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotTimeAndDayPopularity;
-(void)setSlotTimeAndLocationPopularity:(int)arg1 ;
-(void)setHasSlotTimeAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotTimeAndLocationPopularity;
-(void)setSlotDayAndLocationPopularity:(int)arg1 ;
-(void)setHasSlotDayAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotDayAndLocationPopularity;
-(void)setSlotTimeAndDayAndLocationPopularity:(int)arg1 ;
-(void)setHasSlotTimeAndDayAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotTimeAndDayAndLocationPopularity;
-(void)setSlotCoreMotionPopularity:(int)arg1 ;
-(void)setHasSlotCoreMotionPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotCoreMotionPopularity;
-(void)setSlotPreviousLocationPopularity:(int)arg1 ;
-(void)setHasSlotPreviousLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotPreviousLocationPopularity;
-(void)setSlotPreviousLocationAndCoreMotionPopularity:(int)arg1 ;
-(void)setHasSlotPreviousLocationAndCoreMotionPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotPreviousLocationAndCoreMotionPopularity;
-(void)setSlotPreviousLocationAndLocationPopularity:(int)arg1 ;
-(void)setHasSlotPreviousLocationAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotPreviousLocationAndLocationPopularity;
-(void)setSlotTimeAndPreviousLocationPopularity:(int)arg1 ;
-(void)setHasSlotTimeAndPreviousLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotTimeAndPreviousLocationPopularity;
-(void)setSlotDayAndPreviousLocationPopularity:(int)arg1 ;
-(void)setHasSlotDayAndPreviousLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotDayAndPreviousLocationPopularity;
-(void)setSlotFeedbackTotalConfirmsForSlot:(int)arg1 ;
-(void)setHasSlotFeedbackTotalConfirmsForSlot:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalConfirmsForSlot;
-(void)setSlotFeedbackTotalRejectsForSlot:(int)arg1 ;
-(void)setHasSlotFeedbackTotalRejectsForSlot:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalRejectsForSlot;
-(void)setSlotFeedbackTotalConfirmsForAllSlots:(int)arg1 ;
-(void)setHasSlotFeedbackTotalConfirmsForAllSlots:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalConfirmsForAllSlots;
-(void)setSlotFeedbackTotalRejectsForAllSlots:(int)arg1 ;
-(void)setHasSlotFeedbackTotalRejectsForAllSlots:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalRejectsForAllSlots;
-(void)setSlotFeedbackConfirmRatio:(int)arg1 ;
-(void)setHasSlotFeedbackConfirmRatio:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackConfirmRatio;
-(void)setSlotFeedbackConfirmRatioStdDev:(int)arg1 ;
-(void)setHasSlotFeedbackConfirmRatioStdDev:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackConfirmRatioStdDev;
-(void)setSlotFeedbackConfirmRatioMean:(int)arg1 ;
-(void)setHasSlotFeedbackConfirmRatioMean:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackConfirmRatioMean;
-(void)setSlotFeedbackConfirmRatioCount:(int)arg1 ;
-(void)setHasSlotFeedbackConfirmRatioCount:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackConfirmRatioCount;
-(void)setActionLaunchPopularity:(int)arg1 ;
-(void)setHasActionLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasActionLaunchPopularity;
-(void)setActionTimeOfDayPopularity:(int)arg1 ;
-(void)setHasActionTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasActionTimeOfDayPopularity;
-(void)setActionCoarseTimeOfDayPopularity:(int)arg1 ;
-(void)setHasActionCoarseTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasActionCoarseTimeOfDayPopularity;
-(void)setActionDayOfWeekPopularity:(int)arg1 ;
-(void)setHasActionDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasActionDayOfWeekPopularity;
-(void)setActionLocationPopularity:(int)arg1 ;
-(void)setHasActionLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasActionLocationPopularity;
-(void)setActionTimeAndDayPopularity:(int)arg1 ;
-(void)setHasActionTimeAndDayPopularity:(BOOL)arg1 ;
-(BOOL)hasActionTimeAndDayPopularity;
-(void)setActionTimeAndLocationPopularity:(int)arg1 ;
-(void)setHasActionTimeAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasActionTimeAndLocationPopularity;
-(void)setActionDayAndLocationPopularity:(int)arg1 ;
-(void)setHasActionDayAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasActionDayAndLocationPopularity;
-(void)setActionTimeAndDayAndLocationPopularity:(int)arg1 ;
-(void)setHasActionTimeAndDayAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasActionTimeAndDayAndLocationPopularity;
-(void)setActionCoreMotionPopularity:(int)arg1 ;
-(void)setHasActionCoreMotionPopularity:(BOOL)arg1 ;
-(BOOL)hasActionCoreMotionPopularity;
-(void)setActionPreviousLocationPopularity:(int)arg1 ;
-(void)setHasActionPreviousLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasActionPreviousLocationPopularity;
-(void)setActionPreviousLocationAndCoreMotionPopularity:(int)arg1 ;
-(void)setHasActionPreviousLocationAndCoreMotionPopularity:(BOOL)arg1 ;
-(BOOL)hasActionPreviousLocationAndCoreMotionPopularity;
-(void)setActionPreviousLocationAndLocationPopularity:(int)arg1 ;
-(void)setHasActionPreviousLocationAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasActionPreviousLocationAndLocationPopularity;
-(void)setActionTimeAndPreviousLocationPopularity:(int)arg1 ;
-(void)setHasActionTimeAndPreviousLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasActionTimeAndPreviousLocationPopularity;
-(void)setActionDayAndPreviousLocationPopularity:(int)arg1 ;
-(void)setHasActionDayAndPreviousLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasActionDayAndPreviousLocationPopularity;
-(void)setActionTotalConfirms:(int)arg1 ;
-(void)setHasActionTotalConfirms:(BOOL)arg1 ;
-(BOOL)hasActionTotalConfirms;
-(void)setActionTotalRejects:(int)arg1 ;
-(void)setHasActionTotalRejects:(BOOL)arg1 ;
-(BOOL)hasActionTotalRejects;
-(void)setAppActionScore:(int)arg1 ;
-(void)setHasAppActionScore:(BOOL)arg1 ;
-(BOOL)hasAppActionScore;
-(void)setAppActionLogProbability:(int)arg1 ;
-(void)setHasAppActionLogProbability:(BOOL)arg1 ;
-(BOOL)hasAppActionLogProbability;
-(void)setSlotScore:(int)arg1 ;
-(void)setHasSlotScore:(BOOL)arg1 ;
-(BOOL)hasSlotScore;
-(void)setSlotLogProbability:(int)arg1 ;
-(void)setHasSlotLogProbability:(BOOL)arg1 ;
-(BOOL)hasSlotLogProbability;
-(void)setActionIsFutureMedia:(int)arg1 ;
-(void)setHasActionIsFutureMedia:(BOOL)arg1 ;
-(BOOL)hasActionIsFutureMedia;
-(void)setActionIsBackgroundExecutable:(int)arg1 ;
-(void)setHasActionIsBackgroundExecutable:(BOOL)arg1 ;
-(BOOL)hasActionIsBackgroundExecutable;
-(void)setAppIntentSlotCountForAllAppActions:(int)arg1 ;
-(void)setHasAppIntentSlotCountForAllAppActions:(BOOL)arg1 ;
-(BOOL)hasAppIntentSlotCountForAllAppActions;
-(void)setSlotNumDocFreqForRootOfApp:(int)arg1 ;
-(void)setHasSlotNumDocFreqForRootOfApp:(BOOL)arg1 ;
-(BOOL)hasSlotNumDocFreqForRootOfApp;
-(void)setAppForAllIntentsCoreMotionPopularity:(int)arg1 ;
-(void)setHasAppForAllIntentsCoreMotionPopularity:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsCoreMotionPopularity;
-(void)setAppForAllIntentsTotalNumberOfCoreMotionLaunches:(int)arg1 ;
-(void)setHasAppForAllIntentsTotalNumberOfCoreMotionLaunches:(BOOL)arg1 ;
-(BOOL)hasAppForAllIntentsTotalNumberOfCoreMotionLaunches;
-(void)setSlotLaunchTimeCount:(int)arg1 ;
-(void)setHasSlotLaunchTimeCount:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchTimeCount;
-(void)setSlotLaunchDayOfWeekCount:(int)arg1 ;
-(void)setHasSlotLaunchDayOfWeekCount:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchDayOfWeekCount;
-(void)setSlotLaunchCoarseTimeCount:(int)arg1 ;
-(void)setHasSlotLaunchCoarseTimeCount:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchCoarseTimeCount;
-(void)setSlotLaunchLocationCount:(int)arg1 ;
-(void)setHasSlotLaunchLocationCount:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchLocationCount;
-(void)setSlotLaunchCoreMotionCount:(int)arg1 ;
-(void)setHasSlotLaunchCoreMotionCount:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchCoreMotionCount;
-(void)setSlotLaunchPreviousLocationCount:(int)arg1 ;
-(void)setHasSlotLaunchPreviousLocationCount:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchPreviousLocationCount;
-(void)setSlotLaunchTimeAndDayPopularity:(int)arg1 ;
-(void)setHasSlotLaunchTimeAndDayPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchTimeAndDayPopularity;
-(void)setSlotLaunchTimeAndLocationPopularity:(int)arg1 ;
-(void)setHasSlotLaunchTimeAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchTimeAndLocationPopularity;
-(void)setSlotLaunchDayAndLocationPopularity:(int)arg1 ;
-(void)setHasSlotLaunchDayAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchDayAndLocationPopularity;
-(void)setSlotLaunchTimeAndDayAndLocationPopularity:(int)arg1 ;
-(void)setHasSlotLaunchTimeAndDayAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchTimeAndDayAndLocationPopularity;
-(void)setSlotLaunchPreviousLocationAndCoreMotionPopularity:(int)arg1 ;
-(void)setHasSlotLaunchPreviousLocationAndCoreMotionPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchPreviousLocationAndCoreMotionPopularity;
-(void)setSlotLaunchPreviousLocationAndLocationPopularity:(int)arg1 ;
-(void)setHasSlotLaunchPreviousLocationAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchPreviousLocationAndLocationPopularity;
-(void)setSlotLaunchTimeAndPreviousLocationPopularity:(int)arg1 ;
-(void)setHasSlotLaunchTimeAndPreviousLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchTimeAndPreviousLocationPopularity;
-(void)setSlotLaunchDayAndPreviousLocationPopularity:(int)arg1 ;
-(void)setHasSlotLaunchDayAndPreviousLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchDayAndPreviousLocationPopularity;
-(void)setSlotIsSiriKitIntent:(int)arg1 ;
-(void)setHasSlotIsSiriKitIntent:(BOOL)arg1 ;
-(BOOL)hasSlotIsSiriKitIntent;
-(void)setSlotIsCustomIntent:(int)arg1 ;
-(void)setHasSlotIsCustomIntent:(BOOL)arg1 ;
-(BOOL)hasSlotIsCustomIntent;
-(void)setSlotIsNSUserActivity:(int)arg1 ;
-(void)setHasSlotIsNSUserActivity:(BOOL)arg1 ;
-(BOOL)hasSlotIsNSUserActivity;
-(void)setSlotTotalNumberOfUndecayedLaunchesForSlot:(int)arg1 ;
-(void)setHasSlotTotalNumberOfUndecayedLaunchesForSlot:(BOOL)arg1 ;
-(BOOL)hasSlotTotalNumberOfUndecayedLaunchesForSlot;
-(void)setSlotOnlyLaunchedWithinShortTimeSpan:(int)arg1 ;
-(void)setHasSlotOnlyLaunchedWithinShortTimeSpan:(BOOL)arg1 ;
-(BOOL)hasSlotOnlyLaunchedWithinShortTimeSpan;
-(void)setSlotLOIBoost:(int)arg1 ;
-(void)setHasSlotLOIBoost:(BOOL)arg1 ;
-(BOOL)hasSlotLOIBoost;
-(void)setAppIntentValueScore:(int)arg1 ;
-(void)setHasAppIntentValueScore:(BOOL)arg1 ;
-(BOOL)hasAppIntentValueScore;
-(void)setAppLaunchMicroLocationPopularity:(int)arg1 ;
-(void)setHasAppLaunchMicroLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasAppLaunchMicroLocationPopularity;
-(void)setAppIntentLaunchMicroLocationPopularity:(int)arg1 ;
-(void)setHasAppIntentLaunchMicroLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentLaunchMicroLocationPopularity;
-(void)setAppCategory:(int)arg1 ;
-(void)setHasAppCategory:(BOOL)arg1 ;
-(BOOL)hasAppCategory;
-(void)setActionKeyCategory:(int)arg1 ;
-(void)setHasActionKeyCategory:(BOOL)arg1 ;
-(BOOL)hasActionKeyCategory;
-(void)setIntentCategoryFromIntentDefinition:(int)arg1 ;
-(void)setHasIntentCategoryFromIntentDefinition:(BOOL)arg1 ;
-(BOOL)hasIntentCategoryFromIntentDefinition;
-(void)setTimeOfDayBucket:(int)arg1 ;
-(void)setHasTimeOfDayBucket:(BOOL)arg1 ;
-(BOOL)hasTimeOfDayBucket;
-(void)setDayOfWeekBucket:(int)arg1 ;
-(void)setHasDayOfWeekBucket:(BOOL)arg1 ;
-(BOOL)hasDayOfWeekBucket;
-(void)setAppIntentPartOfWeekPopularity:(int)arg1 ;
-(void)setHasAppIntentPartOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentPartOfWeekPopularity;
-(void)setAppIntentLaunchPartOfWeekPopularity:(int)arg1 ;
-(void)setHasAppIntentLaunchPartOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentLaunchPartOfWeekPopularity;
-(void)setSlotLaunchPartOfWeekCount:(int)arg1 ;
-(void)setHasSlotLaunchPartOfWeekCount:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchPartOfWeekCount;
-(void)setSlotLaunchPartOfWeekPopularity:(int)arg1 ;
-(void)setHasSlotLaunchPartOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchPartOfWeekPopularity;
-(void)setSlotPartOfWeekPopularity:(int)arg1 ;
-(void)setHasSlotPartOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotPartOfWeekPopularity;
-(void)setActionPartOfWeekPopularity:(int)arg1 ;
-(void)setHasActionPartOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasActionPartOfWeekPopularity;
-(void)setSlotFeedbackMinutesSinceLastConfirmInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackMinutesSinceLastConfirmInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackMinutesSinceLastConfirmInSpotlight;
-(void)setSlotFeedbackMinutesSinceLastExplicitRejectInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackMinutesSinceLastExplicitRejectInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackMinutesSinceLastExplicitRejectInSpotlight;
-(void)setSlotFeedbackTotalConfirmsForSlotInLastHourInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackTotalConfirmsForSlotInLastHourInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalConfirmsForSlotInLastHourInSpotlight;
-(void)setSlotFeedbackTotalRejectsForSlotInLastHourInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackTotalRejectsForSlotInLastHourInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalRejectsForSlotInLastHourInSpotlight;
-(void)setSlotFeedbackTotalConfirmsForSlotInLastTwoHoursInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackTotalConfirmsForSlotInLastTwoHoursInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalConfirmsForSlotInLastTwoHoursInSpotlight;
-(void)setSlotFeedbackTotalRejectsForSlotInLastTwoHoursInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackTotalRejectsForSlotInLastTwoHoursInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalRejectsForSlotInLastTwoHoursInSpotlight;
-(void)setSlotFeedbackTotalConfirmsForSlotTodayInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackTotalConfirmsForSlotTodayInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalConfirmsForSlotTodayInSpotlight;
-(void)setSlotFeedbackTotalRejectsForSlotTodayInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackTotalRejectsForSlotTodayInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalRejectsForSlotTodayInSpotlight;
-(void)setSlotFeedbackTotalConfirmsForSlotInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackTotalConfirmsForSlotInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalConfirmsForSlotInSpotlight;
-(void)setSlotFeedbackTotalRejectsForSlotInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackTotalRejectsForSlotInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalRejectsForSlotInSpotlight;
-(void)setSlotFeedbackConfirmsPartOfWeekCountInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackConfirmsPartOfWeekCountInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackConfirmsPartOfWeekCountInSpotlight;
-(void)setSlotFeedbackConfirmsDayCountInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackConfirmsDayCountInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackConfirmsDayCountInSpotlight;
-(void)setSlotFeedbackConfirmsTimeOfDayCountInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackConfirmsTimeOfDayCountInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackConfirmsTimeOfDayCountInSpotlight;
-(void)setSlotFeedbackConfirmsCoarseTimeOfDayCountInSpotlight:(int)arg1 ;
-(void)setHasSlotFeedbackConfirmsCoarseTimeOfDayCountInSpotlight:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackConfirmsCoarseTimeOfDayCountInSpotlight;
-(void)setSlotFeedbackTotalConfirmsForSlotTodayInLockscreen:(int)arg1 ;
-(void)setHasSlotFeedbackTotalConfirmsForSlotTodayInLockscreen:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalConfirmsForSlotTodayInLockscreen;
-(void)setSlotFeedbackTotalRejectsForSlotTodayInLockscreen:(int)arg1 ;
-(void)setHasSlotFeedbackTotalRejectsForSlotTodayInLockscreen:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalRejectsForSlotTodayInLockscreen;
-(void)setSlotFeedbackMinutesSinceLastConfirmInLockscreen:(int)arg1 ;
-(void)setHasSlotFeedbackMinutesSinceLastConfirmInLockscreen:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackMinutesSinceLastConfirmInLockscreen;
-(void)setSlotFeedbackMinutesSinceLastRejectInLockscreen:(int)arg1 ;
-(void)setHasSlotFeedbackMinutesSinceLastRejectInLockscreen:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackMinutesSinceLastRejectInLockscreen;
-(void)setSlotFeedbackMinutesSinceLastExplicitRejectInLockscreen:(int)arg1 ;
-(void)setHasSlotFeedbackMinutesSinceLastExplicitRejectInLockscreen:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackMinutesSinceLastExplicitRejectInLockscreen;
-(void)setSlotFeedbackTotalConfirmsForSlotInLockscreen:(int)arg1 ;
-(void)setHasSlotFeedbackTotalConfirmsForSlotInLockscreen:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalConfirmsForSlotInLockscreen;
-(void)setSlotFeedbackTotalRejectsForSlotInLockscreen:(int)arg1 ;
-(void)setHasSlotFeedbackTotalRejectsForSlotInLockscreen:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalRejectsForSlotInLockscreen;
-(void)setSlotFeedbackConfirmsPartOfWeekCountInLockscreen:(int)arg1 ;
-(void)setHasSlotFeedbackConfirmsPartOfWeekCountInLockscreen:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackConfirmsPartOfWeekCountInLockscreen;
-(void)setSlotFeedbackConfirmsDayCountInLockscreen:(int)arg1 ;
-(void)setHasSlotFeedbackConfirmsDayCountInLockscreen:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackConfirmsDayCountInLockscreen;
-(void)setSlotFeedbackConfirmsTimeOfDayCountInLockscreen:(int)arg1 ;
-(void)setHasSlotFeedbackConfirmsTimeOfDayCountInLockscreen:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackConfirmsTimeOfDayCountInLockscreen;
-(void)setSlotFeedbackConfirmsCoarseTimeOfDayCountInLockscreen:(int)arg1 ;
-(void)setHasSlotFeedbackConfirmsCoarseTimeOfDayCountInLockscreen:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackConfirmsCoarseTimeOfDayCountInLockscreen;
-(void)setSlotFeedbackTotalConfirmsTodayInLockscreenForAllSlots:(int)arg1 ;
-(void)setHasSlotFeedbackTotalConfirmsTodayInLockscreenForAllSlots:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalConfirmsTodayInLockscreenForAllSlots;
-(void)setSlotFeedbackTotalRejectsTodayInLockscreenForAllSlots:(int)arg1 ;
-(void)setHasSlotFeedbackTotalRejectsTodayInLockscreenForAllSlots:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalRejectsTodayInLockscreenForAllSlots;
-(void)setActionFeedbackTotalConfirmsInSpotlight:(int)arg1 ;
-(void)setHasActionFeedbackTotalConfirmsInSpotlight:(BOOL)arg1 ;
-(BOOL)hasActionFeedbackTotalConfirmsInSpotlight;
-(void)setActionFeedbackTotalRejectsInSpotlight:(int)arg1 ;
-(void)setHasActionFeedbackTotalRejectsInSpotlight:(BOOL)arg1 ;
-(BOOL)hasActionFeedbackTotalRejectsInSpotlight;
-(void)setActionFeedbackTotalConfirmsTodayInLockscreen:(int)arg1 ;
-(void)setHasActionFeedbackTotalConfirmsTodayInLockscreen:(BOOL)arg1 ;
-(BOOL)hasActionFeedbackTotalConfirmsTodayInLockscreen;
-(void)setActionFeedbackTotalRejectsTodayInLockscreen:(int)arg1 ;
-(void)setHasActionFeedbackTotalRejectsTodayInLockscreen:(BOOL)arg1 ;
-(BOOL)hasActionFeedbackTotalRejectsTodayInLockscreen;
-(void)setActionFeedbackTotalConfirmsInLockscreen:(int)arg1 ;
-(void)setHasActionFeedbackTotalConfirmsInLockscreen:(BOOL)arg1 ;
-(BOOL)hasActionFeedbackTotalConfirmsInLockscreen;
-(void)setActionFeedbackTotalRejectsInLockscreen:(int)arg1 ;
-(void)setHasActionFeedbackTotalRejectsInLockscreen:(BOOL)arg1 ;
-(BOOL)hasActionFeedbackTotalRejectsInLockscreen;
-(void)setSlotFeedbackTotalConfirmsInSpotlightForAllSlots:(int)arg1 ;
-(void)setHasSlotFeedbackTotalConfirmsInSpotlightForAllSlots:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalConfirmsInSpotlightForAllSlots;
-(void)setSlotFeedbackTotalRejectsInSpotlightForAllSlots:(int)arg1 ;
-(void)setHasSlotFeedbackTotalRejectsInSpotlightForAllSlots:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalRejectsInSpotlightForAllSlots;
-(void)setSlotFeedbackTotalConfirmsInLockscreenForAllSlots:(int)arg1 ;
-(void)setHasSlotFeedbackTotalConfirmsInLockscreenForAllSlots:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalConfirmsInLockscreenForAllSlots;
-(void)setSlotFeedbackTotalRejectsInLockscreenForAllSlots:(int)arg1 ;
-(void)setHasSlotFeedbackTotalRejectsInLockscreenForAllSlots:(BOOL)arg1 ;
-(BOOL)hasSlotFeedbackTotalRejectsInLockscreenForAllSlots;
-(void)setSlotPartOfWeekAndLocationPopularity:(int)arg1 ;
-(void)setHasSlotPartOfWeekAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotPartOfWeekAndLocationPopularity;
-(void)setSlotLaunchPartOfWeekAndLocationPopularity:(int)arg1 ;
-(void)setHasSlotLaunchPartOfWeekAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchPartOfWeekAndLocationPopularity;
-(void)setActionPartOfWeekAndLocationPopularity:(int)arg1 ;
-(void)setHasActionPartOfWeekAndLocationPopularity:(BOOL)arg1 ;
-(BOOL)hasActionPartOfWeekAndLocationPopularity;
-(void)setSlotLaunchPartOfWeekAndTimePopularity:(int)arg1 ;
-(void)setHasSlotLaunchPartOfWeekAndTimePopularity:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchPartOfWeekAndTimePopularity;
-(void)setSlotPartOfWeekAndTimePopularity:(int)arg1 ;
-(void)setHasSlotPartOfWeekAndTimePopularity:(BOOL)arg1 ;
-(BOOL)hasSlotPartOfWeekAndTimePopularity;
-(void)setActionPartOfWeekAndTimePopularity:(int)arg1 ;
-(void)setHasActionPartOfWeekAndTimePopularity:(BOOL)arg1 ;
-(BOOL)hasActionPartOfWeekAndTimePopularity;
-(void)setTotalLaunchesForAllActionsUsingTimeDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingTimeDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingTimeDecay;
-(void)setTotalLaunchesForAllActionsUsingDayOfWeekDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingDayOfWeekDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingDayOfWeekDecay;
-(void)setTotalLaunchesForAllActionsUsingLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingLocationDecay;
-(void)setTotalLaunchesForAllActionsUsingCoreMotionDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingCoreMotionDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingCoreMotionDecay;
-(void)setTotalLaunchesForAllActionsUsingPreviousLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingPreviousLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingPreviousLocationDecay;
-(void)setTotalLaunchesForAllActionsUsingPartOfWeekDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingPartOfWeekDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingPartOfWeekDecay;
-(void)setTotalLaunchesForAllActionsUsingPreviousLocationAndCoreMotionDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingPreviousLocationAndCoreMotionDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingPreviousLocationAndCoreMotionDecay;
-(void)setTotalLaunchesForAllActionsUsingPreviousLocationAndLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingPreviousLocationAndLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingPreviousLocationAndLocationDecay;
-(void)setTotalLaunchesForAllActionsUsingTimeAndPreviousLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingTimeAndPreviousLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingTimeAndPreviousLocationDecay;
-(void)setTotalLaunchesForAllActionsUsingDayAndPreviousLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingDayAndPreviousLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingDayAndPreviousLocationDecay;
-(void)setTotalLaunchesForAllActionsUsingTimeAndDayDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingTimeAndDayDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingTimeAndDayDecay;
-(void)setTotalLaunchesForAllActionsUsingTimeAndLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingTimeAndLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingTimeAndLocationDecay;
-(void)setTotalLaunchesForAllActionsUsingDayAndLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingDayAndLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingDayAndLocationDecay;
-(void)setTotalLaunchesForAllActionsUsingTimeAndDayAndLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingTimeAndDayAndLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingTimeAndDayAndLocationDecay;
-(void)setTotalLaunchesForAllActionsUsingPartOfWeekAndLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingPartOfWeekAndLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingPartOfWeekAndLocationDecay;
-(void)setTotalLaunchesForAllActionsUsingPartOfWeekAndTimeDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForAllActionsUsingPartOfWeekAndTimeDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForAllActionsUsingPartOfWeekAndTimeDecay;
-(void)setTotalLaunchesForSlotUsingTimeDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingTimeDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingTimeDecay;
-(void)setTotalLaunchesForSlotUsingDayOfWeekDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingDayOfWeekDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingDayOfWeekDecay;
-(void)setTotalLaunchesForSlotUsingLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingLocationDecay;
-(void)setTotalLaunchesForSlotUsingCoreMotionDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingCoreMotionDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingCoreMotionDecay;
-(void)setTotalLaunchesForSlotUsingPreviousLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingPreviousLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingPreviousLocationDecay;
-(void)setTotalLaunchesForSlotUsingPartOfWeekDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingPartOfWeekDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingPartOfWeekDecay;
-(void)setTotalLaunchesForSlotUsingTimeAndDayDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingTimeAndDayDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingTimeAndDayDecay;
-(void)setTotalLaunchesForSlotUsingTimeAndLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingTimeAndLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingTimeAndLocationDecay;
-(void)setTotalLaunchesForSlotUsingDayAndLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingDayAndLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingDayAndLocationDecay;
-(void)setTotalLaunchesForSlotUsingTimeAndDayAndLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingTimeAndDayAndLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingTimeAndDayAndLocationDecay;
-(void)setTotalLaunchesForSlotUsingPreviousLocationAndLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingPreviousLocationAndLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingPreviousLocationAndLocationDecay;
-(void)setTotalLaunchesForSlotUsingPreviousLocationAndCoreMotionDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingPreviousLocationAndCoreMotionDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingPreviousLocationAndCoreMotionDecay;
-(void)setTotalLaunchesForSlotUsingTimeAndPreviousLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingTimeAndPreviousLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingTimeAndPreviousLocationDecay;
-(void)setTotalLaunchesForSlotUsingDayAndPreviousLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingDayAndPreviousLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingDayAndPreviousLocationDecay;
-(void)setTotalLaunchesForSlotUsingPartOfWeekAndLocationDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingPartOfWeekAndLocationDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingPartOfWeekAndLocationDecay;
-(void)setTotalLaunchesForSlotUsingPartOfWeekAndTimeDecay:(int)arg1 ;
-(void)setHasTotalLaunchesForSlotUsingPartOfWeekAndTimeDecay:(BOOL)arg1 ;
-(BOOL)hasTotalLaunchesForSlotUsingPartOfWeekAndTimeDecay;
-(void)setIsDateInWeekendOnDevice:(int)arg1 ;
-(void)setHasIsDateInWeekendOnDevice:(BOOL)arg1 ;
-(BOOL)hasIsDateInWeekendOnDevice;
-(void)setActionCoreMotionType:(int)arg1 ;
-(void)setHasActionCoreMotionType:(BOOL)arg1 ;
-(BOOL)hasActionCoreMotionType;
-(void)setActionLOIType:(int)arg1 ;
-(void)setHasActionLOIType:(BOOL)arg1 ;
-(BOOL)hasActionLOIType;
-(void)setActionFeedbackMeanNumberOfSpotlightLaunchesPerDay:(int)arg1 ;
-(void)setHasActionFeedbackMeanNumberOfSpotlightLaunchesPerDay:(BOOL)arg1 ;
-(BOOL)hasActionFeedbackMeanNumberOfSpotlightLaunchesPerDay;
-(void)setActionFeedbackMeanNumberOfSpotlightConfirmsPerDay:(int)arg1 ;
-(void)setHasActionFeedbackMeanNumberOfSpotlightConfirmsPerDay:(BOOL)arg1 ;
-(BOOL)hasActionFeedbackMeanNumberOfSpotlightConfirmsPerDay;
-(void)setSlotLaunchTimeWithThirtyMinuteWindowCount:(int)arg1 ;
-(void)setHasSlotLaunchTimeWithThirtyMinuteWindowCount:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchTimeWithThirtyMinuteWindowCount;
-(void)setSlotLaunchTimeWithHourWindowCount:(int)arg1 ;
-(void)setHasSlotLaunchTimeWithHourWindowCount:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchTimeWithHourWindowCount;
-(void)setSlotLaunchTimeWithEightHourWindowCount:(int)arg1 ;
-(void)setHasSlotLaunchTimeWithEightHourWindowCount:(BOOL)arg1 ;
-(BOOL)hasSlotLaunchTimeWithEightHourWindowCount;
-(void)setSlotTimeOfDayWithThirtyMinuteWindowPopularity:(int)arg1 ;
-(void)setHasSlotTimeOfDayWithThirtyMinuteWindowPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotTimeOfDayWithThirtyMinuteWindowPopularity;
-(void)setSlotTimeOfDayWithHourWindowPopularity:(int)arg1 ;
-(void)setHasSlotTimeOfDayWithHourWindowPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotTimeOfDayWithHourWindowPopularity;
-(void)setSlotTimeOfDayWithEightHourWindowPopularity:(int)arg1 ;
-(void)setHasSlotTimeOfDayWithEightHourWindowPopularity:(BOOL)arg1 ;
-(BOOL)hasSlotTimeOfDayWithEightHourWindowPopularity;
-(void)setActionTimeOfDayWithThirtyMinuteWindowPopularity:(int)arg1 ;
-(void)setHasActionTimeOfDayWithThirtyMinuteWindowPopularity:(BOOL)arg1 ;
-(BOOL)hasActionTimeOfDayWithThirtyMinuteWindowPopularity;
-(void)setActionTimeOfDayWithHourWindowPopularity:(int)arg1 ;
-(void)setHasActionTimeOfDayWithHourWindowPopularity:(BOOL)arg1 ;
-(BOOL)hasActionTimeOfDayWithHourWindowPopularity;
-(void)setActionTimeOfDayWithEightHourWindowPopularity:(int)arg1 ;
-(void)setHasActionTimeOfDayWithEightHourWindowPopularity:(BOOL)arg1 ;
-(BOOL)hasActionTimeOfDayWithEightHourWindowPopularity;
-(void)setRandomSessionValue:(int)arg1 ;
-(void)setHasRandomSessionValue:(BOOL)arg1 ;
-(BOOL)hasRandomSessionValue;
-(void)setRandomScore:(int)arg1 ;
-(void)setHasRandomScore:(BOOL)arg1 ;
-(BOOL)hasRandomScore;
-(void)setAmbientLightTypePopularity:(int)arg1 ;
-(void)setHasAmbientLightTypePopularity:(BOOL)arg1 ;
-(BOOL)hasAmbientLightTypePopularity;
-(void)setAmbientLightTypeLaunchPopularity:(int)arg1 ;
-(void)setHasAmbientLightTypeLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasAmbientLightTypeLaunchPopularity;
-(void)setAppIntentAmbientLightTypePopularity:(int)arg1 ;
-(void)setHasAppIntentAmbientLightTypePopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentAmbientLightTypePopularity;
-(void)setAppIntentAmbientLightTypeLaunchPopularity:(int)arg1 ;
-(void)setHasAppIntentAmbientLightTypeLaunchPopularity:(BOOL)arg1 ;
-(BOOL)hasAppIntentAmbientLightTypeLaunchPopularity;
-(void)setAppLOITypeLaunches:(int)arg1 ;
-(void)setHasAppLOITypeLaunches:(BOOL)arg1 ;
-(BOOL)hasAppLOITypeLaunches;
-(void)setAppLastAppLaunches:(int)arg1 ;
-(void)setHasAppLastAppLaunches:(BOOL)arg1 ;
-(BOOL)hasAppLastAppLaunches;
-(void)setAppTimeOfDayLaunches:(int)arg1 ;
-(void)setHasAppTimeOfDayLaunches:(BOOL)arg1 ;
-(BOOL)hasAppTimeOfDayLaunches;
-(void)setAppDayOfWeekLaunches:(int)arg1 ;
-(void)setHasAppDayOfWeekLaunches:(BOOL)arg1 ;
-(BOOL)hasAppDayOfWeekLaunches;
-(void)setAppBlendedLOITypePopularity:(int)arg1 ;
-(void)setHasAppBlendedLOITypePopularity:(BOOL)arg1 ;
-(BOOL)hasAppBlendedLOITypePopularity;
-(void)setAppBlendedLastAppPopularity:(int)arg1 ;
-(void)setHasAppBlendedLastAppPopularity:(BOOL)arg1 ;
-(BOOL)hasAppBlendedLastAppPopularity;
-(void)setAppBlendedTimeOfDayPopularity:(int)arg1 ;
-(void)setHasAppBlendedTimeOfDayPopularity:(BOOL)arg1 ;
-(BOOL)hasAppBlendedTimeOfDayPopularity;
-(void)setAppBlendedDayOfWeekPopularity:(int)arg1 ;
-(void)setHasAppBlendedDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasAppBlendedDayOfWeekPopularity;
-(void)setAppBlendedLOITypeSampledPopularity:(int)arg1 ;
-(void)setHasAppBlendedLOITypeSampledPopularity:(BOOL)arg1 ;
-(BOOL)hasAppBlendedLOITypeSampledPopularity;
-(void)setAppBlendedLastAppSampledPopularity:(int)arg1 ;
-(void)setHasAppBlendedLastAppSampledPopularity:(BOOL)arg1 ;
-(BOOL)hasAppBlendedLastAppSampledPopularity;
-(void)setAppBlendedTimeOfDaySampledPopularity:(int)arg1 ;
-(void)setHasAppBlendedTimeOfDaySampledPopularity:(BOOL)arg1 ;
-(BOOL)hasAppBlendedTimeOfDaySampledPopularity;
-(void)setAppBlendedDayOfWeekSampledPopularity:(int)arg1 ;
-(void)setHasAppBlendedDayOfWeekSampledPopularity:(BOOL)arg1 ;
-(BOOL)hasAppBlendedDayOfWeekSampledPopularity;
-(void)setAppGlobalScoreGivenTimeDayLocationAndLastApp:(int)arg1 ;
-(void)setHasAppGlobalScoreGivenTimeDayLocationAndLastApp:(BOOL)arg1 ;
-(BOOL)hasAppGlobalScoreGivenTimeDayLocationAndLastApp;
-(void)setAppGlobalScoreGivenTimeDayAndLocation:(int)arg1 ;
-(void)setHasAppGlobalScoreGivenTimeDayAndLocation:(BOOL)arg1 ;
-(BOOL)hasAppGlobalScoreGivenTimeDayAndLocation;
-(void)setAppTimeAndDayOfWeekPopularity:(int)arg1 ;
-(void)setHasAppTimeAndDayOfWeekPopularity:(BOOL)arg1 ;
-(BOOL)hasAppTimeAndDayOfWeekPopularity;
-(void)setAppPopularityGivenTimeAndDayOfWeek:(int)arg1 ;
-(void)setHasAppPopularityGivenTimeAndDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasAppPopularityGivenTimeAndDayOfWeek;
-(void)setAppPopularityOfTimeAndDayOfWeekGivenApp:(int)arg1 ;
-(void)setHasAppPopularityOfTimeAndDayOfWeekGivenApp:(BOOL)arg1 ;
-(BOOL)hasAppPopularityOfTimeAndDayOfWeekGivenApp;
-(void)setAppTotalNumberOfTimeAndDayOfWeekLaunches:(int)arg1 ;
-(void)setHasAppTotalNumberOfTimeAndDayOfWeekLaunches:(BOOL)arg1 ;
-(BOOL)hasAppTotalNumberOfTimeAndDayOfWeekLaunches;
-(void)setAppLaunchesCoarseTimePowLocationForAppInContext:(int)arg1 ;
-(void)setHasAppLaunchesCoarseTimePowLocationForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesCoarseTimePowLocationForAppInContext;
-(void)setAppLaunchesCoarseTimePowLocationInContext:(int)arg1 ;
-(void)setHasAppLaunchesCoarseTimePowLocationInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesCoarseTimePowLocationInContext;
-(void)setAppLaunchesCoarseTimePowLocationForApp:(int)arg1 ;
-(void)setHasAppLaunchesCoarseTimePowLocationForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesCoarseTimePowLocationForApp;
-(void)setAppLaunchesCoarseTimePowLocationForAllAppsAndContexts:(int)arg1 ;
-(void)setHasAppLaunchesCoarseTimePowLocationForAllAppsAndContexts:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesCoarseTimePowLocationForAllAppsAndContexts;
-(void)setAppConfirmsCoarseTimePowLocationForAppInContext:(int)arg1 ;
-(void)setHasAppConfirmsCoarseTimePowLocationForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsCoarseTimePowLocationForAppInContext;
-(void)setAppConfirmsCoarseTimePowLocationInContext:(int)arg1 ;
-(void)setHasAppConfirmsCoarseTimePowLocationInContext:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsCoarseTimePowLocationInContext;
-(void)setAppConfirmsCoarseTimePowLocationForApp:(int)arg1 ;
-(void)setHasAppConfirmsCoarseTimePowLocationForApp:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsCoarseTimePowLocationForApp;
-(void)setAppConfirmsCoarseTimePowLocationForAllAppsAndContexts:(int)arg1 ;
-(void)setHasAppConfirmsCoarseTimePowLocationForAllAppsAndContexts:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsCoarseTimePowLocationForAllAppsAndContexts;
-(void)setAppRejectsCoarseTimePowLocationForAppInContext:(int)arg1 ;
-(void)setHasAppRejectsCoarseTimePowLocationForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppRejectsCoarseTimePowLocationForAppInContext;
-(void)setAppRejectsCoarseTimePowLocationInContext:(int)arg1 ;
-(void)setHasAppRejectsCoarseTimePowLocationInContext:(BOOL)arg1 ;
-(BOOL)hasAppRejectsCoarseTimePowLocationInContext;
-(void)setAppRejectsCoarseTimePowLocationForApp:(int)arg1 ;
-(void)setHasAppRejectsCoarseTimePowLocationForApp:(BOOL)arg1 ;
-(BOOL)hasAppRejectsCoarseTimePowLocationForApp;
-(void)setAppRejectsCoarseTimePowLocationForAllAppsAndContexts:(int)arg1 ;
-(void)setHasAppRejectsCoarseTimePowLocationForAllAppsAndContexts:(BOOL)arg1 ;
-(BOOL)hasAppRejectsCoarseTimePowLocationForAllAppsAndContexts;
-(void)setAppLaunchesSpecificTimeDowLocationForAppInContext:(int)arg1 ;
-(void)setHasAppLaunchesSpecificTimeDowLocationForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesSpecificTimeDowLocationForAppInContext;
-(void)setAppLaunchesSpecificTimeDowLocationInContext:(int)arg1 ;
-(void)setHasAppLaunchesSpecificTimeDowLocationInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesSpecificTimeDowLocationInContext;
-(void)setAppLaunchesSpecificTimeDowLocationForApp:(int)arg1 ;
-(void)setHasAppLaunchesSpecificTimeDowLocationForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesSpecificTimeDowLocationForApp;
-(void)setAppLaunchesSpecificTimeDowLocationForAllAppsAndContexts:(int)arg1 ;
-(void)setHasAppLaunchesSpecificTimeDowLocationForAllAppsAndContexts:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesSpecificTimeDowLocationForAllAppsAndContexts;
-(void)setAppConfirmsSpecificTimeDowLocationForAppInContext:(int)arg1 ;
-(void)setHasAppConfirmsSpecificTimeDowLocationForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsSpecificTimeDowLocationForAppInContext;
-(void)setAppConfirmsSpecificTimeDowLocationInContext:(int)arg1 ;
-(void)setHasAppConfirmsSpecificTimeDowLocationInContext:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsSpecificTimeDowLocationInContext;
-(void)setAppConfirmsSpecificTimeDowLocationForApp:(int)arg1 ;
-(void)setHasAppConfirmsSpecificTimeDowLocationForApp:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsSpecificTimeDowLocationForApp;
-(void)setAppConfirmsSpecificTimeDowLocationForAllAppsAndContexts:(int)arg1 ;
-(void)setHasAppConfirmsSpecificTimeDowLocationForAllAppsAndContexts:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsSpecificTimeDowLocationForAllAppsAndContexts;
-(void)setAppRejectsSpecificTimeDowLocationForAppInContext:(int)arg1 ;
-(void)setHasAppRejectsSpecificTimeDowLocationForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppRejectsSpecificTimeDowLocationForAppInContext;
-(void)setAppRejectsSpecificTimeDowLocationInContext:(int)arg1 ;
-(void)setHasAppRejectsSpecificTimeDowLocationInContext:(BOOL)arg1 ;
-(BOOL)hasAppRejectsSpecificTimeDowLocationInContext;
-(void)setAppRejectsSpecificTimeDowLocationForApp:(int)arg1 ;
-(void)setHasAppRejectsSpecificTimeDowLocationForApp:(BOOL)arg1 ;
-(BOOL)hasAppRejectsSpecificTimeDowLocationForApp;
-(void)setAppRejectsSpecificTimeDowLocationForAllAppsAndContexts:(int)arg1 ;
-(void)setHasAppRejectsSpecificTimeDowLocationForAllAppsAndContexts:(BOOL)arg1 ;
-(BOOL)hasAppRejectsSpecificTimeDowLocationForAllAppsAndContexts;
-(void)setActionsCoarseTimePowLocationForActionInContext:(int)arg1 ;
-(void)setHasActionsCoarseTimePowLocationForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionsCoarseTimePowLocationForActionInContext;
-(void)setActionsCoarseTimePowLocationInContext:(int)arg1 ;
-(void)setHasActionsCoarseTimePowLocationInContext:(BOOL)arg1 ;
-(BOOL)hasActionsCoarseTimePowLocationInContext;
-(void)setActionsCoarseTimePowLocationForAction:(int)arg1 ;
-(void)setHasActionsCoarseTimePowLocationForAction:(BOOL)arg1 ;
-(BOOL)hasActionsCoarseTimePowLocationForAction;
-(void)setActionsCoarseTimePowLocationForAllActionsAndContexts:(int)arg1 ;
-(void)setHasActionsCoarseTimePowLocationForAllActionsAndContexts:(BOOL)arg1 ;
-(BOOL)hasActionsCoarseTimePowLocationForAllActionsAndContexts;
-(void)setActionConfirmsCoarseTimePowLocationForActionInContext:(int)arg1 ;
-(void)setHasActionConfirmsCoarseTimePowLocationForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsCoarseTimePowLocationForActionInContext;
-(void)setActionConfirmsCoarseTimePowLocationInContext:(int)arg1 ;
-(void)setHasActionConfirmsCoarseTimePowLocationInContext:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsCoarseTimePowLocationInContext;
-(void)setActionConfirmsCoarseTimePowLocationForAction:(int)arg1 ;
-(void)setHasActionConfirmsCoarseTimePowLocationForAction:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsCoarseTimePowLocationForAction;
-(void)setActionConfirmsCoarseTimePowLocationForAllActionsAndContexts:(int)arg1 ;
-(void)setHasActionConfirmsCoarseTimePowLocationForAllActionsAndContexts:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsCoarseTimePowLocationForAllActionsAndContexts;
-(void)setActionRejectsCoarseTimePowLocationForActionInContext:(int)arg1 ;
-(void)setHasActionRejectsCoarseTimePowLocationForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionRejectsCoarseTimePowLocationForActionInContext;
-(void)setActionRejectsCoarseTimePowLocationInContext:(int)arg1 ;
-(void)setHasActionRejectsCoarseTimePowLocationInContext:(BOOL)arg1 ;
-(BOOL)hasActionRejectsCoarseTimePowLocationInContext;
-(void)setActionRejectsCoarseTimePowLocationForAction:(int)arg1 ;
-(void)setHasActionRejectsCoarseTimePowLocationForAction:(BOOL)arg1 ;
-(BOOL)hasActionRejectsCoarseTimePowLocationForAction;
-(void)setActionRejectsCoarseTimePowLocationForAllActionsAndContexts:(int)arg1 ;
-(void)setHasActionRejectsCoarseTimePowLocationForAllActionsAndContexts:(BOOL)arg1 ;
-(BOOL)hasActionRejectsCoarseTimePowLocationForAllActionsAndContexts;
-(void)setActionsSpecificTimeDowLocationForActionInContext:(int)arg1 ;
-(void)setHasActionsSpecificTimeDowLocationForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionsSpecificTimeDowLocationForActionInContext;
-(void)setActionsSpecificTimeDowLocationInContext:(int)arg1 ;
-(void)setHasActionsSpecificTimeDowLocationInContext:(BOOL)arg1 ;
-(BOOL)hasActionsSpecificTimeDowLocationInContext;
-(void)setActionsSpecificTimeDowLocationForAction:(int)arg1 ;
-(void)setHasActionsSpecificTimeDowLocationForAction:(BOOL)arg1 ;
-(BOOL)hasActionsSpecificTimeDowLocationForAction;
-(void)setActionsSpecificTimeDowLocationForAllActionsAndContexts:(int)arg1 ;
-(void)setHasActionsSpecificTimeDowLocationForAllActionsAndContexts:(BOOL)arg1 ;
-(BOOL)hasActionsSpecificTimeDowLocationForAllActionsAndContexts;
-(void)setActionConfirmsSpecificTimeDowLocationForActionInContext:(int)arg1 ;
-(void)setHasActionConfirmsSpecificTimeDowLocationForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsSpecificTimeDowLocationForActionInContext;
-(void)setActionConfirmsSpecificTimeDowLocationInContext:(int)arg1 ;
-(void)setHasActionConfirmsSpecificTimeDowLocationInContext:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsSpecificTimeDowLocationInContext;
-(void)setActionConfirmsSpecificTimeDowLocationForAction:(int)arg1 ;
-(void)setHasActionConfirmsSpecificTimeDowLocationForAction:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsSpecificTimeDowLocationForAction;
-(void)setActionConfirmsSpecificTimeDowLocationForAllActionsAndContexts:(int)arg1 ;
-(void)setHasActionConfirmsSpecificTimeDowLocationForAllActionsAndContexts:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsSpecificTimeDowLocationForAllActionsAndContexts;
-(void)setActionRejectsSpecificTimeDowLocationForActionInContext:(int)arg1 ;
-(void)setHasActionRejectsSpecificTimeDowLocationForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionRejectsSpecificTimeDowLocationForActionInContext;
-(void)setActionRejectsSpecificTimeDowLocationInContext:(int)arg1 ;
-(void)setHasActionRejectsSpecificTimeDowLocationInContext:(BOOL)arg1 ;
-(BOOL)hasActionRejectsSpecificTimeDowLocationInContext;
-(void)setActionRejectsSpecificTimeDowLocationForAction:(int)arg1 ;
-(void)setHasActionRejectsSpecificTimeDowLocationForAction:(BOOL)arg1 ;
-(BOOL)hasActionRejectsSpecificTimeDowLocationForAction;
-(void)setActionRejectsSpecificTimeDowLocationForAllActionsAndContexts:(int)arg1 ;
-(void)setHasActionRejectsSpecificTimeDowLocationForAllActionsAndContexts:(BOOL)arg1 ;
-(BOOL)hasActionRejectsSpecificTimeDowLocationForAllActionsAndContexts;
-(void)setAppLaunchesInTimeBucket0ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket0ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket0ForApp;
-(void)setAppLaunchesInTimeBucket1ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket1ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket1ForApp;
-(void)setAppLaunchesInTimeBucket2ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket2ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket2ForApp;
-(void)setAppLaunchesInTimeBucket3ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket3ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket3ForApp;
-(void)setAppLaunchesInTimeBucket4ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket4ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket4ForApp;
-(void)setAppLaunchesInTimeBucket5ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket5ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket5ForApp;
-(void)setAppLaunchesInTimeBucket6ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket6ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket6ForApp;
-(void)setAppLaunchesInTimeBucket7ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket7ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket7ForApp;
-(void)setAppLaunchesInTimeBucket8ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket8ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket8ForApp;
-(void)setAppLaunchesInTimeBucket9ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket9ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket9ForApp;
-(void)setAppLaunchesInTimeBucket10ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket10ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket10ForApp;
-(void)setAppLaunchesInTimeBucket11ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket11ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket11ForApp;
-(void)setAppLaunchesInTimeBucket12ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket12ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket12ForApp;
-(void)setAppLaunchesInTimeBucket13ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket13ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket13ForApp;
-(void)setAppLaunchesInTimeBucket14ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket14ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket14ForApp;
-(void)setAppLaunchesInTimeBucket15ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket15ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket15ForApp;
-(void)setAppLaunchesInTimeBucket16ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket16ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket16ForApp;
-(void)setAppLaunchesInTimeBucket17ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket17ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket17ForApp;
-(void)setAppLaunchesInTimeBucket18ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket18ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket18ForApp;
-(void)setAppLaunchesInTimeBucket19ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket19ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket19ForApp;
-(void)setAppLaunchesInTimeBucket20ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket20ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket20ForApp;
-(void)setAppLaunchesInTimeBucket21ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket21ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket21ForApp;
-(void)setAppLaunchesInTimeBucket22ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket22ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket22ForApp;
-(void)setAppLaunchesInTimeBucket23ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket23ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket23ForApp;
-(void)setAppLaunchesInTimeBucket24ForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTimeBucket24ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTimeBucket24ForApp;
-(void)setAppLaunchesOnDayOfWeekSundayForApp:(int)arg1 ;
-(void)setHasAppLaunchesOnDayOfWeekSundayForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesOnDayOfWeekSundayForApp;
-(void)setAppLaunchesOnDayOfWeekMondayForApp:(int)arg1 ;
-(void)setHasAppLaunchesOnDayOfWeekMondayForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesOnDayOfWeekMondayForApp;
-(void)setAppLaunchesOnDayOfWeekTuesdayForApp:(int)arg1 ;
-(void)setHasAppLaunchesOnDayOfWeekTuesdayForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesOnDayOfWeekTuesdayForApp;
-(void)setAppLaunchesOnDayOfWeekWednesdayForApp:(int)arg1 ;
-(void)setHasAppLaunchesOnDayOfWeekWednesdayForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesOnDayOfWeekWednesdayForApp;
-(void)setAppLaunchesOnDayOfWeekThursdayForApp:(int)arg1 ;
-(void)setHasAppLaunchesOnDayOfWeekThursdayForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesOnDayOfWeekThursdayForApp;
-(void)setAppLaunchesOnDayOfWeekFridayForApp:(int)arg1 ;
-(void)setHasAppLaunchesOnDayOfWeekFridayForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesOnDayOfWeekFridayForApp;
-(void)setAppLaunchesOnDayOfWeekSaturdayForApp:(int)arg1 ;
-(void)setHasAppLaunchesOnDayOfWeekSaturdayForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesOnDayOfWeekSaturdayForApp;
-(void)setAppLaunchesAtCoarseGeoHash0ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtCoarseGeoHash0ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtCoarseGeoHash0ForApp;
-(void)setAppLaunchesAtCoarseGeoHash1ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtCoarseGeoHash1ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtCoarseGeoHash1ForApp;
-(void)setAppLaunchesAtCoarseGeoHash2ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtCoarseGeoHash2ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtCoarseGeoHash2ForApp;
-(void)setAppLaunchesAtCoarseGeoHash3ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtCoarseGeoHash3ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtCoarseGeoHash3ForApp;
-(void)setAppLaunchesAtCoarseGeoHash4ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtCoarseGeoHash4ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtCoarseGeoHash4ForApp;
-(void)setAppLaunchesAtCoarseGeoHash5ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtCoarseGeoHash5ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtCoarseGeoHash5ForApp;
-(void)setAppLaunchesAtCoarseGeoHash6ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtCoarseGeoHash6ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtCoarseGeoHash6ForApp;
-(void)setAppLaunchesAtCoarseGeoHash7ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtCoarseGeoHash7ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtCoarseGeoHash7ForApp;
-(void)setAppLaunchesAtCoarseGeoHash8ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtCoarseGeoHash8ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtCoarseGeoHash8ForApp;
-(void)setAppLaunchesAtCoarseGeoHash9ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtCoarseGeoHash9ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtCoarseGeoHash9ForApp;
-(void)setAppLaunchesAtSpecificGeoHash0ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash0ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash0ForApp;
-(void)setAppLaunchesAtSpecificGeoHash1ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash1ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash1ForApp;
-(void)setAppLaunchesAtSpecificGeoHash2ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash2ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash2ForApp;
-(void)setAppLaunchesAtSpecificGeoHash3ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash3ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash3ForApp;
-(void)setAppLaunchesAtSpecificGeoHash4ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash4ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash4ForApp;
-(void)setAppLaunchesAtSpecificGeoHash5ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash5ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash5ForApp;
-(void)setAppLaunchesAtSpecificGeoHash6ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash6ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash6ForApp;
-(void)setAppLaunchesAtSpecificGeoHash7ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash7ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash7ForApp;
-(void)setAppLaunchesAtSpecificGeoHash8ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash8ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash8ForApp;
-(void)setAppLaunchesAtSpecificGeoHash9ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash9ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash9ForApp;
-(void)setAppLaunchesAtSpecificGeoHash10ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash10ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash10ForApp;
-(void)setAppLaunchesAtSpecificGeoHash11ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash11ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash11ForApp;
-(void)setAppLaunchesAtSpecificGeoHash12ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash12ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash12ForApp;
-(void)setAppLaunchesAtSpecificGeoHash13ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash13ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash13ForApp;
-(void)setAppLaunchesAtSpecificGeoHash14ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHash14ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHash14ForApp;
-(void)setAppNumberOfSpecificGeohashesForApp:(int)arg1 ;
-(void)setHasAppNumberOfSpecificGeohashesForApp:(BOOL)arg1 ;
-(BOOL)hasAppNumberOfSpecificGeohashesForApp;
-(void)setAppNumberOfCoarseGeohashesForApp:(int)arg1 ;
-(void)setHasAppNumberOfCoarseGeohashesForApp:(BOOL)arg1 ;
-(BOOL)hasAppNumberOfCoarseGeohashesForApp;
-(void)setAppEntropyForTimeBuckets:(int)arg1 ;
-(void)setHasAppEntropyForTimeBuckets:(BOOL)arg1 ;
-(BOOL)hasAppEntropyForTimeBuckets;
-(void)setAppEntropyForSpecificGeoHash:(int)arg1 ;
-(void)setHasAppEntropyForSpecificGeoHash:(BOOL)arg1 ;
-(BOOL)hasAppEntropyForSpecificGeoHash;
-(void)setAppEntropyForCoarseGeoHash:(int)arg1 ;
-(void)setHasAppEntropyForCoarseGeoHash:(BOOL)arg1 ;
-(BOOL)hasAppEntropyForCoarseGeoHash;
-(void)setAppLaunchesAtCoarseGeoHashForAppInContext:(int)arg1 ;
-(void)setHasAppLaunchesAtCoarseGeoHashForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtCoarseGeoHashForAppInContext;
-(void)setAppLaunchesAtSpecificGeoHashForAppInContext:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHashForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHashForAppInContext;
-(void)setAppLaunchesAtDayOfWeekInContext:(int)arg1 ;
-(void)setHasAppLaunchesAtDayOfWeekInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtDayOfWeekInContext;
-(void)setAppLaunchesAtDayOfWeekForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtDayOfWeekForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtDayOfWeekForApp;
-(void)setAppLaunchesAtTimeAndDayForAppInContext:(int)arg1 ;
-(void)setHasAppLaunchesAtTimeAndDayForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtTimeAndDayForAppInContext;
-(void)setAppLaunchesAtTimeAndDayInContext:(int)arg1 ;
-(void)setHasAppLaunchesAtTimeAndDayInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtTimeAndDayInContext;
-(void)setAppLaunchesAtTimeAndDayForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtTimeAndDayForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtTimeAndDayForApp;
-(void)setAppLaunchesAtCoarseGeoHashInContext:(int)arg1 ;
-(void)setHasAppLaunchesAtCoarseGeoHashInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtCoarseGeoHashInContext;
-(void)setAppLaunchesAtCoarseGeoHashForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtCoarseGeoHashForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtCoarseGeoHashForApp;
-(void)setAppLaunchesAtSpecificGeoHashInContext:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHashInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHashInContext;
-(void)setAppLaunchesAtSpecificGeoHashForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSpecificGeoHashForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSpecificGeoHashForApp;
-(void)setAppLaunchesForAllAppsAndContextsDecayedAtCoarseContextRate:(int)arg1 ;
-(void)setHasAppLaunchesForAllAppsAndContextsDecayedAtCoarseContextRate:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesForAllAppsAndContextsDecayedAtCoarseContextRate;
-(void)setAppLaunchesForAllAppsAndContextsDecayedAtSpecificContextRate:(int)arg1 ;
-(void)setHasAppLaunchesForAllAppsAndContextsDecayedAtSpecificContextRate:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesForAllAppsAndContextsDecayedAtSpecificContextRate;
-(void)setIsLocationServicesDisabled:(int)arg1 ;
-(void)setHasIsLocationServicesDisabled:(BOOL)arg1 ;
-(BOOL)hasIsLocationServicesDisabled;
-(void)setAppLaunchesInTwoHourTimeBucketForAppInContext:(int)arg1 ;
-(void)setHasAppLaunchesInTwoHourTimeBucketForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTwoHourTimeBucketForAppInContext;
-(void)setAppLaunchesInTwoHourTimeBucketInContext:(int)arg1 ;
-(void)setHasAppLaunchesInTwoHourTimeBucketInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTwoHourTimeBucketInContext;
-(void)setAppLaunchesInTwoHourTimeBucketForApp:(int)arg1 ;
-(void)setHasAppLaunchesInTwoHourTimeBucketForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInTwoHourTimeBucketForApp;
-(void)setAppConfirmsInTwoHourTimeBucketForAppInContext:(int)arg1 ;
-(void)setHasAppConfirmsInTwoHourTimeBucketForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsInTwoHourTimeBucketForAppInContext;
-(void)setAppConfirmsInTwoHourTimeBucketInContext:(int)arg1 ;
-(void)setHasAppConfirmsInTwoHourTimeBucketInContext:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsInTwoHourTimeBucketInContext;
-(void)setAppConfirmsInTwoHourTimeBucketForApp:(int)arg1 ;
-(void)setHasAppConfirmsInTwoHourTimeBucketForApp:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsInTwoHourTimeBucketForApp;
-(void)setAppRejectsInTwoHourTimeBucketForAppInContext:(int)arg1 ;
-(void)setHasAppRejectsInTwoHourTimeBucketForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppRejectsInTwoHourTimeBucketForAppInContext;
-(void)setAppRejectsInTwoHourTimeBucketInContext:(int)arg1 ;
-(void)setHasAppRejectsInTwoHourTimeBucketInContext:(BOOL)arg1 ;
-(BOOL)hasAppRejectsInTwoHourTimeBucketInContext;
-(void)setAppRejectsInTwoHourTimeBucketForApp:(int)arg1 ;
-(void)setHasAppRejectsInTwoHourTimeBucketForApp:(BOOL)arg1 ;
-(BOOL)hasAppRejectsInTwoHourTimeBucketForApp;
-(void)setAppConfirmsAtDayOfWeekForAppInContext:(int)arg1 ;
-(void)setHasAppConfirmsAtDayOfWeekForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsAtDayOfWeekForAppInContext;
-(void)setAppConfirmsAtDayOfWeekInContext:(int)arg1 ;
-(void)setHasAppConfirmsAtDayOfWeekInContext:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsAtDayOfWeekInContext;
-(void)setAppConfirmsAtDayOfWeekForApp:(int)arg1 ;
-(void)setHasAppConfirmsAtDayOfWeekForApp:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsAtDayOfWeekForApp;
-(void)setAppRejectsAtDayOfWeekForAppInContext:(int)arg1 ;
-(void)setHasAppRejectsAtDayOfWeekForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppRejectsAtDayOfWeekForAppInContext;
-(void)setAppRejectsAtDayOfWeekInContext:(int)arg1 ;
-(void)setHasAppRejectsAtDayOfWeekInContext:(BOOL)arg1 ;
-(BOOL)hasAppRejectsAtDayOfWeekInContext;
-(void)setAppRejectsAtDayOfWeekForApp:(int)arg1 ;
-(void)setHasAppRejectsAtDayOfWeekForApp:(BOOL)arg1 ;
-(BOOL)hasAppRejectsAtDayOfWeekForApp;
-(void)setAppConfirmsAtCoarseGeoHashForAppInContext:(int)arg1 ;
-(void)setHasAppConfirmsAtCoarseGeoHashForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsAtCoarseGeoHashForAppInContext;
-(void)setAppConfirmsAtCoarseGeoHashInContext:(int)arg1 ;
-(void)setHasAppConfirmsAtCoarseGeoHashInContext:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsAtCoarseGeoHashInContext;
-(void)setAppConfirmsAtCoarseGeoHashForApp:(int)arg1 ;
-(void)setHasAppConfirmsAtCoarseGeoHashForApp:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsAtCoarseGeoHashForApp;
-(void)setAppRejectsAtCoarseGeoHashForAppInContext:(int)arg1 ;
-(void)setHasAppRejectsAtCoarseGeoHashForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppRejectsAtCoarseGeoHashForAppInContext;
-(void)setAppRejectsAtCoarseGeoHashInContext:(int)arg1 ;
-(void)setHasAppRejectsAtCoarseGeoHashInContext:(BOOL)arg1 ;
-(BOOL)hasAppRejectsAtCoarseGeoHashInContext;
-(void)setAppRejectsAtCoarseGeoHashForApp:(int)arg1 ;
-(void)setHasAppRejectsAtCoarseGeoHashForApp:(BOOL)arg1 ;
-(BOOL)hasAppRejectsAtCoarseGeoHashForApp;
-(void)setAppConfirmsAtSpecificGeoHashForAppInContext:(int)arg1 ;
-(void)setHasAppConfirmsAtSpecificGeoHashForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsAtSpecificGeoHashForAppInContext;
-(void)setAppConfirmsAtSpecificGeoHashInContext:(int)arg1 ;
-(void)setHasAppConfirmsAtSpecificGeoHashInContext:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsAtSpecificGeoHashInContext;
-(void)setAppConfirmsAtSpecificGeoHashForApp:(int)arg1 ;
-(void)setHasAppConfirmsAtSpecificGeoHashForApp:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsAtSpecificGeoHashForApp;
-(void)setAppRejectsAtSpecificGeoHashForAppInContext:(int)arg1 ;
-(void)setHasAppRejectsAtSpecificGeoHashForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppRejectsAtSpecificGeoHashForAppInContext;
-(void)setAppRejectsAtSpecificGeoHashInContext:(int)arg1 ;
-(void)setHasAppRejectsAtSpecificGeoHashInContext:(BOOL)arg1 ;
-(BOOL)hasAppRejectsAtSpecificGeoHashInContext;
-(void)setAppRejectsAtSpecificGeoHashForApp:(int)arg1 ;
-(void)setHasAppRejectsAtSpecificGeoHashForApp:(BOOL)arg1 ;
-(BOOL)hasAppRejectsAtSpecificGeoHashForApp;
-(void)setAppConfirmsForAllAppsAndContextsDecayedAtCoarseContextRate:(int)arg1 ;
-(void)setHasAppConfirmsForAllAppsAndContextsDecayedAtCoarseContextRate:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsForAllAppsAndContextsDecayedAtCoarseContextRate;
-(void)setAppConfirmsForAllAppsAndContextsDecayedAtSpecificContextRate:(int)arg1 ;
-(void)setHasAppConfirmsForAllAppsAndContextsDecayedAtSpecificContextRate:(BOOL)arg1 ;
-(BOOL)hasAppConfirmsForAllAppsAndContextsDecayedAtSpecificContextRate;
-(void)setAppRejectsForAllAppsAndContextsDecayedAtCoarseContextRate:(int)arg1 ;
-(void)setHasAppRejectsForAllAppsAndContextsDecayedAtCoarseContextRate:(BOOL)arg1 ;
-(BOOL)hasAppRejectsForAllAppsAndContextsDecayedAtCoarseContextRate;
-(void)setAppRejectsForAllAppsAndContextsDecayedAtSpecificContextRate:(int)arg1 ;
-(void)setHasAppRejectsForAllAppsAndContextsDecayedAtSpecificContextRate:(BOOL)arg1 ;
-(BOOL)hasAppRejectsForAllAppsAndContextsDecayedAtSpecificContextRate;
-(void)setCurrentTimeBucketFromZeroToTwentyFour:(int)arg1 ;
-(void)setHasCurrentTimeBucketFromZeroToTwentyFour:(BOOL)arg1 ;
-(BOOL)hasCurrentTimeBucketFromZeroToTwentyFour;
-(void)setActionsAtDayOfWeekForActionInContext:(int)arg1 ;
-(void)setHasActionsAtDayOfWeekForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionsAtDayOfWeekForActionInContext;
-(void)setActionsAtDayOfWeekInContext:(int)arg1 ;
-(void)setHasActionsAtDayOfWeekInContext:(BOOL)arg1 ;
-(BOOL)hasActionsAtDayOfWeekInContext;
-(void)setActionsAtDayOfWeekForAction:(int)arg1 ;
-(void)setHasActionsAtDayOfWeekForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtDayOfWeekForAction;
-(void)setActionsAtCoarseGeoHashForActionInContext:(int)arg1 ;
-(void)setHasActionsAtCoarseGeoHashForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionsAtCoarseGeoHashForActionInContext;
-(void)setActionsAtCoarseGeoHashInContext:(int)arg1 ;
-(void)setHasActionsAtCoarseGeoHashInContext:(BOOL)arg1 ;
-(BOOL)hasActionsAtCoarseGeoHashInContext;
-(void)setActionsAtCoarseGeoHashForAction:(int)arg1 ;
-(void)setHasActionsAtCoarseGeoHashForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtCoarseGeoHashForAction;
-(void)setActionsAtSpecificGeoHashForActionInContext:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHashForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHashForActionInContext;
-(void)setActionsAtSpecificGeoHashInContext:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHashInContext:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHashInContext;
-(void)setActionsAtSpecificGeoHashForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHashForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHashForAction;
-(void)setActionsAtTimeOfDayForActionInContext:(int)arg1 ;
-(void)setHasActionsAtTimeOfDayForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionsAtTimeOfDayForActionInContext;
-(void)setActionsAtTimeOfDayInContext:(int)arg1 ;
-(void)setHasActionsAtTimeOfDayInContext:(BOOL)arg1 ;
-(BOOL)hasActionsAtTimeOfDayInContext;
-(void)setActionsAtTimeOfDayForAction:(int)arg1 ;
-(void)setHasActionsAtTimeOfDayForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtTimeOfDayForAction;
-(void)setActionConfirmsAtTimeOfDayForActionInContext:(int)arg1 ;
-(void)setHasActionConfirmsAtTimeOfDayForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsAtTimeOfDayForActionInContext;
-(void)setActionConfirmsAtTimeOfDayInContext:(int)arg1 ;
-(void)setHasActionConfirmsAtTimeOfDayInContext:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsAtTimeOfDayInContext;
-(void)setActionConfirmsAtTimeOfDayForAction:(int)arg1 ;
-(void)setHasActionConfirmsAtTimeOfDayForAction:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsAtTimeOfDayForAction;
-(void)setActionRejectsAtTimeOfDayForActionInContext:(int)arg1 ;
-(void)setHasActionRejectsAtTimeOfDayForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionRejectsAtTimeOfDayForActionInContext;
-(void)setActionRejectsAtTimeOfDayInContext:(int)arg1 ;
-(void)setHasActionRejectsAtTimeOfDayInContext:(BOOL)arg1 ;
-(BOOL)hasActionRejectsAtTimeOfDayInContext;
-(void)setActionRejectsAtTimeOfDayForAction:(int)arg1 ;
-(void)setHasActionRejectsAtTimeOfDayForAction:(BOOL)arg1 ;
-(BOOL)hasActionRejectsAtTimeOfDayForAction;
-(void)setActionConfirmsAtDayOfWeekForActionInContext:(int)arg1 ;
-(void)setHasActionConfirmsAtDayOfWeekForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsAtDayOfWeekForActionInContext;
-(void)setActionConfirmsAtDayOfWeekInContext:(int)arg1 ;
-(void)setHasActionConfirmsAtDayOfWeekInContext:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsAtDayOfWeekInContext;
-(void)setActionConfirmsAtDayOfWeekForAction:(int)arg1 ;
-(void)setHasActionConfirmsAtDayOfWeekForAction:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsAtDayOfWeekForAction;
-(void)setActionRejectsAtDayOfWeekForActionInContext:(int)arg1 ;
-(void)setHasActionRejectsAtDayOfWeekForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionRejectsAtDayOfWeekForActionInContext;
-(void)setActionRejectsAtDayOfWeekInContext:(int)arg1 ;
-(void)setHasActionRejectsAtDayOfWeekInContext:(BOOL)arg1 ;
-(BOOL)hasActionRejectsAtDayOfWeekInContext;
-(void)setActionRejectsAtDayOfWeekForAction:(int)arg1 ;
-(void)setHasActionRejectsAtDayOfWeekForAction:(BOOL)arg1 ;
-(BOOL)hasActionRejectsAtDayOfWeekForAction;
-(void)setActionConfirmsAtCoarseGeoHashForActionInContext:(int)arg1 ;
-(void)setHasActionConfirmsAtCoarseGeoHashForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsAtCoarseGeoHashForActionInContext;
-(void)setActionConfirmsAtCoarseGeoHashInContext:(int)arg1 ;
-(void)setHasActionConfirmsAtCoarseGeoHashInContext:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsAtCoarseGeoHashInContext;
-(void)setActionConfirmsAtCoarseGeoHashForAction:(int)arg1 ;
-(void)setHasActionConfirmsAtCoarseGeoHashForAction:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsAtCoarseGeoHashForAction;
-(void)setActionRejectsAtCoarseGeoHashForActionInContext:(int)arg1 ;
-(void)setHasActionRejectsAtCoarseGeoHashForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionRejectsAtCoarseGeoHashForActionInContext;
-(void)setActionRejectsAtCoarseGeoHashInContext:(int)arg1 ;
-(void)setHasActionRejectsAtCoarseGeoHashInContext:(BOOL)arg1 ;
-(BOOL)hasActionRejectsAtCoarseGeoHashInContext;
-(void)setActionRejectsAtCoarseGeoHashForAction:(int)arg1 ;
-(void)setHasActionRejectsAtCoarseGeoHashForAction:(BOOL)arg1 ;
-(BOOL)hasActionRejectsAtCoarseGeoHashForAction;
-(void)setActionConfirmsAtSpecificGeoHashForActionInContext:(int)arg1 ;
-(void)setHasActionConfirmsAtSpecificGeoHashForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsAtSpecificGeoHashForActionInContext;
-(void)setActionConfirmsAtSpecificGeoHashInContext:(int)arg1 ;
-(void)setHasActionConfirmsAtSpecificGeoHashInContext:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsAtSpecificGeoHashInContext;
-(void)setActionConfirmsAtSpecificGeoHashForAction:(int)arg1 ;
-(void)setHasActionConfirmsAtSpecificGeoHashForAction:(BOOL)arg1 ;
-(BOOL)hasActionConfirmsAtSpecificGeoHashForAction;
-(void)setActionRejectsAtSpecificGeoHashForActionInContext:(int)arg1 ;
-(void)setHasActionRejectsAtSpecificGeoHashForActionInContext:(BOOL)arg1 ;
-(BOOL)hasActionRejectsAtSpecificGeoHashForActionInContext;
-(void)setActionRejectsAtSpecificGeoHashInContext:(int)arg1 ;
-(void)setHasActionRejectsAtSpecificGeoHashInContext:(BOOL)arg1 ;
-(BOOL)hasActionRejectsAtSpecificGeoHashInContext;
-(void)setActionRejectsAtSpecificGeoHashForAction:(int)arg1 ;
-(void)setHasActionRejectsAtSpecificGeoHashForAction:(BOOL)arg1 ;
-(BOOL)hasActionRejectsAtSpecificGeoHashForAction;
-(void)setActionsInTimeBucket0ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket0ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket0ForAction;
-(void)setActionsInTimeBucket1ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket1ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket1ForAction;
-(void)setActionsInTimeBucket2ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket2ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket2ForAction;
-(void)setActionsInTimeBucket3ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket3ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket3ForAction;
-(void)setActionsInTimeBucket4ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket4ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket4ForAction;
-(void)setActionsInTimeBucket5ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket5ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket5ForAction;
-(void)setActionsInTimeBucket6ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket6ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket6ForAction;
-(void)setActionsInTimeBucket7ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket7ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket7ForAction;
-(void)setActionsInTimeBucket8ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket8ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket8ForAction;
-(void)setActionsInTimeBucket9ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket9ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket9ForAction;
-(void)setActionsInTimeBucket10ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket10ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket10ForAction;
-(void)setActionsInTimeBucket11ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket11ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket11ForAction;
-(void)setActionsInTimeBucket12ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket12ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket12ForAction;
-(void)setActionsInTimeBucket13ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket13ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket13ForAction;
-(void)setActionsInTimeBucket14ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket14ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket14ForAction;
-(void)setActionsInTimeBucket15ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket15ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket15ForAction;
-(void)setActionsInTimeBucket16ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket16ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket16ForAction;
-(void)setActionsInTimeBucket17ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket17ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket17ForAction;
-(void)setActionsInTimeBucket18ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket18ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket18ForAction;
-(void)setActionsInTimeBucket19ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket19ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket19ForAction;
-(void)setActionsInTimeBucket20ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket20ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket20ForAction;
-(void)setActionsInTimeBucket21ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket21ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket21ForAction;
-(void)setActionsInTimeBucket22ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket22ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket22ForAction;
-(void)setActionsInTimeBucket23ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket23ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket23ForAction;
-(void)setActionsInTimeBucket24ForAction:(int)arg1 ;
-(void)setHasActionsInTimeBucket24ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsInTimeBucket24ForAction;
-(void)setActionsOnDayOfWeekSundayForAction:(int)arg1 ;
-(void)setHasActionsOnDayOfWeekSundayForAction:(BOOL)arg1 ;
-(BOOL)hasActionsOnDayOfWeekSundayForAction;
-(void)setActionsOnDayOfWeekMondayForAction:(int)arg1 ;
-(void)setHasActionsOnDayOfWeekMondayForAction:(BOOL)arg1 ;
-(BOOL)hasActionsOnDayOfWeekMondayForAction;
-(void)setActionsOnDayOfWeekTuesdayForAction:(int)arg1 ;
-(void)setHasActionsOnDayOfWeekTuesdayForAction:(BOOL)arg1 ;
-(BOOL)hasActionsOnDayOfWeekTuesdayForAction;
-(void)setActionsOnDayOfWeekWednesdayForAction:(int)arg1 ;
-(void)setHasActionsOnDayOfWeekWednesdayForAction:(BOOL)arg1 ;
-(BOOL)hasActionsOnDayOfWeekWednesdayForAction;
-(void)setActionsOnDayOfWeekThursdayForAction:(int)arg1 ;
-(void)setHasActionsOnDayOfWeekThursdayForAction:(BOOL)arg1 ;
-(BOOL)hasActionsOnDayOfWeekThursdayForAction;
-(void)setActionsOnDayOfWeekFridayForAction:(int)arg1 ;
-(void)setHasActionsOnDayOfWeekFridayForAction:(BOOL)arg1 ;
-(BOOL)hasActionsOnDayOfWeekFridayForAction;
-(void)setActionsOnDayOfWeekSaturdayForAction:(int)arg1 ;
-(void)setHasActionsOnDayOfWeekSaturdayForAction:(BOOL)arg1 ;
-(BOOL)hasActionsOnDayOfWeekSaturdayForAction;
-(void)setActionsAtCoarseGeoHash0ForAction:(int)arg1 ;
-(void)setHasActionsAtCoarseGeoHash0ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtCoarseGeoHash0ForAction;
-(void)setActionsAtCoarseGeoHash1ForAction:(int)arg1 ;
-(void)setHasActionsAtCoarseGeoHash1ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtCoarseGeoHash1ForAction;
-(void)setActionsAtCoarseGeoHash2ForAction:(int)arg1 ;
-(void)setHasActionsAtCoarseGeoHash2ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtCoarseGeoHash2ForAction;
-(void)setActionsAtCoarseGeoHash3ForAction:(int)arg1 ;
-(void)setHasActionsAtCoarseGeoHash3ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtCoarseGeoHash3ForAction;
-(void)setActionsAtCoarseGeoHash4ForAction:(int)arg1 ;
-(void)setHasActionsAtCoarseGeoHash4ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtCoarseGeoHash4ForAction;
-(void)setActionsAtCoarseGeoHash5ForAction:(int)arg1 ;
-(void)setHasActionsAtCoarseGeoHash5ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtCoarseGeoHash5ForAction;
-(void)setActionsAtCoarseGeoHash6ForAction:(int)arg1 ;
-(void)setHasActionsAtCoarseGeoHash6ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtCoarseGeoHash6ForAction;
-(void)setActionsAtCoarseGeoHash7ForAction:(int)arg1 ;
-(void)setHasActionsAtCoarseGeoHash7ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtCoarseGeoHash7ForAction;
-(void)setActionsAtCoarseGeoHash8ForAction:(int)arg1 ;
-(void)setHasActionsAtCoarseGeoHash8ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtCoarseGeoHash8ForAction;
-(void)setActionsAtCoarseGeoHash9ForAction:(int)arg1 ;
-(void)setHasActionsAtCoarseGeoHash9ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtCoarseGeoHash9ForAction;
-(void)setActionsAtSpecificGeoHash0ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash0ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash0ForAction;
-(void)setActionsAtSpecificGeoHash1ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash1ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash1ForAction;
-(void)setActionsAtSpecificGeoHash2ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash2ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash2ForAction;
-(void)setActionsAtSpecificGeoHash3ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash3ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash3ForAction;
-(void)setActionsAtSpecificGeoHash4ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash4ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash4ForAction;
-(void)setActionsAtSpecificGeoHash5ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash5ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash5ForAction;
-(void)setActionsAtSpecificGeoHash6ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash6ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash6ForAction;
-(void)setActionsAtSpecificGeoHash7ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash7ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash7ForAction;
-(void)setActionsAtSpecificGeoHash8ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash8ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash8ForAction;
-(void)setActionsAtSpecificGeoHash9ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash9ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash9ForAction;
-(void)setActionsAtSpecificGeoHash10ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash10ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash10ForAction;
-(void)setActionsAtSpecificGeoHash11ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash11ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash11ForAction;
-(void)setActionsAtSpecificGeoHash12ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash12ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash12ForAction;
-(void)setActionsAtSpecificGeoHash13ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash13ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash13ForAction;
-(void)setActionsAtSpecificGeoHash14ForAction:(int)arg1 ;
-(void)setHasActionsAtSpecificGeoHash14ForAction:(BOOL)arg1 ;
-(BOOL)hasActionsAtSpecificGeoHash14ForAction;
-(void)setActionEntropyForTimeOfDay:(int)arg1 ;
-(void)setHasActionEntropyForTimeOfDay:(BOOL)arg1 ;
-(BOOL)hasActionEntropyForTimeOfDay;
-(void)setActionEntropyForDayOfWeek:(int)arg1 ;
-(void)setHasActionEntropyForDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasActionEntropyForDayOfWeek;
-(void)setActionEntropyForCoarseGeoHash:(int)arg1 ;
-(void)setHasActionEntropyForCoarseGeoHash:(BOOL)arg1 ;
-(BOOL)hasActionEntropyForCoarseGeoHash;
-(void)setActionEntropyForSpecificGeoHash:(int)arg1 ;
-(void)setHasActionEntropyForSpecificGeoHash:(BOOL)arg1 ;
-(BOOL)hasActionEntropyForSpecificGeoHash;
-(void)setActionNumberOfSpecificGeohashesForAction:(int)arg1 ;
-(void)setHasActionNumberOfSpecificGeohashesForAction:(BOOL)arg1 ;
-(BOOL)hasActionNumberOfSpecificGeohashesForAction;
-(void)setActionNumberOfCoarseGeohashesForAction:(int)arg1 ;
-(void)setHasActionNumberOfCoarseGeohashesForAction:(BOOL)arg1 ;
-(BOOL)hasActionNumberOfCoarseGeohashesForAction;
-(void)setAppLaunchesAtZoom7GeoHashForAppInContext:(int)arg1 ;
-(void)setHasAppLaunchesAtZoom7GeoHashForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtZoom7GeoHashForAppInContext;
-(void)setAppLaunchesAtZoom7GeoHashInContext:(int)arg1 ;
-(void)setHasAppLaunchesAtZoom7GeoHashInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtZoom7GeoHashInContext;
-(void)setAppLaunchesAtZoom7GeoHashForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtZoom7GeoHashForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtZoom7GeoHashForApp;
-(void)setAppLaunchesAtZoom7GeoHash0ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtZoom7GeoHash0ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtZoom7GeoHash0ForApp;
-(void)setAppLaunchesAtZoom7GeoHash1ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtZoom7GeoHash1ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtZoom7GeoHash1ForApp;
-(void)setAppLaunchesAtZoom7GeoHash2ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtZoom7GeoHash2ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtZoom7GeoHash2ForApp;
-(void)setAppLaunchesAtZoom7GeoHash3ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtZoom7GeoHash3ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtZoom7GeoHash3ForApp;
-(void)setAppLaunchesAtZoom7GeoHash4ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtZoom7GeoHash4ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtZoom7GeoHash4ForApp;
-(void)setAppLaunchesAtZoom7GeoHash5ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtZoom7GeoHash5ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtZoom7GeoHash5ForApp;
-(void)setAppLaunchesAtZoom7GeoHash6ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtZoom7GeoHash6ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtZoom7GeoHash6ForApp;
-(void)setAppLaunchesAtZoom7GeoHash7ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtZoom7GeoHash7ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtZoom7GeoHash7ForApp;
-(void)setAppLaunchesAtZoom7GeoHash8ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtZoom7GeoHash8ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtZoom7GeoHash8ForApp;
-(void)setAppLaunchesAtZoom7GeoHash9ForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtZoom7GeoHash9ForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtZoom7GeoHash9ForApp;
-(void)setAppEntropyForZoom7GeoHash:(int)arg1 ;
-(void)setHasAppEntropyForZoom7GeoHash:(BOOL)arg1 ;
-(BOOL)hasAppEntropyForZoom7GeoHash;
-(void)setAppNumberOfZoom7GeohashesForApp:(int)arg1 ;
-(void)setHasAppNumberOfZoom7GeohashesForApp:(BOOL)arg1 ;
-(BOOL)hasAppNumberOfZoom7GeohashesForApp;
-(void)setAppGeoAssociationScoreAtZoom7:(int)arg1 ;
-(void)setHasAppGeoAssociationScoreAtZoom7:(BOOL)arg1 ;
-(BOOL)hasAppGeoAssociationScoreAtZoom7;
-(void)setAppGeoAssociationScoreAtZoom13:(int)arg1 ;
-(void)setHasAppGeoAssociationScoreAtZoom13:(BOOL)arg1 ;
-(BOOL)hasAppGeoAssociationScoreAtZoom13;
-(void)setAppGeoAssociationScoreAtZoom16:(int)arg1 ;
-(void)setHasAppGeoAssociationScoreAtZoom16:(BOOL)arg1 ;
-(BOOL)hasAppGeoAssociationScoreAtZoom16;
-(void)setAppPartOfWeekAssociationScore:(int)arg1 ;
-(void)setHasAppPartOfWeekAssociationScore:(BOOL)arg1 ;
-(BOOL)hasAppPartOfWeekAssociationScore;
-(void)setAppCoarseTimeAssociationScore:(int)arg1 ;
-(void)setHasAppCoarseTimeAssociationScore:(BOOL)arg1 ;
-(BOOL)hasAppCoarseTimeAssociationScore;
-(void)setAppLOITypeAssociationScore:(int)arg1 ;
-(void)setHasAppLOITypeAssociationScore:(BOOL)arg1 ;
-(BOOL)hasAppLOITypeAssociationScore;
-(void)setAppLaunchesAtSSIDForAppInContext:(int)arg1 ;
-(void)setHasAppLaunchesAtSSIDForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSSIDForAppInContext;
-(void)setAppLaunchesAtSSIDForApp:(int)arg1 ;
-(void)setHasAppLaunchesAtSSIDForApp:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesAtSSIDForApp;
-(void)setAppLaunchesForCoreMotionForAppInContext:(int)arg1 ;
-(void)setHasAppLaunchesForCoreMotionForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesForCoreMotionForAppInContext;
-(void)setAppLaunchesInAirplaneModeForAppInContext:(int)arg1 ;
-(void)setHasAppLaunchesInAirplaneModeForAppInContext:(BOOL)arg1 ;
-(BOOL)hasAppLaunchesInAirplaneModeForAppInContext;
-(int)installAge;
-(int)lastSpotlightLaunchAge;
-(int)lastLaunchAge;
-(int)medianSecondsBetweenLaunches;
-(int)averageSecondsBetweenLaunches;
-(int)unlockTime;
-(int)appInFolder;
-(int)springBoardPage;
-(int)onSpringBoardDock;
-(int)feedbackConfirms;
-(int)feedbackRejects;
-(int)aPRExplicitConfirmRatio;
-(int)aPRExplicitRejectRatio;
-(int)aPRImplicitConfirmRatio;
-(int)aPRImplicitRejectRatio;
-(int)aPRSiriKitIntentsRatio;
-(int)aPRNonSiriKitIntentsRatio;
-(int)aPRTotalExplicitConfirms;
-(int)aPRTotalExplicitRejects;
-(int)aPRTotalImplicitConfirms;
-(int)aPRTotalImplicitRejects;
-(int)aPRTotalSiriKitIntents;
-(int)aPRTotalNonSiriKitIntents;
-(int)launchTimePopularity;
-(int)timeOfDayPopularity;
-(int)coarseTimeOfDayPopularity;
-(int)launchPopularity;
-(int)spotlightLaunchTimePopularity;
-(int)spotlightTimeOfDayPopularity;
-(int)spotlightLaunchPopularity;
-(int)dayZeroPoints;
-(int)staticAppPoints;
-(int)launchDayOfWeekPopularity;
-(int)dayOfWeekPopularity;
-(int)launchSequencePopularity;
-(int)launchLocationPopularity;
-(int)entropyLaunchPopularity;
-(int)entropyDayOfWeekPopularity;
-(int)entropyDayOfWeekPopularityByDay;
-(int)entropyDayOfWeekPopularityByApp;
-(int)distanceDayOfWeekToLaunchPopularity;
-(int)entropyTrendingPopularity;
-(int)distanceTrendingToLaunchPopularity;
-(int)entropySSIDPopularity;
-(int)entropySSIDPopularityBySSID;
-(int)entropySSIDPopularityByApp;
-(int)distanceSSIDToLaunchPopularity;
-(int)distanceToExplicitLaunchPrediction;
-(int)siriKitIntentParzen;
-(int)nonSiriKitIntentParzen;
-(int)appDailyDose;
-(int)currentDose;
-(int)appDailyDoseRemaining;
-(int)appDailyDoseSmoothedError;
-(int)totalNumberOfLaunches;
-(int)totalNumberOfSpotlightLaunches;
-(int)airplaneModePopularity;
-(int)totalNumberOfAirplaneModeLaunches;
-(int)trendingPopularity;
-(int)totalNumberOfTrendingLaunches;
-(int)sSIDPopularity;
-(int)totalNumberOfSSIDLaunches;
-(int)coreMotionPopularity;
-(int)totalNumberOfCoreMotionLaunches;
-(int)magicalMomentsConfidence;
-(int)magicalMomentsPredictionReason;
-(int)heroAppConfidence;
-(int)heroAppPredictionReason;
-(int)magicalMomentsHeroAppPredictionIndex;
-(int)magicalMomentsHeroAppPredictionTotalPredictions;
-(int)mostRecentNotificationAge;
-(int)appPreferenceBundleBoost;
-(int)genreTimeOfDayPopularity;
-(int)genreSequencePopularity;
-(int)genreDayOfWeekPopularity;
-(int)genreSpotlightLaunchPopularity;
-(int)trendingGenrePopularity;
-(int)genreAirplaneModePopularity;
-(int)genreDailyDoseRemaining;
-(int)genreLocationPopularity;
-(int)genreSSIDPopularity;
-(int)app2VecClusterTimeOfDayPopularity;
-(int)app2VecClusterSequencePopularity;
-(int)app2VecClusterDayOfWeekPopularity;
-(int)app2VecClusterTrendingPopularity;
-(int)app2VecClusterLocationPopularity;
-(int)app2VecClusterCount;
-(int)supportsMedia;
-(int)appIntentLaunchPopularity;
-(int)appIntentLaunchTimePopularity;
-(int)appIntentTimeOfDayPopularity;
-(int)appIntentLastLaunchAge;
-(int)appIntentAverageSecondsBetweenAppActions;
-(int)appIntentMedianSecondsBetweenAppActions;
-(int)appIntentLaunchDayOfWeekPopularity;
-(int)appIntentDayOfWeekPopularity;
-(int)appIntentCoarseTimeOfDayPopularity;
-(int)appIntentTotalNumberOfLaunches;
-(int)appIntentUnlockTime;
-(int)appIntentAirplaneModePopularity;
-(int)appIntentTotalNumberOfAirplaneModeLaunches;
-(int)appIntentSSIDPopularity;
-(int)appIntentTotalNumberOfSSIDLaunches;
-(int)appIntentCoreMotionPopularity;
-(int)appIntentTotalNumberOfCoreMotionLaunches;
-(int)appIntentTrendingPopularity;
-(int)appIntentTotalNumberOfTrendingLaunches;
-(int)appIntentLaunchLocationPopularity;
-(int)appIntentDayZeroPoints;
-(int)appIntentStaticPoints;
-(int)appIntentLaunchSequencePopularity;
-(int)appIntentAppLaunchSequencePopularity;
-(int)appIntentEntropyLaunchPopularity;
-(int)appIntentEntropyDayOfWeekPopularity;
-(int)appIntentEntropyDayOfWeekPopularityByDay;
-(int)appIntentEntropyDayOfWeekPopularityByAppIntent;
-(int)appIntentDistanceDayOfWeekToLaunchPopularity;
-(int)appIntentEntropyTrendingPopularity;
-(int)appIntentDistanceTrendingToLaunchPopularity;
-(int)appIntentEntropySSIDPopularity;
-(int)appIntentEntropySSIDPopularityBySSID;
-(int)appIntentEntropySSIDPopularityByAppIntent;
-(int)appIntentDistanceSSIDToLaunchPopularity;
-(int)appIntentCount;
-(int)appActionConfirmEvents;
-(int)appActionRejectEvents;
-(int)totalAppActionConfirmEvents;
-(int)totalAppActionRejectEvents;
-(int)appForAllActionsConfirmEvents;
-(int)appForAllActionsRejectEvents;
-(int)totalAppForAllActionsConfirmEvents;
-(int)totalAppForAllActionsRejectEvents;
-(int)actionHeuristicConfirmEvents;
-(int)actionHeuristicRejectEvents;
-(int)totalActionHeuristicConfirmEvents;
-(int)totalActionHeuristicRejectEvents;
-(int)appForAllIntentsLaunchPopularity;
-(int)appForAllIntentsLaunchTimePopularity;
-(int)appForAllIntentsTimeOfDayPopularity;
-(int)appForAllIntentsLaunchDayOfWeekPopularity;
-(int)appForAllIntentsDayOfWeekPopularity;
-(int)appForAllIntentsCoarseTimeOfDayPopularity;
-(int)appForAllIntentsTotalNumberOfLaunches;
-(int)appForAllIntentsUnlockTime;
-(int)appForAllIntentsAirplaneModePopularity;
-(int)appForAllIntentsTotalNumberOfAirplaneModeLaunches;
-(int)appForAllIntentsSSIDPopularity;
-(int)appForAllIntentsTotalNumberOfSSIDLaunches;
-(int)appForAllIntentsTrendingPopularity;
-(int)appForAllIntentsTotalNumberOfTrendingLaunches;
-(int)appForAllIntentsLaunchLocationPopularity;
-(int)appForAllIntentsEntropyLaunchPopularity;
-(int)appForAllIntentsEntropyDayOfWeekPopularity;
-(int)appForAllIntentsEntropyDayOfWeekPopularityByDay;
-(int)appForAllIntentsEntropyDayOfWeekPopularityByApp;
-(int)appForAllIntentsDistanceDayOfWeekToLaunchPopularity;
-(int)appForAllIntentsEntropyTrendingPopularity;
-(int)appForAllIntentsDistanceTrendingToLaunchPopularity;
-(int)appForAllIntentsEntropySSIDPopularity;
-(int)appForAllIntentsEntropySSIDPopularityBySSID;
-(int)appForAllIntentsEntropySSIDPopularityByApp;
-(int)appForAllIntentsDistanceSSIDToLaunchPopularity;
-(int)appForAllIntentsCount;
-(int)slotLaunchPopularity;
-(int)slotLaunchTimePopularity;
-(int)slotLaunchCoreMotionPopularity;
-(int)slotLaunchPreviousLocationPopularity;
-(int)slotTimeOfDayPopularity;
-(int)slotLaunchDayOfWeekPopularity;
-(int)slotDayOfWeekPopularity;
-(int)slotLaunchCoarseTimePopularity;
-(int)slotCoarseTimeOfDayPopularity;
-(int)slotSecondsSinceLastSlot;
-(int)slotLaunchLocationPopularity;
-(int)slotLocationPopularity;
-(int)slotNumberOfParameters;
-(int)slotTotalNumberOfLaunchesForSlot;
-(int)slotTotalNumberOfLaunches;
-(int)slotCount;
-(int)slotNumSessionStartsForRootOfApp;
-(int)slotTotalNumSessionsForRootOfApp;
-(int)slotEntropyForSlotSet;
-(int)slotTotalNumberOfLaunchesForSlotSet;
-(int)slotNumberOfUniqueDaysLaunchedForSlot;
-(int)slotTotalNumberOfUniqueDaysLaunched;
-(int)slotTimeOfDayBudgetMeanForSlot;
-(int)slotTimeOfDayBudgetStdDevForSlot;
-(int)slotTodaysTimeOfDayBudgetForSlot;
-(int)slotTimeAndDayPopularity;
-(int)slotTimeAndLocationPopularity;
-(int)slotDayAndLocationPopularity;
-(int)slotTimeAndDayAndLocationPopularity;
-(int)slotCoreMotionPopularity;
-(int)slotPreviousLocationPopularity;
-(int)slotPreviousLocationAndCoreMotionPopularity;
-(int)slotPreviousLocationAndLocationPopularity;
-(int)slotTimeAndPreviousLocationPopularity;
-(int)slotDayAndPreviousLocationPopularity;
-(int)slotFeedbackTotalConfirmsForSlot;
-(int)slotFeedbackTotalRejectsForSlot;
-(int)slotFeedbackTotalConfirmsForAllSlots;
-(int)slotFeedbackTotalRejectsForAllSlots;
-(int)slotFeedbackConfirmRatio;
-(int)slotFeedbackConfirmRatioStdDev;
-(int)slotFeedbackConfirmRatioMean;
-(int)slotFeedbackConfirmRatioCount;
-(int)actionLaunchPopularity;
-(int)actionTimeOfDayPopularity;
-(int)actionCoarseTimeOfDayPopularity;
-(int)actionDayOfWeekPopularity;
-(int)actionLocationPopularity;
-(int)actionTimeAndDayPopularity;
-(int)actionTimeAndLocationPopularity;
-(int)actionDayAndLocationPopularity;
-(int)actionTimeAndDayAndLocationPopularity;
-(int)actionCoreMotionPopularity;
-(int)actionPreviousLocationPopularity;
-(int)actionPreviousLocationAndCoreMotionPopularity;
-(int)actionPreviousLocationAndLocationPopularity;
-(int)actionTimeAndPreviousLocationPopularity;
-(int)actionDayAndPreviousLocationPopularity;
-(int)actionTotalConfirms;
-(int)actionTotalRejects;
-(int)appActionScore;
-(int)appActionLogProbability;
-(int)slotScore;
-(int)slotLogProbability;
-(int)actionIsFutureMedia;
-(int)actionIsBackgroundExecutable;
-(int)appIntentSlotCountForAllAppActions;
-(int)slotNumDocFreqForRootOfApp;
-(int)appForAllIntentsCoreMotionPopularity;
-(int)appForAllIntentsTotalNumberOfCoreMotionLaunches;
-(int)slotLaunchTimeCount;
-(int)slotLaunchDayOfWeekCount;
-(int)slotLaunchCoarseTimeCount;
-(int)slotLaunchLocationCount;
-(int)slotLaunchCoreMotionCount;
-(int)slotLaunchPreviousLocationCount;
-(int)slotLaunchTimeAndDayPopularity;
-(int)slotLaunchTimeAndLocationPopularity;
-(int)slotLaunchDayAndLocationPopularity;
-(int)slotLaunchTimeAndDayAndLocationPopularity;
-(int)slotLaunchPreviousLocationAndCoreMotionPopularity;
-(int)slotLaunchPreviousLocationAndLocationPopularity;
-(int)slotLaunchTimeAndPreviousLocationPopularity;
-(int)slotLaunchDayAndPreviousLocationPopularity;
-(int)slotIsSiriKitIntent;
-(int)slotIsCustomIntent;
-(int)slotIsNSUserActivity;
-(int)slotTotalNumberOfUndecayedLaunchesForSlot;
-(int)slotOnlyLaunchedWithinShortTimeSpan;
-(int)slotLOIBoost;
-(int)appIntentValueScore;
-(int)appLaunchMicroLocationPopularity;
-(int)appIntentLaunchMicroLocationPopularity;
-(int)appCategory;
-(int)actionKeyCategory;
-(int)intentCategoryFromIntentDefinition;
-(int)timeOfDayBucket;
-(int)dayOfWeekBucket;
-(int)appIntentPartOfWeekPopularity;
-(int)appIntentLaunchPartOfWeekPopularity;
-(int)slotLaunchPartOfWeekCount;
-(int)slotLaunchPartOfWeekPopularity;
-(int)slotPartOfWeekPopularity;
-(int)actionPartOfWeekPopularity;
-(int)slotFeedbackMinutesSinceLastConfirmInSpotlight;
-(int)slotFeedbackMinutesSinceLastExplicitRejectInSpotlight;
-(int)slotFeedbackTotalConfirmsForSlotInLastHourInSpotlight;
-(int)slotFeedbackTotalRejectsForSlotInLastHourInSpotlight;
-(int)slotFeedbackTotalConfirmsForSlotInLastTwoHoursInSpotlight;
-(int)slotFeedbackTotalRejectsForSlotInLastTwoHoursInSpotlight;
-(int)slotFeedbackTotalConfirmsForSlotTodayInSpotlight;
-(int)slotFeedbackTotalRejectsForSlotTodayInSpotlight;
-(int)slotFeedbackTotalConfirmsForSlotInSpotlight;
-(int)slotFeedbackTotalRejectsForSlotInSpotlight;
-(int)slotFeedbackConfirmsPartOfWeekCountInSpotlight;
-(int)slotFeedbackConfirmsDayCountInSpotlight;
-(int)slotFeedbackConfirmsTimeOfDayCountInSpotlight;
-(int)slotFeedbackConfirmsCoarseTimeOfDayCountInSpotlight;
-(int)slotFeedbackTotalConfirmsForSlotTodayInLockscreen;
-(int)slotFeedbackTotalRejectsForSlotTodayInLockscreen;
-(int)slotFeedbackMinutesSinceLastConfirmInLockscreen;
-(int)slotFeedbackMinutesSinceLastRejectInLockscreen;
-(int)slotFeedbackMinutesSinceLastExplicitRejectInLockscreen;
-(int)slotFeedbackTotalConfirmsForSlotInLockscreen;
-(int)slotFeedbackTotalRejectsForSlotInLockscreen;
-(int)slotFeedbackConfirmsPartOfWeekCountInLockscreen;
-(int)slotFeedbackConfirmsDayCountInLockscreen;
-(int)slotFeedbackConfirmsTimeOfDayCountInLockscreen;
-(int)slotFeedbackConfirmsCoarseTimeOfDayCountInLockscreen;
-(int)slotFeedbackTotalConfirmsTodayInLockscreenForAllSlots;
-(int)slotFeedbackTotalRejectsTodayInLockscreenForAllSlots;
-(int)actionFeedbackTotalConfirmsInSpotlight;
-(int)actionFeedbackTotalRejectsInSpotlight;
-(int)actionFeedbackTotalConfirmsTodayInLockscreen;
-(int)actionFeedbackTotalRejectsTodayInLockscreen;
-(int)actionFeedbackTotalConfirmsInLockscreen;
-(int)actionFeedbackTotalRejectsInLockscreen;
-(int)slotFeedbackTotalConfirmsInSpotlightForAllSlots;
-(int)slotFeedbackTotalRejectsInSpotlightForAllSlots;
-(int)slotFeedbackTotalConfirmsInLockscreenForAllSlots;
-(int)slotFeedbackTotalRejectsInLockscreenForAllSlots;
-(int)slotPartOfWeekAndLocationPopularity;
-(int)slotLaunchPartOfWeekAndLocationPopularity;
-(int)actionPartOfWeekAndLocationPopularity;
-(int)slotLaunchPartOfWeekAndTimePopularity;
-(int)slotPartOfWeekAndTimePopularity;
-(int)actionPartOfWeekAndTimePopularity;
-(int)totalLaunchesForAllActionsUsingTimeDecay;
-(int)totalLaunchesForAllActionsUsingDayOfWeekDecay;
-(int)totalLaunchesForAllActionsUsingLocationDecay;
-(int)totalLaunchesForAllActionsUsingCoreMotionDecay;
-(int)totalLaunchesForAllActionsUsingPreviousLocationDecay;
-(int)totalLaunchesForAllActionsUsingPartOfWeekDecay;
-(int)totalLaunchesForAllActionsUsingPreviousLocationAndCoreMotionDecay;
-(int)totalLaunchesForAllActionsUsingPreviousLocationAndLocationDecay;
-(int)totalLaunchesForAllActionsUsingTimeAndPreviousLocationDecay;
-(int)totalLaunchesForAllActionsUsingDayAndPreviousLocationDecay;
-(int)totalLaunchesForAllActionsUsingTimeAndDayDecay;
-(int)totalLaunchesForAllActionsUsingTimeAndLocationDecay;
-(int)totalLaunchesForAllActionsUsingDayAndLocationDecay;
-(int)totalLaunchesForAllActionsUsingTimeAndDayAndLocationDecay;
-(int)totalLaunchesForAllActionsUsingPartOfWeekAndLocationDecay;
-(int)totalLaunchesForAllActionsUsingPartOfWeekAndTimeDecay;
-(int)totalLaunchesForSlotUsingTimeDecay;
-(int)totalLaunchesForSlotUsingDayOfWeekDecay;
-(int)totalLaunchesForSlotUsingLocationDecay;
-(int)totalLaunchesForSlotUsingCoreMotionDecay;
-(int)totalLaunchesForSlotUsingPreviousLocationDecay;
-(int)totalLaunchesForSlotUsingPartOfWeekDecay;
-(int)totalLaunchesForSlotUsingTimeAndDayDecay;
-(int)totalLaunchesForSlotUsingTimeAndLocationDecay;
-(int)totalLaunchesForSlotUsingDayAndLocationDecay;
-(int)totalLaunchesForSlotUsingTimeAndDayAndLocationDecay;
-(int)totalLaunchesForSlotUsingPreviousLocationAndLocationDecay;
-(int)totalLaunchesForSlotUsingPreviousLocationAndCoreMotionDecay;
-(int)totalLaunchesForSlotUsingTimeAndPreviousLocationDecay;
-(int)totalLaunchesForSlotUsingDayAndPreviousLocationDecay;
-(int)totalLaunchesForSlotUsingPartOfWeekAndLocationDecay;
-(int)totalLaunchesForSlotUsingPartOfWeekAndTimeDecay;
-(int)isDateInWeekendOnDevice;
-(int)actionCoreMotionType;
-(int)actionLOIType;
-(int)actionFeedbackMeanNumberOfSpotlightLaunchesPerDay;
-(int)actionFeedbackMeanNumberOfSpotlightConfirmsPerDay;
-(int)slotLaunchTimeWithThirtyMinuteWindowCount;
-(int)slotLaunchTimeWithHourWindowCount;
-(int)slotLaunchTimeWithEightHourWindowCount;
-(int)slotTimeOfDayWithThirtyMinuteWindowPopularity;
-(int)slotTimeOfDayWithHourWindowPopularity;
-(int)slotTimeOfDayWithEightHourWindowPopularity;
-(int)actionTimeOfDayWithThirtyMinuteWindowPopularity;
-(int)actionTimeOfDayWithHourWindowPopularity;
-(int)actionTimeOfDayWithEightHourWindowPopularity;
-(int)randomSessionValue;
-(int)randomScore;
-(int)ambientLightTypePopularity;
-(int)ambientLightTypeLaunchPopularity;
-(int)appIntentAmbientLightTypePopularity;
-(int)appIntentAmbientLightTypeLaunchPopularity;
-(int)appLOITypeLaunches;
-(int)appLastAppLaunches;
-(int)appTimeOfDayLaunches;
-(int)appDayOfWeekLaunches;
-(int)appBlendedLOITypePopularity;
-(int)appBlendedLastAppPopularity;
-(int)appBlendedTimeOfDayPopularity;
-(int)appBlendedDayOfWeekPopularity;
-(int)appBlendedLOITypeSampledPopularity;
-(int)appBlendedLastAppSampledPopularity;
-(int)appBlendedTimeOfDaySampledPopularity;
-(int)appBlendedDayOfWeekSampledPopularity;
-(int)appGlobalScoreGivenTimeDayLocationAndLastApp;
-(int)appGlobalScoreGivenTimeDayAndLocation;
-(int)appTimeAndDayOfWeekPopularity;
-(int)appPopularityGivenTimeAndDayOfWeek;
-(int)appPopularityOfTimeAndDayOfWeekGivenApp;
-(int)appTotalNumberOfTimeAndDayOfWeekLaunches;
-(int)appLaunchesCoarseTimePowLocationForAppInContext;
-(int)appLaunchesCoarseTimePowLocationInContext;
-(int)appLaunchesCoarseTimePowLocationForApp;
-(int)appLaunchesCoarseTimePowLocationForAllAppsAndContexts;
-(int)appConfirmsCoarseTimePowLocationForAppInContext;
-(int)appConfirmsCoarseTimePowLocationInContext;
-(int)appConfirmsCoarseTimePowLocationForApp;
-(int)appConfirmsCoarseTimePowLocationForAllAppsAndContexts;
-(int)appRejectsCoarseTimePowLocationForAppInContext;
-(int)appRejectsCoarseTimePowLocationInContext;
-(int)appRejectsCoarseTimePowLocationForApp;
-(int)appRejectsCoarseTimePowLocationForAllAppsAndContexts;
-(int)appLaunchesSpecificTimeDowLocationForAppInContext;
-(int)appLaunchesSpecificTimeDowLocationInContext;
-(int)appLaunchesSpecificTimeDowLocationForApp;
-(int)appLaunchesSpecificTimeDowLocationForAllAppsAndContexts;
-(int)appConfirmsSpecificTimeDowLocationForAppInContext;
-(int)appConfirmsSpecificTimeDowLocationInContext;
-(int)appConfirmsSpecificTimeDowLocationForApp;
-(int)appConfirmsSpecificTimeDowLocationForAllAppsAndContexts;
-(int)appRejectsSpecificTimeDowLocationForAppInContext;
-(int)appRejectsSpecificTimeDowLocationInContext;
-(int)appRejectsSpecificTimeDowLocationForApp;
-(int)appRejectsSpecificTimeDowLocationForAllAppsAndContexts;
-(int)actionsCoarseTimePowLocationForActionInContext;
-(int)actionsCoarseTimePowLocationInContext;
-(int)actionsCoarseTimePowLocationForAction;
-(int)actionsCoarseTimePowLocationForAllActionsAndContexts;
-(int)actionConfirmsCoarseTimePowLocationForActionInContext;
-(int)actionConfirmsCoarseTimePowLocationInContext;
-(int)actionConfirmsCoarseTimePowLocationForAction;
-(int)actionConfirmsCoarseTimePowLocationForAllActionsAndContexts;
-(int)actionRejectsCoarseTimePowLocationForActionInContext;
-(int)actionRejectsCoarseTimePowLocationInContext;
-(int)actionRejectsCoarseTimePowLocationForAction;
-(int)actionRejectsCoarseTimePowLocationForAllActionsAndContexts;
-(int)actionsSpecificTimeDowLocationForActionInContext;
-(int)actionsSpecificTimeDowLocationInContext;
-(int)actionsSpecificTimeDowLocationForAction;
-(int)actionsSpecificTimeDowLocationForAllActionsAndContexts;
-(int)actionConfirmsSpecificTimeDowLocationForActionInContext;
-(int)actionConfirmsSpecificTimeDowLocationInContext;
-(int)actionConfirmsSpecificTimeDowLocationForAction;
-(int)actionConfirmsSpecificTimeDowLocationForAllActionsAndContexts;
-(int)actionRejectsSpecificTimeDowLocationForActionInContext;
-(int)actionRejectsSpecificTimeDowLocationInContext;
-(int)actionRejectsSpecificTimeDowLocationForAction;
-(int)actionRejectsSpecificTimeDowLocationForAllActionsAndContexts;
-(int)appLaunchesInTimeBucket0ForApp;
-(int)appLaunchesInTimeBucket1ForApp;
-(int)appLaunchesInTimeBucket2ForApp;
-(int)appLaunchesInTimeBucket3ForApp;
-(int)appLaunchesInTimeBucket4ForApp;
-(int)appLaunchesInTimeBucket5ForApp;
-(int)appLaunchesInTimeBucket6ForApp;
-(int)appLaunchesInTimeBucket7ForApp;
-(int)appLaunchesInTimeBucket8ForApp;
-(int)appLaunchesInTimeBucket9ForApp;
-(int)appLaunchesInTimeBucket10ForApp;
-(int)appLaunchesInTimeBucket11ForApp;
-(int)appLaunchesInTimeBucket12ForApp;
-(int)appLaunchesInTimeBucket13ForApp;
-(int)appLaunchesInTimeBucket14ForApp;
-(int)appLaunchesInTimeBucket15ForApp;
-(int)appLaunchesInTimeBucket16ForApp;
-(int)appLaunchesInTimeBucket17ForApp;
-(int)appLaunchesInTimeBucket18ForApp;
-(int)appLaunchesInTimeBucket19ForApp;
-(int)appLaunchesInTimeBucket20ForApp;
-(int)appLaunchesInTimeBucket21ForApp;
-(int)appLaunchesInTimeBucket22ForApp;
-(int)appLaunchesInTimeBucket23ForApp;
-(int)appLaunchesInTimeBucket24ForApp;
-(int)appLaunchesOnDayOfWeekSundayForApp;
-(int)appLaunchesOnDayOfWeekMondayForApp;
-(int)appLaunchesOnDayOfWeekTuesdayForApp;
-(int)appLaunchesOnDayOfWeekWednesdayForApp;
-(int)appLaunchesOnDayOfWeekThursdayForApp;
-(int)appLaunchesOnDayOfWeekFridayForApp;
-(int)appLaunchesOnDayOfWeekSaturdayForApp;
-(int)appLaunchesAtCoarseGeoHash0ForApp;
-(int)appLaunchesAtCoarseGeoHash1ForApp;
-(int)appLaunchesAtCoarseGeoHash2ForApp;
-(int)appLaunchesAtCoarseGeoHash3ForApp;
-(int)appLaunchesAtCoarseGeoHash4ForApp;
-(int)appLaunchesAtCoarseGeoHash5ForApp;
-(int)appLaunchesAtCoarseGeoHash6ForApp;
-(int)appLaunchesAtCoarseGeoHash7ForApp;
-(int)appLaunchesAtCoarseGeoHash8ForApp;
-(int)appLaunchesAtCoarseGeoHash9ForApp;
-(int)appLaunchesAtSpecificGeoHash0ForApp;
-(int)appLaunchesAtSpecificGeoHash1ForApp;
-(int)appLaunchesAtSpecificGeoHash2ForApp;
-(int)appLaunchesAtSpecificGeoHash3ForApp;
-(int)appLaunchesAtSpecificGeoHash4ForApp;
-(int)appLaunchesAtSpecificGeoHash5ForApp;
-(int)appLaunchesAtSpecificGeoHash6ForApp;
-(int)appLaunchesAtSpecificGeoHash7ForApp;
-(int)appLaunchesAtSpecificGeoHash8ForApp;
-(int)appLaunchesAtSpecificGeoHash9ForApp;
-(int)appLaunchesAtSpecificGeoHash10ForApp;
-(int)appLaunchesAtSpecificGeoHash11ForApp;
-(int)appLaunchesAtSpecificGeoHash12ForApp;
-(int)appLaunchesAtSpecificGeoHash13ForApp;
-(int)appLaunchesAtSpecificGeoHash14ForApp;
-(int)appNumberOfSpecificGeohashesForApp;
-(int)appNumberOfCoarseGeohashesForApp;
-(int)appEntropyForTimeBuckets;
-(int)appEntropyForSpecificGeoHash;
-(int)appEntropyForCoarseGeoHash;
-(int)appLaunchesAtCoarseGeoHashForAppInContext;
-(int)appLaunchesAtSpecificGeoHashForAppInContext;
-(int)appLaunchesAtDayOfWeekInContext;
-(int)appLaunchesAtDayOfWeekForApp;
-(int)appLaunchesAtTimeAndDayForAppInContext;
-(int)appLaunchesAtTimeAndDayInContext;
-(int)appLaunchesAtTimeAndDayForApp;
-(int)appLaunchesAtCoarseGeoHashInContext;
-(int)appLaunchesAtCoarseGeoHashForApp;
-(int)appLaunchesAtSpecificGeoHashInContext;
-(int)appLaunchesAtSpecificGeoHashForApp;
-(int)appLaunchesForAllAppsAndContextsDecayedAtCoarseContextRate;
-(int)appLaunchesForAllAppsAndContextsDecayedAtSpecificContextRate;
-(int)isLocationServicesDisabled;
-(int)appLaunchesInTwoHourTimeBucketForAppInContext;
-(int)appLaunchesInTwoHourTimeBucketInContext;
-(int)appLaunchesInTwoHourTimeBucketForApp;
-(int)appConfirmsInTwoHourTimeBucketForAppInContext;
-(int)appConfirmsInTwoHourTimeBucketInContext;
-(int)appConfirmsInTwoHourTimeBucketForApp;
-(int)appRejectsInTwoHourTimeBucketForAppInContext;
-(int)appRejectsInTwoHourTimeBucketInContext;
-(int)appRejectsInTwoHourTimeBucketForApp;
-(int)appConfirmsAtDayOfWeekForAppInContext;
-(int)appConfirmsAtDayOfWeekInContext;
-(int)appConfirmsAtDayOfWeekForApp;
-(int)appRejectsAtDayOfWeekForAppInContext;
-(int)appRejectsAtDayOfWeekInContext;
-(int)appRejectsAtDayOfWeekForApp;
-(int)appConfirmsAtCoarseGeoHashForAppInContext;
-(int)appConfirmsAtCoarseGeoHashInContext;
-(int)appConfirmsAtCoarseGeoHashForApp;
-(int)appRejectsAtCoarseGeoHashForAppInContext;
-(int)appRejectsAtCoarseGeoHashInContext;
-(int)appRejectsAtCoarseGeoHashForApp;
-(int)appConfirmsAtSpecificGeoHashForAppInContext;
-(int)appConfirmsAtSpecificGeoHashInContext;
-(int)appConfirmsAtSpecificGeoHashForApp;
-(int)appRejectsAtSpecificGeoHashForAppInContext;
-(int)appRejectsAtSpecificGeoHashInContext;
-(int)appRejectsAtSpecificGeoHashForApp;
-(int)appConfirmsForAllAppsAndContextsDecayedAtCoarseContextRate;
-(int)appConfirmsForAllAppsAndContextsDecayedAtSpecificContextRate;
-(int)appRejectsForAllAppsAndContextsDecayedAtCoarseContextRate;
-(int)appRejectsForAllAppsAndContextsDecayedAtSpecificContextRate;
-(int)currentTimeBucketFromZeroToTwentyFour;
-(int)actionsAtDayOfWeekForActionInContext;
-(int)actionsAtDayOfWeekInContext;
-(int)actionsAtDayOfWeekForAction;
-(int)actionsAtCoarseGeoHashForActionInContext;
-(int)actionsAtCoarseGeoHashInContext;
-(int)actionsAtCoarseGeoHashForAction;
-(int)actionsAtSpecificGeoHashForActionInContext;
-(int)actionsAtSpecificGeoHashInContext;
-(int)actionsAtSpecificGeoHashForAction;
-(int)actionsAtTimeOfDayForActionInContext;
-(int)actionsAtTimeOfDayInContext;
-(int)actionsAtTimeOfDayForAction;
-(int)actionConfirmsAtTimeOfDayForActionInContext;
-(int)actionConfirmsAtTimeOfDayInContext;
-(int)actionConfirmsAtTimeOfDayForAction;
-(int)actionRejectsAtTimeOfDayForActionInContext;
-(int)actionRejectsAtTimeOfDayInContext;
-(int)actionRejectsAtTimeOfDayForAction;
-(int)actionConfirmsAtDayOfWeekForActionInContext;
-(int)actionConfirmsAtDayOfWeekInContext;
-(int)actionConfirmsAtDayOfWeekForAction;
-(int)actionRejectsAtDayOfWeekForActionInContext;
-(int)actionRejectsAtDayOfWeekInContext;
-(int)actionRejectsAtDayOfWeekForAction;
-(int)actionConfirmsAtCoarseGeoHashForActionInContext;
-(int)actionConfirmsAtCoarseGeoHashInContext;
-(int)actionConfirmsAtCoarseGeoHashForAction;
-(int)actionRejectsAtCoarseGeoHashForActionInContext;
-(int)actionRejectsAtCoarseGeoHashInContext;
-(int)actionRejectsAtCoarseGeoHashForAction;
-(int)actionConfirmsAtSpecificGeoHashForActionInContext;
-(int)actionConfirmsAtSpecificGeoHashInContext;
-(int)actionConfirmsAtSpecificGeoHashForAction;
-(int)actionRejectsAtSpecificGeoHashForActionInContext;
-(int)actionRejectsAtSpecificGeoHashInContext;
-(int)actionRejectsAtSpecificGeoHashForAction;
-(int)actionsInTimeBucket0ForAction;
-(int)actionsInTimeBucket1ForAction;
-(int)actionsInTimeBucket2ForAction;
-(int)actionsInTimeBucket3ForAction;
-(int)actionsInTimeBucket4ForAction;
-(int)actionsInTimeBucket5ForAction;
-(int)actionsInTimeBucket6ForAction;
-(int)actionsInTimeBucket7ForAction;
-(int)actionsInTimeBucket8ForAction;
-(int)actionsInTimeBucket9ForAction;
-(int)actionsInTimeBucket10ForAction;
-(int)actionsInTimeBucket11ForAction;
-(int)actionsInTimeBucket12ForAction;
-(int)actionsInTimeBucket13ForAction;
-(int)actionsInTimeBucket14ForAction;
-(int)actionsInTimeBucket15ForAction;
-(int)actionsInTimeBucket16ForAction;
-(int)actionsInTimeBucket17ForAction;
-(int)actionsInTimeBucket18ForAction;
-(int)actionsInTimeBucket19ForAction;
-(int)actionsInTimeBucket20ForAction;
-(int)actionsInTimeBucket21ForAction;
-(int)actionsInTimeBucket22ForAction;
-(int)actionsInTimeBucket23ForAction;
-(int)actionsInTimeBucket24ForAction;
-(int)actionsOnDayOfWeekSundayForAction;
-(int)actionsOnDayOfWeekMondayForAction;
-(int)actionsOnDayOfWeekTuesdayForAction;
-(int)actionsOnDayOfWeekWednesdayForAction;
-(int)actionsOnDayOfWeekThursdayForAction;
-(int)actionsOnDayOfWeekFridayForAction;
-(int)actionsOnDayOfWeekSaturdayForAction;
-(int)actionsAtCoarseGeoHash0ForAction;
-(int)actionsAtCoarseGeoHash1ForAction;
-(int)actionsAtCoarseGeoHash2ForAction;
-(int)actionsAtCoarseGeoHash3ForAction;
-(int)actionsAtCoarseGeoHash4ForAction;
-(int)actionsAtCoarseGeoHash5ForAction;
-(int)actionsAtCoarseGeoHash6ForAction;
-(int)actionsAtCoarseGeoHash7ForAction;
-(int)actionsAtCoarseGeoHash8ForAction;
-(int)actionsAtCoarseGeoHash9ForAction;
-(int)actionsAtSpecificGeoHash0ForAction;
-(int)actionsAtSpecificGeoHash1ForAction;
-(int)actionsAtSpecificGeoHash2ForAction;
-(int)actionsAtSpecificGeoHash3ForAction;
-(int)actionsAtSpecificGeoHash4ForAction;
-(int)actionsAtSpecificGeoHash5ForAction;
-(int)actionsAtSpecificGeoHash6ForAction;
-(int)actionsAtSpecificGeoHash7ForAction;
-(int)actionsAtSpecificGeoHash8ForAction;
-(int)actionsAtSpecificGeoHash9ForAction;
-(int)actionsAtSpecificGeoHash10ForAction;
-(int)actionsAtSpecificGeoHash11ForAction;
-(int)actionsAtSpecificGeoHash12ForAction;
-(int)actionsAtSpecificGeoHash13ForAction;
-(int)actionsAtSpecificGeoHash14ForAction;
-(int)actionEntropyForTimeOfDay;
-(int)actionEntropyForDayOfWeek;
-(int)actionEntropyForCoarseGeoHash;
-(int)actionEntropyForSpecificGeoHash;
-(int)actionNumberOfSpecificGeohashesForAction;
-(int)actionNumberOfCoarseGeohashesForAction;
-(int)appLaunchesAtZoom7GeoHashForAppInContext;
-(int)appLaunchesAtZoom7GeoHashInContext;
-(int)appLaunchesAtZoom7GeoHashForApp;
-(int)appLaunchesAtZoom7GeoHash0ForApp;
-(int)appLaunchesAtZoom7GeoHash1ForApp;
-(int)appLaunchesAtZoom7GeoHash2ForApp;
-(int)appLaunchesAtZoom7GeoHash3ForApp;
-(int)appLaunchesAtZoom7GeoHash4ForApp;
-(int)appLaunchesAtZoom7GeoHash5ForApp;
-(int)appLaunchesAtZoom7GeoHash6ForApp;
-(int)appLaunchesAtZoom7GeoHash7ForApp;
-(int)appLaunchesAtZoom7GeoHash8ForApp;
-(int)appLaunchesAtZoom7GeoHash9ForApp;
-(int)appEntropyForZoom7GeoHash;
-(int)appNumberOfZoom7GeohashesForApp;
-(int)appGeoAssociationScoreAtZoom7;
-(int)appGeoAssociationScoreAtZoom13;
-(int)appGeoAssociationScoreAtZoom16;
-(int)appPartOfWeekAssociationScore;
-(int)appCoarseTimeAssociationScore;
-(int)appLOITypeAssociationScore;
-(int)appLaunchesAtSSIDForAppInContext;
-(int)appLaunchesAtSSIDForApp;
-(int)appLaunchesForCoreMotionForAppInContext;
-(int)appLaunchesInAirplaneModeForAppInContext;
@end

