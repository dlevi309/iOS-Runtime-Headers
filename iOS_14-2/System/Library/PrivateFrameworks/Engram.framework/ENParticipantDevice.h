/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)verifyAndRevealData:(id)arg1 withReceipient:(id)arg2 cypherIdentifier:(id)arg3 error:(id*)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<ENDevicePublicKey>)devicePublicKey;
-(id<ENCypher>)cypher;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)identifier;
-(id)initWithDevicePublicKey:(id)arg1 cypher:(id)arg2 identifier:(id)arg3 ;
-(void)setCypher:(id<ENCypher>)arg1 ;
-(id)signAndConcealData:(id)arg1 withSender:(id)arg2 cypherIdentifier:(id*)arg3 error:(id*)arg4 ;
@end

