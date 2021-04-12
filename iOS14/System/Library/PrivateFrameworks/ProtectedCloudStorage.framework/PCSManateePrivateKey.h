/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PCSManateePrivateKey : PBCodable <NSCopying> {

	NSData* _privateKey;
	NSData* _publicKeyInfo;

}

@property (nonatomic,readonly) BOOL hasPrivateKey; 
@property (nonatomic,retain) NSData * privateKey;                  //@synthesize privateKey=_privateKey - In the implementation block
@property (nonatomic,readonly) BOOL hasPublicKeyInfo; 
@property (nonatomic,retain) NSData * publicKeyInfo;               //@synthesize publicKeyInfo=_publicKeyInfo - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)privateKey;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPrivateKey:(NSData *)arg1 ;
-(void)setPublicKeyInfo:(NSData *)arg1 ;
-(BOOL)hasPrivateKey;
-(NSData *)publicKeyInfo;
-(BOOL)hasPublicKeyInfo;
@end

