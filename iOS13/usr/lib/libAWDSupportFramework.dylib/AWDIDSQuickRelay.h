/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(NSString *)serviceName;
-(unsigned)isInitiator;
-(void)setIsInitiator:(unsigned)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)transportType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)eventType;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned)retryCount;
-(void)setRetryCount:(unsigned)arg1 ;
-(void)setTransportType:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setInterfaceType:(unsigned)arg1 ;
-(void)setHasInterfaceType:(BOOL)arg1 ;
-(BOOL)hasInterfaceType;
-(unsigned)interfaceType;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasRetryCount:(BOOL)arg1 ;
-(BOOL)hasRetryCount;
-(unsigned)protocolVersion;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasProtocolVersion;
-(void)setEventType:(unsigned)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setEventSubType:(unsigned)arg1 ;
-(void)setResultCode:(unsigned)arg1 ;
-(void)setProviderType:(unsigned)arg1 ;
-(void)setSkeEnabled:(unsigned)arg1 ;
-(void)setSubServiceName:(NSString *)arg1 ;
-(BOOL)hasServiceName;
-(unsigned)providerType;
-(unsigned)resultCode;
-(void)setHasResultCode:(BOOL)arg1 ;
-(BOOL)hasResultCode;
-(NSString *)subServiceName;
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
-(unsigned)skeEnabled;
@end

