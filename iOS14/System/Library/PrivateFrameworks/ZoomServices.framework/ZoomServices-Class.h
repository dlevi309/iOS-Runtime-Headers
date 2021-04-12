/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ZoomServices.framework/ZoomServices
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
-(void)panLeft;
-(void)panUp;
-(void)isMagnifierVisibleWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isShowingZoomLens;
-(double)zoomLevel;
-(id)registerForZoomAttributes:(id)arg1 updatesImmediatelyWithChangedHandler:(/*^block*/id)arg2 ;
-(BOOL)notifyZoomAppActivationAnimationDidFinish;
-(BOOL)notifyZoomReturnedToClockFaceAtIdle;
-(BOOL)notifyZoomDeviceWillWake;
-(void)setZoomLevel:(double)arg1 ;
-(void)setTriedToShowLensBeofreSBReady:(BOOL)arg1 ;
-(BOOL)notifyZoomLockButtonWasPressed;
-(id)init;
-(BOOL)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(CGRect)arg2 contextId:(unsigned)arg3 ;
-(BOOL)inStandbyMode;
-(BOOL)notifyZoomDragWillEnd;
-(void)panDown;
-(BOOL)notifyZoomFluidSwitcherGestureDidFinishWithDock;
-(void)startMagnifier;
-(void)panRight;
-(BOOL)notifyZoomIdleSlugOpacityChangedTo:(double)arg1 ;
-(void)setRegisteredForZoomAttributeListeners:(BOOL)arg1 ;
-(void)_panWithDirection:(id)arg1 ;
-(BOOL)notifyZoomFluidSwitcherGestureDidFinish;
-(BOOL)notifyZoomWillShowBrailleInputUI;
-(BOOL)triedToShowLensBeofreSBReady;
-(BOOL)notifyZoomCarouselLockBegan;
-(double)appDeactivationAnimationStartDelay;
-(double)appActivationAnimationStartDelay;
-(BOOL)_isAllowedMagnifierClient;
-(BOOL)notifyZoomDragWillStart;
-(BOOL)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(CGRect)arg2 contextId:(unsigned)arg3 keyboardFrame:(CGRect)arg4 ;
-(void)removeCoalescedZoomAttributesChangedHandler:(id)arg1 ;
-(BOOL)notifyZoomKeyboardDidHideInAppWithBundleID:(id)arg1 ;
-(void)setShowingZoomLens:(BOOL)arg1 ;
-(BOOL)shouldRegisterForZoomListeners;
-(BOOL)_isPrimaryZoomWindowClient;
-(double)reachabilityScaleFactor;
-(void)notifyZoomSOSMedicalIDShown;
-(void)removeZoomAttributesChangedHandler:(id)arg1 ;
-(void)_applicationWillSuspend:(id)arg1 ;
-(void)autoPanZoomUsingLocation:(CGPoint)arg1 withPanningStyle:(unsigned long long)arg2 ;
-(BOOL)registeredForZoomListener;
-(id)registerForCoalescedZoomAttributesWithChangedHandler:(/*^block*/id)arg1 ;
-(BOOL)notifyZoomKeyboardWillBecomeVisibleWithFrame:(CGRect)arg1 inAppWithBundleID:(id)arg2 ;
-(void)setRegisteredForZoomListener:(BOOL)arg1 ;
-(void)hideZoomLens;
-(BOOL)notifyZoomDockPositionWasChangedInSettingsTo:(id)arg1 ;
-(BOOL)notifyZoomAppDeactivationAnimationWillBegin;
-(void)setZoomWindowClient:(AXUIClient *)arg1 ;
-(void)_zoomChanged:(id)arg1 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(BOOL)notifyZoomAppDidEnterBackground:(id)arg1 ;
-(id)activeZoomMode;
-(BOOL)notifyZoomLensModeWasChangedInSettingsTo:(id)arg1 ;
-(void)registerInterestInZoomAttributes;
-(void)_handleChangedAttributes:(id)arg1 ;
-(BOOL)notifyZoomCarouselLockEnded;
-(BOOL)notifyZoomWillHideBrailleInputUI;
-(AXUIClient *)zoomWindowClient;
-(BOOL)notifyZoomFluidSwitcherGestureWillBegin;
-(BOOL)registeredForZoomAttributeListeners;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)notifyZoomDeviceWasUnlocked;
-(BOOL)notifyZoomAppActivationAnimationWillBegin;
-(BOOL)notifyZoomAppSwitcherRevealAnimationWillBegin;
-(BOOL)springBoardReady;
-(BOOL)notifyZoomAppDidBecomeActive:(id)arg1 keyboardFrameIfVisible:(CGRect)arg2 ;
-(void)_checkSpringBoardStarted;
-(BOOL)notifyZoomHomeButtonWasPressed;
-(void)showZoomLens;
-(CGRect)zoomFrame;
-(void)setSpringBoardReady:(BOOL)arg1 ;
-(double)appSwitcherRevealAnimationStartDelay;
-(id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2 ;
-(BOOL)shouldSuppressKeyCommandHUD;
-(void)showMagnifier;
-(void)dealloc;
-(BOOL)notifyZoomKeyboardWillHideInAppWithBundleID:(id)arg1 ;
-(void)setShouldRegisterForZoomListeners:(BOOL)arg1 ;
@end

