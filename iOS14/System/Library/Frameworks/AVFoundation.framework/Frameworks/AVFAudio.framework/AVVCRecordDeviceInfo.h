/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSUUID;

@interface AVVCRecordDeviceInfo : NSObject {

	BOOL _isRemoteDevice;
	BOOL _isUpsamplingSourceAudio;
	unsigned _remoteDeviceCategory;
	NSString* _recordRoute;
	NSString* _remoteProductIdentifier;
	NSUUID* _remoteDeviceUID;

}

@property (nonatomic,readonly) NSString * recordRoute;                          //@synthesize recordRoute=_recordRoute - In the implementation block
@property (readonly) BOOL isRemoteDevice;                                       //@synthesize isRemoteDevice=_isRemoteDevice - In the implementation block
@property (nonatomic,readonly) NSString * remoteProductIdentifier;              //@synthesize remoteProductIdentifier=_remoteProductIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * remoteDeviceUID;                        //@synthesize remoteDeviceUID=_remoteDeviceUID - In the implementation block
@property (nonatomic,readonly) unsigned remoteDeviceCategory;                   //@synthesize remoteDeviceCategory=_remoteDeviceCategory - In the implementation block
@property (nonatomic,readonly) BOOL isUpsamplingSourceAudio;                    //@synthesize isUpsamplingSourceAudio=_isUpsamplingSourceAudio - In the implementation block
-(NSString *)recordRoute;
-(BOOL)isRemoteDevice;
-(id)initWithRecordingEngine:(shared_ptr<AVVCRecordingEngine>*)arg1 ;
-(NSString *)remoteProductIdentifier;
-(NSUUID *)remoteDeviceUID;
-(unsigned)remoteDeviceCategory;
-(BOOL)isUpsamplingSourceAudio;
-(void)dealloc;
@end

