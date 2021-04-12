/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSQuickRelay : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	unsigned _eventSubType;
	unsigned _eventType;
	unsigned _interfaceType;
	unsigned _isInitiator;
	unsigned _protocolVersion;
	unsigned _providerType;
	unsigned _resultCode;
	unsigned _retryCount;
	NSString* _serviceName;
	unsigned _skeEnabled;
	NSString* _subServiceName;
	unsigned _transportType;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                        //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasEventSubType; 
@property (assign,nonatomic) unsigned eventSubType;                     //@synthesize eventSubType=_eventSubType - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasResultCode; 
@property (assign,nonatomic) unsigned resultCode;                       //@synthesize resultCode=_resultCode - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                    //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceType; 
@property (assign,nonatomic) unsigned interfaceType;                    //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasSkeEnabled; 
@property (assign,nonatomic) unsigned skeEnabled;                       //@synthesize skeEnabled=_skeEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsInitiator; 
@property (assign,nonatomic) unsigned isInitiator;                      //@synthesize isInitiator=_isInitiator - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned protocolVersion;                  //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasRetryCount; 
@property (assign,nonatomic) unsigned retryCount;                       //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                    //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasSubServiceName; 
@property (nonatomic,retain) NSString * subServiceName;                 //@synthesize subServiceName=_subServiceName - In the implementation block
@property (assign,nonatomic) BOOL hasProviderType; 
@property (assign,nonatomic) unsigned providerType;                     //@synthesize providerType=_providerType - In the implementation block
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(BOOL)hasTransportType;
-(void)setEventType:(unsigned)arg1 ;
-(unsigned)eventType;
-(BOOL)hasDuration;
-(unsigned)interfaceType;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setRetryCount:(unsigned)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned)retryCount;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(unsigned)resultCode;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(unsigned)skeEnabled;
-(unsigned long long)timestamp;
-(void)setIsInitiator:(unsigned)arg1 ;
-(void)setTransportType:(unsigned)arg1 ;
-(BOOL)hasServiceName;
-(void)setProviderType:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)protocolVersion;
-(unsigned)transportType;
-(void)setEventSubType:(unsigned)arg1 ;
-(void)setResultCode:(unsigned)arg1 ;
-(void)setSkeEnabled:(unsigned)arg1 ;
-(id)description;
-(unsigned)isInitiator;
-(unsigned)providerType;
-(void)setHasRetryCount:(BOOL)arg1 ;
-(BOOL)hasRetryCount;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)serviceName;
-(unsigned long long)hash;
-(void)setHasInterfaceType:(BOOL)arg1 ;
-(NSString *)subServiceName;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setInterfaceType:(unsigned)arg1 ;
-(BOOL)hasProtocolVersion;
-(unsigned long long)duration;
-(BOOL)hasInterfaceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setSubServiceName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasResultCode:(BOOL)arg1 ;
-(BOOL)hasResultCode;
-(void)setHasIsInitiator:(BOOL)arg1 ;
-(BOOL)hasIsInitiator;
-(void)setHasEventSubType:(BOOL)arg1 ;
-(BOOL)hasEventSubType;
-(void)setHasSkeEnabled:(BOOL)arg1 ;
-(BOOL)hasSkeEnabled;
-(BOOL)hasSubServiceName;
-(void)setHasProviderType:(BOOL)arg1 ;
-(BOOL)hasProviderType;
-(unsigned)eventSubType;
@end

