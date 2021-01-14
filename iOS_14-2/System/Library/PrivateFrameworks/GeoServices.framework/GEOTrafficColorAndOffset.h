/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTrafficColorAndOffset : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _color;
	unsigned _offset;
	struct {
		unsigned has_color : 1;
		unsigned has_offset : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasColor; 
@property (assign,nonatomic) unsigned color; 
@property (assign,nonatomic) BOOL hasOffset; 
@property (assign,nonatomic) unsigned offset; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)color;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasOffset:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)offset;
-(id)description;
-(BOOL)hasColor;
-(void)setColor:(unsigned)arg1 ;
-(void)setHasColor:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setOffset:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasOffset;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

