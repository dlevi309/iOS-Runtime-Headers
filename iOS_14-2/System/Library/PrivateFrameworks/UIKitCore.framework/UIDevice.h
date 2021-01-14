/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)_isWatch;
+(BOOL)_isLowEnd;
+(long long)currentDeviceOrientationAllowingAmbiguous:(BOOL)arg1 ;
+(id)modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
+(BOOL)_hasHomeButton;
+(BOOL)_isWatchCompanion;
-(NSString *)systemVersion;
-(long long)userInterfaceIdiom;
-(NSString *)model;
-(void)_setBacklightLevel:(float)arg1 ;
-(void)_playSystemSound:(unsigned)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(NSString *)systemName;
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(float)batteryLevel;
-(long long)batteryState;
-(void)_enableDeviceOrientationEvents:(BOOL)arg1 ;
-(NSString *)localizedModel;
-(void)_updateSystemSoundActiveStatus:(id)arg1 ;
-(NSUUID *)identifierForVendor;
-(BOOL)isBatteryMonitoringEnabled;
-(void)beginGeneratingDeviceOrientationNotifications;
-(BOOL)proximityState;
-(void)endGeneratingDeviceOrientationNotifications;
-(void)playInputClick;
-(BOOL)isGeneratingDeviceOrientationNotifications;
-(void)_setBatteryState:(long long)arg1 ;
-(void)setBatteryMonitoringEnabled:(BOOL)arg1 ;
-(BOOL)isProximityMonitoringEnabled;
-(void)setProximityMonitoringEnabled:(BOOL)arg1 ;
-(void)_setActiveUserInterfaceIdiom:(long long)arg1 ;
-(void)_setExpectsFaceContactInLandscape:(BOOL)arg1 ;
-(BOOL)isMultitaskingSupported;
-(float)_softwareDimmingAlpha;
-(void)_playInputSelectSound;
-(void)_setHasTouchPad:(BOOL)arg1 ;
-(void)_playInputDeleteSound;
-(void)_setProximityState:(BOOL)arg1 ;
-(void)_setBatteryLevel:(float)arg1 ;
-(void)_setGraphicsQualityOverride:(long long)arg1 ;
-(void)_clearGraphicsQualityOverride;
-(BOOL)_hasGraphicsQualityOverride;
-(long long)_predictionGraphicsQuality;
-(NSString *)name;
-(BOOL)_supportsPencil;
-(id)_tapticEngine;
-(NSString *)buildVersion;
-(long long)orientation;
-(BOOL)_supportsDeepColor;
-(float)_backlightLevel;
-(BOOL)_isSystemSoundEnabled;
-(long long)_graphicsQuality;
-(void)_registerForSystemSounds:(id)arg1 ;
-(void)_unregisterForSystemSounds:(id)arg1 ;
-(long long)_feedbackSupportLevel;
-(long long)_nativeScreenGamut;
-(BOOL)_hasTouchPad;
-(long long)_keyboardGraphicsQuality;
-(BOOL)_supportsForceTouch;
-(void)setOrientation:(long long)arg1 ;
@end

