/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NGMPBOuterMessage : PBCodable <NSCopying> {

	NSData* _encryptedPayload;
	NSData* _ephemeralPubKey;
	NSData* _keyValidator;
	NSData* _signature;

}

@property (nonatomic,retain) NSData * encryptedPayload;              //@synthesize encryptedPayload=_encryptedPayload - In the implementation block
@property (nonatomic,retain) NSData * ephemeralPubKey;               //@synthesize ephemeralPubKey=_ephemeralPubKey - In the implementation block
@property (nonatomic,retain) NSData * signature;                     //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyValidator; 
@property (nonatomic,retain) NSData * keyValidator;                  //@synthesize keyValidator=_keyValidator - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)encryptedPayload;
-(void)setEncryptedPayload:(NSData *)arg1 ;
-(void)setEphemeralPubKey:(NSData *)arg1 ;
-(void)setKeyValidator:(NSData *)arg1 ;
-(NSData *)ephemeralPubKey;
-(NSData *)keyValidator;
-(BOOL)hasKeyValidator;
@end

