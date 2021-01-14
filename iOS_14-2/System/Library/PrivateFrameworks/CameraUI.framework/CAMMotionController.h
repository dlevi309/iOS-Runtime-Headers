/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <libobjc.A.dylib/BKSAccelerometerDelegate.h>
#import <libobjc.A.dylib/CAMLevelViewModelChangeObserver.h>

@class CAMLevelViewModel, CAMPreviewAlignmentModel, BKSAccelerometer, CMMotionManager, NSString;

@interface CAMMotionController : NSObject <BKSAccelerometerDelegate, CAMLevelViewModelChangeObserver> {

	BOOL __didNotifyCaptureOrientationWasInvalid;
	long long _dominantPhysicalButton;
	CAMLevelViewModel* _activeLevelViewModel;
	CAMPreviewAlignmentModel* _activePreviewAlignmentModel;
	long long __cachedCaptureOrientation;
	long long __fallbackCaptureOrientation;
	BKSAccelerometer* __accelerometer;
	long long __numberOfDominantPhysicalButtonObservers;
	CMMotionManager* __physicalButtonMotionManager;
	CMMotionManager* __attitudeAlignmentMotionManager;

}

@property (assign,setter=_setCachedCaptureOrientation:,nonatomic) long long _cachedCaptureOrientation;                                            //@synthesize _cachedCaptureOrientation=__cachedCaptureOrientation - In the implementation block
@property (nonatomic,readonly) long long _fallbackCaptureOrientation;                                                                             //@synthesize _fallbackCaptureOrientation=__fallbackCaptureOrientation - In the implementation block
@property (assign,setter=_setDidNotifyCaptureOrientationWasInvalid:,nonatomic) BOOL _didNotifyCaptureOrientationWasInvalid;                       //@synthesize _didNotifyCaptureOrientationWasInvalid=__didNotifyCaptureOrientationWasInvalid - In the implementation block
@property (setter=_setAccelerometer:,nonatomic,retain) BKSAccelerometer * _accelerometer;                                                         //@synthesize _accelerometer=__accelerometer - In the implementation block
@property (assign,setter=_setNumberOfDominantPhysicalButtonObservers:,nonatomic) long long _numberOfDominantPhysicalButtonObservers;              //@synthesize _numberOfDominantPhysicalButtonObservers=__numberOfDominantPhysicalButtonObservers - In the implementation block
@property (nonatomic,readonly) CMMotionManager * _physicalButtonMotionManager;                                                                    //@synthesize _physicalButtonMotionManager=__physicalButtonMotionManager - In the implementation block
@property (assign,setter=_setDominantPhysicalButton:,nonatomic) long long dominantPhysicalButton;                                                 //@synthesize dominantPhysicalButton=_dominantPhysicalButton - In the implementation block
@property (nonatomic,readonly) CMMotionManager * _attitudeAlignmentMotionManager;                                                                 //@synthesize _attitudeAlignmentMotionManager=__attitudeAlignmentMotionManager - In the implementation block
@property (setter=_setActiveLevelViewModel:,nonatomic,retain) CAMLevelViewModel * activeLevelViewModel;                                           //@synthesize activeLevelViewModel=_activeLevelViewModel - In the implementation block
@property (setter=_setActivePreviewAlignmentModel:,nonatomic,retain) CAMPreviewAlignmentModel * activePreviewAlignmentModel;                      //@synthesize activePreviewAlignmentModel=_activePreviewAlignmentModel - In the implementation block
@property (nonatomic,readonly) long long captureOrientation; 
@property (nonatomic,readonly) long long panoramaCaptureOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)_setDominantPhysicalButton:(long long)arg1 ;
-(id)init;
-(void)beginUpdatingPreviewAlignmentModel:(id)arg1 ;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(long long)_numberOfDominantPhysicalButtonObservers;
-(CAMPreviewAlignmentModel *)activePreviewAlignmentModel;
-(void)debugValidateCaptureOrientationForMode:(long long)arg1 ;
-(void)_setActiveLevelViewModel:(id)arg1 ;
-(BOOL)_didNotifyCaptureOrientationWasInvalid;
-(void)_setNumberOfDominantPhysicalButtonObservers:(long long)arg1 ;
-(CMMotionManager *)_physicalButtonMotionManager;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2 ;
-(long long)panoramaCaptureOrientation;
-(id)_debugStringForInterfaceOrientation:(long long)arg1 ;
-(CAMLevelViewModel *)activeLevelViewModel;
-(long long)captureOrientation;
-(void)_setAccelerometer:(id)arg1 ;
-(void)_setDidNotifyCaptureOrientationWasInvalid:(BOOL)arg1 ;
-(void)_updatePhysicalButtonObservation;
-(long long)dominantPhysicalButton;
-(long long)_cachedCaptureOrientation;
-(void)beginUpdatingLevelViewModel:(id)arg1 ;
-(void)_handleLevelMotionUpdate:(id)arg1 error:(id)arg2 ;
-(void)_setCachedCaptureOrientation:(long long)arg1 ;
-(id)_debugStringForDeviceOrientation:(long long)arg1 ;
-(BKSAccelerometer *)_accelerometer;
-(void)_updateInitialOrientation;
-(void)endUpdatingActiveLevelViewModel;
-(void)endGeneratingDominantPhysicalButtonNotifications;
-(CMMotionManager *)_attitudeAlignmentMotionManager;
-(long long)_fallbackCaptureOrientation;
-(void)_setActivePreviewAlignmentModel:(id)arg1 ;
-(void)endUpdatingPreviewAlignmentModel;
-(void)_updateAttitudeAlignmentMotionManager;
-(void)dealloc;
-(void)beginGeneratingDominantPhysicalButtonNotifications;
-(void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void*)arg3 ;
@end

