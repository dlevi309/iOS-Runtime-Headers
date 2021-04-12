/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOABClientConfig, GEOABSecondPartyPlaceRequestClientMetaData, NSString;

@interface GEOABAssignmentResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _assignments;
	unsigned long long _branchExpirationTtlHours;
	GEOABClientConfig* _clientConfig;
	GEOABSecondPartyPlaceRequestClientMetaData* _mapsAbClientMetadata;
	GEOABSecondPartyPlaceRequestClientMetaData* _parsecClientMetadata;
	GEOABSecondPartyPlaceRequestClientMetaData* _rapClientMetadata;
	unsigned long long _refreshIntervalSeconds;
	NSString* _requestGuid;
	GEOABSecondPartyPlaceRequestClientMetaData* _siriClientMetadata;
	NSString* _sourceURL;
	double _timestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _invalidatePoiCache;
	BOOL _invalidateTileCache;
	struct {
		unsigned has_branchExpirationTtlHours : 1;
		unsigned has_refreshIntervalSeconds : 1;
		unsigned has_timestamp : 1;
		unsigned has_invalidatePoiCache : 1;
		unsigned has_invalidateTileCache : 1;
		unsigned read_unknownFields : 1;
		unsigned read_assignments : 1;
		unsigned read_clientConfig : 1;
		unsigned read_mapsAbClientMetadata : 1;
		unsigned read_parsecClientMetadata : 1;
		unsigned read_rapClientMetadata : 1;
		unsigned read_requestGuid : 1;
		unsigned read_siriClientMetadata : 1;
		unsigned read_sourceURL : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_assignments : 1;
		unsigned wrote_branchExpirationTtlHours : 1;
		unsigned wrote_clientConfig : 1;
		unsigned wrote_mapsAbClientMetadata : 1;
		unsigned wrote_parsecClientMetadata : 1;
		unsigned wrote_rapClientMetadata : 1;
		unsigned wrote_refreshIntervalSeconds : 1;
		unsigned wrote_requestGuid : 1;
		unsigned wrote_siriClientMetadata : 1;
		unsigned wrote_sourceURL : 1;
		unsigned wrote_timestamp : 1;
		unsigned wrote_invalidatePoiCache : 1;
		unsigned wrote_invalidateTileCache : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL; 
@property (nonatomic,readonly) BOOL hasRequestGuid; 
@property (nonatomic,retain) NSString * requestGuid; 
@property (nonatomic,retain) NSMutableArray * assignments; 
@property (assign,nonatomic) BOOL hasInvalidateTileCache; 
@property (assign,nonatomic) BOOL invalidateTileCache; 
@property (assign,nonatomic) BOOL hasInvalidatePoiCache; 
@property (assign,nonatomic) BOOL invalidatePoiCache; 
@property (assign,nonatomic) BOOL hasRefreshIntervalSeconds; 
@property (assign,nonatomic) unsigned long long refreshIntervalSeconds; 
@property (nonatomic,readonly) BOOL hasClientConfig; 
@property (nonatomic,retain) GEOABClientConfig * clientConfig; 
@property (nonatomic,readonly) BOOL hasParsecClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * parsecClientMetadata; 
@property (nonatomic,readonly) BOOL hasSiriClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * siriClientMetadata; 
@property (nonatomic,readonly) BOOL hasRapClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * rapClientMetadata; 
@property (nonatomic,readonly) BOOL hasMapsAbClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * mapsAbClientMetadata; 
@property (assign,nonatomic) BOOL hasBranchExpirationTtlHours; 
@property (assign,nonatomic) unsigned long long branchExpirationTtlHours; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)assignmentType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)invalidateTileCache;
-(GEOABClientConfig *)clientConfig;
-(GEOABSecondPartyPlaceRequestClientMetaData *)mapsAbClientMetadata;
-(void)_readSourceURL;
-(BOOL)hasSourceURL;
-(NSMutableArray *)assignments;
-(GEOABSecondPartyPlaceRequestClientMetaData *)parsecClientMetadata;
-(GEOABSecondPartyPlaceRequestClientMetaData *)siriClientMetadata;
-(GEOABSecondPartyPlaceRequestClientMetaData *)rapClientMetadata;
-(id)_clientConfigValueForKey:(id)arg1 ;
-(unsigned long long)refreshIntervalSeconds;
-(BOOL)hasBranchExpirationTtlHours;
-(unsigned long long)branchExpirationTtlHours;
-(void)_readRequestGuid;
-(void)_readAssignments;
-(void)_addNoFlagsAssignment:(id)arg1 ;
-(void)_readClientConfig;
-(void)_readParsecClientMetadata;
-(void)_readSiriClientMetadata;
-(void)_readRapClientMetadata;
-(void)_readMapsAbClientMetadata;
-(NSString *)requestGuid;
-(void)setRequestGuid:(NSString *)arg1 ;
-(unsigned long long)assignmentsCount;
-(void)clearAssignments;
-(id)assignmentAtIndex:(unsigned long long)arg1 ;
-(void)addAssignment:(id)arg1 ;
-(void)setClientConfig:(GEOABClientConfig *)arg1 ;
-(void)setParsecClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(void)setSiriClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(void)setRapClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(void)setMapsAbClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(BOOL)hasRequestGuid;
-(void)setAssignments:(NSMutableArray *)arg1 ;
-(void)setInvalidateTileCache:(BOOL)arg1 ;
-(void)setHasInvalidateTileCache:(BOOL)arg1 ;
-(BOOL)hasInvalidateTileCache;
-(BOOL)invalidatePoiCache;
-(void)setInvalidatePoiCache:(BOOL)arg1 ;
-(void)setHasInvalidatePoiCache:(BOOL)arg1 ;
-(BOOL)hasInvalidatePoiCache;
-(void)setRefreshIntervalSeconds:(unsigned long long)arg1 ;
-(void)setHasRefreshIntervalSeconds:(BOOL)arg1 ;
-(BOOL)hasRefreshIntervalSeconds;
-(BOOL)hasClientConfig;
-(BOOL)hasParsecClientMetadata;
-(BOOL)hasSiriClientMetadata;
-(BOOL)hasRapClientMetadata;
-(BOOL)hasMapsAbClientMetadata;
-(void)setBranchExpirationTtlHours:(unsigned long long)arg1 ;
-(void)setHasBranchExpirationTtlHours:(BOOL)arg1 ;
@end

