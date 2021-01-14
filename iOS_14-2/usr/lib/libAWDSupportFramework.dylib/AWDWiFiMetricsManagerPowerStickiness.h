/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerPowerStickiness : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _enabled;
	unsigned _stickiness;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) unsigned enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL hasStickiness; 
@property (assign,nonatomic) unsigned stickiness;                       //@synthesize stickiness=_stickiness - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned)enabled;
-(BOOL)hasEnabled;
-(void)setHasEnabled:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)setEnabled:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStickiness:(unsigned)arg1 ;
-(void)setHasStickiness:(BOOL)arg1 ;
-(BOOL)hasStickiness;
-(unsigned)stickiness;
@end

