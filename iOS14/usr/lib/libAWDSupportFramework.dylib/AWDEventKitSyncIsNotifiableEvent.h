/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDEventKitSyncIsNotifiableEvent : PBCodable <NSCopying> {

	unsigned long long _deltaProcessingTime;
	unsigned long long _deltaTransitTime;
	unsigned long long _timestamp;
	NSString* _reason;
	BOOL _willTriggerNotification;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDeltaTransitTime; 
@property (assign,nonatomic) unsigned long long deltaTransitTime;                 //@synthesize deltaTransitTime=_deltaTransitTime - In the implementation block
@property (assign,nonatomic) BOOL hasDeltaProcessingTime; 
@property (assign,nonatomic) unsigned long long deltaProcessingTime;              //@synthesize deltaProcessingTime=_deltaProcessingTime - In the implementation block
@property (assign,nonatomic) BOOL hasWillTriggerNotification; 
@property (assign,nonatomic) BOOL willTriggerNotification;                        //@synthesize willTriggerNotification=_willTriggerNotification - In the implementation block
@property (nonatomic,readonly) BOOL hasReason; 
@property (nonatomic,retain) NSString * reason;                                   //@synthesize reason=_reason - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasReason;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)reason;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setDeltaTransitTime:(unsigned long long)arg1 ;
-(void)setHasDeltaTransitTime:(BOOL)arg1 ;
-(BOOL)hasDeltaTransitTime;
-(void)setDeltaProcessingTime:(unsigned long long)arg1 ;
-(void)setHasDeltaProcessingTime:(BOOL)arg1 ;
-(BOOL)hasDeltaProcessingTime;
-(void)setWillTriggerNotification:(BOOL)arg1 ;
-(void)setHasWillTriggerNotification:(BOOL)arg1 ;
-(BOOL)hasWillTriggerNotification;
-(unsigned long long)deltaTransitTime;
-(unsigned long long)deltaProcessingTime;
-(BOOL)willTriggerNotification;
@end

