/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <AppleCV3DMOVKit/AppleCV3DMOVKit-Structs.h>
#import <MOVStreamIO/MOVStreamReader.h>
#import <libobjc.A.dylib/MOVStreamReaderDelegate.h>

@class NSDictionary, NSString;

@interface MOVReaderInterface : MOVStreamReader <MOVStreamReaderDelegate> {

	NSDictionary* _enforcedVideoTrackFormat;
	NSString* _deviceName;
	NSString* _deviceString;
	NSString* _bundleID;
	NSString* _version;
	NSString* _serialNumber;

}

@property (nonatomic,retain) NSDictionary * enforcedVideoTrackFormat;              //@synthesize enforcedVideoTrackFormat=_enforcedVideoTrackFormat - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceString;                              //@synthesize deviceString=_deviceString - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * version;                                   //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                              //@synthesize serialNumber=_serialNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)grabCMSessionID:(id)arg1 ;
+(BOOL)grabSWToWExtrinsics:(SCD_Struct_CV4*)arg1 summary:(id)arg2 ;
+(id)grabJasperExtrinsics:(id)arg1 ;
+(BOOL)isSuperWideStream:(id)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)serialNumber;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setDeviceString:(NSString *)arg1 ;
-(id)grabJasperExtrinsics;
-(BOOL)grabSWToWExtrinsics:(SCD_Struct_CV4*)arg1 ;
-(id)grabNextCVACameraCalibrationData;
-(id)grabNextCMData;
-(id)grabNextDepthTOF;
-(id)grabNextUserEvent;
-(id)grabSummary;
-(NSString *)deviceString;
-(id)mapProductToDevice:(id)arg1 ;
-(id)grabMovieMetadataForKey:(id)arg1 ;
-(id)deviceStringFromPlatformID:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)grabNextRawAccelData:(SCD_Struct_MO6*)arg1 ;
-(id)grabNextRawGyroData:(SCD_Struct_MO6*)arg1 ;
-(id)grabNextRawCompassData:(SCD_Struct_MO6*)arg1 ;
-(id)grabNextRawALSData:(SCD_Struct_MO6*)arg1 location:(long long*)arg2 ;
-(id)grabNextDeviceMotionData:(SCD_Struct_MO6*)arg1 ;
-(id)grabNextCLLocation:(SCD_Struct_MO6*)arg1 ;
-(id)grabNextCMDeviceMotion:(SCD_Struct_MO6*)arg1 ;
-(id)grabNextCMData:(SCD_Struct_MO6*)arg1 ;
-(id)grabNextUserEvent:(SCD_Struct_MO6*)arg1 ;
-(id)grabNextPRDevice:(SCD_Struct_MO6*)arg1 ;
-(id)grabNextFeatureBuffer:(SCD_Struct_MO6*)arg1 ;
-(id)grabNextDepthTOF:(SCD_Struct_MO6*)arg1 ;
-(id)grabNextCVACameraCalibrationData:(SCD_Struct_MO6*)arg1 ;
-(id)grabNextDictionary:(id)arg1 timeRange:(SCD_Struct_MO6*)arg2 ;
-(id)grabNextClass:(id)arg1 class:(Class)arg2 timeRange:(SCD_Struct_MO6*)arg3 ;
-(id)grabNextNSCoderObject:(id)arg1 classes:(id)arg2 timeRange:(SCD_Struct_MO6*)arg3 ;
-(unsigned)reader:(id)arg1 pixelFormatForStream:(id)arg2 suggestedFormat:(unsigned)arg3 ;
-(id)initWithFileURL:(id)arg1 enforcedVideoTrackFormat:(id)arg2 error:(id*)arg3 ;
-(id)grabCalibration;
-(id)grabNextMetadataOfStream2:(id)arg1 timeRange:(SCD_Struct_MO6*)arg2 error:(id*)arg3 ;
-(id)grabNextRawAccelData;
-(id)grabNextRawGyroData;
-(id)grabNextRawCompassData;
-(id)grabNextRawALSData:(long long*)arg1 ;
-(id)grabNextDeviceMotionData;
-(id)grabNextCLLocation;
-(id)grabNextCMDeviceMotion;
-(id)grabNextPRDevice;
-(id)grabNextFeatureBuffer;
-(id)grabNextDictionary:(id)arg1 ;
-(id)grabNextClass:(id)arg1 class:(Class)arg2 ;
-(id)grabNextNSCoderObject:(id)arg1 class:(Class)arg2 ;
-(id)grabNextNSCoderObject:(id)arg1 class:(Class)arg2 timeRange:(SCD_Struct_MO6*)arg3 ;
-(id)grabNextNSCoderObject:(id)arg1 classes:(id)arg2 ;
-(NSDictionary *)enforcedVideoTrackFormat;
-(void)setEnforcedVideoTrackFormat:(NSDictionary *)arg1 ;
@end

