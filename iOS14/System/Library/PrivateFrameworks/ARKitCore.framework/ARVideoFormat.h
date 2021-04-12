/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVCaptureDevice, AVCaptureDeviceFormat, NSArray, NSString;

@interface ARVideoFormat : NSObject <NSCopying> {

	AVCaptureDevice* _device;
	AVCaptureDeviceFormat* _deviceFormat;
	CGSize _imageResolution;
	long long _captureDevicePosition;
	NSArray* _frameRatesByPowerUsage;
	AVCaptureDeviceFormat* _depthDataFormat;
	NSString* _captureDeviceType;

}

@property (nonatomic,retain) NSArray * frameRatesByPowerUsage;                     //@synthesize frameRatesByPowerUsage=_frameRatesByPowerUsage - In the implementation block
@property (nonatomic,readonly) AVCaptureDevice * device; 
@property (nonatomic,readonly) AVCaptureDeviceFormat * deviceFormat; 
@property (nonatomic,retain) AVCaptureDeviceFormat * depthDataFormat;              //@synthesize depthDataFormat=_depthDataFormat - In the implementation block
@property (nonatomic,readonly) NSString * captureDeviceType;                       //@synthesize captureDeviceType=_captureDeviceType - In the implementation block
@property (nonatomic,readonly) long long captureDevicePosition;                    //@synthesize captureDevicePosition=_captureDevicePosition - In the implementation block
@property (nonatomic,readonly) CGSize imageResolution; 
@property (nonatomic,readonly) long long framesPerSecond; 
+(id)supportedVideoFormatsForDevicePosition:(long long)arg1 deviceType:(id)arg2 ;
+(id)bestVideoFormatForDevicePosition:(long long)arg1 deviceType:(id)arg2 resolution:(SCD_Struct_AR47)arg3 frameRate:(double)arg4 videoBinned:(BOOL)arg5 ;
+(id)bestVideoFormatForDevicePosition:(long long)arg1 deviceType:(id)arg2 resolution:(SCD_Struct_AR47)arg3 frameRates:(id)arg4 videoBinned:(BOOL)arg5 ;
+(id)bestTimeOfFlightFormatForDevicePosition:(long long)arg1 frameRates:(id)arg2 ;
+(id)bestDepthFormatForDeviceFormat:(id)arg1 ;
+(id)supportedVideoFormatsForDevicePosition:(long long)arg1 deviceType:(id)arg2 videoBinned:(BOOL)arg3 ;
-(void)setDepthDataFormat:(AVCaptureDeviceFormat *)arg1 ;
-(AVCaptureDeviceFormat *)deviceFormat;
-(AVCaptureDevice *)device;
-(AVCaptureDeviceFormat *)depthDataFormat;
-(long long)framesPerSecond;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)captureDevicePosition;
-(CGSize)imageResolution;
-(NSArray *)frameRatesByPowerUsage;
-(NSString *)captureDeviceType;
-(id)initWithImageResolution:(CGSize)arg1 captureDevicePosition:(long long)arg2 captureDeviceType:(id)arg3 ;
-(id)initWithCaptureDevice:(id)arg1 format:(id)arg2 ;
-(void)setFrameRatesByPowerUsage:(NSArray *)arg1 ;
@end

