/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOSpatialLookupBatchRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSString* _deviceCountryCode;
	NSString* _deviceSku;
	NSMutableArray* _requests;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_deviceCountryCode : 1;
		unsigned read_deviceSku : 1;
		unsigned read_requests : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * requests; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode; 
@property (nonatomic,readonly) BOOL hasDeviceSku; 
@property (nonatomic,retain) NSString * deviceSku; 
+(Class)requestType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(NSString *)deviceSku;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)deviceCountryCode;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)requests;
-(id)description;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(void)addRequest:(id)arg1 ;
-(BOOL)hasDeviceSku;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)requestsCount;
-(void)clearRequests;
-(id)requestAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(void)setDeviceSku:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

