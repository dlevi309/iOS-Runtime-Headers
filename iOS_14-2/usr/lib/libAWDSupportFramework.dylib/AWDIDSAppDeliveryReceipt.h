/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSAppDeliveryReceipt : PBCodable <NSCopying> {

	unsigned long long _isToDefaultPairedDevice;
	unsigned long long _messageSize;
	unsigned long long _priority;
	unsigned long long _rTT;
	unsigned long long _timestamp;
	NSString* _service;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                                      //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasIsToDefaultPairedDevice; 
@property (assign,nonatomic) unsigned long long isToDefaultPairedDevice;              //@synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice - In the implementation block
@property (assign,nonatomic) BOOL hasMessageSize; 
@property (assign,nonatomic) unsigned long long messageSize;                          //@synthesize messageSize=_messageSize - In the implementation block
@property (assign,nonatomic) BOOL hasRTT; 
@property (assign,nonatomic) unsigned long long rTT;                                  //@synthesize rTT=_rTT - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned long long priority;                             //@synthesize priority=_priority - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)rTT;
-(unsigned long long)timestamp;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(void)setHasPriority:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasService;
-(BOOL)hasRTT;
-(void)setIsToDefaultPairedDevice:(unsigned long long)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(void)setHasMessageSize:(BOOL)arg1 ;
-(BOOL)hasMessageSize;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPriority;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)isToDefaultPairedDevice;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)messageSize;
-(void)setPriority:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)service;
-(void)dealloc;
-(void)setHasIsToDefaultPairedDevice:(BOOL)arg1 ;
-(BOOL)hasIsToDefaultPairedDevice;
-(void)setRTT:(unsigned long long)arg1 ;
-(void)setHasRTT:(BOOL)arg1 ;
@end

