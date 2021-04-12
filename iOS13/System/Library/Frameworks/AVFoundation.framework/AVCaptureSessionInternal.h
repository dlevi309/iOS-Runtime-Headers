/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_semaphore;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, AVCaptureDevice, FigCaptureSessionConfiguration, NSMutableArray, NSHashTable, AVCaptureSessionConfiguration, NSError, AVRunLoopCondition, NSObject;

@interface AVCaptureSessionInternal : NSObject {

	AVWeakReference* weakReference;
	NSString* sessionPreset;
	AVCaptureDevice* adjustingDeviceActiveFormat;
	int beginConfigRefCount;
	FigCaptureSessionConfiguration* sessionConfig;
	OpaqueFigCaptureSessionRef figCaptureSession;
	BOOL figCaptureSessionRunning;
	BOOL figCaptureSessionStarted;
	NSMutableArray* inputs;
	NSMutableArray* outputs;
	NSHashTable* videoPreviewLayers;
	NSMutableArray* connections;
	NSMutableArray* committedAVCaptureSessionConfigurations;
	AVCaptureSessionConfiguration* liveAVCaptureSessionConfiguration;
	NSError* stopError;
	BOOL running;
	BOOL interrupted;
	BOOL usesApplicationAudioSession;
	BOOL automaticallyConfiguresApplicationAudioSession;
	BOOL automaticallyConfiguresCaptureDeviceForWideColor;
	AVRunLoopCondition* runLoopCondition;
	BOOL waitingForFigCaptureSessionToStart;
	BOOL waitingForFigCaptureSessionToStop;
	BOOL waitingForFigCaptureSessionConfigurationToBecomeLive;
	OpaqueCMClockRef masterClock;
	BOOL notifiesOnMainThread;
	BOOL adjustingVideoDeviceHDREnabled;
	NSMutableArray* devicesToResetVideoZoomFactorAndMinMaxFrameDurations;
	BOOL authorizedToUseCameraInMultipleForegroundAppLayout;
	BOOL xctestAuthorizedToStealDevice;
	NSObject*<OS_dispatch_semaphore> serverConnectionDiedSemaphore;
	id serverConnectionDiedNotificationToken;
	ct_green_tea_logger_sRef greenTeaLogger;
	BOOL videoInputDeviceUsed;

}
@end

