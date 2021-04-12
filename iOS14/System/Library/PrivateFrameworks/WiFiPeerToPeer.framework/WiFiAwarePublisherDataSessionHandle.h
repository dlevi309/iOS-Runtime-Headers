/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WiFiMACAddress;

@interface WiFiAwarePublisherDataSessionHandle : NSObject <NSSecureCoding> {

	unsigned char _datapathID;
	WiFiMACAddress* _initiatorDataAddress;

}

@property (nonatomic,readonly) unsigned char datapathID;                           //@synthesize datapathID=_datapathID - In the implementation block
@property (nonatomic,readonly) WiFiMACAddress * initiatorDataAddress;              //@synthesize initiatorDataAddress=_initiatorDataAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned char)datapathID;
-(WiFiMACAddress *)initiatorDataAddress;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDatapathID:(unsigned char)arg1 initiatorDataAddress:(id)arg2 ;
@end

