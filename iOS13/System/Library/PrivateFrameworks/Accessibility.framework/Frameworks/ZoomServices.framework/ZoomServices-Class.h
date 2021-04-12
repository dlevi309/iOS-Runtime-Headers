/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/ZoomServices.framework/ZoomServices
*/

#import <ZoomServices/ZoomServices-Structs.h>
#import <libobjc.A.dylib/AXUIClientDelegate.h>

@class NSMutableArray, NSMutableDictionary, AXUIClient, NSString;

@interface ZoomServices : NSObject <AXUIClientDelegate> {

	NSMutableArray* _zoomListeners;
	NSMutableDictionary* _zoomAttributeListeners;
	BOOL _showingZoomLens;
	BOOL _springBoardReady;
	BOOL _triedToShowLensBeofreSBReady;
	BOOL _registeredForZoomListener;
	BOOL _registeredForZoomAttributeListeners;
	BOOL _shouldRegisterForZoomListeners;
	AXUIClient* _zoomWindowClient;

}

@property (getter=isShowingZoomLens,nonatomic,readonly) BOOL showingZoomLens; 
@property (nonatomic,retain) AXUIClient * zoomWindowClient;                                //@synthesize zoomWindowClient=_zoomWindowClient - In the implementation block
@property (assign,getter=isShowingZoomLens,nonatomic) BOOL showingZoomLens;                //@synthesize showingZoomLens=_showingZoomLens - In the implementation block
@property (assign,nonatomic) BOOL springBoardReady;                                        //@synthesize springBoardReady=_springBoardReady - In the implementation block
@property (assign,nonatomic) BOOL triedToShowLensBeofreSBReady;                            //@synthesize triedToShowLensBeofreSBReady=_triedToShowLensBeofreSBReady - In the implementation block
@property (assign,nonatomic) BOOL registeredForZoomListener;                               //@synthesize registeredForZoomListener=_registeredForZoomListener - In the implementation block
@property (assign,nonatomic) BOOL registeredForZoomAttributeListeners;                     //@synthesize registeredForZoomAttributeListeners=_registeredForZoomAttributeListeners - In the implementation block
@property (assign,nonatomic) BOOL shouldRegisterForZoomListeners;                          //@synthesize shouldRegisterForZoomListeners=_shouldRegisterForZoomListeners - In the implementation block
@property (assign,nonatomic) double zoomLevel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_applicationWillSuspend:(id)arg1 ;
-(double)zoomLevel;
-(void)setZoomLevel:(double)arg1 ;
-(void)isMagnifierVisibleWithCompletion:(/*^block*/id)arg1 ;
-(void)showMagnifier;
-(void)_checkSpringBoardStarted;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(BOOL)notifyZoomHomeButtonWasPressed;
-(void)setShouldRegisterForZoomListeners:(BOOL)arg1 ;
-(void)_zoomChanged:(id)arg1 ;
-(BOOL)springBoardReady;
-(BOOL)triedToShowLensBeofreSBReady;
-(void)showZoomLens;
-(void)setSpringBoardReady:(BOOL)arg1 ;
-(BOOL)shouldRegisterForZoomListeners;
-(BOOL)registeredForZoomListener;
-(AXUIClient *)zoomWindowClient;
-(void)setRegisteredForZoomListener:(BOOL)arg1 ;
-(BOOL)registeredForZoomAttributeListeners;
-(void)setRegisteredForZoomAttributeListeners:(BOOL)arg1 ;
-(BOOL)_isPrimaryZoomWindowClient;
-(BOOL)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(CGRect)arg2 contextId:(unsigned)arg3 keyboardFrame:(CGRect)arg4 ;
-(void)_handleChangedAttributes:(id)arg1 ;
-(id)registerForCoalescedZoomAttributesWithChangedHandler:(/*^block*/id)arg1 ;
-(void)registerInterestInZoomAttributes;
-(void)_panWithDirection:(id)arg1 ;
-(BOOL)_isAllowedMagnifierClient;
-(void)removeCoalescedZoomAttributesChangedHandler:(id)arg1 ;
-(id)registerForZoomAttributes:(id)arg1 updatesImmediatelyWithChangedHandler:(/*^block*/id)arg2 ;
-(void)removeZoomAttributesChangedHandler:(id)arg1 ;
-(BOOL)notifyZoomSpeakUnderFingerSettingChanged;
-(BOOL)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(CGRect)arg2 contextId:(unsigned)arg3 ;
-(BOOL)notifyZoomKeyboardWillBecomeVisibleWithFrame:(CGRect)arg1 inAppWithBundleID:(id)arg2 ;
-(BOOL)notifyZoomKeyboardWillHideInAppWithBundleID:(id)arg1 ;
-(BOOL)notifyZoomKeyboardDidHideInAppWithBundleID:(id)arg1 ;
-(BOOL)notifyZoomLockButtonWasPressed;
-(BOOL)notifyZoomDeviceWasUnlocked;
-(BOOL)notifyZoomDeviceWillWake;
-(BOOL)notifyZoomLensModeWasChangedInSettingsTo:(id)arg1 ;
-(BOOL)notifyZoomDockPositionWasChangedInSettingsTo:(id)arg1 ;
-(BOOL)notifyZoomIdleSlugOpacityChangedTo:(double)arg1 ;
-(BOOL)notifyZoomFluidSwitcherGestureWillBegin;
-(BOOL)notifyZoomAppActivationAnimationWillBegin;
-(BOOL)notifyZoomAppDeactivationAnimationWillBegin;
-(BOOL)notifyZoomAppSwitcherRevealAnimationWillBegin;
-(BOOL)notifyZoomReturnedToClockFaceAtIdle;
-(BOOL)notifyZoomWaterLockBegan;
-(BOOL)notifyZoomWaterLockEnded;
-(BOOL)notifyZoomFluidSwitcherGestureDidFinish;
-(BOOL)notifyZoomFluidSwitcherGestureDidFinishWithDock;
-(BOOL)notifyZoomAppActivationAnimationDidFinish;
-(BOOL)notifyZoomAppDidBecomeActive:(id)arg1 keyboardFrameIfVisible:(CGRect)arg2 ;
-(BOOL)notifyZoomAppDidEnterBackground:(id)arg1 ;
-(BOOL)notifyZoomWillShowBrailleInputUI;
-(void)notifyZoomSOSMedicalIDShown;
-(BOOL)notifyZoomWillHideBrailleInputUI;
-(BOOL)notifyZoomDragWillStart;
-(BOOL)notifyZoomDragWillEnd;
-(double)appActivationAnimationStartDelay;
-(double)appDeactivationAnimationStartDelay;
-(double)reachabilityScaleFactor;
-(double)appSwitcherRevealAnimationStartDelay;
-(CGRect)zoomFrame;
-(void)panLeft;
-(void)panRight;
-(void)panUp;
-(void)panDown;
-(void)autoPanZoomUsingLocation:(CGPoint)arg1 withPanningStyle:(unsigned long long)arg2 ;
-(id)activeZoomMode;
-(BOOL)inStandbyMode;
-(BOOL)shouldSuppressKeyCommandHUD;
-(void)setZoomWindowClient:(AXUIClient *)arg1 ;
-(BOOL)isShowingZoomLens;
-(void)setShowingZoomLens:(BOOL)arg1 ;
-(void)setTriedToShowLensBeofreSBReady:(BOOL)arg1 ;
-(void)hideZoomLens;
-(void)startMagnifier;
@end

