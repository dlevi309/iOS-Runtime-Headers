/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXServer.h>

@class NSMutableArray;

@interface AXBackBoardServer : AXServer {

	BOOL _overrideGestureRecognition;
	NSMutableArray* _eventListeners;
	NSMutableArray* _zoomAttributeListeners;

}

@property (assign,nonatomic) BOOL invertColorsEnabled; 
@property (assign,nonatomic) BOOL inPreboardMode; 
@property (assign,nonatomic) BOOL inCheckerBoardMode; 
+(id)server;
-(id)init;
-(void)dealloc;
-(id)_serviceName;
-(unsigned long long)currentGuidedAccessModeAndSessionApp:(id*)arg1 ;
-(unsigned)contextIdHostingContextId:(unsigned)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(BOOL)tripleClickHomeButtonPress;
-(void)homeClickSwallowedForGuidedAccess;
-(void)resetAccessibilityFeatures;
-(void)setAccessibilityPreferenceAsMobile:(id)arg1 value:(id)arg2 notification:(id)arg3 ;
-(id)accessibilityPreferenceAsMobile:(id)arg1 ;
-(BOOL)inPreboardMode;
-(BOOL)inCheckerBoardMode;
-(void)sessionIsLoginSessionWithResult:(/*^block*/id)arg1 ;
-(BOOL)supportsAccessibilityDisplayFilters;
-(BOOL)isGuidedAccessActive;
-(void)_didConnectToServer;
-(void)_willClearServer;
-(BOOL)_shouldDispatchLocally;
-(BOOL)loadGAXBundleForUnmanagedASAM;
-(id)_handleEventListener:(id)arg1 ;
-(void)registerSiriViewServicePID:(int)arg1 ;
-(void)registerAccessibilityUIServicePID:(int)arg1 ;
-(void)registerHearingAidServerPID:(int)arg1 ;
-(void)setInPreboardMode:(BOOL)arg1 ;
-(void)setInCheckerBoardMode:(BOOL)arg1 ;
-(void)disableBrightnessFilters;
-(BOOL)brightnessFiltersEnabled;
-(BOOL)blueLightStatusEnabled;
-(void)restoreCachedBrightnessFilters;
-(BOOL)adaptationEnabled;
-(BOOL)supportsAdaptation;
-(AXBColorFilterDescription)colorFilterFromLastUpdate;
-(id)backboardServiceInstance;
-(void)setSessionIsLoginSession:(BOOL)arg1 ;
-(void)registerAssistiveTouchPID:(int)arg1 ;
-(void)userEventOccurred;
-(void)setLockScreenDimTimerEnabled:(BOOL)arg1 ;
-(void)setCapsLockLightOn:(BOOL)arg1 ;
-(id)_springboardParametersForGuidedAccessAvailability;
-(void)_sendRequestGuidedAccessSessionMessage:(id)arg1 numberOfRetryAttempts:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerGestureConflictWithZoom:(id)arg1 ;
-(void)adjustSystemZoom:(int)arg1 ;
-(int)accessibilityAssistiveTouchPID;
-(int)accessibilityFullKeyboardAccessDaemonPID;
-(int)accessibilityUIServicePID;
-(void)registerFullKeyboardAccessDaemonPID:(int)arg1 ;
-(int)hearingAidServerPID;
-(BOOL)invertColorsEnabled;
-(void)setInvertColorsEnabled:(BOOL)arg1 ;
-(void)postEvent:(id)arg1 afterNamedTap:(id)arg2 includeTaps:(id)arg3 ;
-(void)postEvent:(id)arg1 systemEvent:(BOOL)arg2 ;
-(unsigned)contextIdForPosition:(CGPoint)arg1 ;
-(CGRect)convertFrame:(CGRect)arg1 fromContextId:(unsigned)arg2 toContextId:(unsigned)arg3 ;
-(CGRect)convertFrame:(CGRect)arg1 toContextId:(unsigned)arg2 ;
-(CGRect)convertFrame:(CGRect)arg1 fromContextId:(unsigned)arg2 ;
-(void)setHearingAidControlIsVisible:(BOOL)arg1 ;
-(void)setSwitchControlRendersDeviceUnusable:(BOOL)arg1 ;
-(void)setSwitchControlHasScreenSwitch:(BOOL)arg1 ;
-(void)setZoomInitialFocusRect:(CGRect)arg1 fromContext:(unsigned)arg2 ;
-(CGRect)zoomInitialFocusRectWithQueryingContext:(unsigned)arg1 ;
-(BOOL)isGuidedAccessInWorkspace;
-(id)guidedAccessEffectiveAppBundleIdentifier;
-(void)guidedAccessEffectiveAppBundleIdentifier:(/*^block*/id)arg1 ;
-(id)performGuidedAccessAutomationCommand:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)guidedAccessAvailability;
-(void)requestGuidedAccessSessionStartWithConfigurationDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestGuidedAccessSessionEndWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isGuidedAccessSelfLockedToApp:(id)arg1 ;
-(BOOL)isGuidedAccessUnmanagedSelfLocked;
-(BOOL)isRestrictedForAAC;
-(void)toggleGuidedAccess;
-(id)guidedAccessIgnoredRegions;
-(void)jetsamThirdPartyApps;
@end

