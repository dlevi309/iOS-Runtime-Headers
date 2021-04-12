/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AW11 _has;

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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)threadPriority;
-(void)setThreadPriority:(unsigned long long)arg1 ;
-(unsigned long long)qos;
-(unsigned long long)timestamp;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)service;
-(void)setQos:(unsigned long long)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasService;
-(BOOL)hasPriority;
-(void)setHasPriority:(BOOL)arg1 ;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(unsigned long long)payloadSize;
-(unsigned long long)deltaTime;
-(void)setDeltaTime:(unsigned long long)arg1 ;
-(void)setHasQos:(BOOL)arg1 ;
-(BOOL)hasQos;
-(void)setHasThreadPriority:(BOOL)arg1 ;
-(BOOL)hasThreadPriority;
-(void)setHasDeltaTime:(BOOL)arg1 ;
-(BOOL)hasDeltaTime;
@end

