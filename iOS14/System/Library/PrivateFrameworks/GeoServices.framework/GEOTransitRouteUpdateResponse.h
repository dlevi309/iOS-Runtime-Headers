/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
+(Class)routeUpdateType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimepointUsed;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(BOOL)hasDatasetAbStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasTransitDataVersion;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(NSData *)responseId;
-(GEOTransitRouteUpdateConfiguration *)routeUpdateConfiguration;
-(void)addRouteUpdate:(id)arg1 ;
-(void)setResponseId:(NSData *)arg1 ;
-(void)setRouteUpdateConfiguration:(GEOTransitRouteUpdateConfiguration *)arg1 ;
-(unsigned long long)routeUpdatesCount;
-(void)clearRouteUpdates;
-(id)routeUpdateAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)routeUpdates;
-(void)setRouteUpdates:(NSMutableArray *)arg1 ;
-(BOOL)hasResponseId;
-(BOOL)hasRouteUpdateConfiguration;
-(id)description;
-(NSString *)transitDataVersion;
-(void)setTimepointUsed:(GEOTimepoint)arg1 ;
-(GEOTimepoint)timepointUsed;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasTimepointUsed:(BOOL)arg1 ;
-(void)setTransitDataVersion:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
@end

