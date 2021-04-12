/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MRSupportedProtocolMessages, MRDeviceInfo;

@interface MRAVDistantExternalDeviceMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _hostName;
	long long _hostPort;
	MRSupportedProtocolMessages* _supportedMessages;
	MRDeviceInfo* _deviceInfo;
	BOOL _usingSystemPairing;

}

@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * hostName;                                          //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,readonly) long long hostPort;                                           //@synthesize hostPort=_hostPort - In the implementation block
@property (nonatomic,readonly) MRDeviceInfo * deviceInfo;                                    //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,readonly) MRSupportedProtocolMessages * supportedMessages;              //@synthesize supportedMessages=_supportedMessages - In the implementation block
@property (nonatomic,readonly) BOOL usingSystemPairing;                                      //@synthesize usingSystemPairing=_usingSystemPairing - In the implementation block
+(BOOL)supportsSecureCoding;
-(MRDeviceInfo *)deviceInfo;
-(long long)hostPort;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(NSString *)hostName;
-(MRSupportedProtocolMessages *)supportedMessages;
-(BOOL)usingSystemPairing;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

