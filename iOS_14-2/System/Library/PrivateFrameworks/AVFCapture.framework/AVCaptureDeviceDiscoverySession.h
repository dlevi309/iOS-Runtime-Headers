/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
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
+(void)initialize;
+(id)allVirtualDeviceTypes;
+(id)allSupportedMultiCamDeviceSets;
+(id)allVideoDeviceTypes;
+(id)allAudioDevices;
+(id)allPointCloudDeviceTypes;
+(id)allAudioDeviceTypes;
+(id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
+(id)allPointCloudDevices;
+(id)allVideoDevices;
+(id)allVirtualDevices;
+(id)allDeviceTypes;
-(NSArray *)devices;
-(id)init;
-(id)_initWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 allowIOSMacEnvironment:(BOOL)arg4 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)arg5 ;
-(id)description;
-(NSArray *)supportedMultiCamDeviceSets;
-(void)_handleDeviceConnectedDisconnectedNotification:(id)arg1 ;
-(void)dealloc;
@end

