/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBNetworkEvent : PBCodable <NSCopying> {

	unsigned long long _connectDuration;
	unsigned long long _dnsDuration;
	long long _errorCode;
	unsigned long long _httpStatusCode;
	unsigned long long _requestDuration;
	unsigned long long _responseDuration;
	unsigned long long _responseSize;
	unsigned long long _sessionID;
	unsigned long long _startTime;
	int _cacheState;
	NSString* _requestUUID;
	NSString* _respondingPOP;
	int _type;
	NSString* _url;
	SCD_Struct_NT28 _has;

}

@property (nonatomic,readonly) int pbNetworkEventType; 
@property (nonatomic,readonly) int pbNetworkEventCacheState; 
@property (nonatomic,readonly) unsigned long long totalDuration; 
@property (nonatomic,readonly) unsigned long long endTime; 
@property (getter=isSuccess,nonatomic,readonly) BOOL success; 
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) unsigned long long startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasDnsDuration; 
@property (assign,nonatomic) unsigned long long dnsDuration;                   //@synthesize dnsDuration=_dnsDuration - In the implementation block
@property (assign,nonatomic) BOOL hasConnectDuration; 
@property (assign,nonatomic) unsigned long long connectDuration;               //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDuration; 
@property (assign,nonatomic) unsigned long long requestDuration;               //@synthesize requestDuration=_requestDuration - In the implementation block
@property (assign,nonatomic) BOOL hasResponseDuration; 
@property (assign,nonatomic) unsigned long long responseDuration;              //@synthesize responseDuration=_responseDuration - In the implementation block
@property (assign,nonatomic) BOOL hasResponseSize; 
@property (assign,nonatomic) unsigned long long responseSize;                  //@synthesize responseSize=_responseSize - In the implementation block
@property (assign,nonatomic) BOOL hasCacheState; 
@property (assign,nonatomic) int cacheState;                                   //@synthesize cacheState=_cacheState - In the implementation block
@property (assign,nonatomic) BOOL hasHttpStatusCode; 
@property (assign,nonatomic) unsigned long long httpStatusCode;                //@synthesize httpStatusCode=_httpStatusCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                              //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestUUID; 
@property (nonatomic,retain) NSString * requestUUID;                           //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasRespondingPOP; 
@property (nonatomic,retain) NSString * respondingPOP;                         //@synthesize respondingPOP=_respondingPOP - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
-(unsigned long long)totalDuration;
-(BOOL)isSuccess;
-(int)pbNetworkEventCacheState;
-(unsigned long long)endTime;
-(int)pbNetworkEventType;
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(void)setHasStartTime:(BOOL)arg1 ;
-(void)setResponseSize:(unsigned long long)arg1 ;
-(unsigned long long)responseSize;
-(void)setRequestUUID:(NSString *)arg1 ;
-(BOOL)hasCacheState;
-(unsigned long long)httpStatusCode;
-(unsigned long long)sessionID;
-(void)setSessionID:(unsigned long long)arg1 ;
-(BOOL)hasStartTime;
-(NSString *)requestUUID;
-(void)setHasType:(BOOL)arg1 ;
-(void)setRespondingPOP:(NSString *)arg1 ;
-(BOOL)hasConnectDuration;
-(unsigned long long)dnsDuration;
-(void)setDnsDuration:(unsigned long long)arg1 ;
-(void)setHasDnsDuration:(BOOL)arg1 ;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(unsigned long long)responseDuration;
-(void)setHttpStatusCode:(unsigned long long)arg1 ;
-(void)setRequestDuration:(unsigned long long)arg1 ;
-(unsigned long long)connectDuration;
-(void)setStartTime:(unsigned long long)arg1 ;
-(BOOL)hasRequestDuration;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(long long)errorCode;
-(void)setType:(int)arg1 ;
-(NSString *)respondingPOP;
-(NSString *)url;
-(BOOL)hasErrorCode;
-(void)setCacheState:(int)arg1 ;
-(BOOL)hasRequestUUID;
-(BOOL)hasRespondingPOP;
-(BOOL)hasHttpStatusCode;
-(id)description;
-(BOOL)hasUrl;
-(void)setResponseDuration:(unsigned long long)arg1 ;
-(BOOL)hasDnsDuration;
-(void)setConnectDuration:(unsigned long long)arg1 ;
-(BOOL)hasResponseSize;
-(void)setHasResponseSize:(BOOL)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(int)type;
-(void)setHasCacheState:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasHttpStatusCode:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)requestDuration;
-(void)setHasRequestDuration:(BOOL)arg1 ;
-(void)setHasResponseDuration:(BOOL)arg1 ;
-(BOOL)hasResponseDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)startTime;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(int)cacheState;
@end

