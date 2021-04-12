/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
+(Class)assignmentType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSourceURL:(NSString *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasSourceURL;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasBranchExpirationTtlHours:(BOOL)arg1 ;
-(NSString *)sourceURL;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setHasInvalidateTileCache:(BOOL)arg1 ;
-(double)timestamp;
-(void)setBranchExpirationTtlHours:(unsigned long long)arg1 ;
-(NSMutableArray *)assignments;
-(unsigned long long)refreshIntervalSeconds;
-(void)setMapsAbClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(GEOABClientConfig *)clientConfig;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRequestGuid;
-(void)setClientConfig:(GEOABClientConfig *)arg1 ;
-(BOOL)hasInvalidatePoiCache;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasParsecClientMetadata;
-(BOOL)hasRefreshIntervalSeconds;
-(id)description;
-(BOOL)hasBranchExpirationTtlHours;
-(unsigned long long)branchExpirationTtlHours;
-(void)setRapClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(void)setHasRefreshIntervalSeconds:(BOOL)arg1 ;
-(GEOABSecondPartyPlaceRequestClientMetaData *)siriClientMetadata;
-(void)setRequestGuid:(NSString *)arg1 ;
-(BOOL)hasRapClientMetadata;
-(void)clearAssignments;
-(void)setInvalidatePoiCache:(BOOL)arg1 ;
-(void)setRefreshIntervalSeconds:(unsigned long long)arg1 ;
-(void)setParsecClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(void)addAssignment:(id)arg1 ;
-(GEOABSecondPartyPlaceRequestClientMetaData *)mapsAbClientMetadata;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasClientConfig;
-(unsigned long long)hash;
-(void)setHasInvalidatePoiCache:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)assignmentsCount;
-(BOOL)invalidatePoiCache;
-(id)assignmentAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)invalidateTileCache;
-(void)setAssignments:(NSMutableArray *)arg1 ;
-(id)_clientConfigValueForKey:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasSiriClientMetadata;
-(BOOL)hasMapsAbClientMetadata;
-(NSString *)requestGuid;
-(void)setSiriClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(BOOL)hasInvalidateTileCache;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(GEOABSecondPartyPlaceRequestClientMetaData *)rapClientMetadata;
-(GEOABSecondPartyPlaceRequestClientMetaData *)parsecClientMetadata;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInvalidateTileCache:(BOOL)arg1 ;
@end

