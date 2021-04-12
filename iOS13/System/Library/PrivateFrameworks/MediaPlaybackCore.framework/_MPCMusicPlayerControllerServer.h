/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPMusicPlayerControllerSystemServer.h>
#import <libobjc.A.dylib/MPMusicPlayerControllerApplicationServer.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>

@class MPMusicPlayerQueueDescriptor, MPCPlaybackEngine, MPMusicPlayerControllerSystemCache, NSXPCListener, NSMutableArray, NSXPCListenerEndpoint, NSString;

@interface _MPCMusicPlayerControllerServer : NSObject <MPMusicPlayerControllerSystemServer, MPMusicPlayerControllerApplicationServer, NSXPCListenerDelegate, MPCPlaybackEngineEventObserving> {

	MPMusicPlayerQueueDescriptor* _queueDescriptor;
	MPMusicPlayerQueueDescriptor* _preparingDescriptor;
	/*^block*/id _prepareCompletionHandler;
	BOOL _skipWaitingForLikelyToKeepUp;
	MPCPlaybackEngine* _playbackEngine;
	MPMusicPlayerControllerSystemCache* _systemCache;
	NSXPCListener* _listener;
	NSMutableArray* _activeConnections;

}

@property (nonatomic,readonly) MPMusicPlayerControllerSystemCache * systemCache;              //@synthesize systemCache=_systemCache - In the implementation block
@property (nonatomic,readonly) NSXPCListener * listener;                                      //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSMutableArray * activeConnections;                            //@synthesize activeConnections=_activeConnections - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                     //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)stop;
-(NSXPCListenerEndpoint *)endpoint;
-(BOOL)isRunning;
-(void)stopServer;
-(NSMutableArray *)activeConnections;
-(void)play;
-(void)setRepeatMode:(long long)arg1 ;
-(void)endSeek;
-(void)setShuffleMode:(long long)arg1 ;
-(void)setUserQueueModificationsDisabled:(BOOL)arg1 ;
-(void)performQueueModifications:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getNowPlayingWithReply:(/*^block*/id)arg1 ;
-(void)getNowPlayingAtIndex:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)setNowPlayingItem:(id)arg1 itemIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getImageForArtworkIdentifier:(id)arg1 itemIdentifier:(id)arg2 atSize:(CGSize)arg3 reply:(/*^block*/id)arg4 ;
-(void)getTimeSnapshotWithReply:(/*^block*/id)arg1 ;
-(void)getDescriptorWithReply:(/*^block*/id)arg1 ;
-(void)setDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prependDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)appendDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pauseWithFadeDuration:(long long)arg1 ;
-(void)skipWithBehavior:(long long)arg1 ;
-(void)reshuffle;
-(void)beginSeekWithDirection:(long long)arg1 ;
-(void)getRepeatModeWithReply:(/*^block*/id)arg1 ;
-(void)getShuffleModeWithReply:(/*^block*/id)arg1 ;
-(void)setElapsedTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPlaybackRate:(float)arg1 completion:(/*^block*/id)arg2 ;
-(void)getUserQueueModificationsDisabledWithReply:(/*^block*/id)arg1 ;
-(void)startServer;
-(MPCPlaybackEngine *)playbackEngine;
-(id)_nowPlayingWithItem:(id)arg1 ;
-(id)_timeSnapshotWithElapsedTime:(double)arg1 rate:(float)arg2 ;
-(void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2 ;
-(void)engine:(id)arg1 didChangeToItem:(id)arg2 ;
-(void)engine:(id)arg1 didAchieveLikelyToKeepUpWithItem:(id)arg2 ;
-(void)engine:(id)arg1 didEndPlaybackOfItem:(id)arg2 ;
-(void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3 ;
-(void)engine:(id)arg1 didResetQueueWithPlaybackContext:(id)arg2 error:(id)arg3 ;
-(void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2 ;
-(void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2 ;
-(void)engine:(id)arg1 didChangeShuffleType:(long long)arg2 ;
-(void)engine:(id)arg1 didChangeRepeatType:(long long)arg2 ;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(MPMusicPlayerControllerSystemCache *)systemCache;
@end

