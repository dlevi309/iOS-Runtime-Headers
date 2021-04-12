/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
+(Class)versionDomainType;
+(Class)clusterType;
+(Class)batchPlaceResultType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTtl:(unsigned)arg1 ;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(unsigned long long)versionDomainsCount;
-(NSMutableArray *)versionDomains;
-(void)addVersionDomain:(id)arg1 ;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(void)clearVersionDomains;
-(id)versionDomainAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)batchPlaceResultsCount;
-(void)readAll:(BOOL)arg1 ;
-(NSMutableArray *)batchPlaceResults;
-(id)init;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(double)timestamp;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)statusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(id)description;
-(NSMutableArray *)clusters;
-(BOOL)hasTtl;
-(unsigned)ttl;
-(void)addBatchPlaceResult:(id)arg1 ;
-(void)clearBatchPlaceResults;
-(id)batchPlaceResultAtIndex:(unsigned long long)arg1 ;
-(void)setBatchPlaceResults:(NSMutableArray *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasTtl:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)hasStatusCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)addCluster:(id)arg1 ;
-(unsigned long long)clustersCount;
-(void)clearClusters;
-(id)clusterAtIndex:(unsigned long long)arg1 ;
-(void)setClusters:(NSMutableArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

