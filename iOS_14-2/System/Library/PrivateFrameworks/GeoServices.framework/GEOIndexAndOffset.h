/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOIndexAndOffset : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _index;
	unsigned _offset;
	struct {
		unsigned has_index : 1;
		unsigned has_offset : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) unsigned index; 
@property (assign,nonatomic) BOOL hasOffset; 
@property (assign,nonatomic) unsigned offset; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)index;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setIndex:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasOffset:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasIndex;
-(unsigned)offset;
-(id)description;
-(unsigned long long)hash;
-(void)setOffset:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasOffset;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasIndex:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

