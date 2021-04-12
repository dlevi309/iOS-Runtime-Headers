/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                       //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) MPNowPlayingInfoCenter * infoCenter;                            //@synthesize infoCenter=_infoCenter - In the implementation block
@property (nonatomic,readonly) MPRemoteCommandCenter * commandCenter;                          //@synthesize commandCenter=_commandCenter - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sessionArchives;                               //@synthesize sessionArchives=_sessionArchives - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sessionIdentifierArchiveMap;              //@synthesize sessionIdentifierArchiveMap=_sessionIdentifierArchiveMap - In the implementation block
@property (nonatomic,readonly) MPCPlayerPath * playerPath; 
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                      //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,readonly) NSString * stateRestorationSessionIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivesAtURL:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)_cachesDirectory;
-(MPCPlayerPath *)playerPath;
-(id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2 ;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2 ;
-(MPCPlaybackEngine *)playbackEngine;
-(MPRemoteCommandCenter *)commandCenter;
-(void)publishIfNeeded;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)_performCommandEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MPNowPlayingInfoCenter *)infoCenter;
-(NSString *)stateRestorationSessionIdentifier;
-(void)loadSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)_playbackSessionsDirectory;
-(void)setStateRestorationSessionIdentifier:(NSString *)arg1 ;
-(void)deleteSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableArray *)sessionArchives;
-(NSMutableDictionary *)sessionIdentifierArchiveMap;
@end

