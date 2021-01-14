/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class UIWindow, CAMMotionController, NSObject, JFXOrientationState;

@interface JFXOrientationMonitor : NSObject {

	UIWindow* _window;
	long long _interfaceOrientation_internal;
	CAMMotionController* _motionController;
	long long _deviceOrientation_internal;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) UIWindow * window;                                            //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation_internal;                      //@synthesize interfaceOrientation_internal=_interfaceOrientation_internal - In the implementation block
@property (nonatomic,retain) CAMMotionController * motionController;                       //@synthesize motionController=_motionController - In the implementation block
@property (assign,nonatomic) long long deviceOrientation_internal;                         //@synthesize deviceOrientation_internal=_deviceOrientation_internal - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) long long deviceOrientation; 
@property (nonatomic,readonly) long long statusBarOrientation; 
@property (nonatomic,readonly) JFXOrientationState * currentOrientationState; 
+(id)sharedInstance;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(void)initializeWithWindow:(id)arg1 ;
+(id)JFX_sharedInstanceWithWindow:(id)arg1 ;
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(long long)interfaceOrientation;
-(UIWindow *)window;
-(long long)statusBarOrientation;
-(long long)deviceOrientation;
-(NSObject*<OS_dispatch_queue>)queue;
-(CAMMotionController *)motionController;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(JFXOrientationState *)currentOrientationState;
-(void)camMotionControllerCaptureOrientationChangedNotification:(id)arg1 ;
-(void)JFX_setInterfaceOrientation:(long long)arg1 ;
-(void)applicationDidChangeStatusBarOrientationNotification:(id)arg1 ;
-(void)JFX_setDeviceOrientation:(long long)arg1 ;
-(long long)interfaceOrientation_internal;
-(long long)deviceOrientation_internal;
-(void)setInterfaceOrientation_internal:(long long)arg1 ;
-(void)setDeviceOrientation_internal:(long long)arg1 ;
-(void)setMotionController:(CAMMotionController *)arg1 ;
@end

