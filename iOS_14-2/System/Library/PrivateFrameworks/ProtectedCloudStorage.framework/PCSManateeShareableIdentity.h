/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PCSManateePrivateKey;

@interface PCSManateeShareableIdentity : PBCodable <NSCopying> {

	PCSManateePrivateKey* _encryptionPrivateKey;
	PCSManateePrivateKey* _signingPrivateKey;

}

@property (nonatomic,readonly) BOOL hasEncryptionPrivateKey; 
@property (nonatomic,retain) PCSManateePrivateKey * encryptionPrivateKey;              //@synthesize encryptionPrivateKey=_encryptionPrivateKey - In the implementation block
@property (nonatomic,readonly) BOOL hasSigningPrivateKey; 
@property (nonatomic,retain) PCSManateePrivateKey * signingPrivateKey;                 //@synthesize signingPrivateKey=_signingPrivateKey - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEncryptionPrivateKey:(PCSManateePrivateKey *)arg1 ;
-(void)setSigningPrivateKey:(PCSManateePrivateKey *)arg1 ;
-(BOOL)hasEncryptionPrivateKey;
-(BOOL)hasSigningPrivateKey;
-(PCSManateePrivateKey *)encryptionPrivateKey;
-(PCSManateePrivateKey *)signingPrivateKey;
@end

