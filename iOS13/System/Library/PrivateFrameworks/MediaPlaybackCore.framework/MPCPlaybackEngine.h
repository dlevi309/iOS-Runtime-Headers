/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCExplicitContentAuthorizationDelegate.h>

@protocol MPCPlaybackEngineDelegate, MPCPlaybackEngineEventObserving;
@class MPCAudioSpectrumAnalyzer, NSString, MPCPlaybackIntent, MPProtocolProxy, _MPCAVController, _MPCMediaRemotePublisher, _MPCMusicPlayerControllerServer, _MPCReportingController, _MPCPlaybackEngineSessionManager, _MPCLeaseManager, _MPCPlaybackAccountManager, UIView, MPCPlayerPath, NSXPCListenerEndpoint;

@interface MPCPlaybackEngine : NSObject <MPCExplicitContentAuthorizationDelegate> {

	MPCAudioSpectrumAnalyzer* _audioAnalyzer;
	BOOL _pictureInPictureSupported;
	BOOL _videoSupported;
	BOOL _stateRestorationSupported;
	BOOL _queueHandoffSupported;
	BOOL _scheduledPlaybackStatePreservation;
	BOOL _systemMusicApplication;
	BOOL _audioAnalyzerEnabled;
	NSString* _playerID;
	id<MPCPlaybackEngineDelegate> _delegate;
	MPCPlaybackIntent* _fallbackPlaybackIntent;
	MPProtocolProxy*<MPCPlaybackEngineEventObserving> _eventObserver;
	_MPCAVController* _implementation;
	_MPCMediaRemotePublisher* _mediaRemotePublisher;
	_MPCMusicPlayerControllerServer* _musicPlayerControllerServer;
	_MPCReportingController* _reportingController;
	_MPCPlaybackEngineSessionManager* _sessionManager;
	_MPCLeaseManager* _leaseManager;
	_MPCPlaybackAccountManager* _accountManager;
	unsigned long long _options;
	NSString* _audioSessionCategory;
	unsigned long long _audioSessionOptions;

}

