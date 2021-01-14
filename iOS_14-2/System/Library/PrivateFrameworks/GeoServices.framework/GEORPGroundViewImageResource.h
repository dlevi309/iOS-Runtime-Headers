/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEORPGroundViewImageResource : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _cameraNumber;
	int _loadStatus;
	unsigned _lod;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasCameraNumber; 
@property (assign,nonatomic) unsigned cameraNumber; 
@property (assign,nonatomic) BOOL hasLod; 
@property (assign,nonatomic) unsigned lod; 
@property (assign,nonatomic) BOOL hasLoadStatus; 
@property (assign,nonatomic) int loadStatus; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)lod;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)setCameraNumber:(unsigned)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)cameraNumber;
-(BOOL)hasLod;
-(id)jsonRepresentation;
-(void)setHasCameraNumber:(BOOL)arg1 ;
-(void)setLod:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasLod:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasLoadStatus:(BOOL)arg1 ;
-(BOOL)hasLoadStatus;
-(id)loadStatusAsString:(int)arg1 ;
-(int)StringAsLoadStatus:(id)arg1 ;
-(id)description;
-(BOOL)hasCameraNumber;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLoadStatus:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)loadStatus;
@end

