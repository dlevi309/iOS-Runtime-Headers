/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDClientMetadata, NSMutableArray;

@interface GEOWiFiQualityServiceRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	GEOPDClientMetadata* _clientMetadata;
	NSMutableArray* _locationSearches;
	NSMutableArray* _networkSearches;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_clientMetadata : 1;
		unsigned read_locationSearches : 1;
		unsigned read_networkSearches : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata; 
@property (nonatomic,retain) NSMutableArray * locationSearches; 
@property (nonatomic,retain) NSMutableArray * networkSearches; 
+(BOOL)isValid:(id)arg1 ;
+(Class)locationSearchesType;
+(Class)networkSearchesType;
-(id)dictionaryRepresentation;
-(id)locationSearchesAtIndex:(unsigned long long)arg1 ;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)locationSearchesCount;
-(id)init;
-(BOOL)hasClientMetadata;
-(id)jsonRepresentation;
-(void)clearLocationSearches;
-(void)setLocationSearches:(NSMutableArray *)arg1 ;
-(NSMutableArray *)locationSearches;
-(void)clearNetworkSearches;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(id)networkSearchesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)addLocationSearches:(id)arg1 ;
-(void)addNetworkSearches:(id)arg1 ;
-(GEOPDClientMetadata *)clientMetadata;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)networkSearches;
-(unsigned long long)networkSearchesCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNetworkSearches:(NSMutableArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

