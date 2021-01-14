/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
*/

#import <libobjc.A.dylib/PMMDataProtectionMonitorDelegate.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@protocol OS_dispatch_queue;
@class CXCallObserver, PMMAudioDisconnectListener, PMMMusicStateProcessor, NSObject, PMMTelephonyConnection, PMMDataProtectionMonitor, PMMPredictionItem, NSString, NSDate, PETScalarEventTracker;

@interface PMMPredictor : NSObject <PMMDataProtectionMonitorDelegate, CXCallObserverDelegate> {

	BOOL _callInProgress;
	CXCallObserver* _callObserver;
	BOOL _unlockedSinceBoot;
	PMMAudioDisconnectListener* _disconnectListener;
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
+(BOOL)_predictionPopulatesNowPlaying:(id)arg1 fromUnitTest:(BOOL)arg2 ;
+(BOOL)_predictionPopulatesContinuity:(id)arg1 ;
+(BOOL)_predictionPopulatesSpringboard:(id)arg1 ;
+(BOOL)_predictionPopulatesStark:(id)arg1 ;
+(long long)pmmReasonToDECReason:(long long)arg1 ;
+(id)getHighestConfidencePredictionForNowPlayingConsumerFromPredictions:(id)arg1 fromUnitTest:(BOOL)arg2 ;
+(BOOL)bundleSupportsINPlayMediaIntentForBundleId:(id)arg1 fromUnitTest:(BOOL)arg2 ;
+(BOOL)_predictionIsAudio:(id)arg1 ;
-(void)setMmAppSuggestion:(PETScalarEventTracker *)arg1 ;
-(long long)encryptedDataAvailability;
-(void)setMostRecentNowPlayingApp:(NSString *)arg1 ;
-(id)init;
-(void)setMusicStateProcessor:(PMMMusicStateProcessor *)arg1 ;
-(void)logPrediction:(id)arg1 predictionSource:(unsigned long long)arg2 mmReason:(long long)arg3 decReason:(long long)arg4 reasonSingle:(long long)arg5 reasonMetadata:(id)arg6 ;
-(void)setMostRecentPrediction:(PMMPredictionItem *)arg1 ;
-(void)_clearAllRecommendationsExceptAppPredictions;
-(void)dataProtectionMonitor:(id)arg1 encryptedDataAvailbilityDidChange:(long long)arg2 ;
-(NSDate *)dateOfLastNowPlayingEvent;
-(PETScalarEventTracker *)mmAppSuggestion;
-(void)setHeroAppSuggestion:(PETScalarEventTracker *)arg1 ;
-(void)notifyNowPlayingConsumerOfPredictionItem:(id)arg1 ;
-(PMMPredictionItem *)mostRecentPrediction;
-(PMMPredictionItem *)mostRecentNowPlayingPrediction;
-(PETScalarEventTracker *)heroAppSuggestion;
-(void)fetchMediaRemoteNowPlayingApplicationPlaybackState:(/*^block*/id)arg1 ;
-(BOOL)unlockedSinceBoot;
-(void)setDataProtectionMonitor:(PMMDataProtectionMonitor *)arg1 ;
-(long long)dataProtectionStatus;
-(void)_notifyAppPredictionAboutMMUpdate:(id)arg1 ;
-(id)_publishPredictionWithPredictedApplication:(id)arg1 fromUnitTest:(BOOL)arg2 ;
-(void)setDataProtectionStatus:(long long)arg1 ;
-(void)setDateOfLastNowPlayingEvent:(NSDate *)arg1 ;
-(id)notifyNonNowPlayingConsumersOfPredictionItem:(id)arg1 ;
-(void)setDisconnectListener:(PMMAudioDisconnectListener *)arg1 ;
-(void)_handleNowPlayingInfoDidChange;
-(void)dataProtectionMonitor:(id)arg1 dataProtectionStatusDidChange:(long long)arg2 ;
-(void)setCtConnection:(PMMTelephonyConnection *)arg1 ;
-(PMMDataProtectionMonitor *)dataProtectionMonitor;
-(void)handleNowPlayingInfoDidChange;
-(BOOL)_recommendingAudioWhileAlreadyPlaying:(id)arg1 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(void)_clearAllRecommendations;
-(NSString *)mostRecentNowPlayingApp;
-(void)setNowPlayingStatusQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_updatePredictionBasedOnPreviousDataProtectionStatus:(long long)arg1 previousEncryptedDataAvailability:(long long)arg2 ;
-(id)expirationForReason:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)nowPlayingStatusQueue;
-(PMMMusicStateProcessor *)musicStateProcessor;
-(PMMAudioDisconnectListener *)disconnectListener;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)setMostRecentNowPlayingPrediction:(PMMPredictionItem *)arg1 ;
-(void)handlePredictedApplications:(id)arg1 ;
-(PMMTelephonyConnection *)ctConnection;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(id)preprocessPrediction:(id)arg1 predictionSource:(unsigned long long)arg2 mmReason:(long long)arg3 decReason:(long long)arg4 reasonSingle:(long long)arg5 reasonMetadata:(id)arg6 ;
-(void)fetchMediaRemoteNowPlayingApplicationBundleId:(/*^block*/id)arg1 ;
-(void)dataProtectionMonitor:(id)arg1 unlockedSinceBoot:(BOOL)arg2 ;
@end

