/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, MRApplicationActivity, MRDeviceInfo, MRClient, MROrigin, NSArray;

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _canBeNowPlayingApp;
	double _canBeNowPlayingAppTimestamp;
	BOOL _isOverrideApp;
	unsigned _routeDiscoveryMode;
	NSMutableArray* _applicationPickedRoutes;
	unsigned _inputMode;
	float _volume;
	unsigned _volumeCapabilities;
	MRApplicationActivity* _activity;
	MRDeviceInfo* _deviceInfo;
	/*^block*/id _playbackQueueCallback;
	/*^block*/id _playbackQueueTransactionCallback;
	/*^block*/id _capabilitiesCallback;
	/*^block*/id _commandCallback;
	/*^block*/id _beginLyricsEventCallback;
	/*^block*/id _endLyricsEventCallback;
	/*^block*/id _playbackSessionCallback;
	/*^block*/id _playbackSessionMigrateBeginCallback;
	/*^block*/id _playbackSessionMigrateEndCallback;
	/*^block*/id _playbackSessionMigrateRequestCallback;
	NSMutableArray* _nowPlayingClients;
	unsigned _hardwareRemoteBehavior;
	MRClient* _activeNowPlayingClient;
	MROrigin* _origin;

}

@property (nonatomic,readonly) MROrigin * origin;                                 //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) BOOL canBeNowPlayingApp; 
@property (assign,nonatomic) BOOL isOverrideApp; 
@property (assign,nonatomic) unsigned hardwareRemoteBehavior;                     //@synthesize hardwareRemoteBehavior=_hardwareRemoteBehavior - In the implementation block
@property (assign,nonatomic) unsigned routeDiscoveryMode; 
@property (nonatomic,copy) NSArray * applicationPickedRoutes; 
@property (assign,nonatomic) unsigned inputMode; 
@property (assign,nonatomic) unsigned volumeCapabilities; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,retain) MRApplicationActivity * activity; 
@property (nonatomic,retain) MRDeviceInfo * deviceInfo; 
@property (nonatomic,copy) id playbackQueueCallback; 
@property (nonatomic,copy) id playbackQueueTransactionCallback; 
@property (nonatomic,copy) id commandCallback; 
@property (nonatomic,copy) id playbackSessionCallback; 
@property (nonatomic,copy) id playbackSessionMigrateBeginCallback; 
@property (nonatomic,copy) id playbackSessionMigrateEndCallback; 
@property (nonatomic,copy) id playbackSessionMigrateRequestCallback; 
@property (nonatomic,copy) id beginLyricsEventCallback; 
@property (nonatomic,copy) id endLyricsEventCallback; 
@property (nonatomic,retain) MRClient * activeNowPlayingClient;                   //@synthesize activeNowPlayingClient=_activeNowPlayingClient - In the implementation block
@property (nonatomic,readonly) NSArray * nowPlayingClients; 
-(id)endLyricsEventCallback;
-(void)setVolumeCapabilities:(unsigned)arg1 ;
-(unsigned)volumeCapabilities;
-(void)setEndLyricsEventCallback:(id)arg1 ;
-(id)playbackSessionMigrateEndCallback;
-(NSArray *)nowPlayingClients;
-(void)restoreNowPlayingClientState;
-(void)setInputMode:(unsigned)arg1 ;
-(unsigned)inputMode;
-(MRDeviceInfo *)deviceInfo;
-(void)setVolume:(float)arg1 ;
-(MROrigin *)origin;
-(void)setDeviceInfo:(MRDeviceInfo *)arg1 ;
-(void)setCanBeNowPlayingApp:(BOOL)arg1 ;
-(id)nowPlayingClientForPlayerPath:(id)arg1 ;
-(MRApplicationActivity *)activity;
-(id)existingNowPlayingClientForPlayerPath:(id)arg1 ;
-(void)setPlaybackQueueTransactionCallback:(id)arg1 ;
-(NSArray *)applicationPickedRoutes;
-(id)debugDescription;
-(void)removeClient:(id)arg1 ;
-(void)_registerMediaServerNotifications;
-(void)setBeginLyricsEventCallback:(id)arg1 ;
-(id)playbackSessionCallback;
-(void)setActivity:(MRApplicationActivity *)arg1 ;
-(void)setPlaybackSessionMigrateEndCallback:(id)arg1 ;
-(BOOL)isOverrideApp;
-(id)description;
-(id)playbackSessionMigrateRequestCallback;
-(void)_unregisterMediaServerNotifications;
-(void)setPlaybackSessionMigrateBeginCallback:(id)arg1 ;
-(id)playbackQueueTransactionCallback;
-(void)setPlaybackSessionCallback:(id)arg1 ;
-(void)setPlaybackQueueCallback:(id)arg1 ;
-(void)setActiveNowPlayingClient:(MRClient *)arg1 ;
-(void)setApplicationPickedRoutes:(NSArray *)arg1 ;
-(id)beginLyricsEventCallback;
-(void)setHardwareRemoteBehavior:(unsigned)arg1 ;
-(id)initWithOrigin:(id)arg1 ;
-(void)setIsOverrideApp:(BOOL)arg1 ;
-(id)playbackSessionMigrateBeginCallback;
-(unsigned)hardwareRemoteBehavior;
-(id)commandCallback;
-(float)volume;
-(void)setPlaybackSessionMigrateRequestCallback:(id)arg1 ;
-(BOOL)canBeNowPlayingApp;
-(void)_avSessionMediaServicesResetNotification:(id)arg1 ;
-(unsigned)routeDiscoveryMode;
-(void)setCommandCallback:(id)arg1 ;
-(id)playbackQueueCallback;
-(MRClient *)activeNowPlayingClient;
-(void)setRouteDiscoveryMode:(unsigned)arg1 ;
-(void)dealloc;
@end

