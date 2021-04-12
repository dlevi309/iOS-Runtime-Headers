/*
* Generated on Monday, March 1, 2021 at 2:35:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
*/


#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
@interface ZoomServicesUI : NSObject {

	BOOL _registeredForAppNotifications;

}

@property (assign,getter=isRegisteredForAppNotifications,nonatomic) BOOL registeredForAppNotifications;              //@synthesize registeredForAppNotifications=_registeredForAppNotifications - In the implementation block
+(void)enableZoomServices;
+(void)disableZoomServices;
+(CGPoint)_unMappedZoomPoint:(CGPoint)arg1 ;
+(BOOL)_deviceIsPortrait;
+(BOOL)_shouldUnmapPointsForFluidGestures;
-(id)init;
-(void)dealloc;
-(Class)_accessibilityBundlePrincipalClass;
-(void)_handleKeyboardWillShowNotification:(id)arg1 ;
-(void)_handleKeyboardWillHideNotification:(id)arg1 ;
-(void)_handleAppDidEnterBackgroundNotification:(id)arg1 ;
-(void)_handleZoomEnabledStatusDidChangeNotification:(id)arg1 ;
-(void)_handleSpeakUnderFingerStatusDidChangeNotification:(id)arg1 ;
-(void)_updateForCurrentZoomStatus;
-(void)_unregisterForAppNotifications;
-(void)_installZoomUISafeCategoriesIfNeeded;
-(void)_registerForAppNotifications;
-(BOOL)isRegisteredForAppNotifications;
-(void)_handleRegisterZoomConflictNotification:(id)arg1 ;
-(void)_handleZoomFocusDidChangeNotification:(id)arg1 ;
-(void)_handleFirstResponderDidChangeNotification:(id)arg1 ;
-(void)_handleKeyboardDidHideNotification:(id)arg1 ;
-(void)_handleAlertWillAppearNotification:(id)arg1 ;
-(void)_handleLockButtonWasPressedNotification:(id)arg1 ;
-(void)_handleAppSwitcherWillBeginRevealNotification:(id)arg1 ;
-(void)_handleAppDidBecomeActiveNotification:(id)arg1 ;
-(void)setRegisteredForAppNotifications:(BOOL)arg1 ;
-(CGRect)_keyboardFrameInScreenCoordinates;
@end

