/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
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
-(BOOL)hasPriority;
-(void)setHasPriority:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(BOOL)hasGuid;
-(unsigned long long)isToDefaultPairedDevice;
-(void)setIsToDefaultPairedDevice:(unsigned long long)arg1 ;
-(void)setHasIsToDefaultPairedDevice:(BOOL)arg1 ;
-(BOOL)hasIsToDefaultPairedDevice;
-(void)setSocketError:(unsigned long long)arg1 ;
-(void)setHasSocketError:(BOOL)arg1 ;
-(BOOL)hasSocketError;
-(BOOL)hasStreamName;
-(unsigned long long)socketError;
-(void)setOpenError:(unsigned long long)arg1 ;
-(void)setHasOpenError:(BOOL)arg1 ;
-(BOOL)hasOpenError;
-(unsigned long long)openError;
@end

