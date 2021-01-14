/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_queue;
@class NSObject, AVPlayer, AVPlayerItem, AVPlayerLayer;

@interface PXFooterAnimatedIconView : UIView {

	unsigned long long _reasonsToPause;
	os_unfair_lock_s _lock;
	long long _lock_desiredMode;
	NSObject*<OS_dispatch_queue> _queue;
	AVPlayer* _player;
	SCD_Struct_PX8 _introStartTime;
	SCD_Struct_PX8 _loopStartTime;
	SCD_Struct_PX8 _loopEndTime;
	SCD_Struct_PX8 _outroEndTime;
	float _playerRateBeforePause;
	id _gridCycleTimeObservationToken;
	long long _waitingState;
	double _waitingStateStartTime;
	BOOL _wantsGridCycleTimeObservation;
	BOOL _isPlayerHidden;
	BOOL _isPlayerPaused;
	AVPlayerItem* _playerItem;
	long long _style;
	AVPlayerLayer* _playerLayer;

}

@property (nonatomic,retain) AVPlayerLayer * playerLayer;                     //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                       //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) BOOL isPlayerHidden;                             //@synthesize isPlayerHidden=_isPlayerHidden - In the implementation block
@property (assign,nonatomic) BOOL isPlayerPaused;                             //@synthesize isPlayerPaused=_isPlayerPaused - In the implementation block
@property (assign,nonatomic) BOOL wantsGridCycleTimeObservation;              //@synthesize wantsGridCycleTimeObservation=_wantsGridCycleTimeObservation - In the implementation block
@property (assign,nonatomic) long long style;                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) BOOL isObscured; 
@property (nonatomic,readonly) long long presentedState; 
@property (assign) long long desiredMode; 
-(void)_updateStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(long long)desiredMode;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(void)layoutSubviews;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_movieURL;
-(void)_windowDidChange;
-(void)_addReasonToPause:(unsigned long long)arg1 ;
-(void)_removeReasonToPause:(unsigned long long)arg1 ;
-(void)_updateIsPlayerPaused;
-(void)_layoutPlayer;
-(BOOL)wantsGridCycleTimeObservation;
-(void)setWantsGridCycleTimeObservation:(BOOL)arg1 ;
-(void)_crossedGridCycleBoundary;
-(void)_hideVideo;
-(void)_createPlayerIfNeeded;
-(void)_seekToTime:(SCD_Struct_PX8)arg1 ;
-(void)_didSeekToTime:(SCD_Struct_PX8)arg1 ;
-(void)_playFromTime:(SCD_Struct_PX8)arg1 toTime:(SCD_Struct_PX8)arg2 ;
-(void)_didSeekToPlayFromTime:(SCD_Struct_PX8)arg1 toTime:(SCD_Struct_PX8)arg2 ;
-(BOOL)isObscured;
-(void)_didPlayerToEndTime:(id)arg1 ;
-(void)setIsPlayerHidden:(BOOL)arg1 ;
-(BOOL)isPlayerPaused;
-(void)setIsPlayerPaused:(BOOL)arg1 ;
-(long long)presentedState;
-(void)_applicationDidEnterForeground:(id)arg1 ;
-(void)_update;
-(void)setDesiredMode:(long long)arg1 ;
-(BOOL)isPlayerHidden;
-(void)setStyle:(long long)arg1 ;
-(void)_setNeedsUpdate;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(long long)style;
-(AVPlayerItem *)playerItem;
-(void)dealloc;
-(void)_transitionToState:(long long)arg1 ;
-(AVPlayerLayer *)playerLayer;
@end

