/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface CSAudioRecordDeviceInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRemoteDevice;
	NSString* _route;
	NSUUID* _remoteDeviceUID;
	NSString* _remoteDeviceProductIdentifier;

}

@property (nonatomic,copy,readonly) NSString * route;                                      //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteDevice;                                        //@synthesize isRemoteDevice=_isRemoteDevice - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * remoteDeviceUID;                              //@synthesize remoteDeviceUID=_remoteDeviceUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * remoteDeviceProductIdentifier;              //@synthesize remoteDeviceProductIdentifier=_remoteDeviceProductIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithXPCObject:(id)arg1 ;
-(NSString *)route;
-(id)xpcObject;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isRemoteDevice;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)remoteDeviceUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRoute:(id)arg1 isRemoteDevice:(BOOL)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4 ;
-(id)initWithAVVCRecordDeviceInfo:(id)arg1 ;
-(NSString *)remoteDeviceProductIdentifier;
@end

