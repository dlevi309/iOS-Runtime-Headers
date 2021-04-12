/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBNetworkEvent : PBCodable <NSCopying> {

	unsigned long long _cacheState;
	unsigned long long _connectDuration;
	unsigned long long _dnsDuration;
	unsigned long long _errorCode;
	unsigned long long _httpStatusCode;
	unsigned long long _requestDuration;
	unsigned long long _responseDuration;
	unsigned long long _responseSize;
	unsigned long long _sessionID;
	unsigned long long _startTime;
	unsigned long long _type;
	NSString* _requestUUID;
	NSString* _respondingPOP;
	NSString* _url;
	SCD_Struct_NT29 _has;

}

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
@property (assign,nonatomic) unsigned long long cacheState;                    //@synthesize cacheState=_cacheState - In the implementation block
@property (assign,nonatomic) BOOL hasHttpStatusCode; 
@property (assign,nonatomic) unsigned long long httpStatusCode;                //@synthesize httpStatusCode=_httpStatusCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned long long errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestUUID; 
@property (nonatomic,retain) NSString * requestUUID;                           //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasRespondingPOP; 
@property (nonatomic,retain) NSString * respondingPOP;                         //@synthesize respondingPOP=_respondingPOP - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
-(unsigned long long)endTime;
-(BOOL)isSuccess;
-(unsigned long long)totalDuration;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)url;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned long long)sessionID;
-(unsigned long long)startTime;
-(void)setSessionID:(unsigned long long)arg1 ;
-(void)setStartTime:(unsigned long long)arg1 ;
-(unsigned long long)errorCode;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(NSString *)requestUUID;
-(void)setRequestUUID:(NSString *)arg1 ;
-(BOOL)hasUrl;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(void)setErrorCode:(unsigned long long)arg1 ;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned long long)responseSize;
-(void)setResponseSize:(unsigned long long)arg1 ;
-(unsigned long long)httpStatusCode;
-(unsigned long long)dnsDuration;
-(unsigned long long)connectDuration;
-(unsigned long long)requestDuration;
-(unsigned long long)responseDuration;
-(void)setDnsDuration:(unsigned long long)arg1 ;
-(void)setConnectDuration:(unsigned long long)arg1 ;
-(void)setRequestDuration:(unsigned long long)arg1 ;
-(void)setResponseDuration:(unsigned long long)arg1 ;
-(void)setCacheState:(unsigned long long)arg1 ;
-(void)setHttpStatusCode:(unsigned long long)arg1 ;
-(void)setRespondingPOP:(NSString *)arg1 ;
-(NSString *)respondingPOP;
-(unsigned long long)cacheState;
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
-(BOOL)hasRequestUUID;
-(BOOL)hasRespondingPOP;
@end

