/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/APRIntentStreamUpdateInterface.h>

@protocol OS_dispatch_queue, _CDLocalContext;
@class NSXPCListener, _ATXAppLaunchHistogramManager, _ATXDuetHelper, _ATXAppInfoManager, _ATXAppLaunchSequenceManager, _ATXDataStore, NSObject, NSMutableSet, PETScalarEventTracker, PETDistributionEventTracker, ATXInternalAppRegistrationNotification, NSUserDefaults, NSString;

@interface APRAppIntentMonitor : NSObject <NSXPCListenerDelegate, APRIntentStreamUpdateInterface> {

	NSXPCListener* _listener;
	_ATXAppLaunchHistogramManager* _appLaunchHistogramManager;
	_ATXDuetHelper* _duetHelper;
	_ATXAppInfoManager* _appInfoManager;
	_ATXAppLaunchSequenceManager* _appActionLaunchSequenceManager;
	_ATXDataStore* _dataStore;
	NSObject*<OS_dispatch_queue> _appIntentHistoryQueue;
	id<_CDLocalContext> _context;
	NSMutableSet* _registrations;
	NSObject*<OS_dispatch_queue> _donationQueue;
	unsigned long long deletionHandlerToken;
	PETScalarEventTracker* _donatedActionsTracker;
	PETDistributionEventTracker* _donatedActionInCacheTracker;
	ATXInternalAppRegistrationNotification* _appRegistrationListener;
	NSUserDefaults* _userDefaults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)stop;
-(void)start;
-(void)notifyAboutIntentStreamChangeWithReply:(/*^block*/id)arg1 ;
-(void)_syncForTests;
-(id)_appActionLaunchSequenceManager;
-(id)initWithAppLaunchHistogramManager:(id)arg1 appInfoManager:(id)arg2 appActionLaunchSequenceManager:(id)arg3 dataStore:(id)arg4 ;
-(id)initWithAppLaunchHistogramManager:(id)arg1 appInfoManager:(id)arg2 appActionLaunchSequenceManager:(id)arg3 duetHelper:(id)arg4 dataStore:(id)arg5 ;
-(void)_listenToActivityStream;
-(void)_listenToIntentStream;
-(void)handleDonationWithDelayedProcessingForBundleId:(id)arg1 intentType:(id)arg2 ;
-(void)sasProcessingForPrecompletionSiriEventForBundleId:(id)arg1 intentType:(id)arg2 contextValue:(id)arg3 ;
-(void)handleDonationImmediatelyForBundleId:(id)arg1 intentType:(id)arg2 contextValue:(id)arg3 isDonatedBySiri:(BOOL)arg4 isWhitelistedDaemonDonationBundleId:(BOOL)arg5 ;
-(void)_respondToIntentStreamChangingWithContext:(id)arg1 ;
-(void)_handleCompletedIntentForForUUID:(id)arg1 atxIntentSource:(long long)arg2 ;
-(BOOL)_isWhitelistedDaemonDonationBundleId:(id)arg1 ;
-(void)_displayDonationOnLockscreenWithAction:(id)arg1 ;
-(id)adjustedStartDateForFiveSecondFlooringWithAppSessionStartDate:(id)arg1 ;
-(id)adjustedEndDateForFiveSecondFlooringWithAppSessionEndDate:(id)arg1 ;
-(id)_adjustedStartDateForIntentDonationWithAppSessionStartDate:(id)arg1 ;
-(id)_adjustedEndDateForIntentDonationWithAppSessionEndDate:(id)arg1 ;
-(id)fetchIntentEventsForAppSessionWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(BOOL)sessionStartedBeforeDonationForStartDate:(id)arg1 latestDonationDate:(id)arg2 ;
-(BOOL)shouldProcessIntentDonationsForSessionStartDate:(id)arg1 ;
-(BOOL)shouldProcessNSUADonationsForSessionStartDate:(id)arg1 ;
-(void)processIntentDonationsDuringAppSessionForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 globals:(id)arg4 ;
-(id)fetchNSUAEventsForAppSessionWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)processNSUADonationsDuringAppSessionForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 globals:(id)arg4 ;
-(void)updateActionPredictionPipelineForAppSession:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(BOOL)shouldAcceptMessageDonation:(id)arg1 ;
-(void)updateActionPredictionPipelineForIntentEvent:(id)arg1 weight:(float)arg2 appSessionStartDate:(id)arg3 appSessionEndDate:(id)arg4 ;
-(void)_updateActionPredictionHistogramsForIntentEvent:(id)arg1 weight:(float)arg2 ;
-(void)_updateActionPredictionHistogramsRemovingActionUUIDs:(id)arg1 ;
-(void)updateActionPredictionSlotResolutionForIntentEvent:(id)arg1 weight:(float)arg2 prevLocationUUID:(id)arg3 locationUUID:(id)arg4 currentMotionType:(long long)arg5 appSessionStartDate:(id)arg6 appSessionEndDate:(id)arg7 geohash:(long long)arg8 coarseGeohash:(long long)arg9 ;
-(void)_logSirikitIntentWithDKUUIDKey:(id)arg1 bundleId:(id)arg2 ;
-(void)_logIntentPredictionsForIntentEvent:(id)arg1 ;
-(void)updateLaunchHistoryFromDuet:(double)arg1 intentSource:(long long)arg2 ;
-(void)_updateLaunchHistoryFromDuet;
-(void)_updateLaunchHistoryFromDuetForInterval:(double)arg1 ;
-(void)_updateLaunchHistoryFromDuetForSource:(long long)arg1 ;
-(void)recordIntentDonationWithType:(id)arg1 intentSource:(long long)arg2 bundleId:(id)arg3 startDate:(id)arg4 ;
-(void)handleSiriKitIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3 ;
-(void)handleNonSiriKitIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3 ;
-(void)_handleIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3 intentSource:(long long)arg4 ;
-(void)handleIntentOrActivityDeletion;
@end

