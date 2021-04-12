/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISObservable.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/ISKVOProxyDelegate.h>

@protocol OS_dispatch_queue, ISWrappedAVPlayerDelegate;
@class NSObject, AVPlayer, ISWrappedAVAudioSession, AVPlayerItem, NSError, AVVideoComposition, NSMutableDictionary, NSString;

@interface ISWrappedAVPlayer : ISObservable <PXReusableObject, ISKVOProxyDelegate> {

	NSObject*<OS_dispatch_queue> _avPlayerQueue;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	AVPlayer* _playerQueue_avPlayer;
	ISWrappedAVAudioSession* _playerQueue_wrappedAudioSession;
	id _playerQueue_playerItemDidPlayToEndObserver;
	AVPlayerItem* _ivarQueue_currentItem;
	long long _ivarQueue_status;
	NSError* _ivarQueue_error;
	float _ivarQueue_rate;
	float _ivarQueue_volume;
	SCD_Struct_IS8 _ivarQueue_loopTimeRange;
	BOOL _ivarQueue_loopingEnabled;
	BOOL _ivarQueue_audioEnabled;
	BOOL _ivarQueue_preventsSleepDuringVideoPlayback;
	long long _ivarQueue_itemStatus;
	NSError* _ivarQueue_itemError;
	SCD_Struct_IS1 _ivarQueue_itemForwardPlaybackEndTime;
	SCD_Struct_IS1 _ivarQueue_itemDuration;
	BOOL _ivarQueue_itemPlaybackBufferFull;
	AVVideoComposition* _ivarQueue_itemVideoComposition;
	BOOL _ivarQueue_itemIsLikelyToKeepUp;
	BOOL _ivarQueue_itemPlaybackBufferEmpty;
	NSMutableDictionary* _observersByID;
	void* _ivarQueueIdentifier;
	NSString* _playerKVOIdentifier;
	NSString* _playerItemKVOIdentifier;
	id<ISWrappedAVPlayerDelegate> _delegate;

}

@property (getter=isLoopingEnabled) BOOL loopingEnabled; 
@property (__weak) id<ISWrappedAVPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observedAVPlayerItemKeys;
+(id)observedAVPlayerKeys;
-(void)becomeReusable;
-(void)prepareForReuse;
-(void)setVolume:(float)arg1 ;
-(id)init;
-(BOOL)_isOnIvarQueue;
-(id<ISWrappedAVPlayerDelegate>)delegate;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(void)pause;
-(BOOL)isLoopingEnabled;
-(void)_performIvarRead:(/*^block*/id)arg1 ;
-(void)_performIvarWrite:(/*^block*/id)arg1 ;
-(void)setRate:(float)arg1 ;
-(id)error;
-(void)setDelegate:(id<ISWrappedAVPlayerDelegate>)arg1 ;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(SCD_Struct_IS1)currentTime;
-(SCD_Struct_IS1)currentItemDuration;
-(void)setPreventsSleepDuringVideoPlayback:(BOOL)arg1 ;
-(void)setWrappedAudioSession:(id)arg1 ;
-(float)rate;
-(id)currentItem;
-(void)seekToTime:(SCD_Struct_IS1)arg1 toleranceBefore:(SCD_Struct_IS1)arg2 toleranceAfter:(SCD_Struct_IS1)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setLoopingEnabled:(BOOL)arg1 ;
-(id)currentItemError;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_IS1)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setLoopingEnabled:(BOOL)arg1 withTemplateItem:(id)arg2 ;
-(void)removeTimeObserver:(id)arg1 ;
-(id)mutableChangeObject;
-(BOOL)preventsSleepDuringVideoPlayback;
-(BOOL)currentItemPlaybackBufferEmpty;
-(BOOL)currentItemPlaybackBufferFull;
-(BOOL)currentItemIsLikelyToKeepUp;
-(long long)currentItemStatus;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 ;
-(void)setRate:(float)arg1 time:(SCD_Struct_IS1)arg2 atHostTime:(SCD_Struct_IS1)arg3 ;
-(void)prerollAtRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelPendingPrerolls;
-(void)setDimensionsOfReservedVideoMemory:(CGSize)arg1 ;
-(SCD_Struct_IS8)loopTimeRange;
-(float)volume;
-(void)attachToPlayerLayerIfNeeded:(id)arg1 ;
-(BOOL)isAudioEnabled;
-(void)setLoopTimeRange:(SCD_Struct_IS8)arg1 ;
-(long long)status;
-(void)dealloc;
-(void)playToTime:(SCD_Struct_IS1)arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(/*^block*/id)arg4 ;
-(SCD_Struct_IS1)itemForwardPlaybackEndTime;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 thenCall:(/*^block*/id)arg2 ;
-(id)_initWithAVPlayer:(id)arg1 ;
-(void)setItemForwardEndPlaybackTime:(SCD_Struct_IS1)arg1 ;
-(void)observeChangeforKVOProxyIdentifier:(id)arg1 keyPath:(id)arg2 change:(id)arg3 ;
-(void)_assertOnIvarQueue;
-(id)_playerQueue_avPlayer;
-(void)_performPlayerTransaction:(/*^block*/id)arg1 ;
-(void)setItemBlendsVideoFrames:(BOOL)arg1 ;
-(id)_nextObserverUID;
-(void)_playerQueue_startObservingPlayerItem:(id)arg1 ;
-(void)_playerQueue_stopObservingPlayerItem:(id)arg1 ;
-(void)_playerItemDidPlayToEnd:(id)arg1 ;
-(id)_nilOrValue:(id)arg1 ;
-(id)currentItemVideoComposition;
-(void)_playerQueue_updatePlayerItemAudioTracksEnabled;
@end

