/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_clientMetadata : 1;
		unsigned wrote_locationSearches : 1;
		unsigned wrote_networkSearches : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata; 
@property (nonatomic,retain) NSMutableArray * locationSearches; 
@property (nonatomic,retain) NSMutableArray * networkSearches; 
+(BOOL)isValid:(id)arg1 ;
+(Class)locationSearchesType;
+(Class)networkSearchesType;
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
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(GEOPDClientMetadata *)clientMetadata;
-(void)_readClientMetadata;
-(BOOL)hasClientMetadata;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(NSMutableArray *)locationSearches;
-(NSMutableArray *)networkSearches;
-(void)addNetworkSearches:(id)arg1 ;
-(void)addLocationSearches:(id)arg1 ;
-(void)_readLocationSearches;
-(void)_addNoFlagsLocationSearches:(id)arg1 ;
-(void)_readNetworkSearches;
-(void)_addNoFlagsNetworkSearches:(id)arg1 ;
-(unsigned long long)locationSearchesCount;
-(void)clearLocationSearches;
-(id)locationSearchesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)networkSearchesCount;
-(void)clearNetworkSearches;
-(id)networkSearchesAtIndex:(unsigned long long)arg1 ;
-(void)setLocationSearches:(NSMutableArray *)arg1 ;
-(void)setNetworkSearches:(NSMutableArray *)arg1 ;
@end

