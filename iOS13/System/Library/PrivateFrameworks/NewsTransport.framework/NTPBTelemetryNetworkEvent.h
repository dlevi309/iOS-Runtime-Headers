/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT3 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)startTime;
-(void)setStartTime:(long long)arg1 ;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(long long)responseSize;
-(void)setResponseSize:(long long)arg1 ;
-(long long)httpStatusCode;
-(long long)dnsDuration;
-(long long)connectDuration;
-(long long)requestDuration;
-(long long)responseDuration;
-(void)setDnsDuration:(long long)arg1 ;
-(void)setConnectDuration:(long long)arg1 ;
-(void)setRequestDuration:(long long)arg1 ;
-(void)setResponseDuration:(long long)arg1 ;
-(void)setCacheState:(int)arg1 ;
-(void)setHttpStatusCode:(long long)arg1 ;
-(int)cacheState;
-(void)setHasDnsDuration:(BOOL)arg1 ;
-(BOOL)hasDnsDuration;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(BOOL)hasConnectDuration;
-(void)setHasRequestDuration:(BOOL)arg1 ;
-(BOOL)hasRequestDuration;
-(void)setHasResponseDuration:(BOOL)arg1 ;
-(BOOL)hasResponseDuration;
-(void)setHasResponseSize:(BOOL)arg1 ;
-(BOOL)hasResponseSize;
-(void)setHasCacheState:(BOOL)arg1 ;
-(BOOL)hasCacheState;
-(void)setHasHttpStatusCode:(BOOL)arg1 ;
-(BOOL)hasHttpStatusCode;
@end

