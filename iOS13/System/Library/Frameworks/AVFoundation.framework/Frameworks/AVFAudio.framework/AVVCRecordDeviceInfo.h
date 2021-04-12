/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSUUID;

@interface AVVCRecordDeviceInfo : NSObject {

	BOOL _isRemoteDevice;
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
-(void)dealloc;
-(NSString *)recordRoute;
-(id)initWithRecordingEngine:(AVVCRecordingEngine*)arg1 ;
-(BOOL)isRemoteDevice;
-(NSString *)remoteProductIdentifier;
-(NSUUID *)remoteDeviceUID;
-(unsigned)remoteDeviceCategory;
@end

