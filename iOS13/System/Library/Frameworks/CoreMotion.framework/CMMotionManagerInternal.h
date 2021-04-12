/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue, NSObject, NSString;

@interface CMMotionManagerInternal : NSObject {

	os_unfair_lock_s fSampleLock;
	Dispatcher* fAudioAccessoryAccelerometerDispatcher;
	double fAudioAccessoryAccelerometerUpdateInterval;
	/*^block*/id fAudioAccessoryAccelerometerHandler;
	NSOperationQueue* fAudioAccessoryAccelerometerQueue;
	Sample fLatestAudioAccessoryAccelerometerSample;
	Dispatcher* fAccelerometerDispatcher;
	double fAccelerometerUpdateInterval;
	/*^block*/id fAccelerometerHandler;
	NSOperationQueue* fAccelerometerQueue;
	double fLastAccelerometerNotificationTimestamp;
	Sample fLatestAccelerometerSample;
	Dispatcher* fAmbientPressureDispatcher;
	double fAmbientPressureUpdateInterval;
	/*^block*/id fAmbientPressureHandler;
	NSOperationQueue* fAmbientPressureQueue;
	double fLastAmbientPressureNotificationTimestamp;
	Sample fLatestAmbientPressureSample;
	Dispatcher* fCompensatedAmbientPressureDispatcher;
	double fCompensatedAmbientPressureUpdateInterval;
	/*^block*/id fCompensatedAmbientPressureHandler;
	NSOperationQueue* fCompensatedAmbientPressureQueue;
	double fLastCompensatedAmbientPressureNotificationTimestamp;
	Sample fLatestCompensatedAmbientPressureSample;
	Dispatcher* fGyroDispatcher;
	double fGyroUpdateInterval;
	/*^block*/id fGyroHandler;
	NSOperationQueue* fGyroQueue;
	double fLastGyroNotificationTimestamp;
	Sample fLatestGyroSample;
	Dispatcher* fDeviceMotionDispatcher;
	double fDeviceMotionUpdateInterval;
	/*^block*/id fDeviceMotionHandler;
	NSOperationQueue* fDeviceMotionQueue;
	double fLastDeviceMotionNotificationTimestamp;
	int fDeviceMotionMode;
	unsigned long long fAttitudeReferenceFrame;
	BOOL fCompassCalibrationHud;
	BOOL fIsCompassCalibrated;
	BOOL fIsUsingCalibratedCompass;
	BOOL fHaveSentDeviceRequiresMovementError;
	unique_ptr<CLGeomagneticModelProvider_Type::Client, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> >* fGeomagneticModelProviderClient;
	SCD_Struct_CM335 fGeomagneticModel;
	BOOL fHaveGeomagneticModelData;
	BOOL fHaveSentTrueNorthUnavailableError;
	double fDeviceMotionStartTimestamp;
	SCD_Struct_CM321 fInitialReferenceRotation;
	BOOL fIsInitialReferenceAvailable;
	Dispatcher* fMagnetometerDispatcher;
	double fMagnetometerUpdateInterval;
	/*^block*/id fMagnetometerHandler;
	NSOperationQueue* fMagnetometerQueue;
	double fLastMagnetometerNotificationTimestamp;
	Sample fLatestMagnetometerSample;
	BOOL fShowsDeviceMovementDisplay;
	Dispatcher* fPrivateAccelerometerDataDispatcher;
	/*function pointer*/void* fPrivateAccelerometerDataCallback;
	void* fPrivateAccelerometerDataCallbackInfo;
	Dispatcher* fPrivateGyroDataDispatcher;
	/*function pointer*/void* fPrivateGyroDataCallback;
	void* fPrivateGyroDataCallbackInfo;
	Dispatcher* fPrivateMagnetometerDataDispatcher;
	/*function pointer*/void* fPrivateMagnetometerDataCallback;
	void* fPrivateMagnetometerDataCallbackInfo;
	Dispatcher* fPrivateDeviceMotionDispatcher;
	/*function pointer*/void* fPrivateDeviceMotionCallback;
	void* fPrivateDeviceMotionCallbackInfo;
	BOOL fPrivateDeviceMotionUse9Axis;
	BOOL fPrivateUseAccelerometer;
	CLConnectionClient* fConnection;
	NSObject*<OS_dispatch_queue> fConnectionQueue;
	BOOL fSidebandSensorFusionEnabled;
	BOOL fSidebandSensorFusionLatency;
	BOOL fSidebandSensorFusionSnoop;
	unique_ptr<CLIspDataVisitor, std::__1::default_delete<CLIspDataVisitor> >* fSidebandVisitor;
	int fPrivatePowerConservationMode;
	/*function pointer*/void* fPrivateNotificationCallback;
	void* fPrivateNotificationCallbackInfo;
	Dispatcher* fPrivateDeviceMotionSensorStatusDispatcher;
	/*^block*/id fDeviceMotionErrorHandler;
	NSOperationQueue* fDeviceMotionErrorQueue;
	BOOL fIsApplicationActive;
	unique_ptr<CLDeviceMotionLiteService, std::__1::default_delete<CLDeviceMotionLiteService> >* fDeviceMotionLiteService;
	unique_ptr<CMMotionManagerStatsCollector, std::__1::default_delete<CMMotionManagerStatsCollector> >* fMotionManagerStatsCollector;
	BOOL fAudioAccessoryAccelerometerAvailable;
	NSOperationQueue* _fDeviceMotionLiteClientQueue;
	/*^block*/id _fDeviceMotionLiteFusedHandler;
	NSString* _fDeviceMotionLitePhysicalDeviceID;

}

@property (nonatomic,retain) NSOperationQueue * fDeviceMotionLiteClientQueue;              //@synthesize fDeviceMotionLiteClientQueue=_fDeviceMotionLiteClientQueue - In the implementation block
@property (nonatomic,copy) id fDeviceMotionLiteFusedHandler;                               //@synthesize fDeviceMotionLiteFusedHandler=_fDeviceMotionLiteFusedHandler - In the implementation block
@property (nonatomic,retain) NSString * fDeviceMotionLitePhysicalDeviceID;                 //@synthesize fDeviceMotionLitePhysicalDeviceID=_fDeviceMotionLitePhysicalDeviceID - In the implementation block
-(id)init;
-(void)dealloc;
-(void)teardownPrivate;
-(NSOperationQueue *)fDeviceMotionLiteClientQueue;
-(void)setFDeviceMotionLiteClientQueue:(NSOperationQueue *)arg1 ;
-(id)fDeviceMotionLiteFusedHandler;
-(void)setFDeviceMotionLiteFusedHandler:(id)arg1 ;
-(NSString *)fDeviceMotionLitePhysicalDeviceID;
-(void)setFDeviceMotionLitePhysicalDeviceID:(NSString *)arg1 ;
@end

