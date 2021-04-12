/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
*/

#import <libobjc.A.dylib/PMMDataProtectionMonitorDelegate.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@protocol OS_dispatch_queue;
@class CXCallObserver, PMMAudioDisconnectListener, PMMAppsSettingsMonitor, PMMMusicStateProcessor, NSObject, PMMTelephonyConnection, PMMDataProtectionMonitor, PMMPredictionItem, NSString, NSDate, PETScalarEventTracker;

@interface PMMPredictor : NSObject <PMMDataProtectionMonitorDelegate, CXCallObserverDelegate> {

	BOOL _callInProgress;
	CXCallObserver* _callObserver;
	BOOL _unlockedSinceBoot;
	PMMAudioDisconnectListener* _disconnectListener;
	PMMAppsSettingsMonitor* _myAppsSettingsMonitor;
	PMMMusicStateProcessor* _musicStateProcessor;
	NSObject*<OS_dispatch_queue> _nowPlayingStatusQueue;
	PMMTelephonyConnection* _ctConnection;
	PMMDataProtectionMonitor* _dataProtectionMonitor;
	PMMPredictionItem* _mostRecentPrediction;
	PMMPredictionItem* _mostRecentNowPlayingPrediction;
	NSString* _mostRecentNowPlayingApp;
	NSDate* _dateOfLastNowPlayingEvent;
	long long _encryptedDataAvailability;
	long long _dataProtectionStatus;
	PETScalarEventTracker* _mmAppSuggestion;
	PETScalarEventTracker* _heroAppSuggestion;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) PMMAudioDisconnectListener * disconnectListener;                 //@synthesize disconnectListener=_disconnectListener - In the implementation block
