/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <UIKitCore/UIViewController.h>

@class OBWelcomeController, UIStackView, UISegmentedControl, UIView, VPSpatialTutorialContentView, UIAlertController, NSMutableArray, RMMediaSession, BTSDevice;

@interface BTSpatialTutorialViewController : UIViewController {

	OBWelcomeController* _welcomeController;
	UIStackView* _stackView;
	UISegmentedControl* _segmentedControl;
	UIView* _spacerView;
	VPSpatialTutorialContentView* _spatialTutorialContentView;
	UIAlertController* _alert;
	NSMutableArray* _constraints;
	RMMediaSession* _mediaSession;
	BOOL _isCurrentModeSpatial;
	BOOL _isCurrentModeChanged;
	BOOL _budsInEar;
	BOOL _alertShowing;
	BTSDevice* _currentDevice;

}

@property (nonatomic,retain) BTSDevice * currentDevice;              //@synthesize currentDevice=_currentDevice - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BTSDevice *)currentDevice;
-(void)setupStackView;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)initCommon;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)loadView;
-(void)setupConstraints;
-(void)setCurrentDevice:(BTSDevice *)arg1 ;
-(void)handleAudioSessionInterruption:(id)arg1 ;
-(void)deviceDisconnectedHandler:(id)arg1 ;
-(void)powerChangedHandler:(id)arg1 ;
-(void)setupWelcomeController;
-(void)notifySpatialAudioUpdate:(BOOL)arg1 ;
-(void)checkStatusAndPlay;
-(void)stopPlayingContent;
-(void)dismissWelcomeController;
-(void)inEarStatusChangedHandler:(id)arg1 ;
-(void)handleMediaServerConnectionDied:(id)arg1 ;
-(void)enableSpatialAudio:(id)arg1 ;
-(void)disableSpatialAudio:(id)arg1 ;
-(void)segmentControlValueChanged:(id)arg1 ;
-(void)updateInEarState;
-(void)showAlert;
-(void)startPlayingContent;
-(id)initWithMode:(id)arg1 device:(id)arg2 ;
@end

