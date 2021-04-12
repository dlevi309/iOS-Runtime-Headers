/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PCSManateeShareInvitation : PBCodable <NSCopying> {

	NSData* _exportedPCSData;
	NSData* _shareePublicKeyData;

}

@property (nonatomic,readonly) BOOL hasExportedPCSData; 
@property (nonatomic,retain) NSData * exportedPCSData;                   //@synthesize exportedPCSData=_exportedPCSData - In the implementation block
@property (nonatomic,readonly) BOOL hasShareePublicKeyData; 
@property (nonatomic,retain) NSData * shareePublicKeyData;               //@synthesize shareePublicKeyData=_shareePublicKeyData - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasExportedPCSData;
-(NSData *)exportedPCSData;
-(void)setExportedPCSData:(NSData *)arg1 ;
-(void)setShareePublicKeyData:(NSData *)arg1 ;
-(BOOL)hasShareePublicKeyData;
-(NSData *)shareePublicKeyData;
@end

