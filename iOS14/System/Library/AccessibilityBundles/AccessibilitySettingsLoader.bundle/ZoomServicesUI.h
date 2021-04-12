/*
* Generated on Thursday, January 14, 2021 at 2:29:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_handleZoomEnabledStatusDidChangeNotification:(id)arg1 ;
-(CGRect)_keyboardFrameInScreenCoordinates;
-(id)init;
-(void)setRegisteredForAppNotifications:(BOOL)arg1 ;
-(Class)_accessibilityBundlePrincipalClass;
-(void)_installZoomUISafeCategoriesIfNeeded;
-(void)_handleAlertWillAppearNotification:(id)arg1 ;
-(BOOL)isRegisteredForAppNotifications;
-(void)_handleAppDidEnterBackgroundNotification:(id)arg1 ;
-(void)_handleKeyboardDidHideNotification:(id)arg1 ;
-(void)_handleFirstResponderDidChangeNotification:(id)arg1 ;
-(void)_registerForAppNotifications;
-(void)_unregisterForAppNotifications;
-(void)_updateForCurrentZoomStatus;
-(void)_handleRegisterZoomConflictNotification:(id)arg1 ;
-(void)_handleAppSwitcherWillBeginRevealNotification:(id)arg1 ;
-(void)_handleKeyboardWillHideNotification:(id)arg1 ;
-(void)_handleZoomFocusDidChangeNotification:(id)arg1 ;
-(void)_handleLockButtonWasPressedNotification:(id)arg1 ;
-(void)_handleKeyboardWillShowNotification:(id)arg1 ;
-(void)dealloc;
-(void)_handleAppDidBecomeActiveNotification:(id)arg1 ;
@end

