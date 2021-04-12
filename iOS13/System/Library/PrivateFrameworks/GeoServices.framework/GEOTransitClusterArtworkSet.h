/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOTransitClusterArtworkSet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _artworkIndexs;
	NSMutableArray* _artworkItems;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_artworkIndexs : 1;
		unsigned read_artworkItems : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_artworkIndexs : 1;
		unsigned wrote_artworkItems : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long artworkIndexsCount; 
@property (nonatomic,readonly) unsigned* artworkIndexs; 
@property (nonatomic,retain) NSMutableArray * artworkItems; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)artworkItemType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)artworkItemsCount;
-(NSMutableArray *)artworkItems;
-(unsigned*)artworkIndexs;
-(unsigned long long)artworkIndexsCount;
-(id)_maps_artworkIndicesAsString;
-(void)_readArtworkIndexs;
-(void)_addNoFlagsArtworkIndex:(unsigned)arg1 ;
-(void)_readArtworkItems;
-(void)_addNoFlagsArtworkItem:(id)arg1 ;
-(void)clearArtworkIndexs;
-(unsigned)artworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)addArtworkIndex:(unsigned)arg1 ;
-(void)clearArtworkItems;
-(id)artworkItemAtIndex:(unsigned long long)arg1 ;
-(void)addArtworkItem:(id)arg1 ;
-(void)setArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setArtworkItems:(NSMutableArray *)arg1 ;
@end

