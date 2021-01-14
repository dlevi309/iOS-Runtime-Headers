/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEORPTimestamp, GEOLocation, NSMutableArray;

@interface GEORPUserLocationDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEORPTimestamp* _currentTime;
	GEOLocation* _currentUserLocation;
	NSMutableArray* _deviceHistoricalLocations;
	GEOLocation* _lastKnownRoadLocation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_currentTime : 1;
		unsigned read_currentUserLocation : 1;
		unsigned read_deviceHistoricalLocations : 1;
		unsigned read_lastKnownRoadLocation : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCurrentTime; 
@property (nonatomic,retain) GEORPTimestamp * currentTime; 
@property (nonatomic,readonly) BOOL hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation; 
@property (nonatomic,readonly) BOOL hasLastKnownRoadLocation; 
@property (nonatomic,retain) GEOLocation * lastKnownRoadLocation; 
@property (nonatomic,retain) NSMutableArray * deviceHistoricalLocations; 
+(Class)deviceHistoricalLocationType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCurrentUserLocation;
-(void)setDeviceHistoricalLocations:(NSMutableArray *)arg1 ;
-(void)setCurrentTime:(GEORPTimestamp *)arg1 ;
-(NSMutableArray *)deviceHistoricalLocations;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasLastKnownRoadLocation;
-(id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1 ;
-(GEORPTimestamp *)currentTime;
-(id)description;
-(GEOLocation *)lastKnownRoadLocation;
-(GEOLocation *)currentUserLocation;
-(void)setLastKnownRoadLocation:(GEOLocation *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addDeviceHistoricalLocation:(id)arg1 ;
-(BOOL)hasCurrentTime;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)deviceHistoricalLocationsCount;
-(void)writeTo:(id)arg1 ;
-(void)clearDeviceHistoricalLocations;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

