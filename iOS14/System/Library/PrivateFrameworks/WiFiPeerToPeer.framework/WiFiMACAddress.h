/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface WiFiMACAddress : NSObject <NSSecureCoding> {

	NSData* _data;

}

@property (readonly) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (readonly) NSData * ipv6LinkLocalAddress; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)description;
-(NSData *)ipv6LinkLocalAddress;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3 byte4:(unsigned char)arg4 byte5:(unsigned char)arg5 byte6:(unsigned char)arg6 ;
@end

