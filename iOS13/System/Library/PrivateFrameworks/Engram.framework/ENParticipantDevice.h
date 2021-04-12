/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ENDevicePublicKey, ENCypher;
@class NSData;

@interface ENParticipantDevice : NSObject <NSSecureCoding> {

	id<ENDevicePublicKey> _devicePublicKey;
	NSData* _identifier;
	id<ENCypher> _cypher;

}

@property (nonatomic,retain) id<ENCypher> cypher;                                  //@synthesize cypher=_cypher - In the implementation block
@property (nonatomic,readonly) id<ENDevicePublicKey> devicePublicKey;              //@synthesize devicePublicKey=_devicePublicKey - In the implementation block
@property (nonatomic,readonly) NSData * identifier;                                //@synthesize identifier=_identifier - In the implementation block
+(id)participantDeviceFromEndpoint:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)identifier;
-(id)verifyAndRevealData:(id)arg1 withReceipient:(id)arg2 cypherIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)initWithDevicePublicKey:(id)arg1 cypher:(id)arg2 identifier:(id)arg3 ;
-(id<ENDevicePublicKey>)devicePublicKey;
-(id<ENCypher>)cypher;
-(void)setCypher:(id<ENCypher>)arg1 ;
-(id)signAndConcealData:(id)arg1 withSender:(id)arg2 cypherIdentifier:(id*)arg3 error:(id*)arg4 ;
@end

