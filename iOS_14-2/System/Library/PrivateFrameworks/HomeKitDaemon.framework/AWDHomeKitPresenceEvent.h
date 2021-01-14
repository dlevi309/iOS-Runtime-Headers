/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitPresenceEvent : PBCodable <NSCopying> {

	int _presenceEventGranularity;
	int _presenceEventType;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasPresenceEventType; 
@property (assign,nonatomic) int presenceEventType;                         //@synthesize presenceEventType=_presenceEventType - In the implementation block
@property (assign,nonatomic) BOOL hasPresenceEventGranularity; 
@property (assign,nonatomic) int presenceEventGranularity;                  //@synthesize presenceEventGranularity=_presenceEventGranularity - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(int)presenceEventType;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPresenceEventType:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasPresenceEventType:(BOOL)arg1 ;
-(BOOL)hasPresenceEventType;
-(id)presenceEventTypeAsString:(int)arg1 ;
-(int)StringAsPresenceEventType:(id)arg1 ;
-(int)presenceEventGranularity;
-(void)setPresenceEventGranularity:(int)arg1 ;
-(void)setHasPresenceEventGranularity:(BOOL)arg1 ;
-(BOOL)hasPresenceEventGranularity;
-(id)presenceEventGranularityAsString:(int)arg1 ;
-(int)StringAsPresenceEventGranularity:(id)arg1 ;
@end

