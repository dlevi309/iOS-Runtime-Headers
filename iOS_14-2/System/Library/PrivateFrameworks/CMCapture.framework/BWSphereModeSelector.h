/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWSphereModeSelector : NSObject {

	CFStringRef _currentSphereMode;
	float _maximumFrameRate;
	BOOL _sphereVideoSupported;
	BOOL _sphereVideoEnabled;
	BOOL _avoidsSphereRecentering;
	BOOL _enablesSphereWhenAvailable;
	BOOL _motionDataInvalid;
	BOOL _lowPowerSphereModeEnabled;
	BOOL _stillPreviewActiveSupported;
	BOOL _zeroShutterLagEnabled;
	int _sphereThermalLevel;
	BOOL _tripodModeEnabled;
	BOOL _depthDataDeliveryEnabled;
	BOOL _overCaptureEnabled;
	BOOL _variableFrameRateVideoEnabled;

}

@property (assign,nonatomic) float maximumFrameRate; 
@property (nonatomic,readonly) BOOL sphereVideoSupported; 
@property (assign,nonatomic) BOOL sphereVideoEnabled; 
@property (assign,nonatomic) BOOL avoidsSphereRecentering; 
@property (assign,nonatomic) BOOL enablesSphereWhenAvailable; 
@property (assign,nonatomic) BOOL zeroShutterLagEnabled; 
@property (assign,nonatomic) BOOL lowPowerSphereModeEnabled; 
@property (assign,nonatomic) int systemThermalLevel; 
@property (assign,nonatomic) BOOL tripodModeEnabled; 
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,nonatomic) BOOL overCaptureEnabled; 
@property (assign,nonatomic) BOOL variableFrameRateVideoEnabled; 
@property (readonly) CFStringRef currentSphereMode; 
+(void)initialize;
-(CFStringRef)currentSphereMode;
-(BOOL)enablesSphereWhenAvailable;
-(BOOL)overCaptureEnabled;
-(void)setVariableFrameRateVideoEnabled:(BOOL)arg1 ;
-(float)maximumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(void)setOverCaptureEnabled:(BOOL)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(BOOL)sphereVideoSupported;
-(BOOL)variableFrameRateVideoEnabled;
-(void)setTripodModeEnabled:(BOOL)arg1 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)zeroShutterLagEnabled;
-(BOOL)lowPowerSphereModeEnabled;
-(int)systemThermalLevel;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(void)_updateSphereMode;
-(void)setEnablesSphereWhenAvailable:(BOOL)arg1 ;
-(void)setSphereVideoEnabled:(BOOL)arg1 ;
-(void)setSystemThermalLevel:(int)arg1 ;
-(id)initWithStillActivePreviewSupported:(BOOL)arg1 sphereVideoSupported:(BOOL)arg2 ;
-(BOOL)sphereVideoEnabled;
-(void)setAvoidsSphereRecentering:(BOOL)arg1 ;
-(BOOL)avoidsSphereRecentering;
-(void)setLowPowerSphereModeEnabled:(BOOL)arg1 ;
-(BOOL)tripodModeEnabled;
@end

