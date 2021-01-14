/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCExplicitContentAuthorizationDelegate.h>

@protocol MPCVideoOutput, MPCPlaybackEngineDelegate, MPCPlaybackEngineEventObserving, MPCPlaybackEngineImplementation;
@class NSString, MPCPlaybackIntent, MPProtocolProxy, _MPCMediaRemotePublisher, _MPCMusicPlayerControllerServer, _MPCReportingController, _MPCPlaybackEngineSessionManager, _MPCLeaseManager, _MPCPlaybackAccountManager, _MPCFairPlayPerformanceController, MPCAudioSpectrumAnalyzer, MPCPlaybackEngineEventStream, UIView, MPCPlayerPath, NSXPCListenerEndpoint;

@interface MPCPlaybackEngine : NSObject <MPCExplicitContentAuthorizationDelegate> {

	BOOL _pictureInPictureSupported;
	BOOL _videoSupported;
	BOOL _stateRestorationSupported;
	BOOL _queueHandoffSupported;
	BOOL _scheduledPlaybackStatePreservation;
	BOOL _needsUISnapshot;
	BOOL _systemMusicApplication;
	BOOL _audioAnalyzerEnabled;
	id<MPCVideoOutput> _videoOutput;
	NSString* _playerID;
	id<MPCPlaybackEngineDelegate> _delegate;
	MPCPlaybackIntent* _fallbackPlaybackIntent;
	MPProtocolProxy*<MPCPlaybackEngineEventObserving> _eventObserver;
	id<MPCPlaybackEngineImplementation> _implementation;
	_MPCMediaRemotePublisher* _mediaRemotePublisher;
	_MPCMusicPlayerControllerServer* _musicPlayerControllerServer;
	_MPCReportingController* _reportingController;
	_MPCPlaybackEngineSessionManager* _sessionManager;
	_MPCLeaseManager* _leaseManager;
	_MPCPlaybackAccountManager* _accountManager;
	_MPCFairPlayPerformanceController* _fairPlayPerformanceController;
	NSString* _audioSessionCategory;
	unsigned long long _audioSessionOptions;
	MPCAudioSpectrumAnalyzer* _audioAnalyzer;
	MPCPlaybackEngineEventStream* _eventStream;

}

