/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOTransitClusterArtworkSet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _artworkIndexs;
	NSMutableArray* _artworkItems;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_artworkIndexs : 1;
		unsigned read_artworkItems : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long artworkIndexsCount; 
@property (nonatomic,readonly) unsigned* artworkIndexs; 
@property (nonatomic,retain) NSMutableArray * artworkItems; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)artworkItemType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)_maps_artworkIndicesAsString;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addArtworkIndex:(unsigned)arg1 ;
-(void)addArtworkItem:(id)arg1 ;
-(unsigned long long)artworkIndexsCount;
-(void)clearArtworkIndexs;
-(unsigned)artworkIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)artworkItemsCount;
-(void)clearArtworkItems;
-(id)artworkItemAtIndex:(unsigned long long)arg1 ;
-(unsigned*)artworkIndexs;
-(void)setArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)artworkItems;
-(void)setArtworkItems:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

