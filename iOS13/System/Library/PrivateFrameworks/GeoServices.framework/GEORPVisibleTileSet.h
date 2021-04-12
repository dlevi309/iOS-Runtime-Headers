/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) int style; 
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,readonly) unsigned long long tileKeysCount; 
@property (nonatomic,readonly) GEORPVisibleTileKey* tileKeys; 
+(BOOL)isValid:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasIdentifier;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(void)setHasStyle:(BOOL)arg1 ;
-(BOOL)hasStyle;
-(GEORPVisibleTileKey*)tileKeys;
-(void)clearTileKeys;
-(unsigned long long)tileKeysCount;
-(GEORPVisibleTileKey)tileKeyAtIndex:(unsigned long long)arg1 ;
-(void)addTileKey:(GEORPVisibleTileKey)arg1 ;
-(void)setTileKeys:(GEORPVisibleTileKey*)arg1 count:(unsigned long long)arg2 ;
@end

