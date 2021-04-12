/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOBatchRevGeocodeResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _batchPlaceResults;
	NSMutableArray* _clusters;
	double _timestamp;
	NSMutableArray* _versionDomains;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _statusCode;
	unsigned _ttl;
	unsigned _version;
	struct {
		unsigned has_timestamp : 1;
		unsigned has_statusCode : 1;
		unsigned has_ttl : 1;
		unsigned has_version : 1;
		unsigned read_batchPlaceResults : 1;
		unsigned read_clusters : 1;
		unsigned read_versionDomains : 1;
		unsigned wrote_batchPlaceResults : 1;
		unsigned wrote_clusters : 1;
		unsigned wrote_timestamp : 1;
		unsigned wrote_versionDomains : 1;
		unsigned wrote_statusCode : 1;
		unsigned wrote_ttl : 1;
		unsigned wrote_version : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * clusters; 
@property (nonatomic,retain) NSMutableArray * batchPlaceResults; 
@property (assign,nonatomic) BOOL hasTtl; 
@property (assign,nonatomic) unsigned ttl; 
@property (nonatomic,retain) NSMutableArray * versionDomains; 
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
+(BOOL)isValid:(id)arg1 ;
+(Class)versionDomainType;
+(Class)clusterType;
+(Class)batchPlaceResultType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)statusCode;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)clusters;
-(void)setClusters:(NSMutableArray *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)ttl;
-(NSMutableArray *)versionDomains;
-(BOOL)hasVersion;
-(void)clearSensitiveFields;
-(void)setHasVersion:(BOOL)arg1 ;
-(unsigned long long)clustersCount;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(unsigned long long)batchPlaceResultsCount;
-(NSMutableArray *)batchPlaceResults;
-(BOOL)hasTtl;
-(void)addVersionDomain:(id)arg1 ;
-(unsigned long long)versionDomainsCount;
-(void)clearVersionDomains;
-(id)versionDomainAtIndex:(unsigned long long)arg1 ;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(void)setTtl:(unsigned)arg1 ;
-(void)setHasTtl:(BOOL)arg1 ;
-(void)_readClusters;
-(void)_addNoFlagsCluster:(id)arg1 ;
-(void)clearClusters;
-(id)clusterAtIndex:(unsigned long long)arg1 ;
-(void)addCluster:(id)arg1 ;
-(void)_readBatchPlaceResults;
-(void)_addNoFlagsBatchPlaceResult:(id)arg1 ;
-(void)_readVersionDomains;
-(void)_addNoFlagsVersionDomain:(id)arg1 ;
-(void)clearBatchPlaceResults;
-(id)batchPlaceResultAtIndex:(unsigned long long)arg1 ;
-(void)addBatchPlaceResult:(id)arg1 ;
-(void)setBatchPlaceResults:(NSMutableArray *)arg1 ;
@end

