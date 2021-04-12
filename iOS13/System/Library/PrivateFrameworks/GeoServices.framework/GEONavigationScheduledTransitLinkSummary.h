/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_lineID : 1;
		unsigned wrote_scheduledArrival : 1;
		unsigned wrote_scheduledDeparture : 1;
		unsigned wrote_stopFrom : 1;
		unsigned wrote_stopTo : 1;
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
-(GEONavigationTransitStopSummary *)stopFrom;
-(GEONavigationTransitStopSummary *)stopTo;
-(void)_readStopFrom;
-(void)_readStopTo;
-(void)setStopFrom:(GEONavigationTransitStopSummary *)arg1 ;
-(void)setStopTo:(GEONavigationTransitStopSummary *)arg1 ;
-(unsigned long long)lineID;
-(void)setLineID:(unsigned long long)arg1 ;
-(void)setHasLineID:(BOOL)arg1 ;
-(BOOL)hasLineID;
-(double)scheduledDeparture;
-(void)setScheduledDeparture:(double)arg1 ;
-(void)setHasScheduledDeparture:(BOOL)arg1 ;
-(BOOL)hasScheduledDeparture;
-(double)scheduledArrival;
-(void)setScheduledArrival:(double)arg1 ;
-(void)setHasScheduledArrival:(BOOL)arg1 ;
-(BOOL)hasScheduledArrival;
-(BOOL)hasStopFrom;
-(BOOL)hasStopTo;
-(id)initWithTransitTripRouteStep:(id)arg1 originSummary:(id)arg2 destinationSummary:(id)arg3 ;
@end

