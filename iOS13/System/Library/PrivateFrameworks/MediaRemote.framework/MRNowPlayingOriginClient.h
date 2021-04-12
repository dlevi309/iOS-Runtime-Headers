/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, MRApplicationActivity, _MRDeviceInfoMessageProtobuf, _MRNowPlayingClientProtobuf, _MROriginProtobuf, NSArray;

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
	_MRDeviceInfoMessageProtobuf* _deviceInfo;
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
	_MRNowPlayingClientProtobuf* _activeNowPlayingClient;
	_MROriginProtobuf* _origin;

}

@property (nonatomic,readonly) _MROriginProtobuf * origin;                                      //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) BOOL canBeNowPlayingApp; 
@property (assign,nonatomic) BOOL isOverrideApp; 
@property (assign,nonatomic) unsigned hardwareRemoteBehavior;                                   //@synthesize hardwareRemoteBehavior=_hardwareRemoteBehavior - In the implementation block
@property (assign,nonatomic) unsigned routeDiscoveryMode; 
@property (nonatomic,copy) NSArray * applicationPickedRoutes; 
@property (assign,nonatomic) unsigned inputMode; 
@property (assign,nonatomic) unsigned volumeCapabilities; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,retain) MRApplicationActivity * activity; 
@property (nonatomic,retain) _MRDeviceInfoMessageProtobuf * deviceInfo; 
@property (nonatomic,copy) id playbackQueueCallback; 
@property (nonatomic,copy) id playbackQueueTransactionCallback; 
@property (nonatomic,copy) id commandCallback; 
@property (nonatomic,copy) id playbackSessionCallback; 
@property (nonatomic,copy) id playbackSessionMigrateBeginCallback; 
@property (nonatomic,copy) id playbackSessionMigrateEndCallback; 
@property (nonatomic,copy) id playbackSessionMigrateRequestCallback; 
@property (nonatomic,copy) id beginLyricsEventCallback; 
@property (nonatomic,copy) id endLyricsEventCallback; 
@property (nonatomic,retain) _MRNowPlayingClientProtobuf * activeNowPlayingClient;              //@synthesize activeNowPlayingClient=_activeNowPlayingClient - In the implementation block
@property (nonatomic,readonly) NSArray * nowPlayingClients; 
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(MRApplicationActivity *)activity;
-(void)setActivity:(MRApplicationActivity *)arg1 ;
-(_MROriginProtobuf *)origin;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setInputMode:(unsigned)arg1 ;
-(void)removeClient:(id)arg1 ;
-(unsigned)inputMode;
-(_MRDeviceInfoMessageProtobuf *)deviceInfo;
-(void)setDeviceInfo:(_MRDeviceInfoMessageProtobuf *)arg1 ;
-(id)initWithOrigin:(id)arg1 ;
-(unsigned)volumeCapabilities;
-(void)setPlaybackSessionCallback:(id)arg1 ;
-(void)setPlaybackSessionMigrateBeginCallback:(id)arg1 ;
-(void)setPlaybackSessionMigrateEndCallback:(id)arg1 ;
-(void)setCanBeNowPlayingApp:(BOOL)arg1 ;
-(BOOL)isOverrideApp;
-(void)setIsOverrideApp:(BOOL)arg1 ;
-(void)setActiveNowPlayingClient:(_MRNowPlayingClientProtobuf *)arg1 ;
-(void)setVolumeCapabilities:(unsigned)arg1 ;
-(void)setHardwareRemoteBehavior:(unsigned)arg1 ;
-(void)setCommandCallback:(id)arg1 ;
-(BOOL)canBeNowPlayingApp;
-(void)setPlaybackSessionMigrateRequestCallback:(id)arg1 ;
-(void)restoreNowPlayingClientState;
-(NSArray *)nowPlayingClients;
-(void)setPlaybackQueueCallback:(id)arg1 ;
-(void)setPlaybackQueueTransactionCallback:(id)arg1 ;
-(id)playbackSessionCallback;
-(id)playbackSessionMigrateBeginCallback;
-(id)playbackSessionMigrateEndCallback;
-(id)playbackSessionMigrateRequestCallback;
-(id)commandCallback;
-(id)endLyricsEventCallback;
-(id)beginLyricsEventCallback;
-(id)playbackQueueTransactionCallback;
-(id)playbackQueueCallback;
-(void)setBeginLyricsEventCallback:(id)arg1 ;
-(void)setEndLyricsEventCallback:(id)arg1 ;
-(void)_registerMediaServerNotifications;
-(void)_unregisterMediaServerNotifications;
-(void)_avSessionMediaServicesResetNotification:(id)arg1 ;
-(NSArray *)applicationPickedRoutes;
-(void)setApplicationPickedRoutes:(NSArray *)arg1 ;
-(void)setRouteDiscoveryMode:(unsigned)arg1 ;
-(unsigned)routeDiscoveryMode;
-(_MRNowPlayingClientProtobuf *)activeNowPlayingClient;
-(id)existingNowPlayingClientForPlayerPath:(id)arg1 ;
-(id)nowPlayingClientForPlayerPath:(id)arg1 ;
-(unsigned)hardwareRemoteBehavior;
@end

