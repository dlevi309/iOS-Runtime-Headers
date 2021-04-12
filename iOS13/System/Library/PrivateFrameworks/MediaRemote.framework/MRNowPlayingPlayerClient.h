/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>
#import <libobjc.A.dylib/MRTransactionSourceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, _MRPlaybackQueueProtobuf, NSArray, NSDictionary, MRNowPlayingArtwork, NSDate, NSMutableDictionary, NSMutableArray, _MRNowPlayingPlayerPathProtobuf, MRPlaybackQueueSubscriptionController, MRNowPlayingPlayerClientCallbacks, _MRContentItemProtobuf;

@interface MRNowPlayingPlayerClient : NSObject <MRNowPlayingClientState, MRTransactionSourceDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	_MRPlaybackQueueProtobuf* _playbackQueue;
	NSArray* _supportedCommands;
	NSDictionary* _nowPlayingInfo;
	MRNowPlayingArtwork* _nowPlayingArtwork;
	unsigned _playbackState;
	NSDate* _playbackStateDate;
	unsigned long long _capabilities;
	NSDate* _lastReceivedCommandDate;
	BOOL _coalescingInvalidations;
	BOOL _coalescingRequests;
	BOOL _triggerInvalidation;
	double _invalidatationTimestamp;
	NSMutableDictionary* _coelscingTransactionPackets;
	NSMutableArray* _transactionSources;
	NSMutableDictionary* _cachedContentItemUpdates;
	NSMutableDictionary* _pendingPlaybackSessionMigrateEvents;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	MRPlaybackQueueSubscriptionController* _subscriptionController;
	MRNowPlayingPlayerClientCallbacks* _clientCallbacks;

}

@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;                                  //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) NSArray * supportedCommands; 
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@property (nonatomic,retain) MRNowPlayingArtwork * nowPlayingArtwork; 
@property (nonatomic,readonly) unsigned playbackState; 
@property (assign,nonatomic) double invalidatationTimestamp; 
@property (nonatomic,retain) _MRPlaybackQueueProtobuf * playbackQueue; 
@property (assign,nonatomic) unsigned long long capabilities; 
@property (nonatomic,readonly) _MRContentItemProtobuf * nowPlayingContentItem; 
@property (nonatomic,readonly) BOOL hasReceivedCommandRecently; 
@property (nonatomic,readonly) MRPlaybackQueueSubscriptionController * subscriptionController;              //@synthesize subscriptionController=_subscriptionController - In the implementation block
@property (nonatomic,readonly) MRNowPlayingPlayerClientCallbacks * clientCallbacks;                         //@synthesize clientCallbacks=_clientCallbacks - In the implementation block
-(id)description;
-(id)debugDescription;
-(unsigned long long)capabilities;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(unsigned)playbackState;
-(_MRPlaybackQueueProtobuf *)playbackQueue;
-(_MRContentItemProtobuf *)nowPlayingContentItem;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(MRNowPlayingPlayerClientCallbacks *)clientCallbacks;
-(NSArray *)supportedCommands;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(void)setPlaybackQueue:(_MRPlaybackQueueProtobuf *)arg1 ;
-(id)initWithPlayerPath:(id)arg1 ;
-(void)updatePlayer:(id)arg1 ;
-(void)updatePlaybackState:(unsigned)arg1 date:(id)arg2 ;
-(MRPlaybackQueueSubscriptionController *)subscriptionController;
-(void)setNowPlayingArtwork:(MRNowPlayingArtwork *)arg1 ;
-(void)sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2 ;
-(MRNowPlayingArtwork *)nowPlayingArtwork;
-(void)restoreNowPlayingClientState;
-(BOOL)hasReceivedCommandRecently;
-(void)addPendingPlaybackSessionMigrateEvent:(id)arg1 ;
-(BOOL)removePendingPlaybackSessionMigrateEvent:(id)arg1 ;
-(unsigned)resolveCommand:(unsigned)arg1 ;
-(id)resolveCommandOptions:(unsigned)arg1 options:(id)arg2 ;
-(void)setInvalidatationTimestamp:(double)arg1 ;
-(void)clearCachedContentItemArtworkForItems:(id)arg1 ;
-(void)updateCacheWithContentItems:(id)arg1 ;
-(void)cacheContentItemChangesForPendingRequests:(id)arg1 ;
-(void)transactionDidEnd:(id)arg1 ;
-(BOOL)testAndSetCoalescingInvalidations;
-(void)unsetCoalescingInvalidations;
-(void)_handePlaybackSessionMigrateRequest:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateCacheWithPlaybackQueue:(id)arg1 ;
-(void)preProcessChangePlaybackRateCommandWithOptions:(id)arg1 ;
-(void)flushPendingPlaybackSessionMigrateEvents:(/*^block*/id)arg1 ;
-(void)_onQueue_sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2 ;
-(double)invalidatationTimestamp;
-(BOOL)testAndSetCoalescingRequests;
-(BOOL)unsetCoalescingRequests;
-(void)updateCacheWithItem:(id)arg1 ;
-(void)beginSendingTransactions;
-(void)endSendingTransactions;
-(void)addPendingRequest:(id)arg1 ;
-(void)startCachingContentItemUpdatesForItem:(id)arg1 forPendingRequest:(id)arg2 ;
-(void)updatePlaybackQueueWithCachedUpdates:(id)arg1 forPendingRequest:(id)arg2 ;
@end

