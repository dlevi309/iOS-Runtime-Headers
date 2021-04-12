/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOClientNetworkMetrics : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _requestEnd;
	double _requestStart;
	NSString* _serviceIpAddress;
	NSMutableArray* _transactionMetrics;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _httpResponseCode;
	int _redirectCount;
	int _requestDataSize;
	int _responseDataSize;
	struct {
		unsigned has_requestEnd : 1;
		unsigned has_requestStart : 1;
		unsigned has_httpResponseCode : 1;
		unsigned has_redirectCount : 1;
		unsigned has_requestDataSize : 1;
		unsigned has_responseDataSize : 1;
		unsigned read_unknownFields : 1;
		unsigned read_serviceIpAddress : 1;
		unsigned read_transactionMetrics : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasHttpResponseCode; 
@property (assign,nonatomic) int httpResponseCode; 
@property (nonatomic,readonly) BOOL hasServiceIpAddress; 
@property (nonatomic,retain) NSString * serviceIpAddress; 
@property (assign,nonatomic) BOOL hasRequestDataSize; 
@property (assign,nonatomic) int requestDataSize; 
@property (assign,nonatomic) BOOL hasResponseDataSize; 
@property (assign,nonatomic) int responseDataSize; 
@property (assign,nonatomic) BOOL hasRequestStart; 
@property (assign,nonatomic) double requestStart; 
@property (assign,nonatomic) BOOL hasRequestEnd; 
@property (assign,nonatomic) double requestEnd; 
@property (assign,nonatomic) BOOL hasRedirectCount; 
@property (assign,nonatomic) int redirectCount; 
@property (nonatomic,retain) NSMutableArray * transactionMetrics; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)transactionMetricsType;
-(void)setHasHttpResponseCode:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setRequestDataSize:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)requestDataSize;
-(double)requestEnd;
-(void)setHasRequestStart:(BOOL)arg1 ;
-(void)setHttpResponseCode:(int)arg1 ;
-(id)init;
-(int)responseDataSize;
-(id)jsonRepresentation;
-(void)setHasResponseDataSize:(BOOL)arg1 ;
-(void)clearTransactionMetrics;
-(void)setResponseDataSize:(int)arg1 ;
-(BOOL)hasRequestEnd;
-(void)setServiceIpAddress:(NSString *)arg1 ;
-(BOOL)hasResponseDataSize;
-(NSString *)serviceIpAddress;
-(BOOL)hasRequestStart;
-(BOOL)hasRedirectCount;
-(void)setHasRedirectCount:(BOOL)arg1 ;
-(void)setRequestEnd:(double)arg1 ;
-(void)setHasRequestEnd:(BOOL)arg1 ;
-(BOOL)hasHttpResponseCode;
-(void)setRequestStart:(double)arg1 ;
-(double)requestStart;
-(int)httpResponseCode;
-(BOOL)hasRequestDataSize;
-(id)transactionMetricsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transactionMetricsCount;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setRedirectCount:(int)arg1 ;
-(id)description;
-(void)setTransactionMetrics:(NSMutableArray *)arg1 ;
-(int)redirectCount;
-(unsigned long long)hash;
-(void)setHasRequestDataSize:(BOOL)arg1 ;
-(NSMutableArray *)transactionMetrics;
-(BOOL)readFrom:(id)arg1 ;
-(void)addTransactionMetrics:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasServiceIpAddress;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

