/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOScreenDimension : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _height;
	double _width;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) double height; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setHeight:(double)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(double)width;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasWidth;
-(void)setWidth:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)height;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

