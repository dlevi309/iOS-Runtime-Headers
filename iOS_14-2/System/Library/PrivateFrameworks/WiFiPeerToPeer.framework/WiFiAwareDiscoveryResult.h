/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, WiFiAwarePublishServiceSpecificInfo, WiFiMACAddress;

@interface WiFiAwareDiscoveryResult : NSObject <NSSecureCoding> {

	long long _datapathCipherSuite;
	long long _fsdFunction;
	unsigned char _subscribeID;
	unsigned char _publishID;
	BOOL _datapathSupported;
	NSString* _serviceName;
	WiFiAwarePublishServiceSpecificInfo* _serviceSpecificInfo;
	WiFiMACAddress* _publisherAddress;
	long long _rssi;

}

@property (nonatomic,readonly) NSString * serviceName;                                                 //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) WiFiAwarePublishServiceSpecificInfo * serviceSpecificInfo;              //@synthesize serviceSpecificInfo=_serviceSpecificInfo - In the implementation block
@property (nonatomic,readonly) unsigned char publishID;                                                //@synthesize publishID=_publishID - In the implementation block
@property (nonatomic,readonly) WiFiMACAddress * publisherAddress;                                      //@synthesize publisherAddress=_publisherAddress - In the implementation block
@property (nonatomic,readonly) BOOL datapathSupported;                                                 //@synthesize datapathSupported=_datapathSupported - In the implementation block
@property (nonatomic,readonly) BOOL datapathSecurityRequired; 
@property (nonatomic,readonly) BOOL furtherServiceDiscoveryRequired; 
@property (nonatomic,readonly) long long rssi;                                                         //@synthesize rssi=_rssi - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)rssi;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned char)publishID;
-(NSString *)serviceName;
-(WiFiAwarePublishServiceSpecificInfo *)serviceSpecificInfo;
-(WiFiMACAddress *)publisherAddress;
-(BOOL)datapathSecurityRequired;
-(BOOL)datapathSupported;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)furtherServiceDiscoveryRequired;
-(BOOL)serviceSpecificInfoEqual:(id)arg1 ;
-(unsigned char)subscribeID;
-(long long)datapathCipherSuite;
-(long long)fsdFunction;
-(id)initWithServiceName:(id)arg1 serviceSpecificInfo:(id)arg2 publishID:(unsigned char)arg3 subscribeID:(unsigned char)arg4 publisherAddressKey:(id)arg5 datapathSupported:(BOOL)arg6 datapathCipherSuite:(long long)arg7 fsdFunction:(long long)arg8 rssi:(long long)arg9 ;
-(const char*)fsdFunctionString;
@end

