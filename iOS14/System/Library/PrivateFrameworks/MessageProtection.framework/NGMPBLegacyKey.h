/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NGMPBLegacyKey : PBCodable <NSCopying> {

	NSData* _encryptionKey;
	NSData* _signingKey;

}

@property (nonatomic,retain) NSData * encryptionKey;              //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,retain) NSData * signingKey;                 //@synthesize signingKey=_signingKey - In the implementation block
-(id)dictionaryRepresentation;
-(void)setSigningKey:(NSData *)arg1 ;
-(NSData *)encryptionKey;
-(NSData *)signingKey;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

