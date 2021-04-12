/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPlaceSearchResponse, NSMutableArray;

@interface GEOETAResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPlaceSearchResponse* _placeSearchResponse;
	NSMutableArray* _sortedETAs;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _distance;
	unsigned _historicTravelTime;
	unsigned _liveTravelTime;
	int _status;
	struct {
		unsigned has_distance : 1;
		unsigned has_historicTravelTime : 1;
		unsigned has_liveTravelTime : 1;
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_placeSearchResponse : 1;
		unsigned read_sortedETAs : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_placeSearchResponse : 1;
		unsigned wrote_sortedETAs : 1;
		unsigned wrote_distance : 1;
		unsigned wrote_historicTravelTime : 1;
		unsigned wrote_liveTravelTime : 1;
		unsigned wrote_status : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasLiveTravelTime; 
@property (assign,nonatomic) unsigned liveTravelTime; 
@property (assign,nonatomic) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime; 
@property (nonatomic,readonly) BOOL hasPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * placeSearchResponse; 
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance; 
@property (nonatomic,retain) NSMutableArray * sortedETAs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)sortedETAType;
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
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(unsigned)historicTravelTime;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasHistoricTravelTime;
-(void)_readPlaceSearchResponse;
-(void)_readSortedETAs;
-(void)_addNoFlagsSortedETA:(id)arg1 ;
-(GEOPlaceSearchResponse *)placeSearchResponse;
-(BOOL)hasPlaceSearchResponse;
-(void)setPlaceSearchResponse:(GEOPlaceSearchResponse *)arg1 ;
-(unsigned long long)sortedETAsCount;
-(void)clearSortedETAs;
-(id)sortedETAAtIndex:(unsigned long long)arg1 ;
-(void)addSortedETA:(id)arg1 ;
-(NSMutableArray *)sortedETAs;
-(unsigned)liveTravelTime;
-(void)setLiveTravelTime:(unsigned)arg1 ;
-(void)setHasLiveTravelTime:(BOOL)arg1 ;
-(BOOL)hasLiveTravelTime;
-(void)setSortedETAs:(NSMutableArray *)arg1 ;
@end

