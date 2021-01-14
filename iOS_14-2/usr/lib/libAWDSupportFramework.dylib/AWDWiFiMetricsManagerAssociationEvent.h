/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDWiFiMetricsManagerEvent;

@interface AWDWiFiMetricsManagerAssociationEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDWiFiMetricsManagerEvent* _eventInfo;
	int _eventType;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasEventInfo; 
@property (nonatomic,retain) AWDWiFiMetricsManagerEvent * eventInfo;              //@synthesize eventInfo=_eventInfo - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                       //@synthesize eventType=_eventType - In the implementation block
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(int)StringAsEventType:(id)arg1 ;
-(id)eventTypeAsString:(int)arg1 ;
-(void)setEventType:(int)arg1 ;
-(int)eventType;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasEventInfo;
-(void)setEventInfo:(AWDWiFiMetricsManagerEvent *)arg1 ;
-(id)description;
-(AWDWiFiMetricsManagerEvent *)eventInfo;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

