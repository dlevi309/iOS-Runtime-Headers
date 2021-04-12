/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)enabled;
-(void)setEnabled:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasEnabled:(BOOL)arg1 ;
-(BOOL)hasEnabled;
-(void)setStickiness:(unsigned)arg1 ;
-(void)setHasStickiness:(BOOL)arg1 ;
-(BOOL)hasStickiness;
-(unsigned)stickiness;
@end