@property (assign,getter=hasScheduledPlaybackStatePreservation,nonatomic) BOOL scheduledPlaybackStatePreservation;              //@synthesize scheduledPlaybackStatePreservation=_scheduledPlaybackStatePreservation - In the implementation block
@property (assign,nonatomic) BOOL needsUISnapshot;                                                                              //@synthesize needsUISnapshot=_needsUISnapshot - In the implementation block
@property (nonatomic,readonly) MPProtocolProxy*<MPCPlaybackEngineEventObserving> eventObserver;                                 //@synthesize eventObserver=_eventObserver - In the implementation block
@property (nonatomic,readonly) id<MPCPlaybackEngineImplementation> implementation;                                              //@synthesize implementation=_implementation - In the implementation block
@property (nonatomic,readonly) _MPCMediaRemotePublisher * mediaRemotePublisher;                                                 //@synthesize mediaRemotePublisher=_mediaRemotePublisher - In the implementation block
@property (nonatomic,readonly) _MPCMusicPlayerControllerServer * musicPlayerControllerServer;                                   //@synthesize musicPlayerControllerServer=_musicPlayerControllerServer - In the implementation block
@property (nonatomic,readonly) _MPCReportingController * reportingController;                                                   //@synthesize reportingController=_reportingController - In the implementation block
@property (nonatomic,readonly) _MPCPlaybackEngineSessionManager * sessionManager;                                               //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,readonly) _MPCLeaseManager * leaseManager;                                                                 //@synthesize leaseManager=_leaseManager - In the implementation block
@property (nonatomic,readonly) _MPCPlaybackAccountManager * accountManager;                                                     //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,readonly) _MPCFairPlayPerformanceController * fairPlayPerformanceController;                               //@synthesize fairPlayPerformanceController=_fairPlayPerformanceController - In the implementation block
@property (nonatomic,readonly) UIView * videoView; 
@property (nonatomic,readonly) id<MPCVideoOutput> videoOutput;                                                                  //@synthesize videoOutput=_videoOutput - In the implementation block
@property (assign,getter=isSystemMusicApplication,nonatomic) BOOL systemMusicApplication;                                       //@synthesize systemMusicApplication=_systemMusicApplication - In the implementation block
@property (nonatomic,copy) NSString * audioSessionCategory;                                                                     //@synthesize audioSessionCategory=_audioSessionCategory - In the implementation block
@property (assign,nonatomic) unsigned long long audioSessionOptions;                                                            //@synthesize audioSessionOptions=_audioSessionOptions - In the implementation block
@property (assign,getter=isAudioAnalyzerEnabled,nonatomic) BOOL audioAnalyzerEnabled;                                           //@synthesize audioAnalyzerEnabled=_audioAnalyzerEnabled - In the implementation block
@property (nonatomic,readonly) MPCAudioSpectrumAnalyzer * audioAnalyzer;                                                        //@synthesize audioAnalyzer=_audioAnalyzer - In the implementation block
@property (nonatomic,readonly) MPCPlaybackEngineEventStream * eventStream;                                                      //@synthesize eventStream=_eventStream - In the implementation block
@property (nonatomic,readonly) MPCPlayerPath * playerPath; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * serverEndpoint; 
@property (nonatomic,copy,readonly) NSString * playerID;                                                                        //@synthesize playerID=_playerID - In the implementation block
@property (assign,nonatomic,__weak) id<MPCPlaybackEngineDelegate> delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPictureInPictureSupported,nonatomic) BOOL pictureInPictureSupported;                                 //@synthesize pictureInPictureSupported=_pictureInPictureSupported - In the implementation block
@property (assign,getter=isVideoSupported,nonatomic) BOOL videoSupported;                                                       //@synthesize videoSupported=_videoSupported - In the implementation block
@property (nonatomic,retain) MPCPlaybackIntent * fallbackPlaybackIntent;                                                        //@synthesize fallbackPlaybackIntent=_fallbackPlaybackIntent - In the implementation block
@property (assign,getter=isStateRestorationSupported,nonatomic) BOOL stateRestorationSupported;                                 //@synthesize stateRestorationSupported=_stateRestorationSupported - In the implementation block
@property (assign,getter=isQueueHandoffSupported,nonatomic) BOOL queueHandoffSupported;                                         //@synthesize queueHandoffSupported=_queueHandoffSupported - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)usesNewPlaybackImplementation;
+(void)preheatPlayback;
+(BOOL)requiresMainThread;
+(BOOL)usesEventStreamSiri;
+(BOOL)usesEventStreamRTC;
+(BOOL)usesEventStreamPAF;
-(_MPCPlaybackAccountManager *)accountManager;
-(NSString *)playerID;
-(id<MPCPlaybackEngineImplementation>)implementation;
-(MPCPlaybackEngineEventStream *)eventStream;
-(MPProtocolProxy*<MPCPlaybackEngineEventObserving>)eventObserver;
-(NSString *)audioSessionCategory;
-(id)initWithPlayerID:(id)arg1 ;
-(_MPCMediaRemotePublisher *)mediaRemotePublisher;
-(BOOL)needsUISnapshot;
-(void)setStateRestorationSupported:(BOOL)arg1 ;
-(_MPCPlaybackEngineSessionManager *)sessionManager;
-(void)setNeedsUISnapshot:(BOOL)arg1 ;
-(id<MPCVideoOutput>)videoOutput;
-(MPCAudioSpectrumAnalyzer *)audioAnalyzer;
-(id<MPCPlaybackEngineDelegate>)delegate;
-(void)setFallbackPlaybackIntent:(MPCPlaybackIntent *)arg1 ;
-(void)setAudioAnalyzerEnabled:(BOOL)arg1 ;
-(void)start;
-(BOOL)isPictureInPictureSupported;
-(void)schedulePlaybackStatePreservation;
-(void)setAudioSessionCategory:(NSString *)arg1 ;
-(NSXPCListenerEndpoint *)serverEndpoint;
-(void)removeEngineObserver:(id)arg1 ;
-(BOOL)isVideoSupported;
-(void)setScheduledPlaybackStatePreservation:(BOOL)arg1 ;
-(_MPCFairPlayPerformanceController *)fairPlayPerformanceController;
-(unsigned long long)audioSessionOptions;
-(void)setQueueHandoffSupported:(BOOL)arg1 ;
-(void)setAudioSessionOptions:(unsigned long long)arg1 ;
-(_MPCLeaseManager *)leaseManager;
-(void)setDelegate:(id<MPCPlaybackEngineDelegate>)arg1 ;
-(void)addEngineObserver:(id)arg1 ;
-(void)setSystemMusicApplication:(BOOL)arg1 ;
-(void)becomeActive;
-(BOOL)isSystemMusicApplication;
-(_MPCReportingController *)reportingController;
-(BOOL)hasScheduledPlaybackStatePreservation;
-(void)_screenBrightnessDidChangeNotification:(id)arg1 ;
-(BOOL)isStateRestorationSupported;
-(MPCPlayerPath *)playerPath;
-(void)_detectCrashLoopForSessionIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_shouldIgnorePlaybackSessionError:(id)arg1 ;
-(void)reportUserSeekFromTime:(double)arg1 toTime:(double)arg2 ;
-(void)_initializePlaybackStack;
-(void)setVideoSupported:(BOOL)arg1 ;
-(_MPCMusicPlayerControllerServer *)musicPlayerControllerServer;
-(void)restoreStateWithCompletion:(/*^block*/id)arg1 ;
-(UIView *)videoView;
-(BOOL)isQueueHandoffSupported;
-(void)_updateUISnapshotIfNeeded;
-(void)reportUserBackgroundedApplication;
-(BOOL)isAudioAnalyzerEnabled;
-(MPCPlaybackIntent *)fallbackPlaybackIntent;
-(void)setPictureInPictureSupported:(BOOL)arg1 ;
-(void)requestAuthorizationForExplicitItem:(id)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

