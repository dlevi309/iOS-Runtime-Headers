/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSDate * departureDate; 
@property (nonatomic,readonly) NSDate * scheduledDepartureDate; 
@property (nonatomic,readonly) NSString * vehicleIdentifier; 
@property (nonatomic,readonly) unsigned long long tripIdentifier; 
@property (nonatomic,readonly) NSDate * liveDepartureDate; 
@property (nonatomic,readonly) long long liveStatus; 
@property (nonatomic,readonly) id<GEOServerFormattedString> liveStatusString; 
@property (nonatomic,readonly) BOOL isPastDeparture; 
@property (nonatomic,readonly) BOOL isCanceled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)isCanceled;
-(NSString *)vehicleNumber;
-(void)setVehicleNumber:(NSString *)arg1 ;
-(BOOL)hasVehicleNumber;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)vehicleIdentifier;
-(GEOFormattedString *)realTimeStatus;
-(void)setAbsDepartureTime:(double)arg1 ;
-(void)setReferenceTripId:(unsigned long long)arg1 ;
-(void)setAbsLiveDepartureTime:(double)arg1 ;
-(void)setRealTimeStatus:(GEOFormattedString *)arg1 ;
-(double)absDepartureTime;
-(void)setHasAbsDepartureTime:(BOOL)arg1 ;
-(BOOL)hasAbsDepartureTime;
-(double)absLiveDepartureTime;
-(void)setHasAbsLiveDepartureTime:(BOOL)arg1 ;
-(void)setHasIsCanceled:(BOOL)arg1 ;
-(BOOL)hasAbsLiveDepartureTime;
-(BOOL)hasIsCanceled;
-(unsigned long long)referenceTripId;
-(void)setHasReferenceTripId:(BOOL)arg1 ;
-(BOOL)hasReferenceTripId;
-(BOOL)hasRealTimeStatus;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSDate *)departureDate;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setIsCanceled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)liveStatus;
-(NSDate *)liveDepartureDate;
-(NSDate *)scheduledDepartureDate;
-(BOOL)isPastDepartureRelativeToDate:(id)arg1 usingGracePeriod:(BOOL)arg2 ;
-(id<GEOServerFormattedString>)liveStatusString;
-(unsigned long long)tripIdentifier;
-(BOOL)isPastDeparture;
@end

