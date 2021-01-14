/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEORoadComplexity : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _attributes;
	unsigned _offset;
	unsigned _zilchPathIndex;
	struct {
		unsigned has_offset : 1;
		unsigned has_zilchPathIndex : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * attributes; 
@property (assign,nonatomic) BOOL hasOffset; 
@property (assign,nonatomic) unsigned offset; 
@property (assign,nonatomic) BOOL hasZilchPathIndex; 
@property (assign,nonatomic) unsigned zilchPathIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)attributeType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(id)attributeAtIndex:(unsigned long long)arg1 ;
-(void)setZilchPathIndex:(unsigned)arg1 ;
-(unsigned)zilchPathIndex;
-(void)setHasZilchPathIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPathIndex;
-(void)mergeFrom:(id)arg1 ;
-(void)clearAttributes;
-(void)setHasOffset:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)attributes;
-(unsigned)offset;
-(id)description;
-(void)addAttribute:(id)arg1 ;
-(unsigned long long)hash;
-(void)setOffset:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasOffset;
-(unsigned long long)attributesCount;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

