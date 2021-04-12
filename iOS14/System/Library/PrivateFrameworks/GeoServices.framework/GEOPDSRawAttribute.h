/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSRawAttribute : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _beginIndex;
	unsigned _endIndex;
	struct {
		unsigned has_beginIndex : 1;
		unsigned has_endIndex : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasBeginIndex; 
@property (assign,nonatomic) unsigned beginIndex; 
@property (assign,nonatomic) BOOL hasEndIndex; 
@property (assign,nonatomic) unsigned endIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasBeginIndex:(BOOL)arg1 ;
-(BOOL)hasBeginIndex;
-(void)setHasEndIndex:(BOOL)arg1 ;
-(BOOL)hasEndIndex;
-(unsigned)endIndex;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setEndIndex:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBeginIndex:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)beginIndex;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

