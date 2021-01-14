/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/ANLocalPlaybackSessionServiceInterface.h>
#import <libobjc.A.dylib/ANRemotePlaybackSessionServiceInterface.h>
#import <libobjc.A.dylib/ANAnnouncementManagerDelegte.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ANTrackPlayerDelegate.h>
#import <libobjc.A.dylib/ANAnnouncementCoordinationServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSMutableDictionary, NSMutableSet, ANTrackPlayer, ANVolumeController, NSMutableOrderedSet, ANAnnouncementStatePublisher, ANAnnouncementCoordinationService, NSObject, NSString;

@interface ANPlaybackSessionServiceListener : NSObject <ANLocalPlaybackSessionServiceInterface, ANRemotePlaybackSessionServiceInterface, ANAnnouncementManagerDelegte, NSXPCListenerDelegate, ANTrackPlayerDelegate, ANAnnouncementCoordinationServiceDelegate> {

	NSXPCListener* _localPlaybackSessionListener;
	NSXPCListener* _remotePlaybackSessionListener;
	NSMutableDictionary* _recentPlaybackInfo;
	NSMutableSet* _remotePlaybackClients;
	NSMutableSet* _localPlaybackClients;
	ANTrackPlayer* _audioPlayer;
	ANVolumeController* _volumeController;
	NSMutableOrderedSet* _announcementsToPlay;
	long long _lastAnnoucementIndex;
	ANAnnouncementStatePublisher* _playbackStatePublisher;
	/*^block*/id _localPlaybackCompletionHandler;
	unsigned long long _playbackOptions;
	ANAnnouncementCoordinationService* _coordinationService;
	NSObject*<OS_dispatch_queue> _playbackQueue;

}

@property (nonatomic,readonly) NSXPCListener * localPlaybackSessionListener;                       //@synthesize localPlaybackSessionListener=_localPlaybackSessionListener - In the implementation block
@property (nonatomic,readonly) NSXPCListener * remotePlaybackSessionListener;                      //@synthesize remotePlaybackSessionListener=_remotePlaybackSessionListener - In the implementation block
@property (nonatomic,readonly) BOOL isLocalPlaybackSessionActive; 
@property (nonatomic,readonly) BOOL remoteSessionsActive; 
@property (nonatomic,retain) NSMutableDictionary * recentPlaybackInfo;                             //@synthesize recentPlaybackInfo=_recentPlaybackInfo - In the implementation block
@property (retain) NSMutableSet * remotePlaybackClients;                                           //@synthesize remotePlaybackClients=_remotePlaybackClients - In the implementation block
@property (retain) NSMutableSet * localPlaybackClients;                                            //@synthesize localPlaybackClients=_localPlaybackClients - In the implementation block
@property (nonatomic,retain) ANTrackPlayer * audioPlayer;                                          //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,retain) ANVolumeController * volumeController;                                //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * announcementsToPlay;                            //@synthesize announcementsToPlay=_announcementsToPlay - In the implementation block
@property (assign,nonatomic) long long lastAnnoucementIndex;                                       //@synthesize lastAnnoucementIndex=_lastAnnoucementIndex - In the implementation block
@property (nonatomic,retain) ANAnnouncementStatePublisher * playbackStatePublisher;                //@synthesize playbackStatePublisher=_playbackStatePublisher - In the implementation block
@property (nonatomic,copy) id localPlaybackCompletionHandler;                                      //@synthesize localPlaybackCompletionHandler=_localPlaybackCompletionHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long playbackOptions;                                 //@synthesize playbackOptions=_playbackOptions - In the implementation block
@property (nonatomic,retain) ANAnnouncementCoordinationService * coordinationService;              //@synthesize coordinationService=_coordinationService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> playbackQueue;                           //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ANVolumeController *)volumeController;
-(id)init;
-(void)setVolumeController:(ANVolumeController *)arg1 ;
-(void)_removeConnection:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)playbackQueue;
-(void)setPlaybackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ANTrackPlayer *)audioPlayer;
-(void)setAudioPlayer:(ANTrackPlayer *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)endSessionWithReply:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setPlaybackStoppedForAnnouncement:(id)arg1 ;
-(void)setPlaybackStartedForAnnouncement:(id)arg1 ;
-(void)lastPlayedAnnouncementInfo:(/*^block*/id)arg1 ;
-(void)playbackState:(/*^block*/id)arg1 ;
-(void)playAnnouncementsWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)playAnnouncementsWithOptions:(unsigned long long)arg1 startingAt:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)playAnnouncementsWithIDs:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stopPlayingAnnouncementsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)nextAnnouncementWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)previousAnnouncementWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startSessionForGroupID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)announcementsDidChangeForGroupID:(id)arg1 ;
-(NSMutableSet *)remotePlaybackClients;
-(NSMutableSet *)localPlaybackClients;
-(BOOL)_endSessionForConnection:(id)arg1 ;
-(id)_clientForConnection:(id)arg1 ;
-(void)_setTimersActive:(BOOL)arg1 ;
-(NSMutableDictionary *)recentPlaybackInfo;
-(long long)lastAnnoucementIndex;
-(ANAnnouncementCoordinationService *)coordinationService;
-(ANAnnouncementStatePublisher *)playbackStatePublisher;
-(BOOL)remoteSessionsActive;
-(BOOL)isLocalPlaybackSessionActive;
-(void)_updatePlaybackInfoForAnnouncementID:(id)arg1 options:(unsigned long long)arg2 ;
-(void)playAnnouncementsWithIDs:(id)arg1 announceIDToStart:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_playAnnouncementsWithIDs:(id)arg1 announceIDToStart:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_stopAudioPlayer;
-(void)_handlePlaybackEndedWithError:(id)arg1 ;
-(void)setLastAnnoucementIndex:(long long)arg1 ;
-(id)_announcementsForPlaybackOptions:(unsigned long long)arg1 fromAnnouncements:(id)arg2 ;
-(void)setAnnouncementsToPlay:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)announcementsToPlay;
-(void)setLocalPlaybackCompletionHandler:(id)arg1 ;
-(void)_startPlayingAnnouncementsWithOptions:(unsigned long long)arg1 fromSource:(id)arg2 ;
-(unsigned long long)playbackOptions;
-(id)_nextAnnouncementToPlay;
-(void)_setVolume:(unsigned long long)arg1 ;
-(id)_createTrackPlayerWithPlaybackDeadline:(id)arg1 options:(unsigned long long)arg2 adjustedAnchorPoint:(double*)arg3 ;
-(void)_updatePlayerState;
-(id)localPlaybackCompletionHandler;
-(void)trackDidFinishPlaying:(id)arg1 trackType:(long long)arg2 withError:(id)arg3 ;
-(void)audioSessionInterruptionActive:(BOOL)arg1 ;
-(void)didPlayAnnouncement:(id)arg1 ;
-(NSXPCListener *)localPlaybackSessionListener;
-(NSXPCListener *)remotePlaybackSessionListener;
-(void)setRecentPlaybackInfo:(NSMutableDictionary *)arg1 ;
-(void)setRemotePlaybackClients:(NSMutableSet *)arg1 ;
-(void)setLocalPlaybackClients:(NSMutableSet *)arg1 ;
-(void)setPlaybackStatePublisher:(ANAnnouncementStatePublisher *)arg1 ;
-(void)setCoordinationService:(ANAnnouncementCoordinationService *)arg1 ;
@end

