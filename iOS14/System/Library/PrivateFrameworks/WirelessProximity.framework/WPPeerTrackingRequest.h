/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface WPPeerTrackingRequest : NSObject <NSSecureCoding> {

	unsigned char _clientType;
	NSUUID* _peerUUID;
	NSDictionary* _peerTrackingDictionary;

}

@property (assign) unsigned char clientType;                           //@synthesize clientType=_clientType - In the implementation block
@property (retain) NSUUID * peerUUID;                                  //@synthesize peerUUID=_peerUUID - In the implementation block
@property (retain) NSDictionary * peerTrackingDictionary;              //@synthesize peerTrackingDictionary=_peerTrackingDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setClientType:(unsigned char)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)clientType;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)peerUUID;
-(void)setPeerUUID:(NSUUID *)arg1 ;
-(NSDictionary *)peerTrackingDictionary;
-(void)setPeerTrackingDictionary:(NSDictionary *)arg1 ;
@end

