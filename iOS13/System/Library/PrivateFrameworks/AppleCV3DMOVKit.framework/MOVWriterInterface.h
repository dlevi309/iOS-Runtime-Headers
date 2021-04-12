/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <AppleCV3DMOVKit/AppleCV3DMOVKit-Structs.h>
#import <MOVStreamIO/MOVStreamWriter.h>
#import <libobjc.A.dylib/MOVStreamWriterDelegate.h>

@protocol MOVWriterInterfaceDelegate;
@class NSMutableDictionary, NSString, NSMutableArray, NSDictionary, CVACalibration;

@interface MOVWriterInterface : MOVStreamWriter <MOVStreamWriterDelegate> {

	NSMutableDictionary* _trackAddedByStream;
	NSString* _firstSteamID;
	BOOL _prepared;
	NSMutableDictionary* _frameMetadataDictionary;
	NSMutableDictionary* _metadataAttachmentArrays;
	NSMutableArray* _movMetadataArray;
	NSDictionary* _fileSummary;
	BOOL _isReady;
	NSString* _deviceName;
	NSString* _deviceString;
	NSString* _bundleID;
	NSString* _version;
	NSString* _serialNumber;
	NSString* _productType;
	CVACalibration* _calibration;
	id<MOVWriterInterfaceDelegate> _interface_delegate;
	NSMutableDictionary* _firstFrameContainer;

}

@property (nonatomic,retain) NSMutableDictionary * firstFrameContainer;              //@synthesize firstFrameContainer=_firstFrameContainer - In the implementation block
@property (readonly) BOOL isReady;                                                   //@synthesize isReady=_isReady - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                  //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceString;                                //@synthesize deviceString=_deviceString - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * version;                                     //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                                //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) NSString * productType;                                 //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) CVACalibration * calibration;                           //@synthesize calibration=_calibration - In the implementation block
@property (__weak) id<MOVWriterInterfaceDelegate> interface_delegate;                //@synthesize interface_delegate=_interface_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeDeviceString;
+(SCD_Struct_Ti7)cmTimeFromTimestamp:(double)arg1 ;
+(BOOL)getSWToWExtrinsics:(SCD_Struct_CV4*)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(BOOL)isReady;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)serialNumber;
-(NSString *)productType;
-(void)setProductType:(NSString *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)processCVAUserEvent:(id)arg1 ;
-(void)processCMData:(id)arg1 ;
-(id)createFileMetadata;
-(id)initWithFileURL:(id)arg1 expectedFrameRate:(double)arg2 fileSummary:(id)arg3 ;
-(void)setInterface_delegate:(id<MOVWriterInterfaceDelegate>)arg1 ;
-(void)setDeviceString:(NSString *)arg1 ;
-(void)registerCVACameraCalibrationData;
-(void)registerStreamID:(id)arg1 withConfigObject:(id)arg2 ;
-(void)registerMetadataID:(id)arg1 ;
-(void)registerAccelerometer;
-(void)registerGyro;
-(void)registerMotion;
-(void)registerLocation;
-(void)registerCVADepthTOF;
-(void)registerCVAUserEvent;
-(void)registerCMData;
-(void)processCVADepthTOF:(id)arg1 ;
-(void)appendMetadata:(id)arg1 metadataID:(id)arg2 ;
-(void)processNSCoderObject:(id)arg1 metadataID:(id)arg2 ;
-(BOOL)processPixelBuffer:(CVBufferRef)arg1 withTimeStamp:(SCD_Struct_Ti7)arg2 intrinsics:(SCD_Struct_CV3*)arg3 exposureTime:(double)arg4 streamID:(id)arg5 ;
-(void)processCVACameraCalibrationData:(id)arg1 ;
-(void)finishWriting:(id*)arg1 ;
-(NSString *)deviceString;
-(id)initWithFileURL:(id)arg1 expectedFrameRate:(double)arg2 fileSummary:(id)arg3 callbackQueue:(id)arg4 ;
-(void)setupMetadata:(id)arg1 ;
-(void)addSWToWExtrinsics:(id)arg1 ;
-(void)addJasperExtrinsics:(id)arg1 ;
-(id)addDefaultSummary;
-(void)clearFirstBufferForStream:(id)arg1 ;
-(NSMutableDictionary *)firstFrameContainer;
-(void)setFirstFrameContainer:(NSMutableDictionary *)arg1 ;
-(id)arrayFrom3x3Matrix:(const SCD_Struct_CV3*)arg1 ;
-(void)setMetadataAttachmentTo:(CVBufferRef)arg1 streamID:(id)arg2 ;
-(void)addFirstBufferForStream:(id)arg1 buffer:(CVBufferRef)arg2 withTimestamp:(SCD_Struct_Ti7)arg3 ;
-(BOOL)receivedAllFramesForStreams:(id)arg1 ;
-(void)intelligentlyAppendBuffersForStreams:(id)arg1 ;
-(void)appendAllMetadataWithTimeStamp:(SCD_Struct_Ti7)arg1 ;
-(void)streamWriterDidFinishPreparing;
-(void)streamWriterDidFailWithError:(id)arg1 ;
-(void)streamWriterDidFinishRecording;
-(void)streamWriterEncounteredAnError:(id)arg1 ;
-(void)registerALS:(long long*)arg1 ;
-(void)registerCompass;
-(void)registerCVAFeatureBuffer;
-(void)registerCVAPRDevice;
-(void)addMovieMetadataDictionary:(id)arg1 value:(id)arg2 ;
-(void)registerStreamID:(id)arg1 config:(SCD_Struct_MO8*)arg2 ;
-(CVBufferRef)getFirstBufferForStream:(id)arg1 withTimestamp:(SCD_Struct_Ti7*)arg2 ;
-(void)addFrameMetadata:(id)arg1 value:(id)arg2 streamID:(id)arg3 ;
-(void)addFrameMetadata:(id)arg1 streamID:(id)arg2 ;
-(void)processGyroscopeData:(id)arg1 andAdditionalData:(id)arg2 ;
-(void)processCompassData:(id)arg1 ;
-(void)processALSData:(id)arg1 location:(long long*)arg2 ;
-(void)processAccelerometerData:(id)arg1 andAdditionalData:(id)arg2 ;
-(void)processDeviceMotionData:(id)arg1 andAdditionalData:(id)arg2 ;
-(void)processCoreLocationData:(id)arg1 timestamp:(double)arg2 andAdditionalData:(id)arg3 ;
-(void)processCVAPRDevice:(id)arg1 ;
-(void)processCVAFeatureBuffer:(id)arg1 ;
-(void)processClass:(id)arg1 andAdditionalData:(id)arg2 metadataID:(id)arg3 ;
-(void)clearAllMetadataBuffers;
-(CVACalibration *)calibration;
-(void)setCalibration:(CVACalibration *)arg1 ;
-(id<MOVWriterInterfaceDelegate>)interface_delegate;
@end

