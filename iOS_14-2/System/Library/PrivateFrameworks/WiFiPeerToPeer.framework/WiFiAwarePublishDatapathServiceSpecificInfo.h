/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/

#import <WiFiPeerToPeer/WiFiPeerToPeer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WiFiAwarePublishDatapathServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying> {

	unsigned short _servicePort;
	long long _protocolType;
	NSString* _hostname;

}

@property (nonatomic,readonly) long long protocolType;                  //@synthesize protocolType=_protocolType - In the implementation block
@property (nonatomic,readonly) unsigned short servicePort;              //@synthesize servicePort=_servicePort - In the implementation block
@property (nonatomic,copy) NSString * hostname;                         //@synthesize hostname=_hostname - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)protocolType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setHostname:(NSString *)arg1 ;
-(unsigned short)servicePort;
-(NSString *)hostname;
-(id)initWithProtocolType:(long long)arg1 servicePort:(unsigned short)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hostnameEquals:(id)arg1 ;
@end

