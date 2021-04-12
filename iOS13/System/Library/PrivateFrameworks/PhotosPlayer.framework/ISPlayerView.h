/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/ISBasePlayerDelegate.h>

@protocol ISPlayerViewDelegate;
@class NSError, ISBasePlayerUIView, ISWrappedAVPlayer, ISPlayerItem, UIGestureRecognizer, NSMutableSet, NSString;

@interface ISPlayerView : UIView <ISChangeObserver, ISBasePlayerDelegate> {

	SCD_Struct_IS11 _delegateRespondsTo;
	SCD_Struct_IS12 _isValid;
	BOOL _audioMuted;
	BOOL _isReadyForDisplay;
	BOOL _isInteracting;
	BOOL _readyForDisplay;
	long long _playbackState;
	long long _status;
	NSError* _error;
	id<ISPlayerViewDelegate> _delegate;
	ISBasePlayerUIView* __playerView;
	ISWrappedAVPlayer* __videoPlayer;
	ISPlayerItem* __playerItem;
	UIGestureRecognizer* __gestureRecognizer;
	NSMutableSet* __activeGestures;
	unsigned long long _playbackStyle;
	CGSize _dimensionsOfReservedVideoMemory;

}

@property (setter=_setPlayerView:,nonatomic,retain) ISBasePlayerUIView * _playerView;                             //@synthesize _playerView=__playerView - In the implementation block
@property (nonatomic,readonly) ISWrappedAVPlayer * _videoPlayer;                                                  //@synthesize _videoPlayer=__videoPlayer - In the implementation block
@property (setter=_setPlayerItem:,nonatomic,retain) ISPlayerItem * _playerItem;                                   //@synthesize _playerItem=__playerItem - In the implementation block
@property (setter=_setGestureRecognizer:,nonatomic,retain) UIGestureRecognizer * _gestureRecognizer;              //@synthesize _gestureRecognizer=__gestureRecognizer - In the implementation block
@property (assign,setter=_setStatus:,nonatomic) long long status;                                                 //@synthesize status=_status - In the implementation block
@property (assign,setter=_setPlaybackState:,nonatomic) long long playbackState;                                   //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,setter=_setReadyForDisplay:,nonatomic) BOOL readyForDisplay;                                    //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _activeGestures;                                                    //@synthesize _activeGestures=__activeGestures - In the implementation block
@property (assign,nonatomic) unsigned long long playbackStyle;                                                    //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (assign,nonatomic) CGSize dimensionsOfReservedVideoMemory;                                              //@synthesize dimensionsOfReservedVideoMemory=_dimensionsOfReservedVideoMemory - In the implementation block
@property (assign,nonatomic) BOOL audioMuted;                                                                     //@synthesize audioMuted=_audioMuted - In the implementation block
@property (nonatomic,readonly) BOOL isReadyForDisplay;                                                            //@synthesize isReadyForDisplay=_isReadyForDisplay - In the implementation block
@property (nonatomic,readonly) BOOL isInteracting;                                                                //@synthesize isInteracting=_isInteracting - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * gestureRecognizer; 
@property (assign,nonatomic,__weak) id<ISPlayerViewDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setAllowPlayerReuse:(BOOL)arg1 ;
-(id<ISPlayerViewDelegate>)delegate;
-(void)setDelegate:(id<ISPlayerViewDelegate>)arg1 ;
-(NSError *)error;
-(long long)status;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(UIGestureRecognizer *)gestureRecognizer;
-(UIGestureRecognizer *)_gestureRecognizer;
-(NSMutableSet *)_activeGestures;
-(BOOL)_needsUpdate;
-(BOOL)isInteracting;
-(BOOL)isReadyForDisplay;
-(CGSize)dimensionsOfReservedVideoMemory;
-(void)setDimensionsOfReservedVideoMemory:(CGSize)arg1 ;
-(ISPlayerItem *)_playerItem;
-(void)_setStatus:(long long)arg1 ;
-(unsigned long long)playbackStyle;
-(void)setPlaybackStyle:(unsigned long long)arg1 ;
-(long long)playbackState;
-(BOOL)readyForDisplay;
-(ISBasePlayerUIView *)_playerView;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(ISWrappedAVPlayer *)_videoPlayer;
-(void)_updateIfNeeded;
-(id)initWithVideoPlayer:(id)arg1 ;
-(void)setAudioMuted:(BOOL)arg1 ;
-(void)prepareWithPhoto:(CGImageRef)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 ;
-(void)_setPlayerItem:(id)arg1 ;
-(void)_setPlaybackState:(long long)arg1 ;
-(void)_invalidateStatus;
-(void)_setGestureRecognizer:(id)arg1 ;
-(void)_invalidatePlaybackState;
-(void)_updatePlaybackStateIfNeeded;
-(void)_updateStatusIfNeeded;
-(void)_invalidatePlayerItemLoadingTarget;
-(void)_updatePlayerItemLoadingTargetIfNeeded;
-(void)_setReadyForDisplay:(BOOL)arg1 ;
-(id)videoPlayerForPlayer:(id)arg1 ;
-(void)prepareWithPlayerItem:(id)arg1 ;
-(void)_handleGesture:(id)arg1 ;
-(void)_setInteracting:(BOOL)arg1 ;
-(void)_setPlayerView:(id)arg1 ;
-(void)_invalidatePlayerPlayerItem;
-(void)_invalidatePlayerView;
-(void)_invalidatePlayerMuted;
-(void)_invalidateReadyForDisplay;
-(void)_updatePlayerViewIfNeeded;
-(void)_updatePlayerPlayerItemIfNeeded;
-(void)_updatePlayerMutedIfNeeded;
-(void)_updateReadyForDisplayIfNeeded;
-(BOOL)audioMuted;
@end

