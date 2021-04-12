/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOLaneWidth : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _offset;
	unsigned _width;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) unsigned width; 
@property (assign,nonatomic) BOOL hasOffset; 
@property (assign,nonatomic) unsigned offset; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned)width;
-(void)setWidth:(unsigned)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)offset;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)hasWidth;
-(void)setHasOffset:(BOOL)arg1 ;
-(BOOL)hasOffset;
@end
