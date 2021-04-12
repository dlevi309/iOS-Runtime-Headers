/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MRSupportedProtocolMessages, _MRDeviceInfoMessageProtobuf;

@interface MRAVDistantExternalDeviceMetadata : NSObject <NSMutableCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _hostName;
	long long _hostPort;
	MRSupportedProtocolMessages* _supportedMessages;
	_MRDeviceInfoMessageProtobuf* _deviceInfo;
	BOOL _paired;
	BOOL _usingSystemPairing;

}

@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * hostName;                                          //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,readonly) long long hostPort;                                           //@synthesize hostPort=_hostPort - In the implementation block
@property (nonatomic,readonly) _MRDeviceInfoMessageProtobuf * deviceInfo;                    //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,readonly) MRSupportedProtocolMessages * supportedMessages;              //@synthesize supportedMessages=_supportedMessages - In the implementation block
@property (nonatomic,readonly) BOOL paired;                                                  //@synthesize paired=_paired - In the implementation block
@property (nonatomic,readonly) BOOL usingSystemPairing;                                      //@synthesize usingSystemPairing=_usingSystemPairing - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hostName;
-(_MRDeviceInfoMessageProtobuf *)deviceInfo;
-(BOOL)paired;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(long long)hostPort;
-(MRSupportedProtocolMessages *)supportedMessages;
-(BOOL)usingSystemPairing;
@end

