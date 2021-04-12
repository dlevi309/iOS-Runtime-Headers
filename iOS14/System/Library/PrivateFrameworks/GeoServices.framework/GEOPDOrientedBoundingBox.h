/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDOrientedPosition;

@interface GEOPDOrientedBoundingBox : PBCodable <NSCopying> {

	double _depth;
	double _height;
	GEOPDOrientedPosition* _position;
	double _width;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasPosition; 
@property (nonatomic,retain) GEOPDOrientedPosition * position; 
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) BOOL hasDepth; 
@property (assign,nonatomic) double depth; 
+(BOOL)isValid:(id)arg1 ;
-(void)setHeight:(double)arg1 ;
-(BOOL)hasPosition;
-(id)dictionaryRepresentation;
-(GEOPDOrientedPosition *)position;
-(double)width;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasWidth;
-(void)setWidth:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDepth:(double)arg1 ;
-(double)height;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasDepth;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(void)setPosition:(GEOPDOrientedPosition *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDepth:(BOOL)arg1 ;
-(double)depth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

