/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <UIKitCore/UIViewController.h>

@class OBWelcomeController, OBTrayButton, AVSystemController, AVQueuePlayer, AVAudioPlayer, UIView, UIStackView, UIImageView, UILabel, UIImage, UIActivityIndicatorView, BTSDevice;

@interface BTSFitTestController : UIViewController {

	OBWelcomeController* _fitTestController;
	OBTrayButton* _playButton;
	AVSystemController* _avSystemController;
	AVQueuePlayer* _avQueuePlayer;
	AVAudioPlayer* _player;
	UIView* _fitTestContentView;
	UIStackView* _stackViewImages;
	UIImageView* _leftImView;
	UIImageView* _rightImView;
	UIView* _leftBudLabel;
	UILabel* _leftBudLabelText;
	UIView* _rightBudLabel;
	UILabel* _rightBudLabelText;
	UILabel* _leftBudResultLabel;
	UILabel* _rightBudResultLabel;
	UIImage* _buttonImage;
	UIActivityIndicatorView* _spinner;
	BOOL _budsInEar;
	BOOL _testActive;
	BOOL _callActive;
	BOOL _darkMode;
	BOOL _volumeModified;
	float _initialVolume;
	BTSDevice* _currentDevice;

}

@property (nonatomic,retain) BTSDevice * currentDevice;              //@synthesize currentDevice=_currentDevice - In the implementation block
-(id)init;
-(void)dealloc;
-(BTSDevice *)currentDevice;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)setupConstraints;
-(BOOL)isSmallScreenDevice;
-(void)setCurrentDevice:(BTSDevice *)arg1 ;
-(void)cleanupAudio;
-(BOOL)isCallActive;
-(void)deviceDisconnectedHandler:(id)arg1 ;
-(void)powerChangedHandler:(id)arg1 ;
-(void)inEarStatusChanged:(id)arg1 ;
-(void)sealValueChanged:(id)arg1 ;
-(void)handleCallIsActiveDidChangeNotification:(id)arg1 ;
-(void)handleAudioSessionInterruption:(id)arg1 ;
-(void)handleMediaServerConnectionDied:(id)arg1 ;
-(void)dismissFitTest;
-(void)setupFitTestContentView;
-(void)updateFitTestActiveState;
-(void)startFitTest;
-(void)setCancelAction;
-(void)removeDoneButton;
-(void)resetVolume;
-(void)fitTestStopped;
@end

