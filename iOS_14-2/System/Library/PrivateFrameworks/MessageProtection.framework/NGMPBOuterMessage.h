/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSData *)signature;
-(NSData *)encryptedPayload;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setEncryptedPayload:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEphemeralPubKey:(NSData *)arg1 ;
-(void)setKeyValidator:(NSData *)arg1 ;
-(NSData *)ephemeralPubKey;
-(NSData *)keyValidator;
-(BOOL)hasKeyValidator;
@end

