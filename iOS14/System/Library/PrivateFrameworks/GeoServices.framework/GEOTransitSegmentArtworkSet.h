/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOTransitSegmentArtworkSet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _artworkIndexs;
	NSMutableArray* _clusters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_artworkIndexs : 1;
		unsigned read_clusters : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long artworkIndexsCount; 
@property (nonatomic,readonly) unsigned* artworkIndexs; 
@property (nonatomic,retain) NSMutableArray * clusters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)clusterType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)clusters;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addArtworkIndex:(unsigned)arg1 ;
-(unsigned long long)artworkIndexsCount;
-(void)clearArtworkIndexs;
-(unsigned)artworkIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned*)artworkIndexs;
-(void)setArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addCluster:(id)arg1 ;
-(unsigned long long)clustersCount;
-(void)clearClusters;
-(id)clusterAtIndex:(unsigned long long)arg1 ;
-(void)setClusters:(NSMutableArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end
