/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBTelemetryNetworkEvent : PBCodable <NSCopying> {

	long long _connectDuration;
	long long _dnsDuration;
	long long _errorCode;
	long long _httpStatusCode;
	long long _requestDuration;
	long long _responseDuration;
	long long _responseSize;
	long long _startTime;
	int _cacheState;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) long long startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasDnsDuration; 
@property (assign,nonatomic) long long dnsDuration;                   //@synthesize dnsDuration=_dnsDuration - In the implementation block
@property (assign,nonatomic) BOOL hasConnectDuration; 
@property (assign,nonatomic) long long connectDuration;               //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDuration; 
@property (assign,nonatomic) long long requestDuration;               //@synthesize requestDuration=_requestDuration - In the implementation block
@property (assign,nonatomic) BOOL hasResponseDuration; 
@property (assign,nonatomic) long long responseDuration;              //@synthesize responseDuration=_responseDuration - In the implementation block
@property (assign,nonatomic) BOOL hasResponseSize; 
@property (assign,nonatomic) long long responseSize;                  //@synthesize responseSize=_responseSize - In the implementation block
@property (assign,nonatomic) BOOL hasCacheState; 
@property (assign,nonatomic) int cacheState;                          //@synthesize cacheState=_cacheState - In the implementation block
@property (assign,nonatomic) BOOL hasHttpStatusCode; 
@property (assign,nonatomic) long long httpStatusCode;                //@synthesize httpStatusCode=_httpStatusCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasStartTime:(BOOL)arg1 ;
-(void)setResponseSize:(long long)arg1 ;
-(long long)responseSize;
-(BOOL)hasCacheState;
-(long long)httpStatusCode;
-(BOOL)hasStartTime;
-(BOOL)hasConnectDuration;
-(long long)dnsDuration;
-(void)setDnsDuration:(long long)arg1 ;
-(void)setHasDnsDuration:(BOOL)arg1 ;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(long long)responseDuration;
-(void)setHttpStatusCode:(long long)arg1 ;
-(void)setRequestDuration:(long long)arg1 ;
-(long long)connectDuration;
-(void)setStartTime:(long long)arg1 ;
-(BOOL)hasRequestDuration;
-(void)mergeFrom:(id)arg1 ;
-(long long)errorCode;
-(BOOL)hasErrorCode;
-(void)setCacheState:(int)arg1 ;
-(BOOL)hasHttpStatusCode;
-(id)description;
-(void)setResponseDuration:(long long)arg1 ;
-(BOOL)hasDnsDuration;
-(void)setConnectDuration:(long long)arg1 ;
-(BOOL)hasResponseSize;
-(void)setHasResponseSize:(BOOL)arg1 ;
-(void)setHasCacheState:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasHttpStatusCode:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)requestDuration;
-(void)setHasRequestDuration:(BOOL)arg1 ;
-(void)setHasResponseDuration:(BOOL)arg1 ;
-(BOOL)hasResponseDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)startTime;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)cacheState;
@end

