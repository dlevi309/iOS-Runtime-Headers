/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class PMMPredictionNotification, ATXActionResolution, INUIAppIntentDeliverer, NSObject, _PASLock, PETScalarEventTracker, NSDictionary;

@interface ATXMagicalMomentsNowPlayingUpdateMonitor : NSObject {

	PMMPredictionNotification* _mmUpdateListener;
	ATXActionResolution* _actionResolver;
	INUIAppIntentDeliverer* _currentAppIntentDeliverer;
	NSObject*<OS_dispatch_queue> _queue;
	_PASLock* nowPlayingLock;
	PETScalarEventTracker* _mmEngaged;
	PETScalarEventTracker* _mmError;
	PETScalarEventTracker* _mmTriggered;
	NSDictionary* plistParameters;

}
+(BOOL)eventOrderingIsSaneForNowPlayingEvent:(id)arg1 donationEvent:(id)arg2 ;
+(BOOL)receivedDonationForMostRecentlyPlayingBundleIdGivenNowPlayingEvent:(id)arg1 donationEvent:(id)arg2 ;
+(BOOL)isRecentNowPlayingEvent:(id)arg1 maxAgeInHours:(double)arg2 ;
+(BOOL)isRecentDonationEvent:(id)arg1 maxAgeInHours:(double)arg2 ;
+(double)secondsSinceDate:(id)arg1 ;
+(BOOL)bundleIdsMatchForDonationEvent:(id)arg1 nowPlayingEvent:(id)arg2 ;
-(id)init;
-(id)initWithActionResolver:(id)arg1 ;
-(void)setupPredictionUpdateListener;
-(void)setupNowPlayingPlayerChangedUpdateListener;
-(BOOL)createMagicalMomentsNowPlayingExperienceWithMMAppPrediction:(id)arg1 consumer:(unsigned long long)arg2 ;
-(BOOL)predictionIsBlacklisted:(id)arg1 ;
-(double)maxAgeInHoursToLookForNowPlayingHistory;
-(double)maxAgeInHoursToBeConsideredAVeryRecentNowPlayingEvent;
-(id)mostRecentNowPlayingDuetEvent;
-(id)getIntentEventForMostRecentINPlayMediaIntentDonation;
-(id)getINPlayMediaIntentFromMostRecentDonationEvent:(id)arg1 ;
-(id)getUpcomingMediaContainerForBundleId:(id)arg1 ;
-(id)getValidUpcomingMediaMatchingINPlayMediaIntent:(id)arg1 upcomingMediaContainer:(id)arg2 ;
-(BOOL)intentExistsInUpcomingMediaForIntent:(id)arg1 upcomingMediaItems:(id)arg2 ;
-(BOOL)foundMatchingUpcomingMediaItemForINPlayMediaIntent:(id)arg1 upcomingMediaContainer:(id)arg2 ;
-(BOOL)appSupportsUpcomingMediaForBundleId:(id)arg1 ;
-(BOOL)trackTitlesMatchForDonationEvent:(id)arg1 nowPlayingEvent:(id)arg2 ;
-(id)predictionForUpcomingMediaAppGivenRecentDonation:(id)arg1 mostRecentNowPlayingEvent:(id)arg2 predictedIntent:(id)arg3 ;
-(id)magicalMomentsPredictionGivenMostRecentDonation:(id)arg1 mostRecentNowPlayingEvent:(id)arg2 predictedIntent:(id)arg3 ;
-(BOOL)userHasNotListenedToContentForALongTimeGivenNowPlayingEvent:(id)arg1 donationEvent:(id)arg2 ;
-(BOOL)userVeryRecentlyListenedToContentGivenNowPlayingEvent:(id)arg1 ;
-(id)finalMMIntentPredictionGivenCandidatePrediction:(id)arg1 ;
-(double)minMagicalMomentsConfidenceThreshold;
-(double)minActionResolutionScoreThreshold;
-(BOOL)magicalMomentsPredictionIsValidForPredictionItem:(id)arg1 ;
-(BOOL)actionPredictionIsValidForPredictedIntent:(id)arg1 withScore:(float)arg2 ;
-(id)getPlayMediaActionPredictionsForBundleId:(id)arg1 ;
-(id)hydrateNowPlayingAppPrediction:(id)arg1 ;
-(id)prepareNowPlayingInfoFromNowPlayingInfoDictionary:(id)arg1 andIntent:(id)arg2 ;
-(void)primeApplicationWithHydratedPlayMediaIntent:(id)arg1 ;
-(void)resignFallbackNowPlayingInfoCenter;
@end

