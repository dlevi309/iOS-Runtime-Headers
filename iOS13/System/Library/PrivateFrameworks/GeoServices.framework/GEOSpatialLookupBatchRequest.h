/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_deviceCountryCode : 1;
		unsigned wrote_deviceSku : 1;
		unsigned wrote_requests : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * requests; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode; 
@property (nonatomic,readonly) BOOL hasDeviceSku; 
@property (nonatomic,retain) NSString * deviceSku; 
+(Class)requestType;
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
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSMutableArray *)requests;
-(void)clearRequests;
-(void)addRequest:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)_readDeviceCountryCode;
-(NSString *)deviceCountryCode;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(void)_readDeviceSku;
-(NSString *)deviceSku;
-(void)setDeviceSku:(NSString *)arg1 ;
-(BOOL)hasDeviceSku;
-(void)_readRequests;
-(void)_addNoFlagsRequest:(id)arg1 ;
-(unsigned long long)requestsCount;
-(id)requestAtIndex:(unsigned long long)arg1 ;
@end

