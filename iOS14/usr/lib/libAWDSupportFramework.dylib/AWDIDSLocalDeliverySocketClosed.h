/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSLocalDeliverySocketClosed : PBCodable <NSCopying> {

	unsigned long long _bytesReceived;
	unsigned long long _bytesSent;
	unsigned long long _closeError;
	unsigned long long _isToDefaultPairedDevice;
	unsigned long long _packetsReceived;
	unsigned long long _packetsSent;
	unsigned long long _priority;
	unsigned long long _socketError;
	unsigned long long _timestamp;
	NSString* _guid;
	NSString* _service;
	NSString* _streamName;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                                      //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasIsToDefaultPairedDevice; 
@property (assign,nonatomic) unsigned long long isToDefaultPairedDevice;              //@synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice - In the implementation block
@property (assign,nonatomic) BOOL hasCloseError; 
@property (assign,nonatomic) unsigned long long closeError;                           //@synthesize closeError=_closeError - In the implementation block
@property (assign,nonatomic) BOOL hasSocketError; 
@property (assign,nonatomic) unsigned long long socketError;                          //@synthesize socketError=_socketError - In the implementation block
@property (assign,nonatomic) BOOL hasBytesSent; 
@property (assign,nonatomic) unsigned long long bytesSent;                            //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsSent; 
@property (assign,nonatomic) unsigned long long packetsSent;                          //@synthesize packetsSent=_packetsSent - In the implementation block
@property (assign,nonatomic) BOOL hasBytesReceived; 
@property (assign,nonatomic) unsigned long long bytesReceived;                        //@synthesize bytesReceived=_bytesReceived - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsReceived; 
@property (assign,nonatomic) unsigned long long packetsReceived;                      //@synthesize packetsReceived=_packetsReceived - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned long long priority;                             //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL hasStreamName; 
@property (nonatomic,retain) NSString * streamName;                                   //@synthesize streamName=_streamName - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                                         //@synthesize guid=_guid - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)streamName;
-(NSString *)guid;
-(unsigned long long)timestamp;
-(void)setBytesSent:(unsigned long long)arg1 ;
-(void)setHasPriority:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasBytesSent:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasService;
-(BOOL)hasBytesSent;
-(void)setBytesReceived:(unsigned long long)arg1 ;
-(void)setHasBytesReceived:(BOOL)arg1 ;
-(BOOL)hasBytesReceived;
-(unsigned long long)bytesReceived;
-(void)setIsToDefaultPairedDevice:(unsigned long long)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)closeError;
-(BOOL)hasTimestamp;
-(unsigned long long)packetsSent;
-(unsigned long long)packetsReceived;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPriority;
-(void)setStreamName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(unsigned long long)bytesSent;
-(void)setGuid:(NSString *)arg1 ;
-(unsigned long long)priority;
-(unsigned long long)socketError;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)isToDefaultPairedDevice;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)service;
-(void)dealloc;
-(void)setPacketsSent:(unsigned long long)arg1 ;
-(void)setHasIsToDefaultPairedDevice:(BOOL)arg1 ;
-(BOOL)hasIsToDefaultPairedDevice;
-(void)setCloseError:(unsigned long long)arg1 ;
-(void)setHasCloseError:(BOOL)arg1 ;
-(BOOL)hasCloseError;
-(void)setSocketError:(unsigned long long)arg1 ;
-(void)setHasSocketError:(BOOL)arg1 ;
-(BOOL)hasSocketError;
-(void)setHasPacketsSent:(BOOL)arg1 ;
-(BOOL)hasPacketsSent;
-(void)setPacketsReceived:(unsigned long long)arg1 ;
-(void)setHasPacketsReceived:(BOOL)arg1 ;
-(BOOL)hasPacketsReceived;
-(BOOL)hasStreamName;
@end

