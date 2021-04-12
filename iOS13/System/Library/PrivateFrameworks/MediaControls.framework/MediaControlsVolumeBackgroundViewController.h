/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <ControlCenterUIKit/CCUISliderModuleBackgroundViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MediaControls/MediaControlsVolumeControllerObserver.h>

@class MediaControlsRouteView, MediaControlsBluetoothListeningModeButton, NSTimer, MediaControlsVolumeController, NSString;

@interface MediaControlsVolumeBackgroundViewController : CCUISliderModuleBackgroundViewController <UIGestureRecognizerDelegate, MediaControlsVolumeControllerObserver> {

	MediaControlsRouteView* _primaryRouteView;
	MediaControlsRouteView* _secondaryRouteView;
	MediaControlsBluetoothListeningModeButton* _primaryBluetoothListeningModeButton;
	MediaControlsBluetoothListeningModeButton* _secondaryBluetoothListeningModeButton;
	NSTimer* _primaryUpdateTimer;
	NSTimer* _secondaryUpdateTimer;
	MediaControlsVolumeController* _volumeController;

}

@property (nonatomic,retain) MediaControlsVolumeController * volumeController;              //@synthesize volumeController=_volumeController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)_updateVisibility;
-(double)_horizontalPadding;
-(void)setVolumeController:(MediaControlsVolumeController *)arg1 ;
-(MediaControlsVolumeController *)volumeController;
-(double)_verticalPadding;
-(void)didTapPrimaryBluetoothListeningModeButton:(id)arg1 ;
-(void)primaryBluetoothListeningModeButtonDidChangeValue:(id)arg1 ;
-(void)didTapSecondaryBluetoothListeningModeButton:(id)arg1 ;
-(void)secondaryBluetoothListeningModeButtonDidChangeValue:(id)arg1 ;
-(void)collapseBluetoothListeningModeButtons;
-(void)_configureRouteViews;
-(void)_configurePrimaryOptionsButtonIfNeeded;
-(void)_configureSecondaryOptionsButtonIfNeeded;
-(void)_updateButtonAxis;
-(void)_performLayoutWithAnimation:(/*^block*/id)arg1 ;
-(void)_updateButton:(id)arg1 routeType:(unsigned long long)arg2 ;
-(void)_configureRouteView:(id)arg1 forRouteType:(unsigned long long)arg2 ;
-(void)_configureOptionsButton:(id)arg1 forRouteType:(unsigned long long)arg2 ;
-(void)_springAnimate:(/*^block*/id)arg1 ;
-(void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(BOOL)arg2 ;
-(void)mediaControlsVolumeController:(id)arg1 didChangeVolumeAvailable:(BOOL)arg2 effectiveVolume:(float)arg3 forRoute:(unsigned long long)arg4 ;
@end

