/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOUsageCollection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOTileUsage* _tileUsages;
	unsigned long long _tileUsagesCount;
	unsigned long long _tileUsagesSpace;
	GEOSessionID _sessionID;
	NSString* _countryCode;
	NSString* _hwMachine;
	long long _requestErrorCode;
	NSString* _requestErrorDescription;
	NSString* _requestErrorDomain;
	double _timestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _cellWifi;
	int _geoService;
	int _placeRequestType;
	int _requestDataSize;
	int _responseDataSize;
	int _responseTime;
	BOOL _sessionIDIsPersistent;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_requestErrorCode : 1;
		unsigned has_timestamp : 1;
		unsigned has_cellWifi : 1;
		unsigned has_geoService : 1;
		unsigned has_placeRequestType : 1;
		unsigned has_requestDataSize : 1;
		unsigned has_responseDataSize : 1;
		unsigned has_responseTime : 1;
		unsigned has_sessionIDIsPersistent : 1;
		unsigned read_tileUsages : 1;
		unsigned read_countryCode : 1;
		unsigned read_hwMachine : 1;
		unsigned read_requestErrorDescription : 1;
		unsigned read_requestErrorDomain : 1;
		unsigned wrote_tileUsages : 1;
		unsigned wrote_sessionID : 1;
		unsigned wrote_countryCode : 1;
		unsigned wrote_hwMachine : 1;
		unsigned wrote_requestErrorCode : 1;
		unsigned wrote_requestErrorDescription : 1;
		unsigned wrote_requestErrorDomain : 1;
		unsigned wrote_timestamp : 1;
		unsigned wrote_cellWifi : 1;
		unsigned wrote_geoService : 1;
		unsigned wrote_placeRequestType : 1;
		unsigned wrote_requestDataSize : 1;
		unsigned wrote_responseDataSize : 1;
		unsigned wrote_responseTime : 1;
		unsigned wrote_sessionIDIsPersistent : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasGeoService; 
@property (assign,nonatomic) int geoService; 
@property (assign,nonatomic) BOOL hasRequestDataSize; 
@property (assign,nonatomic) int requestDataSize; 
@property (assign,nonatomic) BOOL hasResponseDataSize; 
@property (assign,nonatomic) int responseDataSize; 
@property (assign,nonatomic) BOOL hasResponseTime; 
@property (assign,nonatomic) int responseTime; 
@property (assign,nonatomic) BOOL hasCellWifi; 
@property (assign,nonatomic) int cellWifi; 
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) unsigned long long tileUsagesCount; 
@property (nonatomic,readonly) GEOTileUsage* tileUsages; 
@property (nonatomic,readonly) BOOL hasHwMachine; 
@property (nonatomic,retain) NSString * hwMachine; 
@property (assign,nonatomic) BOOL hasSessionIDIsPersistent; 
@property (assign,nonatomic) BOOL sessionIDIsPersistent; 
@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType; 
@property (nonatomic,readonly) BOOL hasRequestErrorDomain; 
@property (nonatomic,retain) NSString * requestErrorDomain; 
@property (assign,nonatomic) BOOL hasRequestErrorCode; 
@property (assign,nonatomic) long long requestErrorCode; 
@property (nonatomic,readonly) BOOL hasRequestErrorDescription; 
@property (nonatomic,retain) NSString * requestErrorDescription; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(int)responseTime;
-(void)setResponseTime:(int)arg1 ;
-(void)setHasResponseTime:(BOOL)arg1 ;
-(BOOL)hasResponseTime;
-(BOOL)hasCountryCode;
-(int)requestDataSize;
-(void)setRequestDataSize:(int)arg1 ;
-(void)setHasRequestDataSize:(BOOL)arg1 ;
-(BOOL)hasRequestDataSize;
-(int)responseDataSize;
-(void)setResponseDataSize:(int)arg1 ;
-(void)setHasResponseDataSize:(BOOL)arg1 ;
-(BOOL)hasResponseDataSize;
-(void)_readCountryCode;
-(void)clearTileUsages;
-(void)_readTileUsages;
-(void)_addNoFlagsTileUsage:(GEOTileUsage)arg1 ;
-(void)_readHwMachine;
-(void)_readRequestErrorDomain;
-(void)_readRequestErrorDescription;
-(NSString *)hwMachine;
-(NSString *)requestErrorDomain;
-(NSString *)requestErrorDescription;
-(unsigned long long)tileUsagesCount;
-(GEOTileUsage)tileUsageAtIndex:(unsigned long long)arg1 ;
-(void)addTileUsage:(GEOTileUsage)arg1 ;
-(void)setHwMachine:(NSString *)arg1 ;
-(void)setRequestErrorDomain:(NSString *)arg1 ;
-(void)setRequestErrorDescription:(NSString *)arg1 ;
-(int)geoService;
-(void)setGeoService:(int)arg1 ;
-(void)setHasGeoService:(BOOL)arg1 ;
-(BOOL)hasGeoService;
-(id)geoServiceAsString:(int)arg1 ;
-(int)StringAsGeoService:(id)arg1 ;
-(int)cellWifi;
-(void)setCellWifi:(int)arg1 ;
-(void)setHasCellWifi:(BOOL)arg1 ;
-(BOOL)hasCellWifi;
-(id)cellWifiAsString:(int)arg1 ;
-(int)StringAsCellWifi:(id)arg1 ;
-(GEOTileUsage*)tileUsages;
-(void)setTileUsages:(GEOTileUsage*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasHwMachine;
-(BOOL)sessionIDIsPersistent;
-(void)setSessionIDIsPersistent:(BOOL)arg1 ;
-(void)setHasSessionIDIsPersistent:(BOOL)arg1 ;
-(BOOL)hasSessionIDIsPersistent;
-(int)placeRequestType;
-(void)setPlaceRequestType:(int)arg1 ;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(BOOL)hasPlaceRequestType;
-(id)placeRequestTypeAsString:(int)arg1 ;
-(int)StringAsPlaceRequestType:(id)arg1 ;
-(BOOL)hasRequestErrorDomain;
-(long long)requestErrorCode;
-(void)setRequestErrorCode:(long long)arg1 ;
-(void)setHasRequestErrorCode:(BOOL)arg1 ;
-(BOOL)hasRequestErrorCode;
-(BOOL)hasRequestErrorDescription;
@end

