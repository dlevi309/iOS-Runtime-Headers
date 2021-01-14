/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPVisibleTileSet : PBCodable <NSCopying> {

	GEORPVisibleTileKey* _tileKeys;
	unsigned long long _tileKeysCount;
	unsigned long long _tileKeysSpace;
	unsigned _identifier;
	int _style;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) int style; 
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,readonly) unsigned long long tileKeysCount; 
@property (nonatomic,readonly) GEORPVisibleTileKey* tileKeys; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasStyle:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasIdentifier;
-(id)styleAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addTileKey:(GEORPVisibleTileKey)arg1 ;
-(void)clearTileKeys;
-(unsigned long long)tileKeysCount;
-(GEORPVisibleTileKey)tileKeyAtIndex:(unsigned long long)arg1 ;
-(void)setTileKeys:(GEORPVisibleTileKey*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(id)description;
-(GEORPVisibleTileKey*)tileKeys;
-(BOOL)hasStyle;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)setStyle:(int)arg1 ;
-(unsigned)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

