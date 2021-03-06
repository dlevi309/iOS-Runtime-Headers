/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEONavdDefaults : NSObject

@property (nonatomic,readonly) BOOL shouldRunNavigationInDaemon; 
@property (nonatomic,readonly) BOOL shouldShowServiceErrorAlert; 
@property (nonatomic,readonly) BOOL shouldLazyLoadRoutes; 
@property (nonatomic,readonly) BOOL shouldUseGuidanceEventManager; 
@property (nonatomic,readonly) BOOL shouldRequestLaneGuidance; 
@property (nonatomic,readonly) BOOL shouldRequestInlineShields; 
@property (nonatomic,readonly) int startValidDistanceOffset; 
@property (nonatomic,readonly) int endValidDistanceOffset; 
@property (nonatomic,readonly) BOOL shouldAutomaticallyRerouteTrafficIncidents; 
@property (nonatomic,readonly) double automaticTrafficIncidentRerouteDelay; 
@property (nonatomic,readonly) double maxDistanceFromOriginToSuppressReroute; 
@property (nonatomic,readonly) BOOL shouldMatchToLAR; 
@property (nonatomic,readonly) BOOL shouldSnapToParkingLotSegments; 
@property (nonatomic,readonly) double minimumDistanceToGetLocationUpdatesInMeters; 
@property (nonatomic,readonly) double minimumDistanceToConsiderLeechedLocationInMeters; 
@property (nonatomic,readonly) double minimumTimeIntervalToConsiderLeechedLocationInSeconds; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyWhileStationaryForDriving; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyWhileStationaryForWalking; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyWhileStationaryForTransit; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyForWalking; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyForDriving; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyForTransit; 
@property (nonatomic,readonly) double locationUpdateTimerInterval; 
@property (nonatomic,readonly) double staleLocationUseTimerInterval; 
@property (nonatomic,readonly) double extraLocationWaitTimeInterval; 
@property (nonatomic,readonly) double locationFreshnessThreshold; 
@property (nonatomic,readonly) double locationReuseThreshold; 
@property (nonatomic,readonly) double minimumDistanceToCompareAgainstLocationAccuracy; 
@property (nonatomic,readonly) unsigned long long initialSelfInitiatedHypothesisCacheAccessValue; 
@property (nonatomic,readonly) unsigned long long initialClientInitiatedHypothesisCacheAccessValue; 
@property (nonatomic,readonly) double hypothesisResponseStaleToRefreshThresholdInSeconds; 
@property (nonatomic,readonly) double hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds; 
@property (nonatomic,readonly) double hypothesisShouldPersistThresholdInSeconds; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfEntriesInTheCacheUnderMemoryPressure; 
@property (nonatomic,readonly) long long maximumNumberOfDestinationsToMonitor; 
@property (nonatomic,readonly) double pendingStopTimeToLive; 
@property (nonatomic,readonly) double minimumTimeBetweenConsecutiveLocationUpdatesInSeconds; 
@property (nonatomic,readonly) double maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds; 
@property (nonatomic,readonly) unsigned long long accessValueThresholdToUpdateCacheEntries; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfProcessingLoopRepeats; 
@property (nonatomic,readonly) double refreshTimeIntervalToUseIfError; 
@property (nonatomic,readonly) unsigned long long refreshEquationLowestFrequency; 
@property (nonatomic,readonly) unsigned long long refreshEquationLowestFrequencyTransit; 
@property (nonatomic,readonly) unsigned long long refreshEquationHighestFrequency; 
@property (nonatomic,readonly) double maximumRefreshIntervalLeeway; 
@property (nonatomic,readonly) double minimumTimerTimeStampFudge; 
@property (nonatomic,readonly) double refreshTimeIntervalBackoffBase; 
@property (nonatomic,readonly) double refreshTimeIntervalBackoffMax; 
@property (nonatomic,readonly) double predictionsWatchdogInterval; 
@property (nonatomic,readonly) double defaultExpirationOffset; 
@property (nonatomic,readonly) double minimumExpirationOffset; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfLeechedLocations; 
@property (nonatomic,readonly) double updateTimeout; 
@property (nonatomic,readonly) BOOL useConservativeDepartureForRefreshTimer; 
@property (nonatomic,readonly) double maximumUserRoutingPreferencesAge; 
@property (nonatomic,readonly) unsigned long long maximumTraceFileCount; 
@property (nonatomic,readonly) double exitRegionSize; 
@property (nonatomic,readonly) BOOL shouldUseServerSideETAs; 
@property (nonatomic,readonly) BOOL transitTTLSupported; 
@property (nonatomic,readonly) double averageWalkingSpeed; 
@property (nonatomic,readonly) double slowWalkingSpeed; 
@property (nonatomic,readonly) double fastWalkingSpeed; 
@property (nonatomic,readonly) unsigned long long minRandomJitterForHypothesisWakeup; 
@property (nonatomic,readonly) unsigned long long maxRandomJitterForHypothesisWakeup; 
@property (nonatomic,readonly) BOOL transitTextInPlanningArtwork; 
@property (nonatomic,readonly) BOOL transitListInstructionTimeText; 
+(id)sharedInstance;
-(BOOL)shouldUseGuidanceEventManager;
-(double)exitRegionSize;
-(long long)maximumNumberOfDestinationsToMonitor;
-(double)minimumTimeIntervalToConsiderLeechedLocationInSeconds;
-(double)slowWalkingSpeed;
-(BOOL)shouldLazyLoadRoutes;
-(double)averageWalkingSpeed;
-(unsigned long long)maximumNumberOfLeechedLocations;
-(double)locationUpdatesDesiredAccuracyWhileStationaryForWalking;
-(double)minimumExpirationOffset;
-(double)locationUpdatesDesiredAccuracyWhileStationaryForDriving;
-(unsigned long long)maximumNumberOfProcessingLoopRepeats;
-(int)endValidDistanceOffset;
-(BOOL)shouldShowServiceErrorAlert;
-(double)updateTimeout;
-(unsigned long long)initialClientInitiatedHypothesisCacheAccessValue;
-(double)refreshTimeIntervalToUseIfError;
-(double)hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds;
-(unsigned long long)refreshEquationLowestFrequencyTransit;
-(unsigned long long)refreshEquationHighestFrequency;
-(double)maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds;
-(BOOL)shouldRequestInlineShields;
-(double)minimumDistanceToCompareAgainstLocationAccuracy;
-(double)maxDistanceFromOriginToSuppressReroute;
-(double)locationReuseThreshold;
-(BOOL)shouldMatchToLAR;
-(double)minimumDistanceToConsiderLeechedLocationInMeters;
-(double)locationUpdateTimerInterval;
-(double)hypothesisShouldPersistThresholdInSeconds;
-(BOOL)transitListInstructionTimeText;
-(double)locationUpdatesDesiredAccuracyForDriving;
-(BOOL)transitTextInPlanningArtwork;
-(BOOL)shouldRunNavigationInDaemon;
-(double)staleLocationUseTimerInterval;
-(double)refreshTimeIntervalBackoffBase;
-(unsigned long long)maximumTraceFileCount;
-(double)fastWalkingSpeed;
-(unsigned long long)accessValueThresholdToUpdateCacheEntries;
-(double)extraLocationWaitTimeInterval;
-(double)automaticTrafficIncidentRerouteDelay;
-(BOOL)useConservativeDepartureForRefreshTimer;
-(double)predictionsWatchdogInterval;
-(BOOL)shouldRequestLaneGuidance;
-(BOOL)shouldAutomaticallyRerouteTrafficIncidents;
-(unsigned long long)minRandomJitterForHypothesisWakeup;
-(unsigned long long)refreshEquationLowestFrequency;
-(double)refreshTimeIntervalBackoffMax;
-(BOOL)transitTTLSupported;
-(double)locationUpdatesDesiredAccuracyForTransit;
-(BOOL)shouldSnapToParkingLotSegments;
-(double)pendingStopTimeToLive;
-(double)maximumUserRoutingPreferencesAge;
-(double)maximumRefreshIntervalLeeway;
-(unsigned long long)initialSelfInitiatedHypothesisCacheAccessValue;
-(double)locationUpdatesDesiredAccuracyWhileStationaryForTransit;
-(double)minimumTimerTimeStampFudge;
-(double)locationFreshnessThreshold;
-(double)hypothesisResponseStaleToRefreshThresholdInSeconds;
-(unsigned long long)maxRandomJitterForHypothesisWakeup;
-(BOOL)shouldUseServerSideETAs;
-(double)defaultExpirationOffset;
-(int)startValidDistanceOffset;
-(double)minimumTimeBetweenConsecutiveLocationUpdatesInSeconds;
-(unsigned long long)maximumNumberOfEntriesInTheCacheUnderMemoryPressure;
-(double)locationUpdatesDesiredAccuracyForWalking;
-(double)minimumDistanceToGetLocationUpdatesInMeters;
@end

