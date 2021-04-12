/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)volumeControlLabel;
-(MPAVController *)player;
-(void)setVolumeDataSource:(id)arg1 ;
-(void)setRoute:(MPAVRoute *)arg1 ;
-(void)setOutputDeviceRoute:(MPAVOutputDeviceRoute *)arg1 ;
-(MPAVEndpointRoute *)groupRoute;
-(float)maximumValue;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)setGroupRoute:(MPAVEndpointRoute *)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(NSString *)volumeAudioCategory;
-(void)_resetThumbImageForState:(unsigned long long)arg1 ;
-(MPAVOutputDeviceRoute *)outputDeviceRoute;
-(void)_layoutForAvailableRoutes;
-(CGRect)hitRect;
-(MPAVRoute *)route;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(MPVolumeController *)volumeController;
-(UIEdgeInsets)hitRectInsets;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setVolumeController:(MPVolumeController *)arg1 ;
-(void)setVolumeWarningTrackImage:(UIImage *)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)_endTracking;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UIImage *)volumeWarningTrackImage;
-(void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(UIWindowScene *)windowSceneForVolumeDisplay;
-(UILayoutGuide *)trackLayoutGuide;
-(void)didMoveToSuperview;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)updateVolume;
-(BOOL)isInOptimisticState;
-(BOOL)_isOffScreen;
-(BOOL)isOnScreenForVolumeDisplay;
-(void)_layoutVolumeWarningView;
-(void)volumeController:(id)arg1 volumeControlLabelDidChange:(id)arg2 ;
-(NSString *)description;
-(id)_maxTrackImageForStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 endpointRoute:(id)arg3 outputDeviceRoute:(id)arg4 ;
-(void)_setIsOffScreen:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)volumeController:(id)arg1 volumeControlCapabilitiesDidChange:(unsigned)arg2 ;
-(id)_routeName;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)_blinkWarningView;
-(void)_endBlinkingWarningView;
-(void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2 ;
-(void)_beginBlinkingWarningView;
-(id)_newVolumeWarningView;
-(void)setOptimisticValue:(float)arg1 ;
-(id)createThumbView;
-(float)optimisticValue;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_commitVolumeChange;
-(float)minimumValue;
-(void)_logVolumeValueDidChange:(float)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2 ;
-(UIView *)thumbView;
-(void)setOptimisticState:(BOOL)arg1 ;
-(id)_minTrackImageForStyle:(long long)arg1 ;
-(long long)style;
-(void)dealloc;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2 ;
-(id)_thumbImageForStyle:(long long)arg1 ;
@end

