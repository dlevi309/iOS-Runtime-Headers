/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOTrafficResponseMetaData;

@interface GEOTrafficTrafficApiResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOSessionID _responseId;
	NSMutableArray* _incidentSnapshots;
	GEOTrafficResponseMetaData* _metaData;
	NSMutableArray* _speedSnapshots;
	NSMutableArray* _trafficSnapshots;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_responseId : 1;
		unsigned read_incidentSnapshots : 1;
		unsigned read_metaData : 1;
		unsigned read_speedSnapshots : 1;
		unsigned read_trafficSnapshots : 1;
		unsigned wrote_responseId : 1;
		unsigned wrote_incidentSnapshots : 1;
		unsigned wrote_metaData : 1;
		unsigned wrote_speedSnapshots : 1;
		unsigned wrote_trafficSnapshots : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * speedSnapshots; 
@property (nonatomic,retain) NSMutableArray * incidentSnapshots; 
@property (assign,nonatomic) BOOL hasResponseId; 
@property (assign,nonatomic) GEOSessionID responseId; 
@property (nonatomic,readonly) BOOL hasMetaData; 
@property (nonatomic,retain) GEOTrafficResponseMetaData * metaData; 
@property (nonatomic,retain) NSMutableArray * trafficSnapshots; 
+(BOOL)isValid:(id)arg1 ;
+(Class)speedSnapshotsType;
+(Class)incidentSnapshotsType;
+(Class)trafficSnapshotsType;
-(id)init;
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
-(GEOSessionID)responseId;
-(void)setResponseId:(GEOSessionID)arg1 ;
-(BOOL)hasResponseId;
-(void)_readSpeedSnapshots;
-(void)_addNoFlagsSpeedSnapshots:(id)arg1 ;
-(void)_readIncidentSnapshots;
-(void)_addNoFlagsIncidentSnapshots:(id)arg1 ;
-(void)_readMetaData;
-(void)_readTrafficSnapshots;
-(void)_addNoFlagsTrafficSnapshots:(id)arg1 ;
-(GEOTrafficResponseMetaData *)metaData;
-(unsigned long long)speedSnapshotsCount;
-(void)clearSpeedSnapshots;
-(id)speedSnapshotsAtIndex:(unsigned long long)arg1 ;
-(void)addSpeedSnapshots:(id)arg1 ;
-(unsigned long long)incidentSnapshotsCount;
-(void)clearIncidentSnapshots;
-(id)incidentSnapshotsAtIndex:(unsigned long long)arg1 ;
-(void)addIncidentSnapshots:(id)arg1 ;
-(void)setMetaData:(GEOTrafficResponseMetaData *)arg1 ;
-(unsigned long long)trafficSnapshotsCount;
-(void)clearTrafficSnapshots;
-(id)trafficSnapshotsAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficSnapshots:(id)arg1 ;
-(NSMutableArray *)speedSnapshots;
-(void)setSpeedSnapshots:(NSMutableArray *)arg1 ;
-(NSMutableArray *)incidentSnapshots;
-(void)setIncidentSnapshots:(NSMutableArray *)arg1 ;
-(void)setHasResponseId:(BOOL)arg1 ;
-(BOOL)hasMetaData;
-(NSMutableArray *)trafficSnapshots;
-(void)setTrafficSnapshots:(NSMutableArray *)arg1 ;
@end

