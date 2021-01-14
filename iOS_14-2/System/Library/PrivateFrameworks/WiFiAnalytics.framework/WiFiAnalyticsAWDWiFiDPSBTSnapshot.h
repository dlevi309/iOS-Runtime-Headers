/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiDPSBTSnapshot : PBCodable <NSCopying> {

	unsigned long long _ts;
	unsigned _duration;
	unsigned _use;
	SCD_Struct_Wi9 _has;

}

@property (assign,nonatomic) BOOL hasTs; 
@property (assign,nonatomic) unsigned long long ts;              //@synthesize ts=_ts - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasUse; 
@property (assign,nonatomic) unsigned use;                       //@synthesize use=_use - In the implementation block
-(unsigned long long)ts;
-(unsigned)use;
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(BOOL)hasTs;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasUse;
-(id)description;
-(void)setTs:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUse:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasTs:(BOOL)arg1 ;
-(void)setHasUse:(BOOL)arg1 ;
@end

