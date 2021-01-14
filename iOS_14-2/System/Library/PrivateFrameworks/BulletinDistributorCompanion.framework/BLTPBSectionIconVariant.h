/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BLTPBSectionIconVariant : PBCodable <NSCopying> {

	unsigned _format;
	NSData* _imageData;
	BOOL _precomposed;
	SCD_Struct_BL1 _has;

}

@property (assign,nonatomic) unsigned format;                  //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL hasImageData; 
@property (nonatomic,retain) NSData * imageData;               //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) BOOL hasPrecomposed; 
@property (assign,nonatomic) BOOL precomposed;                 //@synthesize precomposed=_precomposed - In the implementation block
-(id)dictionaryRepresentation;
-(void)setFormat:(unsigned)arg1 ;
-(unsigned)format;
-(BOOL)precomposed;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSData *)imageData;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPrecomposed:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasImageData;
-(void)setHasPrecomposed:(BOOL)arg1 ;
-(BOOL)hasPrecomposed;
@end

