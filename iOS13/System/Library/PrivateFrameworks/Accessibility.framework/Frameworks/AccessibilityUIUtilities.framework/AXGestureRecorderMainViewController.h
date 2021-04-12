/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <Preferences/PSViewController.h>
#import <libobjc.A.dylib/AXGestureRecorderViewControllerDelegate.h>
#import <libobjc.A.dylib/AXGestureRecorderControlsViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol AXGestureRecorderMainViewControllerDelegate;
@class AXGestureRecorderStyleProvider, AXGestureRecorderViewController, AXGestureRecorderControlsView, UILabel, UIBarButtonItem, AXAssertion, NSString;

@interface AXGestureRecorderMainViewController : PSViewController <AXGestureRecorderViewControllerDelegate, AXGestureRecorderControlsViewDelegate, UITextFieldDelegate> {

	BOOL _inReplayMode;
	BOOL _isDisplayLinkInEffect;
	AXGestureRecorderStyleProvider* _styleProvider;
	AXGestureRecorderViewController* _gestureRecorderViewController;
	AXGestureRecorderControlsView* _controlsView;
	UILabel* _instructionsLabel;
	UIBarButtonItem* _saveButton;
	unsigned long long _leftButtonIdentifier;
	unsigned long long _rightButtonIdentifier;
	double _gestureRecordingDidStartTimeInterval;
	id<AXGestureRecorderMainViewControllerDelegate> _delegate;
	AXAssertion* _disableSystemGesturesAssertion;
	id _appDidResignActiveNotificationHandlerToken;
	long long _recorderType;

}

@property (nonatomic,retain) AXGestureRecorderStyleProvider * styleProvider;                               //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) AXGestureRecorderViewController * gestureRecorderViewController;              //@synthesize gestureRecorderViewController=_gestureRecorderViewController - In the implementation block
@property (nonatomic,retain) AXGestureRecorderControlsView * controlsView;                                 //@synthesize controlsView=_controlsView - In the implementation block
@property (nonatomic,retain) UILabel * instructionsLabel;                                                  //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveButton;                                                 //@synthesize saveButton=_saveButton - In the implementation block
@property (assign,nonatomic) unsigned long long leftButtonIdentifier;                                      //@synthesize leftButtonIdentifier=_leftButtonIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long rightButtonIdentifier;                                     //@synthesize rightButtonIdentifier=_rightButtonIdentifier - In the implementation block
@property (assign,nonatomic) double gestureRecordingDidStartTimeInterval;                                  //@synthesize gestureRecordingDidStartTimeInterval=_gestureRecordingDidStartTimeInterval - In the implementation block
@property (assign,getter=isInReplayMode,nonatomic) BOOL inReplayMode;                                      //@synthesize inReplayMode=_inReplayMode - In the implementation block
@property (nonatomic,retain) AXAssertion * disableSystemGesturesAssertion;                                 //@synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion - In the implementation block
@property (assign,nonatomic,__weak) id appDidResignActiveNotificationHandlerToken;                         //@synthesize appDidResignActiveNotificationHandlerToken=_appDidResignActiveNotificationHandlerToken - In the implementation block
@property (assign,nonatomic) long long recorderType;                                                       //@synthesize recorderType=_recorderType - In the implementation block
@property (assign,nonatomic) BOOL isDisplayLinkInEffect;                                                   //@synthesize isDisplayLinkInEffect=_isDisplayLinkInEffect - In the implementation block
@property (assign,nonatomic,__weak) id<AXGestureRecorderMainViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(id)init;
-(void)dealloc;
-(id<AXGestureRecorderMainViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AXGestureRecorderMainViewControllerDelegate>)arg1 ;
-(void)_reset;
-(id)initWithType:(long long)arg1 ;
-(void)_commonInit;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)setStyleProvider:(AXGestureRecorderStyleProvider *)arg1 ;
-(long long)recorderType;
-(void)setRecorderType:(long long)arg1 ;
-(void)setGestureRecorderViewController:(AXGestureRecorderViewController *)arg1 ;
-(void)setDisableSystemGesturesAssertion:(AXAssertion *)arg1 ;
-(void)setAppDidResignActiveNotificationHandlerToken:(id)arg1 ;
-(id)appDidResignActiveNotificationHandlerToken;
-(void)_releaseOutlets;
-(void)setControlsView:(AXGestureRecorderControlsView *)arg1 ;
-(AXGestureRecorderViewController *)gestureRecorderViewController;
-(id)_defaultInstructionalText;
-(AXGestureRecorderStyleProvider *)styleProvider;
-(void)setInstructionsLabel:(UILabel *)arg1 ;
-(AXGestureRecorderControlsView *)controlsView;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)_saveButtonTapped:(id)arg1 ;
-(void)setSaveButton:(UIBarButtonItem *)arg1 ;
-(void)_setLeftButtonIdentifier:(unsigned long long)arg1 enabled:(BOOL)arg2 rightButtonIdentifier:(unsigned long long)arg3 enabled:(BOOL)arg4 animate:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)_hideChromeButtonTapped:(id)arg1 ;
-(void)_saveWithMessage:(id)arg1 ;
-(void)_saveReplayableGesture;
-(void)_hide;
-(void)_unhideChrome;
-(UILabel *)instructionsLabel;
-(void)_hideChrome;
-(void)setLeftButtonIdentifier:(unsigned long long)arg1 ;
-(void)setRightButtonIdentifier:(unsigned long long)arg1 ;
-(void)_getButtonPropertiesForIdentifier:(unsigned long long)arg1 enabled:(BOOL)arg2 color:(int*)arg3 title:(id*)arg4 ;
-(double)gestureRecordingDidStartTimeInterval;
-(void)_manageDisplayLinkManager:(BOOL)arg1 ;
-(BOOL)_isForRealTimeGesture;
-(void)_clearProgressView;
-(void)setInReplayMode:(BOOL)arg1 ;
-(void)setGestureRecordingDidStartTimeInterval:(double)arg1 ;
-(UIBarButtonItem *)saveButton;
-(BOOL)_canSaveGestureWithName:(id)arg1 ;
-(void)_didSaveGestureWithName:(id)arg1 ;
-(BOOL)isDisplayLinkInEffect;
-(void)_updateProgressView:(id)arg1 ;
-(void)setIsDisplayLinkInEffect:(BOOL)arg1 ;
-(void)_savePoint:(CGPoint)arg1 ;
-(void)_enterWaitingMode;
-(unsigned long long)rightButtonIdentifier;
-(unsigned long long)leftButtonIdentifier;
-(void)_enterReplayMode;
-(double)maximumDurationOfRecordedGestureForGestureRecorderViewController:(id)arg1 ;
-(void)gestureRecorderViewController:(id)arg1 didStartRecordingAtomicFingerPathAtPoint:(CGPoint)arg2 ;
-(void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(id)arg1 ;
-(void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(id)arg1 ;
-(BOOL)isChromeVisibleForGestureRecorderViewController:(id)arg1 ;
-(void)gestureRecorderViewController:(id)arg1 setChromeVisible:(BOOL)arg2 ;
-(void)gestureRecorderControlsView:(id)arg1 buttonTappedAtIndex:(unsigned long long)arg2 ;
-(BOOL)isInReplayMode;
-(AXAssertion *)disableSystemGesturesAssertion;
@end

