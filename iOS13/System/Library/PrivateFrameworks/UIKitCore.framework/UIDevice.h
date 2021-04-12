/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, NSUUID;

@interface UIDevice : NSObject {

	long long _numDeviceOrientationObservers;
	float _batteryLevel;
	struct {
		unsigned batteryMonitoringEnabled : 1;
		unsigned proximityMonitoringEnabled : 1;
		unsigned expectsFaceContactInLandscape : 1;
		unsigned orientation : 3;
		unsigned batteryState : 2;
		unsigned proximityState : 1;
		unsigned hasTouchPadOverride : 1;
		unsigned hasTouchPad : 1;
	}  _deviceFlags;

}

@property (getter=_feedbackSupportLevel,nonatomic,readonly) long long feedbackSupportLevel; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,retain,readonly) NSString * buildVersion; 
@property (nonatomic,readonly) BOOL _supportsPencil; 
@property (assign,setter=_setBacklightLevel:,nonatomic) float _backlightLevel; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * localizedModel; 
@property (nonatomic,readonly) NSString * systemName; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) long long orientation; 
@property (nonatomic,readonly) NSUUID * identifierForVendor; 
@property (getter=isGeneratingDeviceOrientationNotifications,nonatomic,readonly) BOOL generatesDeviceOrientationNotifications; 
@property (assign,getter=isBatteryMonitoringEnabled,nonatomic) BOOL batteryMonitoringEnabled; 
@property (nonatomic,readonly) long long batteryState; 
@property (nonatomic,readonly) float batteryLevel; 
@property (assign,getter=isProximityMonitoringEnabled,nonatomic) BOOL proximityMonitoringEnabled; 
@property (nonatomic,readonly) BOOL proximityState; 
@property (getter=isMultitaskingSupported,nonatomic,readonly) BOOL multitaskingSupported; 
@property (nonatomic,readonly) long long userInterfaceIdiom; 
+(id)currentDevice;
+(BOOL)_hasHomeButton;
+(BOOL)_isWatchCompanion;
+(BOOL)_isWatch;
+(long long)currentDeviceOrientationAllowingAmbiguous:(BOOL)arg1 ;
+(id)modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
+(BOOL)_isLowEnd;
-(NSString *)name;
-(NSString *)systemVersion;
-(long long)orientation;
-(NSString *)model;
-(void)setOrientation:(long long)arg1 ;
-(long long)userInterfaceIdiom;
-(id)_tapticEngine;
-(long long)_keyboardGraphicsQuality;
-(long long)_graphicsQuality;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isSystemSoundEnabled;
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(long long)_feedbackSupportLevel;
-(BOOL)_supportsForceTouch;
-(BOOL)_supportsPencil;
-(void)_registerForSystemSounds:(id)arg1 ;
-(void)_unregisterForSystemSounds:(id)arg1 ;
-(BOOL)_supportsDeepColor;
-(void)_enableDeviceOrientationEvents:(BOOL)arg1 ;
-(void)_playSystemSound:(unsigned)arg1 ;
-(void)_updateSystemSoundActiveStatus:(id)arg1 ;
-(void)_setActiveUserInterfaceIdiom:(long long)arg1 ;
-(NSString *)localizedModel;
-(NSString *)systemName;
-(NSString *)buildVersion;
-(NSUUID *)identifierForVendor;
-(void)beginGeneratingDeviceOrientationNotifications;
-(void)endGeneratingDeviceOrientationNotifications;
-(BOOL)isGeneratingDeviceOrientationNotifications;
-(BOOL)isBatteryMonitoringEnabled;
-(void)setBatteryMonitoringEnabled:(BOOL)arg1 ;
-(long long)batteryState;
-(float)batteryLevel;
-(BOOL)isProximityMonitoringEnabled;
-(void)setProximityMonitoringEnabled:(BOOL)arg1 ;
-(void)_setExpectsFaceContactInLandscape:(BOOL)arg1 ;
-(BOOL)proximityState;
-(BOOL)isMultitaskingSupported;
-(void)playInputClick;
-(void)_setBacklightLevel:(float)arg1 ;
-(float)_backlightLevel;
-(float)_softwareDimmingAlpha;
-(void)_playInputSelectSound;
-(void)_playInputDeleteSound;
-(void)_setProximityState:(BOOL)arg1 ;
-(void)_setBatteryState:(long long)arg1 ;
-(void)_setBatteryLevel:(float)arg1 ;
-(BOOL)_hasTouchPad;
-(void)_setHasTouchPad:(BOOL)arg1 ;
-(void)_setGraphicsQualityOverride:(long long)arg1 ;
-(void)_clearGraphicsQualityOverride;
-(BOOL)_hasGraphicsQualityOverride;
-(long long)_predictionGraphicsQuality;
-(long long)_nativeScreenGamut;
@end