@property (assign,getter=hasScheduledPlaybackStatePreservation,nonatomic) BOOL scheduledPlaybackStatePreservation;              //@synthesize scheduledPlaybackStatePreservation=_scheduledPlaybackStatePreservation - In the implementation block
@property (nonatomic,readonly) MPProtocolProxy*<MPCPlaybackEngineEventObserving> eventObserver;                                 //@synthesize eventObserver=_eventObserver - In the implementation block
@property (nonatomic,readonly) _MPCAVController * implementation;                                                               //@synthesize implementation=_implementation - In the implementation block
@property (nonatomic,readonly) _MPCMediaRemotePublisher * mediaRemotePublisher;                                                 //@synthesize mediaRemotePublisher=_mediaRemotePublisher - In the implementation block
@property (nonatomic,readonly) _MPCMusicPlayerControllerServer * musicPlayerControllerServer;                                   //@synthesize musicPlayerControllerServer=_musicPlayerControllerServer - In the implementation block
@property (nonatomic,readonly) _MPCReportingController * reportingController;                                                   //@synthesize reportingController=_reportingController - In the implementation block
@property (nonatomic,readonly) _MPCPlaybackEngineSessionManager * sessionManager;                                               //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,readonly) _MPCLeaseManager * leaseManager;                                                                 //@synthesize leaseManager=_leaseManager - In the implementation block
@property (nonatomic,readonly) _MPCPlaybackAccountManager * accountManager;                                                     //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,readonly) UIView * videoView; 
@property (nonatomic,readonly) unsigned long long options;                                                                      //@synthesize options=_options - In the implementation block
@property (assign,getter=isSystemMusicApplication,nonatomic) BOOL systemMusicApplication;                                       //@synthesize systemMusicApplication=_systemMusicApplication - In the implementation block
@property (nonatomic,copy) NSString * audioSessionCategory;                                                                     //@synthesize audioSessionCategory=_audioSessionCategory - In the implementation block
@property (assign,nonatomic) unsigned long long audioSessionOptions;                                                            //@synthesize audioSessionOptions=_audioSessionOptions - In the implementation block
@property (assign,getter=isAudioAnalyzerEnabled,nonatomic) BOOL audioAnalyzerEnabled;                                           //@synthesize audioAnalyzerEnabled=_audioAnalyzerEnabled - In the implementation block
@property (nonatomic,readonly) MPCAudioSpectrumAnalyzer * audioAnalyzer;                                                        //@synthesize audioAnalyzer=_audioAnalyzer - In the implementation block
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
+(BOOL)requiresMainThread;
+(void)preheatPlayback;
-(unsigned long long)options;
-(id<MPCPlaybackEngineDelegate>)delegate;
-(void)setDelegate:(id<MPCPlaybackEngineDelegate>)arg1 ;
-(void)start;
-(BOOL)isPictureInPictureSupported;
-(UIView *)videoView;
-(_MPCAVController *)implementation;
-(void)setAudioSessionCategory:(NSString *)arg1 ;
-(id)initWithPlayerID:(id)arg1 ;
-(void)becomeActive;
-(MPCPlayerPath *)playerPath;
-(NSString *)playerID;
-(void)setPictureInPictureSupported:(BOOL)arg1 ;
-(_MPCPlaybackEngineSessionManager *)sessionManager;
-(MPCAudioSpectrumAnalyzer *)audioAnalyzer;
-(NSXPCListenerEndpoint *)serverEndpoint;
-(NSString *)audioSessionCategory;
-(void)addEngineObserver:(id)arg1 ;
-(BOOL)isSystemMusicApplication;
-(_MPCMediaRemotePublisher *)mediaRemotePublisher;
-(BOOL)isQueueHandoffSupported;
-(_MPCPlaybackAccountManager *)accountManager;
-(_MPCReportingController *)reportingController;
-(MPCPlaybackIntent *)fallbackPlaybackIntent;
-(_MPCLeaseManager *)leaseManager;
-(void)addSupportedSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4 ;
-(void)removeSupportedSpecializedQueueIdentifier:(id)arg1 ;
-(void)reportUserBackgroundedApplication;
-(MPProtocolProxy*<MPCPlaybackEngineEventObserving>)eventObserver;
-(void)schedulePlaybackStatePreservation;
-(unsigned long long)audioSessionOptions;
-(void)requestAuthorizationForExplicitItem:(id)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPlayerID:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_initializePlaybackStack;
-(void)_itemAssetLoadedNotification:(id)arg1 ;
-(void)_itemInsertedNotification:(id)arg1 ;
-(void)reportUserSeekFromTime:(double)arg1 toTime:(double)arg2 ;
-(BOOL)hasScheduledPlaybackStatePreservation;
-(void)setScheduledPlaybackStatePreservation:(BOOL)arg1 ;
-(BOOL)isStateRestorationSupported;
-(BOOL)_shouldIgnorePlaybackSessionError:(id)arg1 ;
-(void)restoreStateWithCompletion:(/*^block*/id)arg1 ;
-(void)setQueueHandoffSupported:(BOOL)arg1 ;
-(void)setVideoSupported:(BOOL)arg1 ;
-(void)setAudioSessionOptions:(unsigned long long)arg1 ;
-(void)removeEngineObserver:(id)arg1 ;
-(void)setStateRestorationSupported:(BOOL)arg1 ;
-(void)setSystemMusicApplication:(BOOL)arg1 ;
-(void)setAudioAnalyzerEnabled:(BOOL)arg1 ;
-(BOOL)isVideoSupported;
-(void)setFallbackPlaybackIntent:(MPCPlaybackIntent *)arg1 ;
-(_MPCMusicPlayerControllerServer *)musicPlayerControllerServer;
-(BOOL)isAudioAnalyzerEnabled;
@end

