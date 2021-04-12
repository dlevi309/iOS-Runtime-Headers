/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasExportedPCSData;
-(NSData *)exportedPCSData;
-(void)setExportedPCSData:(NSData *)arg1 ;
-(void)setShareePublicKeyData:(NSData *)arg1 ;
-(BOOL)hasShareePublicKeyData;
-(NSData *)shareePublicKeyData;
@end

