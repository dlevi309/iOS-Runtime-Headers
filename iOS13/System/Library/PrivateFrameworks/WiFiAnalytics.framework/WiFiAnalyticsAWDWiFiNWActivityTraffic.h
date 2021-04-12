/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityTraffic : PBCodable <NSCopying> {

	unsigned long long _value;
	int _traffic;
	SCD_Struct_Wi9 _has;

}

@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned long long value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasTraffic; 
@property (assign,nonatomic) int traffic;                           //@synthesize traffic=_traffic - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)value;
-(void)setValue:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasValue;
-(void)setHasValue:(BOOL)arg1 ;
-(int)traffic;
-(BOOL)hasTraffic;
-(void)setTraffic:(int)arg1 ;
-(void)setHasTraffic:(BOOL)arg1 ;
-(id)trafficAsString:(int)arg1 ;
-(int)StringAsTraffic:(id)arg1 ;
@end

