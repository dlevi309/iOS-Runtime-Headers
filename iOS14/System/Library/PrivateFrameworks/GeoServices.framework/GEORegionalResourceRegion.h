/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long tileRangesCount; 
@property (nonatomic,readonly) GEOTileSetRegion* tileRanges; 
@property (nonatomic,retain) NSMutableArray * icons; 
@property (nonatomic,retain) NSMutableArray * attributions; 
@property (nonatomic,retain) NSMutableArray * iconChecksums; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)attributionType;
+(Class)iconChecksumType;
+(Class)iconType;
+(BOOL)isValid:(id)arg1 ;
-(id)iconChecksumAtIndex:(unsigned long long)arg1 ;
-(void)clearAttributions;
-(id)dictionaryRepresentation;
-(NSMutableArray *)iconChecksums;
-(void)addIconChecksum:(id)arg1 ;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)iconsCount;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(NSMutableArray *)icons;
-(id)jsonRepresentation;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)iconChecksumsCount;
-(void)clearIcons;
-(unsigned long long)attributionsCount;
-(void)addAttribution:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addIcon:(id)arg1 ;
-(void)clearTileRanges;
-(void)addTileRange:(GEOTileSetRegion)arg1 ;
-(unsigned long long)tileRangesCount;
-(GEOTileSetRegion)tileRangeAtIndex:(unsigned long long)arg1 ;
-(void)setTileRanges:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(void)clearIconChecksums;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOTileSetRegion*)tileRanges;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

