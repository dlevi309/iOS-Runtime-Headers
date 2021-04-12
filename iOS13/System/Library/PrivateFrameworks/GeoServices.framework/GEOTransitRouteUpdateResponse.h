/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDDatasetABStatus, NSData, GEOTransitRouteUpdateConfiguration, NSMutableArray, NSString;

@interface GEOTransitRouteUpdateResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTimepoint _timepointUsed;
	GEOPDDatasetABStatus* _datasetAbStatus;
	NSData* _responseId;
	GEOTransitRouteUpdateConfiguration* _routeUpdateConfiguration;
	NSMutableArray* _routeUpdates;
	NSString* _transitDataVersion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_timepointUsed : 1;
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_datasetAbStatus : 1;
		unsigned read_responseId : 1;
		unsigned read_routeUpdateConfiguration : 1;
		unsigned read_routeUpdates : 1;
		unsigned read_transitDataVersion : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_timepointUsed : 1;
		unsigned wrote_datasetAbStatus : 1;
		unsigned wrote_responseId : 1;
		unsigned wrote_routeUpdateConfiguration : 1;
		unsigned wrote_routeUpdates : 1;
		unsigned wrote_transitDataVersion : 1;
		unsigned wrote_status : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * routeUpdates; 
@property (nonatomic,readonly) BOOL hasResponseId; 
@property (nonatomic,retain) NSData * responseId; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus; 
@property (nonatomic,readonly) BOOL hasRouteUpdateConfiguration; 
@property (nonatomic,retain) GEOTransitRouteUpdateConfiguration * routeUpdateConfiguration; 
@property (assign,nonatomic) BOOL hasTimepointUsed; 
@property (assign,nonatomic) GEOTimepoint timepointUsed; 
@property (nonatomic,readonly) BOOL hasTransitDataVersion; 
@property (nonatomic,retain) NSString * transitDataVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)routeUpdateType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasRouteUpdateConfiguration;
-(GEOTransitRouteUpdateConfiguration *)routeUpdateConfiguration;
-(NSMutableArray *)routeUpdates;
-(void)_readDatasetAbStatus;
-(void)_readTransitDataVersion;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(NSString *)transitDataVersion;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(void)setTransitDataVersion:(NSString *)arg1 ;
-(BOOL)hasDatasetAbStatus;
-(GEOTimepoint)timepointUsed;
-(void)setTimepointUsed:(GEOTimepoint)arg1 ;
-(void)setHasTimepointUsed:(BOOL)arg1 ;
-(BOOL)hasTimepointUsed;
-(BOOL)hasTransitDataVersion;
-(void)_readResponseId;
-(NSData *)responseId;
-(void)setResponseId:(NSData *)arg1 ;
-(BOOL)hasResponseId;
-(void)_readRouteUpdates;
-(void)_addNoFlagsRouteUpdate:(id)arg1 ;
-(void)_readRouteUpdateConfiguration;
-(unsigned long long)routeUpdatesCount;
-(void)clearRouteUpdates;
-(id)routeUpdateAtIndex:(unsigned long long)arg1 ;
-(void)addRouteUpdate:(id)arg1 ;
-(void)setRouteUpdateConfiguration:(GEOTransitRouteUpdateConfiguration *)arg1 ;
-(void)setRouteUpdates:(NSMutableArray *)arg1 ;
@end

