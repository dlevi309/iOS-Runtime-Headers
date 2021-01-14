/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKWidgetView.h>

@protocol OS_dispatch_queue;
@class NSObject, AVCaptureSession, AVCaptureDeviceInput, OKWidgetCameraPreviewView, NSString;

@interface OKWidgetCameraView : OKWidgetView {

	NSObject*<OS_dispatch_queue> _sessionQueue;
	AVCaptureSession* _session;
	AVCaptureDeviceInput* _videoDeviceInput;
	AVCaptureDeviceInput* _audioDeviceInput;
	BOOL _deviceAuthorized;
	id _runtimeErrorHandlingObserver;
	id _deviceConnectedObserver;
	id _deviceDisconnectedObserver;
	OKWidgetCameraPreviewView* _previewView;
	long long _inputType;
	NSString* _inputDeviceName;
	float _volume;

}

@property (assign,getter=isDeviceAuthorized,nonatomic) BOOL deviceAuthorized;                                                  //@synthesize deviceAuthorized=_deviceAuthorized - In the implementation block
@property (getter=isSessionRunningAndDeviceAuthorized,nonatomic,readonly) BOOL sessionRunningAndDeviceAuthorized; 
@property (assign,nonatomic) id deviceConnectedObserver;                                                                       //@synthesize deviceConnectedObserver=_deviceConnectedObserver - In the implementation block
@property (assign,nonatomic) id deviceDisconnectedObserver;                                                                    //@synthesize deviceDisconnectedObserver=_deviceDisconnectedObserver - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)deviceWithInputType:(long long)arg1 inputDeviceName:(id)arg2 ;
+(id)keyPathsForValuesAffectingSessionRunningAndDeviceAuthorized;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithWidget:(id)arg1 ;
-(void)dealloc;
-(void)_startRunning;
-(id)deviceConnectedObserver;
-(void)setDeviceConnectedObserver:(id)arg1 ;
-(id)deviceDisconnectedObserver;
-(void)setDeviceDisconnectedObserver:(id)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(BOOL)isDeviceAuthorized;
-(void)_prepareSessionIfNeeded;
-(void)__stopRunning;
-(void)checkDeviceAuthorizationStatus;
-(void)setDeviceAuthorized:(BOOL)arg1 ;
-(BOOL)isSessionRunningAndDeviceAuthorized;
-(void)setSettingInput:(long long)arg1 ;
-(void)setSettingInputDeviceName:(id)arg1 ;
-(void)setSettingVolume:(float)arg1 ;
-(void)_stopRunning;
@end

