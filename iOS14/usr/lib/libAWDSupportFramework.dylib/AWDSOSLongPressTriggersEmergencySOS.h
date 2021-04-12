/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSOSLongPressTriggersEmergencySOS : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	BOOL _longPressTriggersEmergencySOS;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLongPressTriggersEmergencySOS; 
@property (assign,nonatomic) BOOL longPressTriggersEmergencySOS;                 //@synthesize longPressTriggersEmergencySOS=_longPressTriggersEmergencySOS - In the implementation block
-(id)dictionaryRepresentation;
-(void)setLongPressTriggersEmergencySOS:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)longPressTriggersEmergencySOS;
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
-(void)setHasLongPressTriggersEmergencySOS:(BOOL)arg1 ;
-(BOOL)hasLongPressTriggersEmergencySOS;
@end

