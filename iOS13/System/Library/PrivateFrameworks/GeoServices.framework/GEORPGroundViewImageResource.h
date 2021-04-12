/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasCameraNumber; 
@property (assign,nonatomic) unsigned cameraNumber; 
@property (assign,nonatomic) BOOL hasLod; 
@property (assign,nonatomic) unsigned lod; 
@property (assign,nonatomic) BOOL hasLoadStatus; 
@property (assign,nonatomic) int loadStatus; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)cameraNumber;
-(void)setCameraNumber:(unsigned)arg1 ;
-(void)setHasCameraNumber:(BOOL)arg1 ;
-(BOOL)hasCameraNumber;
-(unsigned)lod;
-(void)setLod:(unsigned)arg1 ;
-(void)setHasLod:(BOOL)arg1 ;
-(BOOL)hasLod;
-(int)loadStatus;
-(void)setLoadStatus:(int)arg1 ;
-(void)setHasLoadStatus:(BOOL)arg1 ;
-(BOOL)hasLoadStatus;
-(id)loadStatusAsString:(int)arg1 ;
-(int)StringAsLoadStatus:(id)arg1 ;
@end

