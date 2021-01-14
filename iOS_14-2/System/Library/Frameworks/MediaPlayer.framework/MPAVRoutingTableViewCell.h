/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVClippingTableViewCell.h>
#import <libobjc.A.dylib/MPAVRoutingThemeableCellView.h>

@protocol MPAVRoutingTableViewCellDelegate;
@class UIImageView, UILabel, NSTimer, UIActivityIndicatorView, UIView, MPVolumeSlider, MPAVRoutingTableViewCellSubtitleTextState, NSString;

@interface MPAVRoutingTableViewCell : MPAVClippingTableViewCell <MPAVRoutingThemeableCellView> {

	UIImageView* _iconImageView;
	UILabel* _routeNameLabel;
	UILabel* _subtitleTextLabel;
	NSTimer* _subtitleTextUpdateTimer;
	UIActivityIndicatorView* _spinnerView;
	UIImageView* _smartAudioImageView;
	UIImageView* _checkmarkImageView;
	UIImageView* _chevronImageView;
	UIView* _expandTargetView;
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
-(void)_updateAccessory;
-(void)_updateSubtitleTextLabelForRouteItem:(id)arg1 ;
-(id)separatorView;
-(id)titleView;
-(void)setTintColor:(id)arg1 ;
-(BOOL)isPendingSelection;
-(void)setSubtitleViewAlpha:(double)arg1 ;
-(id<MPAVRoutingTableViewCellDelegate>)delegate;
-(id)_checkmarkImageNameForSmartAudio;
-(void)updateForEndpoint:(id)arg1 routeItem:(id)arg2 inferLocalizedModelName:(BOOL)arg3 ;
-(void)setVolumeSlider:(MPVolumeSlider *)arg1 ;
-(BOOL)_shouldShowSeparateBatteryPercentagesForBatteryLevel:(id)arg1 ;
-(void)prepareForReuse;
-(double)subtitleViewAlpha;
-(void)setSubtitleTextState:(MPAVRoutingTableViewCellSubtitleTextState *)arg1 ;
-(id)subtitleView;
-(unsigned long long)iconStyle;
-(void)_configureLabel:(id)arg1 ;
-(void)_updateSpinnerColor;
-(unsigned long long)mirroringStyle;
-(void)setPendingSelection:(BOOL)arg1 ;
-(id)_checkmarkImageForSmartAudio;
-(void)setDelegate:(id<MPAVRoutingTableViewCellDelegate>)arg1 ;
-(MPAVRoutingTableViewCellSubtitleTextState *)subtitleTextState;
-(void)layoutSubviews;
-(id)_batteryTextForRoute:(id)arg1 ;
-(id)iconView;
-(BOOL)isDisplayedAsPicked;
-(id)volumeView;
-(id)_checkmarkAccessibilityLabelForSmartAudio;
-(void)setShowingVolumeSlider:(BOOL)arg1 ;
-(void)setAccessoryType:(long long)arg1 ;
-(BOOL)isShowingVolumeSlider;
-(void)setIsDisplayedAsPicked:(BOOL)arg1 ;
-(void)_configureDetailLabel:(id)arg1 ;
-(BOOL)useSmartAudioCheckmarkStyle;
-(void)didTapToExpand;
-(id)_pairedDeviceTextForRoute:(id)arg1 ;
-(MPVolumeSlider *)volumeSlider;
-(BOOL)provideOwnSeparator;
-(id)_iconImageForRoute:(id)arg1 ;
-(void)setIconStyle:(unsigned long long)arg1 ;
-(void)setProvideOwnSeparator:(BOOL)arg1 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_animateSubtitleLabelToNextAvailableText;
-(id)_iconImageForRoutes:(id)arg1 ;
-(BOOL)mirroringSwitchVisible;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)setMirroringStyle:(unsigned long long)arg1 ;
-(void)setMirroringSwitchVisible:(BOOL)arg1 ;
-(void)setUseSmartAudioCheckmarkStyle:(BOOL)arg1 ;
@end

