/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOClientNetworkTransactionMetrics : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _connectEnd;
	double _connectStart;
	double _domainLookupEnd;
	double _domainLookupStart;
	double _fetchStart;
	double _requestEnd;
	double _requestStart;
	double _responseEnd;
	double _responseStart;
	double _secureConnectEnd;
	double _secureConnectStart;
	int _protocolName;
	int _resourceFetchType;
	BOOL _proxyConnection;
	BOOL _reusedConnection;
	struct {
		unsigned has_connectEnd : 1;
		unsigned has_connectStart : 1;
		unsigned has_domainLookupEnd : 1;
		unsigned has_domainLookupStart : 1;
		unsigned has_fetchStart : 1;
		unsigned has_requestEnd : 1;
		unsigned has_requestStart : 1;
		unsigned has_responseEnd : 1;
		unsigned has_responseStart : 1;
		unsigned has_secureConnectEnd : 1;
		unsigned has_secureConnectStart : 1;
		unsigned has_protocolName : 1;
		unsigned has_resourceFetchType : 1;
		unsigned has_proxyConnection : 1;
		unsigned has_reusedConnection : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFetchStart; 
@property (assign,nonatomic) double fetchStart; 
@property (assign,nonatomic) BOOL hasDomainLookupStart; 
@property (assign,nonatomic) double domainLookupStart; 
@property (assign,nonatomic) BOOL hasDomainLookupEnd; 
@property (assign,nonatomic) double domainLookupEnd; 
@property (assign,nonatomic) BOOL hasConnectStart; 
@property (assign,nonatomic) double connectStart; 
@property (assign,nonatomic) BOOL hasSecureConnectStart; 
@property (assign,nonatomic) double secureConnectStart; 
@property (assign,nonatomic) BOOL hasSecureConnectEnd; 
@property (assign,nonatomic) double secureConnectEnd; 
@property (assign,nonatomic) BOOL hasConnectEnd; 
@property (assign,nonatomic) double connectEnd; 
@property (assign,nonatomic) BOOL hasRequestStart; 
@property (assign,nonatomic) double requestStart; 
@property (assign,nonatomic) BOOL hasRequestEnd; 
@property (assign,nonatomic) double requestEnd; 
@property (assign,nonatomic) BOOL hasResponseStart; 
@property (assign,nonatomic) double responseStart; 
@property (assign,nonatomic) BOOL hasResponseEnd; 
@property (assign,nonatomic) double responseEnd; 
@property (assign,nonatomic) BOOL hasProtocolName; 
@property (assign,nonatomic) int protocolName; 
@property (assign,nonatomic) BOOL hasProxyConnection; 
@property (assign,nonatomic) BOOL proxyConnection; 
@property (assign,nonatomic) BOOL hasReusedConnection; 
@property (assign,nonatomic) BOOL reusedConnection; 
@property (assign,nonatomic) BOOL hasResourceFetchType; 
@property (assign,nonatomic) int resourceFetchType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)requestStart;
-(double)requestEnd;
-(double)responseEnd;
-(void)setResponseEnd:(double)arg1 ;
-(void)setResponseStart:(double)arg1 ;
-(void)setRequestStart:(double)arg1 ;
-(double)connectEnd;
-(void)setConnectEnd:(double)arg1 ;
-(double)connectStart;
-(void)setConnectStart:(double)arg1 ;
-(void)setDomainLookupEnd:(double)arg1 ;
-(double)domainLookupStart;
-(void)setDomainLookupStart:(double)arg1 ;
-(void)setRequestEnd:(double)arg1 ;
-(void)setReusedConnection:(BOOL)arg1 ;
-(int)resourceFetchType;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasRequestStart:(BOOL)arg1 ;
-(BOOL)hasRequestStart;
-(void)setHasRequestEnd:(BOOL)arg1 ;
-(BOOL)hasRequestEnd;
-(double)fetchStart;
-(void)setFetchStart:(double)arg1 ;
-(void)setHasFetchStart:(BOOL)arg1 ;
-(BOOL)hasFetchStart;
-(void)setHasDomainLookupStart:(BOOL)arg1 ;
-(BOOL)hasDomainLookupStart;
-(double)domainLookupEnd;
-(void)setHasDomainLookupEnd:(BOOL)arg1 ;
-(BOOL)hasDomainLookupEnd;
-(void)setHasConnectStart:(BOOL)arg1 ;
-(BOOL)hasConnectStart;
-(double)secureConnectStart;
-(void)setSecureConnectStart:(double)arg1 ;
-(void)setHasSecureConnectStart:(BOOL)arg1 ;
-(BOOL)hasSecureConnectStart;
-(double)secureConnectEnd;
-(void)setSecureConnectEnd:(double)arg1 ;
-(void)setHasSecureConnectEnd:(BOOL)arg1 ;
-(BOOL)hasSecureConnectEnd;
-(void)setHasConnectEnd:(BOOL)arg1 ;
-(BOOL)hasConnectEnd;
-(double)responseStart;
-(void)setHasResponseStart:(BOOL)arg1 ;
-(BOOL)hasResponseStart;
-(void)setHasResponseEnd:(BOOL)arg1 ;
-(BOOL)hasResponseEnd;
-(int)protocolName;
-(void)setProtocolName:(int)arg1 ;
-(void)setHasProtocolName:(BOOL)arg1 ;
-(BOOL)hasProtocolName;
-(id)protocolNameAsString:(int)arg1 ;
-(int)StringAsProtocolName:(id)arg1 ;
-(BOOL)proxyConnection;
-(void)setProxyConnection:(BOOL)arg1 ;
-(void)setHasProxyConnection:(BOOL)arg1 ;
-(BOOL)hasProxyConnection;
-(BOOL)reusedConnection;
-(void)setHasReusedConnection:(BOOL)arg1 ;
-(BOOL)hasReusedConnection;
-(void)setResourceFetchType:(int)arg1 ;
-(void)setHasResourceFetchType:(BOOL)arg1 ;
-(BOOL)hasResourceFetchType;
-(id)resourceFetchTypeAsString:(int)arg1 ;
-(int)StringAsResourceFetchType:(id)arg1 ;
@end

