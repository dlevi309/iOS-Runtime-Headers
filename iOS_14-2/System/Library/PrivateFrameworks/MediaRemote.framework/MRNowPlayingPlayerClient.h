/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>
#import <libobjc.A.dylib/MRTransactionSourceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, MRPlaybackQueue, NSArray, NSDictionary, MRNowPlayingArtwork, NSDate, NSMutableDictionary, NSMutableArray, MRPlayerPath, MRPlaybackQueueSubscriptionController, MRNowPlayingPlayerClientCallbacks, MRContentItem;

@interface MRNowPlayingPlayerClient : NSObject <MRNowPlayingClientState, MRTransactionSourceDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MRPlaybackQueue* _playbackQueue;
	NSArray* _supportedCommands;
	NSDictionary* _nowPlayingInfo;
	MRNowPlayingArtwork* _nowPlayingArtwork;
	unsigned _playbackState;
	NSDate* _playbackStateDate;
	unsigned long long _capabilities;
	NSDate* _lastReceivedCommandDate;
	NSDate* _activeRequestedDate;
	BOOL _pictureInPictureEnabled;
	BOOL _invalidatingPlaybackQueue;
	double _invalidatationTimestamp;
	NSMutableDictionary* _coelscingTransactionPackets;
	NSMutableArray* _transactionSources;
	NSMutableDictionary* _pendingPlaybackSessionMigrateEvents;
	NSMutableDictionary* _cachedContentItemChangedForPendingPlaybackQueueRequest;
	NSMutableArray* _enqueuedContentItemChangesForPendingPlaybackQueueInvalidation;
	MRPlayerPath* _playerPath;
	MRPlaybackQueueSubscriptionController* _subscriptionController;
	MRNowPlayingPlayerClientCallbacks* _clientCallbacks;

}

@property (assign,nonatomic) BOOL invalidatingPlaybackQueue; 
@property (nonatomic,retain) MRPlayerPath * playerPath;                                                     //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) NSArray * supportedCommands; 
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@property (nonatomic,retain) MRNowPlayingArtwork * nowPlayingArtwork; 
@property (nonatomic,readonly) unsigned playbackState; 
@property (assign,nonatomic) double invalidatationTimestamp; 
@property (nonatomic,retain) MRPlaybackQueue * playbackQueue; 
@property (assign,nonatomic) unsigned long long capabilities; 
@property (nonatomic,readonly) MRContentItem * nowPlayingContentItem; 
@property (nonatomic,readonly) BOOL hasReceivedCommandRecently; 
@property (assign,getter=isPictureInPictureEnabled,nonatomic) BOOL pictureInPictureEnabled; 
@property (nonatomic,retain) NSDate * activeRequestedDate; 
@property (nonatomic,readonly) MRPlaybackQueueSubscriptionController * subscriptionController;              //@synthesize subscriptionController=_subscriptionController - In the implementation block
@property (nonatomic,readonly) MRNowPlayingPlayerClientCallbacks * clientCallbacks;                         //@synthesize clientCallbacks=_clientCallbacks - In the implementation block
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(void)restoreNowPlayingClientState;
-(void)addPendingRequest:(id)arg1 ;
-(id)initWithPlayerPath:(id)arg1 ;
-(void)invalidatePlaybackQueue;
-(void)setPictureInPictureEnabled:(BOOL)arg1 ;
-(unsigned long long)capabilities;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(void)startCachingContentItemUpdatesForItem:(id)arg1 forPendingRequest:(id)arg2 ;
-(void)addPendingPlaybackSessionMigrateEvent:(id)arg1 ;
-(void)updatePlaybackState:(unsigned)arg1 date:(id)arg2 ;
-(void)setActiveRequestedDate:(NSDate *)arg1 ;
-(unsigned)playbackState;
-(id)resolveCommandOptions:(unsigned)arg1 options:(id)arg2 ;
-(MRPlaybackQueue *)playbackQueue;
-(MRNowPlayingPlayerClientCallbacks *)clientCallbacks;
-(void)setPlaybackQueue:(MRPlaybackQueue *)arg1 ;
-(id)debugDescription;
-(NSArray *)supportedCommands;
-(void)updatePlayer:(id)arg1 ;
-(void)clearCachedContentItemArtworkForItems:(id)arg1 ;
-(MRPlaybackQueueSubscriptionController *)subscriptionController;
-(NSDictionary *)nowPlayingInfo;
-(MRContentItem *)nowPlayingContentItem;
-(BOOL)isPictureInPictureEnabled;
-(id)description;
-(void)setInvalidatationTimestamp:(double)arg1 ;
-(void)setNowPlayingArtwork:(MRNowPlayingArtwork *)arg1 ;
-(void)setInvalidatingPlaybackQueue:(BOOL)arg1 ;
-(void)invalidatePlaybackQueueWithPlaybackQueue:(id)arg1 ;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(MRPlayerPath *)playerPath;
-(MRNowPlayingArtwork *)nowPlayingArtwork;
-(BOOL)invalidatingPlaybackQueue;
-(void)endSendingTransactions;
-(void)sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2 ;
-(unsigned)resolveCommand:(unsigned)arg1 ;
-(void)sendContentItemChanges:(id)arg1 ;
-(double)invalidatationTimestamp;
-(NSDate *)activeRequestedDate;
-(void)beginSendingTransactions;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(BOOL)hasReceivedCommandRecently;
-(void)flushPendingPlaybackSessionMigrateEvents:(/*^block*/id)arg1 ;
-(BOOL)removePendingPlaybackSessionMigrateEvent:(id)arg1 ;
-(void)transactionDidEnd:(id)arg1 ;
-(void)updatePlaybackQueueWithCachedUpdates:(id)arg1 forPendingRequest:(id)arg2 ;
@end

