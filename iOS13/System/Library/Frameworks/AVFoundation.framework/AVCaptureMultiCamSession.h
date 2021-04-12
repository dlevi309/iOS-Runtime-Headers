/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVCaptureSession.h>

@interface AVCaptureMultiCamSession : AVCaptureSession {

	float _hardwareCost;
	float _systemPressureCost;

}

@property (nonatomic,readonly) float hardwareCost; 
@property (nonatomic,readonly) float systemPressureCost; 
+(BOOL)isMultiCamSupported;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startRunning;
-(BOOL)canSetSessionPreset:(id)arg1 ;
-(BOOL)_canAddInput:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)_addConnection:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)_canAddOutput:(id)arg1 failureReason:(id*)arg2 ;
-(void)_removeConnection:(id)arg1 ;
-(BOOL)_canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)handleVideoInputDevice:(id)arg1 activeFormatChanged:(id)arg2 ;
-(BOOL)isOverCost:(id*)arg1 ;
-(float)hardwareCost;
-(void)_updateCosts;
-(void)_updateSystemPressureCost;
-(void)_updateHardwareCost;
-(id)_livePortSetsByDeviceInput;
-(id)_physicalDevicePowerInfoSet;
-(id)_constituentDeviceFormatFromVirtualDeviceFormat:(id)arg1 virtualDevice:(id)arg2 constituentDevice:(id)arg3 ;
-(float)systemPressureCost;
@end

