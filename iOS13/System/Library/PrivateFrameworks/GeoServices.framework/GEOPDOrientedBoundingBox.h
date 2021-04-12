/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)depth;
-(id)dictionaryRepresentation;
-(GEOPDOrientedPosition *)position;
-(void)writeTo:(id)arg1 ;
-(double)width;
-(double)height;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setDepth:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPosition:(GEOPDOrientedPosition *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)hasWidth;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(BOOL)hasPosition;
-(void)setHasDepth:(BOOL)arg1 ;
-(BOOL)hasDepth;
@end

