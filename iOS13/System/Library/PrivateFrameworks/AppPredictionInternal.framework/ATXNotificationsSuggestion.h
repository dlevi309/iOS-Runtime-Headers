/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class NSObject, _ATXAppLaunchCategoricalHistogram, _ATXAppLaunchHistogram, ATXNotificationsLogger, _ATXAggregateLogger, _ATXDataStore, ATXNotificationsPriors, NSMutableSet, ATXNotificationsSuggestionLR, NSCache, ATXNotificationsRecorderPermanentStore;

@interface ATXNotificationsSuggestion : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	_ATXAppLaunchCategoricalHistogram* _notificationsHistory;
	_ATXAppLaunchHistogram* _appHistory;
	ATXNotificationsLogger* _logger;
	_ATXAggregateLogger* _aggdlogger;
	_ATXDataStore* _db;
	ATXNotificationsPriors* _notificationsPriors;
	double _threshold;
	double _stdthreshold;
	double _postthreshold;
	NSMutableSet* _inmemorycache;
	long long _stype;
	BOOL _override;
	BOOL _uselrmodel;
	ATXNotificationsSuggestionLR* _lrmodel;
	double _probaThreshold;
	NSCache* _cache;
	ATXNotificationsRecorderPermanentStore* _permanentStore;

}
+(id)generateAppId:(id)arg1 topic:(id)arg2 ;
+(id)getSuggestionLRModel;
+(id)createNotificationIdForSuggestion:(id)arg1 ;
+(BOOL)isSettingSuggestion:(id)arg1 ;
+(id)createBundleIdentifierForSuggestionWithType:(long long)arg1 ;
+(id)extractSuggestionTypeStringFromBundleIdentifier:(id)arg1 ;
-(void)makeSuggestionForNextNotification;
-(id)initWithSuggestionType:(long long)arg1 ;
-(id)initWithThresholds:(double)arg1 stdThreshold:(double)arg2 suggestionType:(long long)arg3 notificationsHistogram:(id)arg4 applaunchHistogram:(id)arg5 uselrmodel:(BOOL)arg6 probaThreshold:(double)arg7 lrmodel:(id)arg8 permanentStore:(id)arg9 ;
-(BOOL)checkIfInDB:(id)arg1 topic:(id)arg2 ;
-(BOOL)_checkIfInDB:(id)arg1 topic:(id)arg2 ;
-(id)checkForBundleIdOverride;
-(double)shouldMakeSuggestionForBundleId:(id)arg1 topic:(id)arg2 ;
-(double)computeThresholdScore:(id)arg1 topic:(id)arg2 ;
-(id)getCachedScoreForAppId:(id)arg1 ;
-(double)computeScoreByPriors:(id)arg1 observed:(double)arg2 count:(double)arg3 ;
-(double)computeStandardError:(double)arg1 count:(double)arg2 ;
-(double)computeLikelihood:(double)arg1 count:(double)arg2 ;
-(double)computePosterior:(double)arg1 count:(double)arg2 prior:(double)arg3 ;
-(double)computeScoreByLogisticRegression:(id)arg1 observed:(double)arg2 count:(double)arg3 ;
-(id)computeFeaturesForBundleId:(id)arg1 ;
-(double)computeTurnoffProbabilityWithInput:(id)arg1 ;
-(double)computeTurnoffProbabilityForBundleId:(id)arg1 ;
-(void)suggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3 ;
-(void)logRTTOutcomeWithBundleId:(id)arg1 topic:(id)arg2 rttOutcome:(unsigned long long)arg3 ;
-(id)getResponses;
-(void)resetResponses;
-(id)message:(id)arg1 topic:(id)arg2 response:(long long)arg3 ;
@end

