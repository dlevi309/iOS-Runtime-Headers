/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSClientProcessReceivedMessage : PBCodable <NSCopying> {

	unsigned long long _deltaTime;
	unsigned long long _payloadSize;
	unsigned long long _priority;
	unsigned long long _qos;
	unsigned long long _threadPriority;
	unsigned long long _timestamp;
	NSString* _service;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                             //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned long long payloadSize;                 //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) BOOL hasQos; 
@property (assign,nonatomic) unsigned long long qos;                         //@synthesize qos=_qos - In the implementation block
@property (assign,nonatomic) BOOL hasThreadPriority; 
@property (assign,nonatomic) unsigned long long threadPriority;              //@synthesize threadPriority=_threadPriority - In the implementation block
@property (assign,nonatomic) BOOL hasDeltaTime; 
@property (assign,nonatomic) unsigned long long deltaTime;                   //@synthesize deltaTime=_deltaTime - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned long long priority;                    //@synthesize priority=_priority - In the implementation block
-(void)setQos:(unsigned long long)arg1 ;
-(unsigned long long)qos;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setHasPriority:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasQos;
-(unsigned long long)payloadSize;
-(id)description;
-(BOOL)hasService;
-(unsigned long long)threadPriority;
-(void)setThreadPriority:(unsigned long long)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPriority;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)service;
-(void)dealloc;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(void)setHasQos:(BOOL)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(unsigned long long)deltaTime;
-(void)setDeltaTime:(unsigned long long)arg1 ;
-(void)setHasThreadPriority:(BOOL)arg1 ;
-(BOOL)hasThreadPriority;
-(void)setHasDeltaTime:(BOOL)arg1 ;
-(BOOL)hasDeltaTime;
@end

