/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOWiFiQualityServiceResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _locationResults;
	NSMutableArray* _networkResults;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _statusCode;
	struct {
		unsigned has_statusCode : 1;
		unsigned read_locationResults : 1;
		unsigned read_networkResults : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * locationResults; 
@property (nonatomic,retain) NSMutableArray * networkResults; 
+(Class)networkResultsType;
+(Class)locationResultsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearLocationResults;
-(NSMutableArray *)locationResults;
-(unsigned long long)locationResultsCount;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSMutableArray *)networkResults;
-(void)setNetworkResults:(NSMutableArray *)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)addNetworkResults:(id)arg1 ;
-(void)setLocationResults:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearNetworkResults;
-(id)initWithData:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addLocationResults:(id)arg1 ;
-(int)statusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(id)description;
-(id)locationResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)networkResultsCount;
-(BOOL)hasStatusCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)networkResultsAtIndex:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

