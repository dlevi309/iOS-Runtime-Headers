/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)clientType;
-(void)setClientType:(unsigned char)arg1 ;
-(NSUUID *)peerUUID;
-(void)setPeerUUID:(NSUUID *)arg1 ;
-(NSDictionary *)peerTrackingDictionary;
-(void)setPeerTrackingDictionary:(NSDictionary *)arg1 ;
@end

