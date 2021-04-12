/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEONavigationTransitStopSummary;

@interface GEONavigationScheduledTransitLinkSummary : PBCodable <NSCopying> {

	PBDataReader* _reader;
	unsigned long long _lineID;
	double _scheduledArrival;
	double _scheduledDeparture;
	GEONavigationTransitStopSummary* _stopFrom;
	GEONavigationTransitStopSummary* _stopTo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_lineID : 1;
		unsigned has_scheduledArrival : 1;
		unsigned has_scheduledDeparture : 1;
		unsigned read_stopFrom : 1;
		unsigned read_stopTo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLineID; 
@property (assign,nonatomic) unsigned long long lineID; 
@property (assign,nonatomic) BOOL hasScheduledDeparture; 
@property (assign,nonatomic) double scheduledDeparture; 
@property (assign,nonatomic) BOOL hasScheduledArrival; 
@property (assign,nonatomic) double scheduledArrival; 
@property (nonatomic,readonly) BOOL hasStopFrom; 
@property (nonatomic,retain) GEONavigationTransitStopSummary * stopFrom; 
@property (nonatomic,readonly) BOOL hasStopTo; 
@property (nonatomic,retain) GEONavigationTransitStopSummary * stopTo; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(GEONavigationTransitStopSummary *)stopTo;
-(id)jsonRepresentation;
-(unsigned long long)lineID;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEONavigationTransitStopSummary *)stopFrom;
-(unsigned long long)hash;
-(BOOL)hasLineID;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLineID:(unsigned long long)arg1 ;
-(BOOL)hasStopTo;
-(void)setScheduledDeparture:(double)arg1 ;
-(void)setStopFrom:(GEONavigationTransitStopSummary *)arg1 ;
-(void)setScheduledArrival:(double)arg1 ;
-(void)setHasLineID:(BOOL)arg1 ;
-(double)scheduledDeparture;
-(void)setHasScheduledDeparture:(BOOL)arg1 ;
-(BOOL)hasScheduledDeparture;
-(double)scheduledArrival;
-(void)setHasScheduledArrival:(BOOL)arg1 ;
-(BOOL)hasScheduledArrival;
-(BOOL)hasStopFrom;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithTransitTripRouteStep:(id)arg1 originSummary:(id)arg2 destinationSummary:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStopTo:(GEONavigationTransitStopSummary *)arg1 ;
@end

