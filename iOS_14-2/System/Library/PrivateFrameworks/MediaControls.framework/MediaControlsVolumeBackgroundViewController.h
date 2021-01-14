/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <ControlCenterUIKit/CCUISliderModuleBackgroundViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MediaControls/MediaControlsVolumeControllerObserver.h>

@class MediaControlsVolumeController, MediaControlsRouteView, MediaControlsBluetoothListeningModeButton, MediaControlsExpandableButton, NSTimer, NSString;

@interface MediaControlsVolumeBackgroundViewController : CCUISliderModuleBackgroundViewController <UIGestureRecognizerDelegate, MediaControlsVolumeControllerObserver> {

	MediaControlsVolumeController* _volumeController;
	MediaControlsRouteView* _primaryRouteView;
	MediaControlsRouteView* _secondaryRouteView;
	MediaControlsBluetoothListeningModeButton* _primaryBluetoothListeningModeButton;
	MediaControlsBluetoothListeningModeButton* _secondaryBluetoothListeningModeButton;
	MediaControlsExpandableButton* _spatialExpandableButton;
	NSTimer* _primaryUpdateTimer;
	NSTimer* _secondaryUpdateTimer;

}

@property (nonatomic,retain) MediaControlsRouteView * primaryRouteView;                                                      //@synthesize primaryRouteView=_primaryRouteView - In the implementation block
@property (nonatomic,retain) MediaControlsRouteView * secondaryRouteView;                                                    //@synthesize secondaryRouteView=_secondaryRouteView - In the implementation block
@property (nonatomic,retain) MediaControlsBluetoothListeningModeButton * primaryBluetoothListeningModeButton;                //@synthesize primaryBluetoothListeningModeButton=_primaryBluetoothListeningModeButton - In the implementation block
@property (nonatomic,retain) MediaControlsBluetoothListeningModeButton * secondaryBluetoothListeningModeButton;              //@synthesize secondaryBluetoothListeningModeButton=_secondaryBluetoothListeningModeButton - In the implementation block
@property (nonatomic,retain) MediaControlsExpandableButton * spatialExpandableButton;                                        //@synthesize spatialExpandableButton=_spatialExpandableButton - In the implementation block
@property (nonatomic,retain) NSTimer * primaryUpdateTimer;                                                                   //@synthesize primaryUpdateTimer=_primaryUpdateTimer - In the implementation block
@property (nonatomic,retain) NSTimer * secondaryUpdateTimer;                                                                 //@synthesize secondaryUpdateTimer=_secondaryUpdateTimer - In the implementation block
@property (nonatomic,retain) MediaControlsVolumeController * volumeController;                                               //@synthesize volumeController=_volumeController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapPrimaryBluetoothListeningModeButton:(id)arg1 ;
-(void)_updateButton:(id)arg1 routeType:(long long)arg2 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(MediaControlsVolumeController *)volumeController;
-(void)primaryBluetoothListeningModeButtonDidChangeValue:(id)arg1 ;
-(void)mediaControlsVolumeController:(id)arg1 didChangeVolumeAvailable:(BOOL)arg2 effectiveVolume:(float)arg3 forRoute:(long long)arg4 ;
-(void)setVolumeController:(MediaControlsVolumeController *)arg1 ;
-(void)setSecondaryBluetoothListeningModeButton:(MediaControlsBluetoothListeningModeButton *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSecondaryRouteView:(MediaControlsRouteView *)arg1 ;
-(NSTimer *)secondaryUpdateTimer;
-(double)_verticalPadding;
-(void)_configureOptionsButton:(id)arg1 forRouteType:(long long)arg2 ;
-(NSTimer *)primaryUpdateTimer;
-(void)_configureRouteView:(id)arg1 forRouteType:(long long)arg2 ;
-(void)_configurePrimaryOptionsButtonIfNeeded;
-(void)setPrimaryRouteView:(MediaControlsRouteView *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_performLayoutWithAnimation:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(void)_configureRouteViews;
-(void)mediaControlsVolumeController:(id)arg1 didChangeHeadTrackedSpatialAudioEnabled:(BOOL)arg2 ;
-(MediaControlsBluetoothListeningModeButton *)secondaryBluetoothListeningModeButton;
-(void)setPrimaryBluetoothListeningModeButton:(MediaControlsBluetoothListeningModeButton *)arg1 ;
-(void)setPrimaryUpdateTimer:(NSTimer *)arg1 ;
-(void)didTapSecondaryBluetoothListeningModeButton:(id)arg1 ;
-(void)_updateButtonAxis;
-(void)setSecondaryUpdateTimer:(NSTimer *)arg1 ;
-(MediaControlsRouteView *)primaryRouteView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_configureSpacialButtonIfNeeded;
-(void)setSpatialExpandableButton:(MediaControlsExpandableButton *)arg1 ;
-(void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(BOOL)arg2 ;
-(MediaControlsExpandableButton *)spatialExpandableButton;
-(double)_horizontalPadding;
-(MediaControlsBluetoothListeningModeButton *)primaryBluetoothListeningModeButton;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_configureSecondaryOptionsButtonIfNeeded;
-(void)_springAnimate:(/*^block*/id)arg1 ;
-(MediaControlsRouteView *)secondaryRouteView;
-(void)collapseBluetoothListeningModeButtons;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_updateVisibility;
-(void)secondaryBluetoothListeningModeButtonDidChangeValue:(id)arg1 ;
-(void)spatialExpandableButtonDidChangeValue:(id)arg1 ;
@end

