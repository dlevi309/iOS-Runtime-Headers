/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDTileList : PBCodable <NSCopying> {

	NSMutableArray* _tiles;

}

@property (nonatomic,retain) NSMutableArray * tiles; 
+(BOOL)isValid:(id)arg1 ;
+(Class)tileType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)tiles;
-(void)readAll:(BOOL)arg1 ;
-(void)addTile:(id)arg1 ;
-(unsigned long long)tilesCount;
-(void)clearTiles;
-(id)tileAtIndex:(unsigned long long)arg1 ;
-(void)setTiles:(NSMutableArray *)arg1 ;
@end

