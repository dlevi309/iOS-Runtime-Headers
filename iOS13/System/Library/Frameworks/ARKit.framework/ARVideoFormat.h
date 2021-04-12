/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
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
+(id)bestDepthFormatForDeviceFormat:(id)arg1 ;
+(id)supportedVideoFormatsForDevicePosition:(long long)arg1 deviceType:(id)arg2 videoBinned:(BOOL)arg3 ;
+(id)bestTimeOfFlightFormatForDevicePosition:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)framesPerSecond;
-(AVCaptureDevice *)device;
-(void)setDepthDataFormat:(AVCaptureDeviceFormat *)arg1 ;
-(AVCaptureDeviceFormat *)depthDataFormat;
-(AVCaptureDeviceFormat *)deviceFormat;
-(CGSize)imageResolution;
-(NSArray *)frameRatesByPowerUsage;
-(NSString *)captureDeviceType;
-(long long)captureDevicePosition;
-(id)initWithImageResolution:(CGSize)arg1 captureDevicePosition:(long long)arg2 captureDeviceType:(id)arg3 ;
-(id)initWithCaptureDevice:(id)arg1 format:(id)arg2 ;
-(void)setFrameRatesByPowerUsage:(NSArray *)arg1 ;
@end

