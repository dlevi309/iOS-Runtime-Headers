/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVClippingTableViewCell.h>
#import <libobjc.A.dylib/MPAVRoutingThemeableCellView.h>

@protocol MPAVRoutingTableViewCellDelegate;
@class UIImageView, UILabel, NSTimer, UIActivityIndicatorView, MPVolumeSlider, MPAVRoutingTableViewCellSubtitleTextState, NSString;

@interface MPAVRoutingTableViewCell : MPAVClippingTableViewCell <MPAVRoutingThemeableCellView> {

	UIImageView* _iconImageView;
	UILabel* _routeNameLabel;
	UILabel* _subtitleTextLabel;
	NSTimer* _subtitleTextUpdateTimer;
	UIActivityIndicatorView* _spinnerView;
	UIImageView* _smartAudioImageView;
	UIImageView* _checkmarkImageView;
	BOOL _mirroringSwitchVisible;
	BOOL _pendingSelection;
	BOOL _isDisplayedAsPicked;
	BOOL _useSmartAudioCheckmarkStyle;
	BOOL _provideOwnSeparator;
	BOOL _showingVolumeSlider;
	id<MPAVRoutingTableViewCellDelegate> _delegate;
	unsigned long long _mirroringStyle;
	unsigned long long _iconStyle;
	double _subtitleViewAlpha;
	MPVolumeSlider* _volumeSlider;
	MPAVRoutingTableViewCellSubtitleTextState* _subtitleTextState;

}

@property (nonatomic,retain) MPAVRoutingTableViewCellSubtitleTextState * subtitleTextState;              //@synthesize subtitleTextState=_subtitleTextState - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVRoutingTableViewCellDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL mirroringSwitchVisible;                                                //@synthesize mirroringSwitchVisible=_mirroringSwitchVisible - In the implementation block
@property (assign,nonatomic) unsigned long long mirroringStyle;                                          //@synthesize mirroringStyle=_mirroringStyle - In the implementation block
@property (assign,nonatomic) unsigned long long iconStyle;                                               //@synthesize iconStyle=_iconStyle - In the implementation block
@property (assign,getter=isPendingSelection,nonatomic) BOOL pendingSelection;                            //@synthesize pendingSelection=_pendingSelection - In the implementation block
@property (assign,nonatomic) BOOL isDisplayedAsPicked;                                                   //@synthesize isDisplayedAsPicked=_isDisplayedAsPicked - In the implementation block
@property (assign,nonatomic) BOOL useSmartAudioCheckmarkStyle;                                           //@synthesize useSmartAudioCheckmarkStyle=_useSmartAudioCheckmarkStyle - In the implementation block
@property (assign,nonatomic) BOOL provideOwnSeparator;                                                   //@synthesize provideOwnSeparator=_provideOwnSeparator - In the implementation block
@property (assign,nonatomic) double subtitleViewAlpha;                                                   //@synthesize subtitleViewAlpha=_subtitleViewAlpha - In the implementation block
@property (nonatomic,retain) MPVolumeSlider * volumeSlider;                                              //@synthesize volumeSlider=_volumeSlider - In the implementation block
@property (assign,getter=isShowingVolumeSlider,nonatomic) BOOL showingVolumeSlider;                      //@synthesize showingVolumeSlider=_showingVolumeSlider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MPAVRoutingTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<MPAVRoutingTableViewCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg1 ;
-(id)separatorView;
-(id)titleView;
-(void)setAccessoryType:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)iconView;
-(void)_updateAccessory;
-(id)subtitleView;
-(MPVolumeSlider *)volumeSlider;
-(void)setSubtitleViewAlpha:(double)arg1 ;
-(void)updateForEndpoint:(id)arg1 routeItem:(id)arg2 inferLocalizedModelName:(BOOL)arg3 ;
-(id)volumeView;
-(void)setMirroringStyle:(unsigned long long)arg1 ;
-(void)setPendingSelection:(BOOL)arg1 ;
-(void)setUseSmartAudioCheckmarkStyle:(BOOL)arg1 ;
-(void)setVolumeSlider:(MPVolumeSlider *)arg1 ;
-(void)setShowingVolumeSlider:(BOOL)arg1 ;
-(void)setIconStyle:(unsigned long long)arg1 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_configureLabel:(id)arg1 ;
-(void)_configureDetailLabel:(id)arg1 ;
-(BOOL)_shouldShowSeparateBatteryPercentagesForBatteryLevel:(id)arg1 ;
-(id)_batteryTextForRoute:(id)arg1 ;
-(id)_pairedDeviceTextForRoute:(id)arg1 ;
-(id)_iconImageForRoute:(id)arg1 ;
-(id)_checkmarkImageNameForSmartAudio;
-(id)_checkmarkAccessibilityLabelForSmartAudio;
-(id)_checkmarkImageForSmartAudio;
-(void)_updateSubtitleTextLabelForRouteItem:(id)arg1 ;
-(void)_updateSpinnerColor;
-(void)_animateSubtitleLabelToNextAvailableText;
-(BOOL)mirroringSwitchVisible;
-(void)setMirroringSwitchVisible:(BOOL)arg1 ;
-(unsigned long long)mirroringStyle;
-(unsigned long long)iconStyle;
-(BOOL)isPendingSelection;
-(BOOL)isDisplayedAsPicked;
-(void)setIsDisplayedAsPicked:(BOOL)arg1 ;
-(BOOL)useSmartAudioCheckmarkStyle;
-(BOOL)provideOwnSeparator;
-(void)setProvideOwnSeparator:(BOOL)arg1 ;
-(double)subtitleViewAlpha;
-(BOOL)isShowingVolumeSlider;
-(MPAVRoutingTableViewCellSubtitleTextState *)subtitleTextState;
-(void)setSubtitleTextState:(MPAVRoutingTableViewCellSubtitleTextState *)arg1 ;
@end

