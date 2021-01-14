/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSLocalDeliverySocketOpened : PBCodable <NSCopying> {

	unsigned long long _isToDefaultPairedDevice;
	unsigned long long _openError;
	unsigned long long _priority;
	unsigned long long _socketError;
	unsigned long long _timestamp;
	NSString* _guid;
	NSString* _service;
	NSString* _streamName;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                                      //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasIsToDefaultPairedDevice; 
@property (assign,nonatomic) unsigned long long isToDefaultPairedDevice;              //@synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice - In the implementation block
@property (assign,nonatomic) BOOL hasOpenError; 
@property (assign,nonatomic) unsigned long long openError;                            //@synthesize openError=_openError - In the implementation block
@property (assign,nonatomic) BOOL hasSocketError; 
@property (assign,nonatomic) unsigned long long socketError;                          //@synthesize socketError=_socketError - In the implementation block
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
-(void)setHasPriority:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasService;
-(void)setIsToDefaultPairedDevice:(unsigned long long)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPriority;
-(void)setStreamName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(unsigned long long)priority;
-(unsigned long long)socketError;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)isToDefaultPairedDevice;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)openError;
-(void)setPriority:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)service;
-(void)dealloc;
-(void)setHasIsToDefaultPairedDevice:(BOOL)arg1 ;
-(BOOL)hasIsToDefaultPairedDevice;
-(void)setSocketError:(unsigned long long)arg1 ;
-(void)setHasSocketError:(BOOL)arg1 ;
-(BOOL)hasSocketError;
-(BOOL)hasStreamName;
-(void)setOpenError:(unsigned long long)arg1 ;
-(void)setHasOpenError:(BOOL)arg1 ;
-(BOOL)hasOpenError;
@end

