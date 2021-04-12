/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class MPAVItem, MPAVController, NSMutableIndexSet, MPButton, NSString;

@interface MPTransportControls : UIView {

	id _target;
	MPAVItem* _item;
	MPAVController* _player;
	unsigned long long _desiredParts;
	unsigned long long _disabledParts;
	NSMutableIndexSet* _heldParts;
	unsigned long long _visibleParts;
	unsigned _playing : 1;
	BOOL _allowsWirelessPlayback;
	BOOL _registeredForPlayerNotifications;
	MPButton* _alternatesButton;
	MPButton* _bookmarkButton;
	MPButton* _chaptersButton;
	MPButton* _emailButton;
	MPButton* _fastForward15SecondsButton;
	MPButton* _likeOrBanButton;
	MPButton* _nextButton;
	MPButton* _playButton;
	MPButton* _previousButton;
	MPButton* _rewind15SecondsButton;
	MPButton* _rewind30SecondsButton;
	MPButton* _scaleButton;
	MPButton* _toggleFullscreenButton;
	id _volumeSlider;

}

@property (assign,nonatomic) unsigned long long desiredParts;                    //@synthesize desiredParts=_desiredParts - In the implementation block
@property (assign,nonatomic) unsigned long long disabledParts;                   //@synthesize disabledParts=_disabledParts - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                    //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) MPAVController * player;                            //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL registeredForPlayerNotifications;              //@synthesize registeredForPlayerNotifications=_registeredForPlayerNotifications - In the implementation block
@property (assign,nonatomic,__weak) id target;                                   //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) unsigned long long visibleParts;                    //@synthesize visibleParts=_visibleParts - In the implementation block
@property (assign,nonatomic) BOOL allowsWirelessPlayback;                        //@synthesize allowsWirelessPlayback=_allowsWirelessPlayback - In the implementation block
@property (nonatomic,readonly) NSString * playButtonImage; 
@property (nonatomic,readonly) NSString * pauseButtonImage; 
@property (nonatomic,readonly) NSString * playPauseButtonImage; 
+(long long)buttonType;
+(BOOL)buttonImagesUseBackgroundImage;
+(Class)buttonClass;
+(unsigned long long)defaultVisibleParts;
-(id)init;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(MPAVItem *)item;
-(void)setItem:(MPAVItem *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)tintColorDidChange;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1 ;
-(BOOL)allowsWirelessPlayback;
-(void)setAllowsWirelessPlayback:(BOOL)arg1 ;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1 ;
-(unsigned long long)disabledParts;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(unsigned long long)visibleParts;
-(void)setVisibleParts:(unsigned long long)arg1 ;
-(void)registerForPlayerNotifications;
-(void)unregisterForPlayerNotifications;
-(void)setRegisteredForPlayerNotifications:(BOOL)arg1 ;
-(BOOL)registeredForPlayerNotifications;
-(id)buttonForPart:(unsigned long long)arg1 ;
-(void)setDesiredParts:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setVisibleParts:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(NSString *)playButtonImage;
-(NSString *)pauseButtonImage;
-(NSString *)playPauseButtonImage;
-(void)_alternateTypesChangedNotification:(id)arg1 ;
-(void)_availableRoutesChangedNotification:(id)arg1 ;
-(void)_itemDurationDidChangeNotification:(id)arg1 ;
-(void)_timeMarkersAvailableNotification:(id)arg1 ;
-(void)_itemChangedNotification:(id)arg1 ;
-(void)_playbackStateChangedNotification:(id)arg1 ;
-(void)_validityChangedNotification:(id)arg1 ;
-(BOOL)allowsWirelessPlaybackForCurrentItem;
-(void)buttonDown:(id)arg1 ;
-(void)buttonHeld:(id)arg1 ;
-(void)buttonHoldReleased:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(id)newButtonForPart:(unsigned long long)arg1 ;
-(id)newVolumeSlider;
-(void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3 ;
-(id)buttonImageForPart:(unsigned long long)arg1 ;
-(id)disabledButtonImageForPart:(unsigned long long)arg1 ;
-(id)highlightedButtonImageForPart:(unsigned long long)arg1 ;
-(BOOL)showsVolumeSliderWhenNoVolumeControlAvailable;
-(id)tintColorForPart:(unsigned long long)arg1 ;
-(BOOL)alwaysHidesSystemVolumeHUD;
-(BOOL)usesTintColorForControls;
-(unsigned long long)_applyPossibleVisiblePartsToParts:(unsigned long long)arg1 ;
-(void)_applyDesiredPartsWithAnimation:(BOOL)arg1 ;
-(BOOL)_handleHoldForPart:(unsigned long long)arg1 ;
-(BOOL)_handleReleaseForPart:(unsigned long long)arg1 ;
-(BOOL)_handleTapForPart:(unsigned long long)arg1 ;
-(void)_reloadViewWithAnimation:(BOOL)arg1 ;
-(id)_updateAdditions:(id)arg1 removals:(id)arg2 forPart:(unsigned long long)arg3 ;
-(void)_updatePlayButtonImage;
-(void)_updateTintColorForPart:(unsigned long long)arg1 ;
-(void)_updateEnabledStates:(BOOL)arg1 ;
@end

