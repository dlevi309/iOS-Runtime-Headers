/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/CSQuickActionsDelegate.h>
#import <libobjc.A.dylib/SBUIFlashlightObserver.h>

@protocol SBFLockOutStatusProvider, CSCameraPrewarming;
@class SBUIFlashlightController, CSLockScreenSettings, SBLockScreenDefaults, CSCoverSheetViewController, NSString;

@interface CSQuickActionsViewController : CSCoverSheetViewControllerBase <CSQuickActionsDelegate, SBUIFlashlightObserver> {

	SBUIFlashlightController* _flashlight;
	CSLockScreenSettings* _prototypeSettings;
	SBLockScreenDefaults* _lockScreenDefaults;
	BOOL _suppressingVisibleChanges;
	BOOL _animatingToCamera;
	CSCoverSheetViewController* _coverSheetViewController;
	id<SBFLockOutStatusProvider> _lockOutController;
	id<CSCameraPrewarming> _cameraPrewarmer;

}

@property (assign,nonatomic) BOOL animatingToCamera;                                                    //@synthesize animatingToCamera=_animatingToCamera - In the implementation block
@property (assign,nonatomic,__weak) CSCoverSheetViewController * coverSheetViewController;              //@synthesize coverSheetViewController=_coverSheetViewController - In the implementation block
@property (nonatomic,retain) id<SBFLockOutStatusProvider> lockOutController;                            //@synthesize lockOutController=_lockOutController - In the implementation block
@property (nonatomic,retain) id<CSCameraPrewarming> cameraPrewarmer;                                    //@synthesize cameraPrewarmer=_cameraPrewarmer - In the implementation block
@property (assign,nonatomic) BOOL suppressingVisibleChanges;                                            //@synthesize suppressingVisibleChanges=_suppressingVisibleChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
+(BOOL)deviceSupportsButtons;
-(void)dealloc;
-(BOOL)isPortrait;
-(void)loadView;
-(long long)presentationStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)hasCamera;
-(BOOL)hasFlashlight;
-(void)_setupFlashlight;
-(long long)presentationType;
-(void)_resetIdleTimer;
-(void)_addStateCaptureHandlers;
-(void)flashlightAvailabilityDidChange:(BOOL)arg1 ;
-(void)flashlightLevelDidChange:(unsigned long long)arg1 ;
-(id)quickActionsView;
-(void)_tearDownFlashlightIfOff;
-(void)_tearDownFlashlight;
-(void)_updateFlashlightButtonState;
-(void)_updateFlashlightButtonAvailability;
-(BOOL)_supportsCamera;
-(BOOL)_shouldPrewarmOnTouch;
-(BOOL)_shouldPrelaunchOnTouch;
-(void)_launchCamera;
-(void)_toggleFlashlight;
-(BOOL)_isFlashlightOn;
-(void)_deviceBlockStateDidChangeNotification:(id)arg1 ;
-(void)_featureLockStateDidChangeNotification:(id)arg1 ;
-(void)_updateFlashlightButtonAvailabilityRespectingSuppression:(BOOL)arg1 ;
-(id)quickActionsViewIfLoaded;
-(BOOL)allowsFlashlight;
-(BOOL)allowsCameraPress;
-(void)touchBeganForButton:(id)arg1 ;
-(void)fireActionForButton:(id)arg1 ;
-(void)touchEndedForButton:(id)arg1 ;
-(long long)presentationPriority;
-(CSCoverSheetViewController *)coverSheetViewController;
-(void)setCoverSheetViewController:(CSCoverSheetViewController *)arg1 ;
-(id<SBFLockOutStatusProvider>)lockOutController;
-(void)setLockOutController:(id<SBFLockOutStatusProvider>)arg1 ;
-(id<CSCameraPrewarming>)cameraPrewarmer;
-(void)setCameraPrewarmer:(id<CSCameraPrewarming>)arg1 ;
-(BOOL)suppressingVisibleChanges;
-(void)setSuppressingVisibleChanges:(BOOL)arg1 ;
-(BOOL)animatingToCamera;
-(void)setAnimatingToCamera:(BOOL)arg1 ;
@end

