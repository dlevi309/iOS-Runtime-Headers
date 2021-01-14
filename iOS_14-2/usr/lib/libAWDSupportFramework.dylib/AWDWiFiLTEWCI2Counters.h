/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWiFiLTEWCI2Counters : PBCodable <NSCopying> {

	unsigned long long _lteTxPowerLimitCount;
	unsigned long long _lteTxPowerLimitTimeInMS;
	unsigned long long _timeSharingWLANIntervalCount;
	unsigned long long _timeSharingWLANTimeInMS;
	unsigned long long _timestamp;
	unsigned long long _type4DueToTimerExpiryCount;
	unsigned long long _type4HonouredCount;
	unsigned long long _type4HonouredTimeInMS;
	unsigned long long _wlanProtectionFramesDueToLTECoexCount;
	unsigned long long _wlanRxPriCount;
	unsigned long long _wlanRxPriTimeInMS;
	NSMutableArray* _wci2Counters;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWlanRxPriTimeInMS; 
@property (assign,nonatomic) unsigned long long wlanRxPriTimeInMS;                                  //@synthesize wlanRxPriTimeInMS=_wlanRxPriTimeInMS - In the implementation block
@property (assign,nonatomic) BOOL hasWlanRxPriCount; 
@property (assign,nonatomic) unsigned long long wlanRxPriCount;                                     //@synthesize wlanRxPriCount=_wlanRxPriCount - In the implementation block
@property (assign,nonatomic) BOOL hasLteTxPowerLimitTimeInMS; 
@property (assign,nonatomic) unsigned long long lteTxPowerLimitTimeInMS;                            //@synthesize lteTxPowerLimitTimeInMS=_lteTxPowerLimitTimeInMS - In the implementation block
@property (assign,nonatomic) BOOL hasLteTxPowerLimitCount; 
@property (assign,nonatomic) unsigned long long lteTxPowerLimitCount;                               //@synthesize lteTxPowerLimitCount=_lteTxPowerLimitCount - In the implementation block
@property (assign,nonatomic) BOOL hasType4HonouredTimeInMS; 
@property (assign,nonatomic) unsigned long long type4HonouredTimeInMS;                              //@synthesize type4HonouredTimeInMS=_type4HonouredTimeInMS - In the implementation block
@property (assign,nonatomic) BOOL hasType4HonouredCount; 
@property (assign,nonatomic) unsigned long long type4HonouredCount;                                 //@synthesize type4HonouredCount=_type4HonouredCount - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSharingWLANTimeInMS; 
@property (assign,nonatomic) unsigned long long timeSharingWLANTimeInMS;                            //@synthesize timeSharingWLANTimeInMS=_timeSharingWLANTimeInMS - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSharingWLANIntervalCount; 
@property (assign,nonatomic) unsigned long long timeSharingWLANIntervalCount;                       //@synthesize timeSharingWLANIntervalCount=_timeSharingWLANIntervalCount - In the implementation block
@property (assign,nonatomic) BOOL hasWlanProtectionFramesDueToLTECoexCount; 
@property (assign,nonatomic) unsigned long long wlanProtectionFramesDueToLTECoexCount;              //@synthesize wlanProtectionFramesDueToLTECoexCount=_wlanProtectionFramesDueToLTECoexCount - In the implementation block
@property (assign,nonatomic) BOOL hasType4DueToTimerExpiryCount; 
@property (assign,nonatomic) unsigned long long type4DueToTimerExpiryCount;                         //@synthesize type4DueToTimerExpiryCount=_type4DueToTimerExpiryCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * wci2Counters;                                         //@synthesize wci2Counters=_wci2Counters - In the implementation block
+(Class)wci2CountersType;
-(id)dictionaryRepresentation;
-(void)clearWci2Counters;
-(void)setLteTxPowerLimitTimeInMS:(unsigned long long)arg1 ;
-(void)addWci2Counters:(id)arg1 ;
-(unsigned long long)timeSharingWLANTimeInMS;
-(BOOL)hasWlanProtectionFramesDueToLTECoexCount;
-(BOOL)hasLteTxPowerLimitTimeInMS;
-(void)setHasTimeSharingWLANTimeInMS:(BOOL)arg1 ;
-(void)setWlanProtectionFramesDueToLTECoexCount:(unsigned long long)arg1 ;
-(void)setWlanRxPriCount:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(unsigned long long)type4DueToTimerExpiryCount;
-(unsigned long long)type4HonouredCount;
-(BOOL)hasLteTxPowerLimitCount;
-(void)setType4DueToTimerExpiryCount:(unsigned long long)arg1 ;
-(id)wci2CountersAtIndex:(unsigned long long)arg1 ;
-(void)setHasLteTxPowerLimitTimeInMS:(BOOL)arg1 ;
-(unsigned long long)lteTxPowerLimitTimeInMS;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTimeSharingWLANIntervalCount;
-(void)setHasTimeSharingWLANIntervalCount:(BOOL)arg1 ;
-(unsigned long long)type4HonouredTimeInMS;
-(void)setHasWlanRxPriTimeInMS:(BOOL)arg1 ;
-(void)setHasType4DueToTimerExpiryCount:(BOOL)arg1 ;
-(unsigned long long)timeSharingWLANIntervalCount;
-(unsigned long long)lteTxPowerLimitCount;
-(id)description;
-(void)setHasWlanRxPriCount:(BOOL)arg1 ;
-(void)setWlanRxPriTimeInMS:(unsigned long long)arg1 ;
-(unsigned long long)wci2CountersCount;
-(void)setWci2Counters:(NSMutableArray *)arg1 ;
-(void)setHasType4HonouredCount:(BOOL)arg1 ;
-(BOOL)hasTimeSharingWLANTimeInMS;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)wlanRxPriCount;
-(unsigned long long)wlanProtectionFramesDueToLTECoexCount;
-(BOOL)hasType4DueToTimerExpiryCount;
-(void)setLteTxPowerLimitCount:(unsigned long long)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasType4HonouredTimeInMS:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)wci2Counters;
-(void)setType4HonouredCount:(unsigned long long)arg1 ;
-(BOOL)hasType4HonouredTimeInMS;
-(BOOL)hasWlanRxPriCount;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasType4HonouredCount;
-(void)setTimeSharingWLANTimeInMS:(unsigned long long)arg1 ;
-(unsigned long long)wlanRxPriTimeInMS;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setTimeSharingWLANIntervalCount:(unsigned long long)arg1 ;
-(void)setType4HonouredTimeInMS:(unsigned long long)arg1 ;
-(BOOL)hasWlanRxPriTimeInMS;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasWlanProtectionFramesDueToLTECoexCount:(BOOL)arg1 ;
-(void)dealloc;
-(void)setHasLteTxPowerLimitCount:(BOOL)arg1 ;
@end

