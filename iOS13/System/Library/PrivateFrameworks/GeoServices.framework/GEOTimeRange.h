/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTimeRange : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _from;
	unsigned _to;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasFrom; 
@property (assign,nonatomic) unsigned from; 
@property (assign,nonatomic) BOOL hasTo; 
@property (assign,nonatomic) unsigned to; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned)to;
-(unsigned)from;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setFrom:(unsigned)arg1 ;
-(void)setTo:(unsigned)arg1 ;
-(id)initWithPlaceDataTimeRange:(GEOPDLocalTimeRange*)arg1 ;
-(void)setHasFrom:(BOOL)arg1 ;
-(BOOL)hasFrom;
-(void)setHasTo:(BOOL)arg1 ;
-(BOOL)hasTo;
@end

