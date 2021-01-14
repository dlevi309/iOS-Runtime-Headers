/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>
#import <libobjc.A.dylib/MPNowPlayingPlaybackQueueDataSource.h>

@protocol OS_dispatch_queue;
@class MPCPlaybackEngine, NSObject, MPNowPlayingInfoCenter, MPRemoteCommandCenter, NSMutableArray, NSMutableDictionary, MPCPlayerPath, NSString;

@interface _MPCPlaybackEngineSessionManager : NSObject <MPCPlaybackEngineEventObserving, MPNowPlayingPlaybackQueueDataSource> {

	MPCPlaybackEngine* _playbackEngine;
	NSObject*<OS_dispatch_queue> _serialQueue;
	MPNowPlayingInfoCenter* _infoCenter;
	MPRemoteCommandCenter* _commandCenter;
	NSMutableArray* _sessionArchives;
	NSMutableDictionary* _sessionIdentifierArchiveMap;
	NSMutableDictionary* _stagedQueueControllers;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                       //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) MPNowPlayingInfoCenter * infoCenter;                            //@synthesize infoCenter=_infoCenter - In the implementation block
@property (nonatomic,readonly) MPRemoteCommandCenter * commandCenter;                          //@synthesize commandCenter=_commandCenter - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sessionArchives;                               //@synthesize sessionArchives=_sessionArchives - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sessionIdentifierArchiveMap;              //@synthesize sessionIdentifierArchiveMap=_sessionIdentifierArchiveMap - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * stagedQueueControllers;                   //@synthesize stagedQueueControllers=_stagedQueueControllers - In the implementation block
@property (nonatomic,readonly) MPCPlayerPath * playerPath; 
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                      //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,retain) NSString * stateRestorationSessionIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivesAtURL:(id)arg1 ;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)stagedQueueControllerIdentifiers;
-(void)stageQueueController:(id)arg1 forIdentifier:(id)arg2 ;
-(NSMutableArray *)sessionArchives;
-(id)queueControllerForIdentifier:(id)arg1 ;
-(NSString *)stateRestorationSessionIdentifier;
-(id)_playbackSessionsDirectory;
-(MPNowPlayingInfoCenter *)infoCenter;
-(void)loadSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)stagedQueueControllers;
-(id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)sessionIdentifierArchiveMap;
-(MPCPlayerPath *)playerPath;
-(BOOL)unstageQueueControllerForIdentifier:(id)arg1 ;
-(void)deleteSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MPRemoteCommandCenter *)commandCenter;
-(void)setStateRestorationSessionIdentifier:(NSString *)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(void)saveSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2 ;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2 ;
-(id)_cachesDirectory;
-(void)_performCommandEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)publishIfNeeded;
@end

