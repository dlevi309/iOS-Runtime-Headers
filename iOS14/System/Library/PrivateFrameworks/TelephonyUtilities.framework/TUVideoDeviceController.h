/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/TUVideoDeviceControllerProviderDelegate.h>

@protocol OS_dispatch_queue, TUVideoDeviceControllerProviderTUVideoEffectsProvider;
@class NSObject, AVCaptureDevice, NSArray, CALayer, TUVideoEffect;

@interface TUVideoDeviceController : NSObject <TUVideoDeviceControllerProviderDelegate> {

	BOOL _wantsPreview;
	BOOL _hasRefreshedPreviewAfterError;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<TUVideoDeviceControllerProvider><TUVideoEffectsProvider> _provider;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                          //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) id<TUVideoDeviceControllerProvider><TUVideoEffectsProvider> provider;              //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) BOOL wantsPreview;                                                                   //@synthesize wantsPreview=_wantsPreview - In the implementation block
@property (assign,nonatomic) BOOL hasRefreshedPreviewAfterError;                                                  //@synthesize hasRefreshedPreviewAfterError=_hasRefreshedPreviewAfterError - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * currentInputDevice; 
@property (assign,nonatomic) int currentVideoOrientation; 
@property (nonatomic,copy,readonly) NSArray * inputDevices; 
@property (getter=isPreviewRunning,nonatomic,readonly) BOOL previewRunning; 
@property (nonatomic,retain) CALayer * localFrontLayer; 
@property (nonatomic,retain) CALayer * localBackLayer; 
@property (nonatomic,readonly) CGRect localScreenContentsRect; 
@property (nonatomic,retain) TUVideoEffect * currentVideoEffect; 
@property (nonatomic,copy,readonly) NSArray * availableVideoEffects; 
+(int)_tuOrientationForVideoOrientation:(int)arg1 ;
+(int)_videoOrientationForTUOrientation:(int)arg1 ;
-(void)setCameraZoomFactor:(double)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id<TUVideoDeviceControllerProvider><TUVideoEffectsProvider>)provider;
-(void)stopPreview;
-(AVCaptureDevice *)currentInputDevice;
-(id)debugDescription;
-(void)pausePreview;
-(NSArray *)inputDevices;
-(void)flipCamera;
-(id)initWithProvider:(id)arg1 serialQueue:(id)arg2 ;
-(void)startPreview;
-(BOOL)isPreviewRunning;
-(void)setCurrentVideoEffect:(TUVideoEffect *)arg1 ;
-(TUVideoEffect *)currentVideoEffect;
-(NSArray *)availableVideoEffects;
-(void)setWantsPreview:(BOOL)arg1 ;
-(void)rampCameraZoomFactor:(double)arg1 withRate:(double)arg2 ;
-(int)currentVideoOrientation;
-(BOOL)hasRefreshedPreviewAfterError;
-(BOOL)wantsPreview;
-(void)setHasRefreshedPreviewAfterError:(BOOL)arg1 ;
-(void)didStartPreviewForProvider:(id)arg1 ;
-(void)didStopPreviewForProvider:(id)arg1 ;
-(void)captureDevicesChangedForProvider:(id)arg1 ;
-(void)provider:(id)arg1 cameraDidBecomeAvailableForUniqueID:(id)arg2 ;
-(void)provider:(id)arg1 didChangeLocalVideoAttributes:(id)arg2 ;
-(void)provider:(id)arg1 didReceiveErrorFromCameraUniqueID:(id)arg2 error:(id)arg3 ;
-(void)setCurrentVideoOrientation:(int)arg1 ;
-(void)provider:(id)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg2 ;
-(void)provider:(id)arg1 cameraZoomAvailabilityDidChange:(BOOL)arg2 ;
-(CALayer *)localFrontLayer;
-(void)setLocalFrontLayer:(CALayer *)arg1 ;
-(CALayer *)localBackLayer;
-(void)setLocalBackLayer:(CALayer *)arg1 ;
-(void)noteBeginAnimationToPreview;
-(void)noteEndAnimationToPreview;
-(void)noteBeginAnimationToPIP;
-(void)noteEndAnimationToPIP;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 localLandscapeAspectRatio:(CGSize)arg2 ;
-(CGRect)localScreenContentsRect;
-(id)initWithSerialQueue:(id)arg1 ;
-(void)setCurrentInputDevice:(AVCaptureDevice *)arg1 ;
@end