@property (nonatomic,retain) PMMAppsSettingsMonitor * myAppsSettingsMonitor;                  //@synthesize myAppsSettingsMonitor=_myAppsSettingsMonitor - In the implementation block
@property (nonatomic,retain) PMMMusicStateProcessor * musicStateProcessor;                    //@synthesize musicStateProcessor=_musicStateProcessor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nowPlayingStatusQueue;              //@synthesize nowPlayingStatusQueue=_nowPlayingStatusQueue - In the implementation block
@property (nonatomic,retain) PMMTelephonyConnection * ctConnection;                           //@synthesize ctConnection=_ctConnection - In the implementation block
@property (nonatomic,retain) PMMDataProtectionMonitor * dataProtectionMonitor;                //@synthesize dataProtectionMonitor=_dataProtectionMonitor - In the implementation block
@property (nonatomic,retain) PMMPredictionItem * mostRecentPrediction;                        //@synthesize mostRecentPrediction=_mostRecentPrediction - In the implementation block
@property (nonatomic,retain) PMMPredictionItem * mostRecentNowPlayingPrediction;              //@synthesize mostRecentNowPlayingPrediction=_mostRecentNowPlayingPrediction - In the implementation block
@property (nonatomic,retain) NSString * mostRecentNowPlayingApp;                              //@synthesize mostRecentNowPlayingApp=_mostRecentNowPlayingApp - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastNowPlayingEvent;                              //@synthesize dateOfLastNowPlayingEvent=_dateOfLastNowPlayingEvent - In the implementation block
@property (assign,nonatomic) long long encryptedDataAvailability;                             //@synthesize encryptedDataAvailability=_encryptedDataAvailability - In the implementation block
@property (assign,nonatomic) BOOL unlockedSinceBoot;                                          //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
@property (assign,nonatomic) long long dataProtectionStatus;                                  //@synthesize dataProtectionStatus=_dataProtectionStatus - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * mmAppSuggestion;                         //@synthesize mmAppSuggestion=_mmAppSuggestion - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * heroAppSuggestion;                       //@synthesize heroAppSuggestion=_heroAppSuggestion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)getHighestConfidencePredictionForNowPlayingConsumerFromPredictions:(id)arg1 fromUnitTest:(BOOL)arg2 ;
+(BOOL)_predictionPopulatesNowPlaying:(id)arg1 fromUnitTest:(BOOL)arg2 ;
+(long long)pmmReasonToDECReason:(long long)arg1 ;
+(BOOL)_predictionPopulatesStark:(id)arg1 ;
+(BOOL)_predictionPopulatesSpringboard:(id)arg1 ;
+(BOOL)_predictionPopulatesContinuity:(id)arg1 ;
+(BOOL)_predictionIsAudio:(id)arg1 ;
+(BOOL)bundleSupportsINPlayMediaIntentForBundleId:(id)arg1 fromUnitTest:(BOOL)arg2 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(void)setDataProtectionStatus:(long long)arg1 ;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(long long)encryptedDataAvailability;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)dataProtectionMonitor:(id)arg1 encryptedDataAvailbilityDidChange:(long long)arg2 ;
-(void)dataProtectionMonitor:(id)arg1 unlockedSinceBoot:(BOOL)arg2 ;
-(void)dataProtectionMonitor:(id)arg1 dataProtectionStatusDidChange:(long long)arg2 ;
-(BOOL)unlockedSinceBoot;
-(long long)dataProtectionStatus;
-(PMMDataProtectionMonitor *)dataProtectionMonitor;
-(void)handlePredictedApplications:(id)arg1 ;
-(void)_notifyAppPredictionAboutMMUpdate:(id)arg1 ;
-(void)logPrediction:(id)arg1 predictionSource:(unsigned long long)arg2 mmReason:(long long)arg3 decReason:(long long)arg4 reasonSingle:(long long)arg5 reasonMetadata:(id)arg6 ;
-(id)preprocessPrediction:(id)arg1 predictionSource:(unsigned long long)arg2 mmReason:(long long)arg3 decReason:(long long)arg4 reasonSingle:(long long)arg5 reasonMetadata:(id)arg6 ;
-(id)notifyNonNowPlayingConsumersOfPredictionItem:(id)arg1 ;
-(void)notifyNowPlayingConsumerOfPredictionItem:(id)arg1 ;
-(id)_publishPredictionWithPredictedApplication:(id)arg1 fromUnitTest:(BOOL)arg2 ;
-(void)_clearAllRecommendationsExceptAppPredictions;
-(void)_clearAllRecommendations;
-(id)expirationForReason:(long long)arg1 ;
-(BOOL)_recommendingAudioWhileAlreadyPlaying:(id)arg1 ;
-(void)_updatePredictionBasedOnPreviousDataProtectionStatus:(long long)arg1 previousEncryptedDataAvailability:(long long)arg2 ;
-(void)handleNowPlayingInfoDidChange;
-(void)_handleNowPlayingInfoDidChange;
-(void)fetchMediaRemoteNowPlayingApplicationPlaybackState:(/*^block*/id)arg1 ;
-(void)fetchMediaRemoteNowPlayingApplicationBundleId:(/*^block*/id)arg1 ;
-(PMMAudioDisconnectListener *)disconnectListener;
-(void)setDisconnectListener:(PMMAudioDisconnectListener *)arg1 ;
-(PMMAppsSettingsMonitor *)myAppsSettingsMonitor;
-(void)setMyAppsSettingsMonitor:(PMMAppsSettingsMonitor *)arg1 ;
-(PMMMusicStateProcessor *)musicStateProcessor;
-(void)setMusicStateProcessor:(PMMMusicStateProcessor *)arg1 ;
-(NSObject*<OS_dispatch_queue>)nowPlayingStatusQueue;
-(void)setNowPlayingStatusQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PMMTelephonyConnection *)ctConnection;
-(void)setCtConnection:(PMMTelephonyConnection *)arg1 ;
-(void)setDataProtectionMonitor:(PMMDataProtectionMonitor *)arg1 ;
-(PMMPredictionItem *)mostRecentPrediction;
-(void)setMostRecentPrediction:(PMMPredictionItem *)arg1 ;
-(PMMPredictionItem *)mostRecentNowPlayingPrediction;
-(void)setMostRecentNowPlayingPrediction:(PMMPredictionItem *)arg1 ;
-(NSString *)mostRecentNowPlayingApp;
-(void)setMostRecentNowPlayingApp:(NSString *)arg1 ;
-(NSDate *)dateOfLastNowPlayingEvent;
-(void)setDateOfLastNowPlayingEvent:(NSDate *)arg1 ;
-(PETScalarEventTracker *)mmAppSuggestion;
-(void)setMmAppSuggestion:(PETScalarEventTracker *)arg1 ;
-(PETScalarEventTracker *)heroAppSuggestion;
-(void)setHeroAppSuggestion:(PETScalarEventTracker *)arg1 ;
@end

