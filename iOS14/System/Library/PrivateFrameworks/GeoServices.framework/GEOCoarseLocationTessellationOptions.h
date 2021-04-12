/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOCoarseLocationTessellationOptions : PBCodable <NSCopying> {

	SCD_Struct_GE17* _zoomLevels;
	int _type;

}

@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) unsigned long long zoomLevelsCount; 
@property (nonatomic,readonly) unsigned* zoomLevels; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned*)zoomLevels;
-(void)addZoomLevels:(unsigned)arg1 ;
-(void)clearZoomLevels;
-(void)setZoomLevels:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)zoomLevelsCount;
-(unsigned)zoomLevelsAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

