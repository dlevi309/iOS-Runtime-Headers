/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitPresenceEvent : PBCodable <NSCopying> {

	int _presenceEventGranularity;
	int _presenceEventType;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasPresenceEventType; 
@property (assign,nonatomic) int presenceEventType;                         //@synthesize presenceEventType=_presenceEventType - In the implementation block
@property (assign,nonatomic) BOOL hasPresenceEventGranularity; 
@property (assign,nonatomic) int presenceEventGranularity;                  //@synthesize presenceEventGranularity=_presenceEventGranularity - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)presenceEventType;
-(void)setPresenceEventType:(int)arg1 ;
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

