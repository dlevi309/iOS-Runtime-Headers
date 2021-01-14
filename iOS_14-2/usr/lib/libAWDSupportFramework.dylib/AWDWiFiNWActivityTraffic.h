/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiNWActivityTraffic : PBCodable <NSCopying> {

	unsigned long long _value;
	int _traffic;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned long long value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasTraffic; 
@property (assign,nonatomic) int traffic;                           //@synthesize traffic=_traffic - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(int)traffic;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(unsigned long long)arg1 ;
-(id)description;
-(void)setTraffic:(int)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(BOOL)hasTraffic;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasTraffic:(BOOL)arg1 ;
-(id)trafficAsString:(int)arg1 ;
-(int)StringAsTraffic:(id)arg1 ;
@end

