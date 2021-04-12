/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject {

	NSArray* _deviceTypes;
	long long _position;
	NSString* _mediaType;
	NSArray* _devices;
	NSArray* _supportedMultiCamDeviceSets;

}

@property (nonatomic,readonly) NSArray * devices;                                  //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) NSArray * supportedMultiCamDeviceSets; 
+(id)allDevices;
+(id)allVideoDevices;
+(id)allVirtualDeviceTypes;
+(id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
+(id)allDeviceTypes;
+(id)allVideoDeviceTypes;
+(id)allPointCloudDeviceTypes;
+(id)allAudioDeviceTypes;
+(id)allPointCloudDevices;
+(id)allAudioDevices;
+(id)allVirtualDevices;
+(id)allSupportedMultiCamDeviceSets;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSArray *)devices;
-(id)_initWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
-(NSArray *)supportedMultiCamDeviceSets;
@end

