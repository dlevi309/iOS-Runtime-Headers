/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEORegionalResourceRegion : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _tileRanges;
	unsigned long long _tileRangesCount;
	unsigned long long _tileRangesSpace;
	NSMutableArray* _attributions;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_tileRanges : 1;
		unsigned read_attributions : 1;
		unsigned read_iconChecksums : 1;
		unsigned read_icons : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_tileRanges : 1;
		unsigned wrote_attributions : 1;
		unsigned wrote_iconChecksums : 1;
		unsigned wrote_icons : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long tileRangesCount; 
@property (nonatomic,readonly) GEOTileSetRegion* tileRanges; 
@property (nonatomic,retain) NSMutableArray * icons; 
@property (nonatomic,retain) NSMutableArray * attributions; 
@property (nonatomic,retain) NSMutableArray * iconChecksums; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)attributionType;
+(Class)iconType;
+(Class)iconChecksumType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)icons;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readAttributions;
-(void)_addNoFlagsAttribution:(id)arg1 ;
-(unsigned long long)attributionsCount;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(NSMutableArray *)attributions;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)_readIcons;
-(void)_addNoFlagsIcon:(id)arg1 ;
-(void)_readIconChecksums;
-(void)_addNoFlagsIconChecksum:(id)arg1 ;
-(NSMutableArray *)iconChecksums;
-(unsigned long long)iconsCount;
-(void)clearIcons;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(void)addIcon:(id)arg1 ;
-(unsigned long long)iconChecksumsCount;
-(void)clearIconChecksums;
-(id)iconChecksumAtIndex:(unsigned long long)arg1 ;
-(void)addIconChecksum:(id)arg1 ;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(void)clearTileRanges;
-(void)_readTileRanges;
-(void)_addNoFlagsTileRange:(GEOTileSetRegion)arg1 ;
-(unsigned long long)tileRangesCount;
-(GEOTileSetRegion)tileRangeAtIndex:(unsigned long long)arg1 ;
-(void)addTileRange:(GEOTileSetRegion)arg1 ;
-(GEOTileSetRegion*)tileRanges;
-(void)setTileRanges:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
@end

