/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasReason;
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

