/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_isFlashlightOn;
-(void)flashlightLevelDidChange:(unsigned long long)arg1 ;
-(long long)presentationStyle;
-(BOOL)_shouldPrelaunchOnTouch;
-(long long)presentationPriority;
-(void)_addStateCaptureHandlers;
-(void)flashlightAvailabilityDidChange:(BOOL)arg1 ;
-(void)fireActionForButton:(id)arg1 ;
-(void)setCameraPrewarmer:(id<CSCameraPrewarming>)arg1 ;
-(BOOL)isPortrait;
-(void)_updateFlashlightButtonAvailabilityRespectingSuppression:(BOOL)arg1 ;
-(void)setAnimatingToCamera:(BOOL)arg1 ;
-(id)quickActionsViewIfLoaded;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CSCoverSheetViewController *)coverSheetViewController;
-(id<CSCameraPrewarming>)cameraPrewarmer;
-(void)_updateFlashlightButtonState;
-(BOOL)_shouldPrewarmOnTouch;
-(void)_tearDownFlashlightIfOff;
-(void)_tearDownFlashlight;
-(BOOL)allowsFlashlightInteraction;
-(BOOL)allowsCameraPress;
-(void)setCoverSheetViewController:(CSCoverSheetViewController *)arg1 ;
-(void)setLockOutController:(id<SBFLockOutStatusProvider>)arg1 ;
-(id)quickActionsView;
-(void)_updateFlashlightButtonAvailability;
-(BOOL)animatingToCamera;
-(long long)presentationType;
-(id<SBFLockOutStatusProvider>)lockOutController;
-(void)touchBeganForButton:(id)arg1 ;
-(BOOL)hasCamera;
-(void)_setupFlashlight;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_featureLockStateDidChangeNotification:(id)arg1 ;
-(void)loadView;
-(BOOL)allowsFlashlight;
-(void)_toggleFlashlight;
-(void)setSuppressingVisibleChanges:(BOOL)arg1 ;
-(void)_deviceBlockStateDidChangeNotification:(id)arg1 ;
-(BOOL)suppressingVisibleChanges;
-(void)touchEndedForButton:(id)arg1 ;
-(BOOL)_supportsCamera;
-(void)dealloc;
-(BOOL)hasFlashlight;
-(void)_launchCamera;
-(void)_resetIdleTimer;
@end

