/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVCaptureSession.h>

@interface AVCaptureMultiCamSession : AVCaptureSession {

	float _hardwareCost;
	float _systemPressureCost;

}

@property (nonatomic,readonly) float hardwareCost; 
@property (nonatomic,readonly) float systemPressureCost; 
+(BOOL)isMultiCamSupported;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)_canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)_addConnection:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_updateCosts;
-(void)handleVideoInputDevice:(id)arg1 activeFormatChanged:(id)arg2 ;
-(void)_updateSystemPressureCost;
-(void)_updateHardwareCost;
-(id)_livePortSetsByDeviceInput;
-(unsigned)_computeMemoryUsageForOutputs;
-(float)_computeEncoderCostForOutputs;
-(id)_physicalDevicePowerInfoSet;
-(id)_constituentDeviceFormatFromVirtualDeviceFormat:(id)arg1 virtualDevice:(id)arg2 constituentDevice:(id)arg3 ;
-(float)systemPressureCost;
-(BOOL)canSetSessionPreset:(id)arg1 ;
-(BOOL)_canAddInput:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)_canAddOutput:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)isOverCost:(id*)arg1 ;
-(id)init;
-(void)_removeConnection:(id)arg1 ;
-(void)startRunning;
-(float)hardwareCost;
-(void)dealloc;
@end

