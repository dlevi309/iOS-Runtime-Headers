/*
* Generated on Thursday, January 14, 2021 at 2:29:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
*/


@interface AccessibilitySettingsLoader : NSObject
+(void)initialize;
+(void)_resetD22ReduceMotion;
+(void)_updateAssistiveTouchInformation;
+(void)_registerSpeakThisNotificationListeners;
+(void)update;
+(void)_updateITunesSettings;
+(void)_update;
+(void)_updateAccessibilitySpeakCorrections;
+(void)updateITunesSettings;
+(BOOL)_isAXUIServer;
+(void)_registerZoomNotificationListeners;
-(id)init;
-(void)_initializeImmediateAccessibilitySettings;
-(void)_initializeDelayedAccessibilitySettings;
-(void)_webKitInitialized;
-(void)_accessibilityUserChangedRouteNotification:(id)arg1 ;
@end

