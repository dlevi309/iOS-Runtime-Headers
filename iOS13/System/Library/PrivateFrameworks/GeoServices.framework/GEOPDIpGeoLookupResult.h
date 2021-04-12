/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOLatLng;

@interface GEOPDIpGeoLookupResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _countryCode;
	NSString* _ipAddress;
	GEOLatLng* _location;
	NSString* _timeZome;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_countryCode : 1;
		unsigned read_ipAddress : 1;
		unsigned read_location : 1;
		unsigned read_timeZome : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_countryCode : 1;
		unsigned wrote_ipAddress : 1;
		unsigned wrote_location : 1;
		unsigned wrote_timeZome : 1;
		unsigned wrote_status : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,readonly) BOOL hasIpAddress; 
@property (nonatomic,retain) NSString * ipAddress; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (nonatomic,readonly) BOOL hasTimeZome; 
@property (nonatomic,retain) NSString * timeZome; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(int)status;
-(GEOLatLng *)location;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(void)_readLocation;
-(BOOL)hasCountryCode;
-(NSString *)ipAddress;
-(NSString *)timeZome;
-(void)setIpAddress:(NSString *)arg1 ;
-(BOOL)hasIpAddress;
-(void)_readIpAddress;
-(void)_readCountryCode;
-(void)_readTimeZome;
-(void)setTimeZome:(NSString *)arg1 ;
-(BOOL)hasTimeZome;
@end

