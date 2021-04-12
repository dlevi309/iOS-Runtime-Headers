/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAgeInDays:(unsigned)arg1 ;
-(void)setHasAgeInDays:(BOOL)arg1 ;
-(BOOL)hasAgeInDays;
-(unsigned)ageInDays;
@end

