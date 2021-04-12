/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class _MRPlaybackQueueProtobuf, NSArray, NSObject, NSMutableDictionary, NSMutableArray, NSOperationQueue, _MRNowPlayingPlayerPathProtobuf, MRPlaybackQueueSubscriptionController;

@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState> {

	_MRPlaybackQueueProtobuf* _playbackQueue;
	unsigned _playbackState;
	NSArray* _supportedCommands;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _responseQueue;
	NSMutableDictionary* _playbackQueueCompletions;
	NSMutableArray* _supportedCommandsCompletions;
	NSMutableArray* _playbackStateCompletions;
	NSMutableDictionary* _transactionCallbacks;
	NSMutableDictionary* _transactions;
	NSOperationQueue* _enquedNowPlayingInfoRequests;
	NSOperationQueue* _enquedNowPlayingInfoAssetRequests;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	MRPlaybackQueueSubscriptionController* _subscriptionController;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;                                //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) MRPlaybackQueueSubscriptionController * subscriptionController;              //@synthesize subscriptionController=_subscriptionController - In the implementation block
@property (assign,nonatomic) unsigned playbackState; 
@property (nonatomic,copy) _MRPlaybackQueueProtobuf * playbackQueue; 
@property (nonatomic,retain) NSArray * supportedCommands; 
-(void)dealloc;
-(id)debugDescription;
-(unsigned)playbackState;
-(_MRPlaybackQueueProtobuf *)playbackQueue;
-(void)setPlaybackState:(unsigned)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(NSArray *)supportedCommands;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(void)setPlaybackQueue:(_MRPlaybackQueueProtobuf *)arg1 ;
-(id)initWithPlayerPath:(id)arg1 ;
-(void)handlePlaybackStateRequestWithCompletion:(/*^block*/id)arg1 ;
-(MRPlaybackQueueSubscriptionController *)subscriptionController;
-(void)handleSupportedCommandsRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)restoreNowPlayingClientState;
-(void)receiveTransaction:(unsigned long long)arg1 fromMessage:(id)arg2 ;
-(void)addPlaybackQueueCompletion:(/*^block*/id)arg1 forRequest:(id)arg2 ;
-(void)removePlaybackQueueCompletionForRequest:(id)arg1 ;
-(void)enqueuePlaybackQueueRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateContentItems:(id)arg1 ;
-(void)updateContentItemArtwork:(id)arg1 ;
-(void)_registerDefaultCallbacks;
-(void)_handleEnqueuedPlaybackQueueRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePlaybackQueue:(id)arg1 ;
-(id)_transactionDestintationForName:(unsigned long long)arg1 ;
-(void)_handleTransactionPackets:(id)arg1 packets:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)transactionCallbacksForName:(unsigned long long)arg1 ;
-(void)addTransactionCallback:(/*^block*/id)arg1 forName:(unsigned long long)arg2 ;
@end

