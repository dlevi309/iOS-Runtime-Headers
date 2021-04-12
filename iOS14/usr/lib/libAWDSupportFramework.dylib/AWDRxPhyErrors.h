/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDRxPhyErrors : PBCodable <NSCopying> {

	unsigned long long _bphyBadplcp;
	unsigned long long _bphyRxcrsglitch;
	unsigned long long _rfdisable;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasRfdisable; 
@property (assign,nonatomic) unsigned long long rfdisable;                    //@synthesize rfdisable=_rfdisable - In the implementation block
@property (assign,nonatomic) BOOL hasBphyRxcrsglitch; 
@property (assign,nonatomic) unsigned long long bphyRxcrsglitch;              //@synthesize bphyRxcrsglitch=_bphyRxcrsglitch - In the implementation block
@property (assign,nonatomic) BOOL hasBphyBadplcp; 
@property (assign,nonatomic) unsigned long long bphyBadplcp;                  //@synthesize bphyBadplcp=_bphyBadplcp - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRfdisable:(unsigned long long)arg1 ;
-(void)setHasRfdisable:(BOOL)arg1 ;
-(BOOL)hasRfdisable;
-(void)setBphyRxcrsglitch:(unsigned long long)arg1 ;
-(void)setHasBphyRxcrsglitch:(BOOL)arg1 ;
-(BOOL)hasBphyRxcrsglitch;
-(void)setBphyBadplcp:(unsigned long long)arg1 ;
-(void)setHasBphyBadplcp:(BOOL)arg1 ;
-(BOOL)hasBphyBadplcp;
-(unsigned long long)rfdisable;
-(unsigned long long)bphyRxcrsglitch;
-(unsigned long long)bphyBadplcp;
@end

