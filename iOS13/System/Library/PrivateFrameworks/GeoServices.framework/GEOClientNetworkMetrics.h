/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_requestEnd : 1;
		unsigned wrote_requestStart : 1;
		unsigned wrote_serviceIpAddress : 1;
		unsigned wrote_transactionMetrics : 1;
		unsigned wrote_httpResponseCode : 1;
		unsigned wrote_redirectCount : 1;
		unsigned wrote_requestDataSize : 1;
		unsigned wrote_responseDataSize : 1;
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
-(double)requestStart;
-(double)requestEnd;
-(void)setRedirectCount:(int)arg1 ;
-(void)setRequestStart:(double)arg1 ;
-(NSMutableArray *)transactionMetrics;
-(void)setTransactionMetrics:(NSMutableArray *)arg1 ;
-(void)addTransactionMetrics:(id)arg1 ;
-(void)setRequestEnd:(double)arg1 ;
-(int)redirectCount;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readServiceIpAddress;
-(void)_readTransactionMetrics;
-(void)_addNoFlagsTransactionMetrics:(id)arg1 ;
-(NSString *)serviceIpAddress;
-(void)setServiceIpAddress:(NSString *)arg1 ;
-(unsigned long long)transactionMetricsCount;
-(void)clearTransactionMetrics;
-(id)transactionMetricsAtIndex:(unsigned long long)arg1 ;
-(int)httpResponseCode;
-(void)setHttpResponseCode:(int)arg1 ;
-(void)setHasHttpResponseCode:(BOOL)arg1 ;
-(BOOL)hasHttpResponseCode;
-(BOOL)hasServiceIpAddress;
-(int)requestDataSize;
-(void)setRequestDataSize:(int)arg1 ;
-(void)setHasRequestDataSize:(BOOL)arg1 ;
-(BOOL)hasRequestDataSize;
-(int)responseDataSize;
-(void)setResponseDataSize:(int)arg1 ;
-(void)setHasResponseDataSize:(BOOL)arg1 ;
-(BOOL)hasResponseDataSize;
-(void)setHasRequestStart:(BOOL)arg1 ;
-(BOOL)hasRequestStart;
-(void)setHasRequestEnd:(BOOL)arg1 ;
-(BOOL)hasRequestEnd;
-(void)setHasRedirectCount:(BOOL)arg1 ;
-(BOOL)hasRedirectCount;
@end

