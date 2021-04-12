/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UISlider.h>
#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPVolumeDisplaying.h>

@class UIWindowScene, NSString, NSTimer, UILabel, UIImageView, UIView, UIImage, UILayoutGuide, MPVolumeController, MPAVController, MPAVEndpointRoute, MPAVOutputDeviceRoute, MPAVRoute;

@interface MPVolumeSlider : UISlider <MPVolumeControllerDelegate, MPVolumeDisplaying> {

	NSTimer* _commitTimer;
	UILabel* _routeNameLabel;
	long long _style;
	UIImageView* _thumbImageView;
	BOOL _isOffScreen;
	BOOL _forcingOffscreenVisibility;
	BOOL _thumbIsDefault;
	BOOL _configuredLayoutGuide;
	UIView* _volumeWarningView;
	BOOL _volumeWarningBlinking;
	UIImage* _volumeWarningTrackImage;
	BOOL _beganTrackingFromEUVolumeLimit;
	double _originalMinTrackViewAlphaOverride;
	double _originalMinValueViewAlphaOverride;
	double _originalMaxValueViewAlphaOverride;
	BOOL _isCurrentlyTracking;
	float _setVolumeStartValue;
	int _coalescedVolumeDidChangeLogCount;
	BOOL _optimisticState;
	float _optimisticValue;
	UILayoutGuide* _trackLayoutGuide;
	MPVolumeController* _volumeController;
	MPAVController* _player;
	MPAVEndpointRoute* _groupRoute;
	MPAVOutputDeviceRoute* _outputDeviceRoute;
	UIEdgeInsets _hitRectInsets;

}

@property (assign,setter=_setIsOffScreen:,nonatomic) BOOL _isOffScreen; 
@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                                                     //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * trackLayoutGuide;                                             //@synthesize trackLayoutGuide=_trackLayoutGuide - In the implementation block
@property (nonatomic,__weak,readonly) UIView * thumbView; 
@property (nonatomic,retain) MPVolumeController * volumeController;                                          //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) MPAVController * player;                                                        //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) MPAVRoute * route; 
@property (nonatomic,retain) MPAVEndpointRoute * groupRoute;                                                 //@synthesize groupRoute=_groupRoute - In the implementation block
@property (nonatomic,retain) MPAVOutputDeviceRoute * outputDeviceRoute;                                      //@synthesize outputDeviceRoute=_outputDeviceRoute - In the implementation block
@property (assign,getter=isInOptimisticState,nonatomic) BOOL optimisticState;                                //@synthesize optimisticState=_optimisticState - In the implementation block
@property (assign,nonatomic) float optimisticValue;                                                          //@synthesize optimisticValue=_optimisticValue - In the implementation block
@property (nonatomic,readonly) long long style;                                                              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIImage * volumeWarningTrackImage;                                              //@synthesize volumeWarningTrackImage=_volumeWarningTrackImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * volumeControlLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIWindowScene * windowSceneForVolumeDisplay; 
@property (getter=isOnScreenForVolumeDisplay,nonatomic,readonly) BOOL onScreenForVolumeDisplay; 
@property (nonatomic,readonly) NSString * volumeAudioCategory; 
@property (getter=isOnScreen,nonatomic,readonly) BOOL onScreen; 
-(void)dealloc;
-(NSString *)description;
-(long long)style;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(CGRect)hitRect;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(id)createThumbView;
-(float)minimumValue;
-(float)maximumValue;
-(void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setRoute:(MPAVRoute *)arg1 ;
-(MPAVRoute *)route;
-(id)_routeName;
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(UIEdgeInsets)hitRectInsets;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2 ;
-(void)volumeController:(id)arg1 volumeControlCapabilitiesDidChange:(unsigned)arg2 ;
-(void)volumeController:(id)arg1 volumeControlLabelDidChange:(id)arg2 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2 ;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2 ;
-(void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2 ;
-(BOOL)_isOffScreen;
-(UIWindowScene *)windowSceneForVolumeDisplay;
-(BOOL)isOnScreenForVolumeDisplay;
-(NSString *)volumeAudioCategory;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 endpointRoute:(id)arg3 outputDeviceRoute:(id)arg4 ;
-(void)_endTracking;
-(NSString *)volumeControlLabel;
-(void)setOptimisticValue:(float)arg1 ;
-(void)setVolumeController:(MPVolumeController *)arg1 ;
-(void)setGroupRoute:(MPAVEndpointRoute *)arg1 ;
-(void)setOutputDeviceRoute:(MPAVOutputDeviceRoute *)arg1 ;
-(void)setVolumeDataSource:(id)arg1 ;
-(void)setVolumeWarningTrackImage:(UIImage *)arg1 ;
-(void)updateVolume;
-(void)_setIsOffScreen:(BOOL)arg1 ;
-(UIView *)thumbView;
-(void)_commitVolumeChange;
-(id)_thumbImageForStyle:(long long)arg1 ;
-(id)_minTrackImageForStyle:(long long)arg1 ;
-(id)_maxTrackImageForStyle:(long long)arg1 ;
-(void)_resetThumbImageForState:(unsigned long long)arg1 ;
-(void)_layoutForAvailableRoutes;
-(void)_layoutVolumeWarningView;
-(void)_beginBlinkingWarningView;
-(void)_blinkWarningView;
-(void)_endBlinkingWarningView;
-(id)_newVolumeWarningView;
-(void)_logVolumeValueDidChange:(float)arg1 ;
-(UIImage *)volumeWarningTrackImage;
-(UILayoutGuide *)trackLayoutGuide;
-(MPVolumeController *)volumeController;
-(MPAVEndpointRoute *)groupRoute;
-(MPAVOutputDeviceRoute *)outputDeviceRoute;
-(BOOL)isInOptimisticState;
-(void)setOptimisticState:(BOOL)arg1 ;
-(float)optimisticValue;
@end

