/*
* Generated on Monday, March 1, 2021 at 2:35:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
*/


@interface AccessibilitySettingsLoader : NSObject
+(void)initialize;
+(void)_update;
+(void)update;
+(void)updateITunesSettings;
+(void)_resetD22ReduceMotion;
+(void)_registerZoomNotificationListeners;
+(void)_registerSpeakThisNotificationListeners;
+(void)_updateAccessibilitySpeakCorrections;
+(void)_updateITunesSettings;
+(void)_updateAssistiveTouchInformation;
-(id)init;
-(void)_webKitInitialized;
-(void)_initializeImmediateAccessibilitySettings;
-(void)_initializeDelayedAccessibilitySettings;
-(void)_accessibilityUserChangedRouteNotification:(id)arg1 ;
@end

