/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOStyleAttributes : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _attributes;
	unsigned long long _customIconId;
	SCD_Struct_GE99 _flags;

}

@property (nonatomic,retain) NSMutableArray * attributes; 
@property (assign,nonatomic) BOOL hasCustomIconId; 
@property (assign,nonatomic) unsigned long long customIconId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)attributeType;
+(BOOL)isValid:(id)arg1 ;
+(id)attributesForTransitLine:(id)arg1 ;
+(id)attributesForTransitSystem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)attributes;
-(id)dictionaryRepresentation;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)attributesCount;
-(void)clearAttributes;
-(void)addAttribute:(id)arg1 ;
-(id)attributeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)customIconId;
-(void)setCustomIconId:(unsigned long long)arg1 ;
-(void)setHasCustomIconId:(BOOL)arg1 ;
-(BOOL)hasCustomIconId;
-(id)initWithGEOFeatureStyleAttributes:(id)arg1 ;
@end

