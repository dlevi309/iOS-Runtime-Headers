/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)privateKey;
-(void)setPrivateKey:(NSData *)arg1 ;
-(void)setPublicKeyInfo:(NSData *)arg1 ;
-(BOOL)hasPrivateKey;
-(NSData *)publicKeyInfo;
-(BOOL)hasPublicKeyInfo;
@end

