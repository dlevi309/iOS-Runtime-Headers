/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSStreamingReport : PBCodable <NSCopying> {

	unsigned long long _bytesReceived;
	unsigned long long _bytesSent;
	unsigned long long _packetsReceived;
	unsigned long long _packetsSent;
	unsigned long long _priority;
	unsigned long long _samplingInterval;
	unsigned long long _timestamp;
	NSString* _guid;
	NSString* _service;
	NSString* _streamName;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                               //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL hasStreamName; 
@property (nonatomic,retain) NSString * streamName;                            //@synthesize streamName=_streamName - In the implementation block
@property (assign,nonatomic) BOOL hasSamplingInterval; 
@property (assign,nonatomic) unsigned long long samplingInterval;              //@synthesize samplingInterval=_samplingInterval - In the implementation block
@property (assign,nonatomic) BOOL hasBytesSent; 
@property (assign,nonatomic) unsigned long long bytesSent;                     //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsSent; 
@property (assign,nonatomic) unsigned long long packetsSent;                   //@synthesize packetsSent=_packetsSent - In the implementation block
@property (assign,nonatomic) BOOL hasBytesReceived; 
@property (assign,nonatomic) unsigned long long bytesReceived;                 //@synthesize bytesReceived=_bytesReceived - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsReceived; 
@property (assign,nonatomic) unsigned long long packetsReceived;               //@synthesize packetsReceived=_packetsReceived - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned long long priority;                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)setSamplingInterval:(unsigned long long)arg1 ;
-(unsigned long long)samplingInterval;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)streamName;
-(void)setStreamName:(NSString *)arg1 ;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasService;
-(void)setBytesSent:(unsigned long long)arg1 ;
-(void)setHasBytesSent:(BOOL)arg1 ;
-(BOOL)hasBytesSent;
-(void)setBytesReceived:(unsigned long long)arg1 ;
-(void)setHasBytesReceived:(BOOL)arg1 ;
-(BOOL)hasBytesReceived;
-(unsigned long long)bytesSent;
-(unsigned long long)bytesReceived;
-(BOOL)hasPriority;
-(void)setHasPriority:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(BOOL)hasGuid;
-(unsigned long long)packetsSent;
-(void)setPacketsSent:(unsigned long long)arg1 ;
-(unsigned long long)packetsReceived;
-(void)setHasPacketsSent:(BOOL)arg1 ;
-(BOOL)hasPacketsSent;
-(void)setPacketsReceived:(unsigned long long)arg1 ;
-(void)setHasPacketsReceived:(BOOL)arg1 ;
-(BOOL)hasPacketsReceived;
-(BOOL)hasStreamName;
-(void)setHasSamplingInterval:(BOOL)arg1 ;
-(BOOL)hasSamplingInterval;
@end

