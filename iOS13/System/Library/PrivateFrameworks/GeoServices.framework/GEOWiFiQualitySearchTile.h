/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOWiFiQualitySearchTile : PBCodable <NSCopying> {

	unsigned long long _tileKey;
	int _type;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasTileKey; 
@property (assign,nonatomic) unsigned long long tileKey; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)tileKey;
-(void)setTileKey:(unsigned long long)arg1 ;
-(void)setHasTileKey:(BOOL)arg1 ;
-(BOOL)hasTileKey;
@end

