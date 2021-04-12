/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <UIKitCore/UIViewController.h>

@class OBWelcomeController, OBTrayButton, NSLayoutConstraint, AVSystemController, AVQueuePlayer, AVAudioPlayer, UIView, UIStackView, UIImageView, UILabel, UIImage, UIActivityIndicatorView, BTSDevice;

@interface BTSFitTestController : UIViewController {

	OBWelcomeController* _fitTestController;
	OBTrayButton* _playButton;
	NSLayoutConstraint* _topSpacerConstraint;
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
-(void)viewWillLayoutSubviews;
-(id)init;
-(BTSDevice *)currentDevice;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isSmallScreenDevice;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(BOOL)isCallActive;
-(void)loadView;
-(void)setupConstraints;
-(void)setCurrentDevice:(BTSDevice *)arg1 ;
-(void)dealloc;
-(void)handleAudioSessionInterruption:(id)arg1 ;
-(void)cleanupAudio;
-(void)deviceDisconnectedHandler:(id)arg1 ;
-(void)powerChangedHandler:(id)arg1 ;
-(void)handleMediaServerConnectionDied:(id)arg1 ;
-(void)inEarStatusChanged:(id)arg1 ;
-(void)sealValueChanged:(id)arg1 ;
-(void)handleCallIsActiveDidChangeNotification:(id)arg1 ;
-(void)dismissFitTest;
-(void)setupFitTestContentView;
-(void)updateFitTestActiveState;
-(void)startFitTest;
-(void)setCancelAction;
-(void)removeDoneButton;
-(void)resetVolume;
-(void)fitTestStopped;
@end

