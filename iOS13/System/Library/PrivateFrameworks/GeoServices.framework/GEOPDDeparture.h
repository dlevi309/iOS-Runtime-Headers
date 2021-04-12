/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitDeparture.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, PBDataReader, PBUnknownFields, GEOFormattedString;

@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _absDepartureTime;
	double _absLiveDepartureTime;
	GEOFormattedString* _realTimeStatus;
	unsigned long long _referenceTripId;
	NSString* _vehicleNumber;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isCanceled;
	struct {
		unsigned has_absDepartureTime : 1;
		unsigned has_absLiveDepartureTime : 1;
		unsigned has_referenceTripId : 1;
		unsigned has_isCanceled : 1;
		unsigned read_unknownFields : 1;
		unsigned read_realTimeStatus : 1;
		unsigned read_vehicleNumber : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_absDepartureTime : 1;
		unsigned wrote_absLiveDepartureTime : 1;
		unsigned wrote_realTimeStatus : 1;
		unsigned wrote_referenceTripId : 1;
		unsigned wrote_vehicleNumber : 1;
		unsigned wrote_isCanceled : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * departureDate; 
@property (nonatomic,readonly) NSDate * scheduledDepartureDate; 
@property (nonatomic,readonly) NSString * vehicleIdentifier; 
@property (nonatomic,readonly) unsigned long long tripIdentifier; 
@property (nonatomic,readonly) NSDate * liveDepartureDate; 
@property (nonatomic,readonly) long long liveStatus; 
@property (nonatomic,readonly) id<GEOServerFormattedString> liveStatusString; 
@property (nonatomic,readonly) BOOL isPastDeparture; 
@property (nonatomic,readonly) BOOL isCanceled; 
@property (assign,nonatomic) BOOL hasAbsDepartureTime; 
@property (assign,nonatomic) double absDepartureTime; 
@property (nonatomic,readonly) BOOL hasVehicleNumber; 
@property (nonatomic,retain) NSString * vehicleNumber; 
@property (assign,nonatomic) BOOL hasAbsLiveDepartureTime; 
@property (assign,nonatomic) double absLiveDepartureTime; 
@property (assign,nonatomic) BOOL hasIsCanceled; 
@property (assign,nonatomic) BOOL isCanceled; 
@property (assign,nonatomic) BOOL hasReferenceTripId; 
@property (assign,nonatomic) unsigned long long referenceTripId; 
@property (nonatomic,readonly) BOOL hasRealTimeStatus; 
@property (nonatomic,retain) GEOFormattedString * realTimeStatus; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSDate *)departureDate;
-(BOOL)isCanceled;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)referenceTripId;
-(void)setReferenceTripId:(unsigned long long)arg1 ;
-(void)setHasReferenceTripId:(BOOL)arg1 ;
-(BOOL)hasReferenceTripId;
-(NSDate *)liveDepartureDate;
-(NSDate *)scheduledDepartureDate;
-(BOOL)hasAbsDepartureTime;
-(double)absDepartureTime;
-(BOOL)hasAbsLiveDepartureTime;
-(double)absLiveDepartureTime;
-(NSString *)vehicleNumber;
-(BOOL)hasRealTimeStatus;
-(GEOFormattedString *)realTimeStatus;
-(BOOL)isPastDepartureRelativeToDate:(id)arg1 usingGracePeriod:(BOOL)arg2 ;
-(NSString *)vehicleIdentifier;
-(long long)liveStatus;
-(id<GEOServerFormattedString>)liveStatusString;
-(unsigned long long)tripIdentifier;
-(BOOL)isPastDeparture;
-(void)_readVehicleNumber;
-(void)setVehicleNumber:(NSString *)arg1 ;
-(BOOL)hasVehicleNumber;
-(void)_readRealTimeStatus;
-(void)setRealTimeStatus:(GEOFormattedString *)arg1 ;
-(void)setAbsDepartureTime:(double)arg1 ;
-(void)setHasAbsDepartureTime:(BOOL)arg1 ;
-(void)setAbsLiveDepartureTime:(double)arg1 ;
-(void)setHasAbsLiveDepartureTime:(BOOL)arg1 ;
-(void)setIsCanceled:(BOOL)arg1 ;
-(void)setHasIsCanceled:(BOOL)arg1 ;
-(BOOL)hasIsCanceled;
@end

