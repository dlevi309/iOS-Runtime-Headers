/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MPAVLightweightRoutingControllerDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MPAVLightweightRoutingController, UIButton, UILabel, MPMediaControls, MPVolumeSlider, UIImage, NSString;

@interface MPVolumeView : UIView <MPAVLightweightRoutingControllerDelegate, NSCoding> {

	MPAVLightweightRoutingController* _lightweightRoutingController;
	BOOL _hasNonDefaultRouteButtonImages;
	BOOL _hasNonDefaultMaxVolumeSliderImage;
	BOOL _hasNonDefaultMinVolumeSliderImage;
	BOOL _hidesRouteLabelWhenNoRouteChoice;
	UIButton* _routeButton;
	BOOL _routeButtonShowsTouchWhenHighlighted;
	BOOL _routeDiscoveryEnabled;
	UILabel* _routeLabel;
	BOOL _showingButton;
	BOOL _showingLabel;
	BOOL _showingSlider;
	BOOL _showsRouteButton;
	BOOL _showsVolumeSlider;
	long long _style;
	MPMediaControls* _mediaControls;
	MPVolumeSlider* _volumeSlider;
	BOOL _volumeSliderShrinksFromBothEnds;
	BOOL _wirelessRouteIsPicked;
	BOOL _wirelessRoutesAvailable;
	BOOL _pushedRouteDiscoveryModeState;

}

@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) MPVolumeSlider * volumeSlider; 
@property (assign,nonatomic) BOOL volumeSliderShrinksFromBothEnds; 
@property (assign,nonatomic) BOOL hidesRouteLabelWhenNoRouteChoice; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) BOOL isShowingRouteButton; 
@property (assign,nonatomic) BOOL routeButtonShowsTouchWhenHighlighted; 
@property (assign,nonatomic) BOOL showsVolumeSlider; 
@property (assign,nonatomic) BOOL showsRouteButton; 
@property (getter=areWirelessRoutesAvailable,nonatomic,readonly) BOOL wirelessRoutesAvailable; 
@property (getter=isWirelessRouteActive,nonatomic,readonly) BOOL wirelessRouteActive; 
@property (nonatomic,retain) UIImage * volumeWarningSliderImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)didMoveToSuperview;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isVisible;
-(id)initWithCoder:(id)arg1 ;
-(MPVolumeSlider *)volumeSlider;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_initWithStyle:(long long)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)lightweightRoutingController:(id)arg1 didChangePickedRoutes:(id)arg2 ;
-(void)lightweightRoutingController:(id)arg1 didChangeDevicePresenceDetected:(BOOL)arg2 ;
-(long long)style;
-(id)_routeButton;
-(BOOL)isWirelessRouteActive;
-(BOOL)areWirelessRoutesAvailable;
-(id)minimumVolumeSliderImageForState:(unsigned long long)arg1 ;
-(id)maximumVolumeSliderImageForState:(unsigned long long)arg1 ;
-(UIImage *)volumeWarningSliderImage;
-(id)routeButtonImageForState:(unsigned long long)arg1 ;
-(BOOL)routeButtonShowsTouchWhenHighlighted;
-(CGRect)routeButtonRectForBounds:(CGRect)arg1 ;
-(void)setVolumeWarningSliderImage:(UIImage *)arg1 ;
-(void)setMinimumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setMaximumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setShowsRouteButton:(BOOL)arg1 ;
-(void)setRouteButtonImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setRouteButtonShowsTouchWhenHighlighted:(BOOL)arg1 ;
-(void)setShowsVolumeSlider:(BOOL)arg1 ;
-(void)setVolumeThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)showsRouteButton;
-(BOOL)showsVolumeSlider;
-(CGRect)volumeSliderRectForBounds:(CGRect)arg1 ;
-(id)volumeThumbImageForState:(unsigned long long)arg1 ;
-(CGRect)volumeThumbRectForBounds:(CGRect)arg1 volumeSliderRect:(CGRect)arg2 value:(float)arg3 ;
-(BOOL)isShowingRouteButton;
-(void)dealloc;
-(BOOL)hidesRouteLabelWhenNoRouteChoice;
-(BOOL)volumeSliderShrinksFromBothEnds;
-(void)_loadAudioRoutePickerIfNeeded;
-(void)setHidesRouteLabelWhenNoRouteChoice:(BOOL)arg1 ;
-(void)setVolumeSliderShrinksFromBothEnds:(BOOL)arg1 ;
-(void)_createSubviews;
-(id)_defaultRouteButtonImageAsSelected:(BOOL)arg1 ;
-(void)_displayAudioRoutePicker;
-(void)_startPrewarmingAudioRoutePicker;
-(void)_stopPrewarmingAudioRoutePicker;
-(void)_getDefaultVolumeSliderFrame:(CGRect*)arg1 routeButtonFrame:(CGRect*)arg2 forBounds:(CGRect)arg3 ;
-(void)_setShowsRouteButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setShowsVolumeSlider:(BOOL)arg1 ;
-(void)_setRouteDiscoveryEnabled:(BOOL)arg1 ;
-(void)_updateWirelessRouteStatus;
-(void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg1 ;
@end

