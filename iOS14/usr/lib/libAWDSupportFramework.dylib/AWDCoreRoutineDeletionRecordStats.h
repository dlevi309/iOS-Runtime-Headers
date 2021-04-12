/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineDeletionRecordStats : PBCodable <NSCopying> {

	unsigned _ageInDays;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasAgeInDays; 
@property (assign,nonatomic) unsigned ageInDays;              //@synthesize ageInDays=_ageInDays - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAgeInDays:(unsigned)arg1 ;
-(void)setHasAgeInDays:(BOOL)arg1 ;
-(BOOL)hasAgeInDays;
-(unsigned)ageInDays;
@end

