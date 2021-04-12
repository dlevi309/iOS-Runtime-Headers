/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class UIWindow, CAMMotionController, NSObject;

@interface JTOrientationMonitor : NSObject {

	UIWindow* _window;
	long long _windowInterfaceOrientation_internal;
	CAMMotionController* _motionController;
	long long _captureInterfaceOrientation_internal;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) UIWindow * window;                                           //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) long long windowInterfaceOrientation_internal;               //@synthesize windowInterfaceOrientation_internal=_windowInterfaceOrientation_internal - In the implementation block
@property (nonatomic,retain) CAMMotionController * motionController;                      //@synthesize motionController=_motionController - In the implementation block
@property (assign,nonatomic) long long captureInterfaceOrientation_internal;              //@synthesize captureInterfaceOrientation_internal=_captureInterfaceOrientation_internal - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) long long windowInterfaceOrientation; 
@property (nonatomic,readonly) long long captureInterfaceOrientation; 
@property (nonatomic,readonly) long long statusBarOrientation; 
+(id)sharedInstance;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(void)initializeWithWindow:(id)arg1 ;
+(unsigned)rotationFromCaptureDevicePosition:(long long)arg1 captureVideoOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3 ;
+(id)CFX_sharedInstanceWithWindow:(id)arg1 ;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(long long)statusBarOrientation;
-(long long)windowInterfaceOrientation;
-(CAMMotionController *)motionController;
-(long long)captureInterfaceOrientation;
-(void)CFX_setWindowInterfaceOrientation:(long long)arg1 ;
-(void)applicationDidChangeStatusBarOrientationNotification:(id)arg1 ;
-(void)camMotionControllerCaptureOrientationChangedNotification:(id)arg1 ;
-(void)CFX_setCaptureInterfaceOrientation:(long long)arg1 ;
-(long long)windowInterfaceOrientation_internal;
-(long long)captureInterfaceOrientation_internal;
-(void)setWindowInterfaceOrientation_internal:(long long)arg1 ;
-(void)setCaptureInterfaceOrientation_internal:(long long)arg1 ;
-(void)setMotionController:(CAMMotionController *)arg1 ;
@end

