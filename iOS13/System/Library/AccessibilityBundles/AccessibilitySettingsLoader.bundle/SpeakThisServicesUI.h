/*
* Generated on Monday, March 1, 2021 at 2:35:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
*/


@interface SpeakThisServicesUI : NSObject
+(void)enableSpeakThisServices;
+(void)disableSpeakThisServices;
-(id)init;
-(void)_handleSpeakThisEnabledStatusDidChangeNotification:(id)arg1 ;
-(void)_registerForKBFrameNotifications;
-(void)_unregisterForKBFrameNotifications;
-(void)_kbFrameWillChange:(id)arg1 ;
@end

