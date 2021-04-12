/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TKVibrationRecorderViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol TKVibrationRecorderViewControllerDelegate;
@class TKVibrationRecorderView, TLVibrationPattern, UIBarButtonItem, UIAlertController, UIAlertAction, UITextField, TKVibratorController, NSDictionary, TKVibrationRecorderViewController, NSString;

@interface TKVibrationRecorderContentViewController : UIViewController <TKVibrationRecorderViewDelegate, UITextFieldDelegate> {

	int _mode;
	TKVibrationRecorderView* _vibrationRecorderView;
	TLVibrationPattern* _recordedVibrationPattern;
	double _currentVibrationComponentDidStartTimeStamp;
	BOOL _isWaitingForEndOfCurrentVibrationComponent;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _saveButton;
	UIAlertController* _vibrationNameAlertController;
	UIAlertAction* _vibrationNameAlertSaveAction;
	UITextField* _vibrationNameAlertTextField;
	TKVibratorController* _vibratorController;
	NSDictionary* _indefiniteVibrationPattern;
	id<TKVibrationRecorderViewControllerDelegate> _delegate;
	TKVibrationRecorderViewController* _parentVibrationRecorderViewController;

}

@property (assign,nonatomic,__weak) id<TKVibrationRecorderViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) TKVibrationRecorderViewController * parentVibrationRecorderViewController;              //@synthesize parentVibrationRecorderViewController=_parentVibrationRecorderViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<TKVibrationRecorderViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TKVibrationRecorderViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)applicationWillSuspend;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)_saveButtonTapped:(id)arg1 ;
-(void)_handleApplicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_cleanUpVibrationNameAlertController;
-(void)vibrationRecorderView:(id)arg1 buttonTappedWithIdentifier:(int)arg2 ;
-(void)_stopRecordingOrPlayingForApplicationSuspension;
-(void)_finishedWithRecorder;
-(TKVibrationRecorderViewController *)parentVibrationRecorderViewController;
-(void)_vibrationNameTextFieldContentsDidChange:(id)arg1 ;
-(void)_cancelButtonInAlertTapped:(id)arg1 ;
-(void)_saveButtonInAlertTapped:(id)arg1 ;
-(void)_updateStateSaveButtonInAlert;
-(void)_stopVibrating;
-(void)_storeVibrationComponentOfTypePause:(BOOL)arg1 ;
-(id)_indefiniteVibrationPattern;
-(void)_startVibratingWithVibrationPattern:(id)arg1 ;
-(void)_accessibilityDidEnterReplayMode;
-(void)_accessibilityDidEnterRecordingMode;
-(void)vibrationComponentDidEndForVibrationRecorderView:(id)arg1 ;
-(void)_eraseCurrentVibrationComponentDidStartTimeStamp;
-(void)_accessibilityDidExitRecordingMode;
-(void)_accessibilityDidExitReplayMode;
-(void)_accessibilityMakeAnnouncementWithStringForLocalizationIdentifier:(id)arg1 ;
-(void)vibrationComponentDidStartForVibrationRecorderView:(id)arg1 ;
-(void)vibrationRecorderViewDidFinishReplayingVibration:(id)arg1 ;
-(BOOL)vibrationRecorderViewDidEnterRecordingMode:(id)arg1 ;
-(void)vibrationRecorderView:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2 ;
-(void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)arg1 ;
-(id)initWithVibratorController:(id)arg1 ;
-(void)setParentVibrationRecorderViewController:(TKVibrationRecorderViewController *)arg1 ;
@end

