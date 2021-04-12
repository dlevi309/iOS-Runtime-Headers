/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_willClearServer;
-(unsigned long long)guidedAccessAvailability;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(unsigned)contextIdHostingContextId:(unsigned)arg1 ;
-(id)_serviceName;
-(BOOL)adaptationEnabled;
-(void)restoreCachedBrightnessFilters;
-(void)requestGuidedAccessSessionStartWithConfigurationDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)toggleGuidedAccess;
-(id)init;
-(BOOL)isGuidedAccessSelfLockedToApp:(id)arg1 ;
-(void)_didConnectToServer;
-(void)registerSiriViewServicePID:(int)arg1 ;
-(int)accessibilityAssistiveTouchPID;
-(int)accessibilityUIServicePID;
-(void)sessionIsLoginSessionWithResult:(/*^block*/id)arg1 ;
-(BOOL)isGuidedAccessUnmanagedSelfLocked;
-(void)registerGestureConflictWithZoom:(id)arg1 ;
-(void)homeClickSwallowedForGuidedAccess;
-(BOOL)brightnessFiltersEnabled;
-(int)hearingAidServerPID;
-(void)jetsamThirdPartyApps;
-(AXBColorFilterDescription)colorFilterFromLastUpdate;
-(BOOL)supportsAccessibilityDisplayFilters;
-(void)setAccessibilityPreferenceAsMobile:(id)arg1 value:(id)arg2 notification:(id)arg3 ;
-(void)setCapsLockLightOn:(BOOL)arg1 ;
-(void)disableBrightnessFilters;
-(void)registerHearingAidServerPID:(int)arg1 ;
-(void)setIsSpeakScreenHighlightVisible:(BOOL)arg1 ;
-(id)_springboardParametersForGuidedAccessAvailability;
-(BOOL)isRestrictedForAAC;
-(void)setZoomInitialFocusRect:(CGRect)arg1 fromContext:(unsigned)arg2 ;
-(CGRect)convertFrame:(CGRect)arg1 fromContextId:(unsigned)arg2 toContextId:(unsigned)arg3 ;
-(BOOL)inPreboardMode;
-(void)setLockScreenDimTimerEnabled:(BOOL)arg1 ;
-(id)backboardServiceInstance;
-(id)accessibilityPreferenceAsMobile:(id)arg1 ;
-(void)postEvent:(id)arg1 afterNamedTap:(id)arg2 includeTaps:(id)arg3 ;
-(void)guidedAccessEffectiveAppBundleIdentifier:(/*^block*/id)arg1 ;
-(BOOL)inCheckerBoardMode;
-(int)accessibilityFullKeyboardAccessDaemonPID;
-(BOOL)isGuidedAccessInWorkspace;
-(id)guidedAccessEffectiveAppBundleIdentifier;
-(BOOL)invertColorsEnabled;
-(void)setSwitchControlRendersDeviceUnusable:(BOOL)arg1 ;
-(void)setSessionIsLoginSession:(BOOL)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(void)registerAccessibilityUIServicePID:(int)arg1 ;
-(void)adjustSystemZoom:(int)arg1 ;
-(id)performGuidedAccessAutomationCommand:(id)arg1 error:(id*)arg2 ;
-(unsigned)contextIdForPosition:(CGPoint)arg1 ;
-(void)setSwitchControlHasScreenSwitch:(BOOL)arg1 ;
-(BOOL)tripleClickHomeButtonPress;
-(BOOL)loadGAXBundleForUnmanagedASAM;
-(CGRect)convertFrame:(CGRect)arg1 fromContextId:(unsigned)arg2 ;
-(CGRect)zoomInitialFocusRectWithQueryingContext:(unsigned)arg1 ;
-(void)setInPreboardMode:(BOOL)arg1 ;
-(void)setInvertColorsEnabled:(BOOL)arg1 ;
-(void)registerFullKeyboardAccessDaemonPID:(int)arg1 ;
-(id)guidedAccessIgnoredRegions;
-(void)resetAccessibilityFeatures;
-(void)userEventOccurred;
-(CGRect)convertFrame:(CGRect)arg1 toContextId:(unsigned)arg2 ;
-(id)_handleEventListener:(id)arg1 ;
-(BOOL)blueLightStatusEnabled;
-(BOOL)_shouldDispatchLocally;
-(void)postEvent:(id)arg1 systemEvent:(BOOL)arg2 ;
-(void)setInCheckerBoardMode:(BOOL)arg1 ;
-(BOOL)supportsAdaptation;
-(void)requestGuidedAccessSessionEndWithCompletion:(/*^block*/id)arg1 ;
-(void)registerAssistiveTouchPID:(int)arg1 ;
-(void)_sendRequestGuidedAccessSessionMessage:(id)arg1 numberOfRetryAttempts:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(unsigned long long)currentGuidedAccessModeAndSessionApp:(id*)arg1 ;
-(void)setHearingAidControlIsVisible:(BOOL)arg1 ;
-(BOOL)isGuidedAccessActive;
@end

