/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_locationResults : 1;
		unsigned wrote_networkResults : 1;
		unsigned wrote_statusCode : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * locationResults; 
@property (nonatomic,retain) NSMutableArray * networkResults; 
+(BOOL)isValid:(id)arg1 ;
+(Class)locationResultsType;
+(Class)networkResultsType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)statusCode;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(NSMutableArray *)networkResults;
-(NSMutableArray *)locationResults;
-(void)_readLocationResults;
-(void)_addNoFlagsLocationResults:(id)arg1 ;
-(void)_readNetworkResults;
-(void)_addNoFlagsNetworkResults:(id)arg1 ;
-(unsigned long long)locationResultsCount;
-(void)clearLocationResults;
-(id)locationResultsAtIndex:(unsigned long long)arg1 ;
-(void)addLocationResults:(id)arg1 ;
-(unsigned long long)networkResultsCount;
-(void)clearNetworkResults;
-(id)networkResultsAtIndex:(unsigned long long)arg1 ;
-(void)addNetworkResults:(id)arg1 ;
-(void)setLocationResults:(NSMutableArray *)arg1 ;
-(void)setNetworkResults:(NSMutableArray *)arg1 ;
@end

