/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureDevice.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSDictionary, NSString, AVWeakReference;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {

	NSObject*<OS_dispatch_queue> _fcsQueue;
	OpaqueFigCaptureSourceRef _fcs;
	NSDictionary* _attributes;
	BOOL _levelMeteringEnabled;
	BOOL _isConnected;
	NSString* _localizedName;
	AVWeakReference* _weakReference;
	NSObject*<OS_dispatch_semaphore> _serverConnectionDiedSemaphore;

}
+(void)initialize;
+(id)_devices;
+(void)_reconnectDevices:(id)arg1 ;
-(OpaqueCMClockRef)deviceClock;
-(BOOL)isConnected;
-(id)localizedName;
-(id)_copyFigCaptureSourceProperty:(CFStringRef)arg1 ;
-(id)deviceType;
-(id)modelID;
-(id)uniqueID;
-(id)init;
-(id)figCaptureSourceAudioSettingsForSessionPreset:(id)arg1 ;
-(void)_handleNotification:(CFStringRef)arg1 payload:(id)arg2 ;
-(void)_reconnectToFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_setFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)audioInputDevicesDidChangeHandler:(id)arg1 ;
-(void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1 ;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg1 ;
-(BOOL)isBuiltInStereoAudioCaptureSupported;
-(BOOL)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(BOOL)hasMediaType:(id)arg1 ;
-(id)_initWithFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(OpaqueFigCaptureSourceRef)figCaptureSource;
-(void)dealloc;
@end

