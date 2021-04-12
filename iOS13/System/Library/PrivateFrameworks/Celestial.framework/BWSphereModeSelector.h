/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface BWSphereModeSelector : NSObject {

	OpaqueFigCaptureStreamRef _stream;
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
@property (readonly) CFStringRef currentSphereMode; 
+(void)initialize;
-(BOOL)depthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)_updateSphereMode;
-(id)initWithStillActivePreviewSupported:(BOOL)arg1 sphereVideoSupported:(BOOL)arg2 ;
-(float)maximumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(BOOL)sphereVideoSupported;
-(BOOL)sphereVideoEnabled;
-(void)setSphereVideoEnabled:(BOOL)arg1 ;
-(BOOL)avoidsSphereRecentering;
-(void)setAvoidsSphereRecentering:(BOOL)arg1 ;
-(BOOL)enablesSphereWhenAvailable;
-(void)setEnablesSphereWhenAvailable:(BOOL)arg1 ;
-(BOOL)zeroShutterLagEnabled;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(BOOL)overCaptureEnabled;
-(void)setOverCaptureEnabled:(BOOL)arg1 ;
-(BOOL)lowPowerSphereModeEnabled;
-(void)setLowPowerSphereModeEnabled:(BOOL)arg1 ;
-(void)setSystemThermalLevel:(int)arg1 ;
-(int)systemThermalLevel;
-(CFStringRef)currentSphereMode;
-(void)setTripodModeEnabled:(BOOL)arg1 ;
-(BOOL)tripodModeEnabled;
@end

