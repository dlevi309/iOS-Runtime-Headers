/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFCameraClipQueueing.h>
#import <libobjc.A.dylib/HFCameraClipPlaying.h>

@protocol HFCameraClipPlayerDelegate, HFCameraClipScrubbing;
@class NSArray, AVPlayer, HMCameraProfile, HFCameraClipPosition, NSError, HFCameraClipPlayerItem, HFCameraClipQueuePlayer, NSString;

@interface HFCameraClipPlayer : NSObject <HFCameraClipQueueing, HFCameraClipPlaying> {

	BOOL _scrubbing;
	BOOL _mutatingQueue;
	id<HFCameraClipPlayerDelegate> _delegate;
	id<HFCameraClipScrubbing> _scrubber;
	HMCameraProfile* _cameraProfile;
	NSArray* _clips;
	NSError* _error;
	HFCameraClipPlayerItem* _lastPlayerItem;
	HFCameraClipQueuePlayer* _queuePlayer;

}

@property (assign,getter=isMutatingQueue,nonatomic) BOOL mutatingQueue;                   //@synthesize mutatingQueue=_mutatingQueue - In the implementation block
@property (nonatomic,retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (assign,nonatomic,__weak) HFCameraClipPlayerItem * lastPlayerItem;              //@synthesize lastPlayerItem=_lastPlayerItem - In the implementation block
@property (nonatomic,readonly) HFCameraClipQueuePlayer * queuePlayer;                     //@synthesize queuePlayer=_queuePlayer - In the implementation block
@property (nonatomic,readonly) AVPlayer * player; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * queuableItems; 
@property (nonatomic,readonly) HMCameraProfile * cameraProfile;                           //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,retain) NSArray * clips;                                             //@synthesize clips=_clips - In the implementation block
@property (assign,nonatomic,__weak) id<HFCameraClipPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<HFCameraClipScrubbing> scrubber;                   //@synthesize scrubber=_scrubber - In the implementation block
@property (nonatomic,copy) HFCameraClipPosition * currentPosition; 
@property (nonatomic,readonly) long long timeControlStatus; 
@property (nonatomic,readonly) BOOL hasFatalError; 
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                           //@synthesize scrubbing=_scrubbing - In the implementation block
-(id)init;
-(void)dealloc;
-(id<HFCameraClipPlayerDelegate>)delegate;
-(void)setDelegate:(id<HFCameraClipPlayerDelegate>)arg1 ;
-(NSError *)error;
-(void)pause;
-(void)setError:(NSError *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)play;
-(AVPlayer *)player;
-(void)removeTimeObserver:(id)arg1 ;
-(long long)timeControlStatus;
-(BOOL)isScrubbing;
-(HFCameraClipPosition *)currentPosition;
-(id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(HFCameraClipQueuePlayer *)queuePlayer;
-(void)setClips:(NSArray *)arg1 ;
-(void)setCurrentPosition:(HFCameraClipPosition *)arg1 ;
-(HMCameraProfile *)cameraProfile;
-(void)setScrubbing:(BOOL)arg1 ;
-(id<HFCameraClipScrubbing>)scrubber;
-(void)setScrubber:(id<HFCameraClipScrubbing>)arg1 ;
-(NSArray *)queuableItems;
-(void)removeQueueableItem:(id)arg1 ;
-(id)createQueueableItemForClipManager:(id)arg1 clip:(id)arg2 ;
-(void)insertQueueableItem:(id)arg1 afterItem:(id)arg2 ;
-(void)seekToOffset:(double)arg1 inItem:(id)arg2 ;
-(NSArray *)clips;
-(id)initWithCameraProfile:(id)arg1 clips:(id)arg2 ;
-(id)initWithCameraProfile:(id)arg1 clips:(id)arg2 queuePlayer:(id)arg3 ;
-(void)_updatePlayerActionAtItemEnd;
-(void)_setupPlayerObservation;
-(BOOL)hasFatalError;
-(void)_rebuildPlayerQueueForPosition:(id)arg1 ;
-(void)_setupObservationForLastPlayerItem:(id)arg1 ;
-(BOOL)isMutatingQueue;
-(void)_updateErrorState;
-(HFCameraClipPlayerItem *)lastPlayerItem;
-(void)playerItemDidPlayToEndTime:(id)arg1 ;
-(void)setMutatingQueue:(BOOL)arg1 ;
-(void)setLastPlayerItem:(HFCameraClipPlayerItem *)arg1 ;
-(void)endScrubbingWithOffset:(double)arg1 ;
@end

