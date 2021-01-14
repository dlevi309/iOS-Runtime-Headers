/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDPowerStateResidencyAndWeight : PBCodable <NSCopying> {

	unsigned _residency;
	unsigned _weight;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasResidency; 
@property (assign,nonatomic) unsigned residency;              //@synthesize residency=_residency - In the implementation block
@property (assign,nonatomic) BOOL hasWeight; 
@property (assign,nonatomic) unsigned weight;                 //@synthesize weight=_weight - In the implementation block
-(id)dictionaryRepresentation;
-(void)setWeight:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)weight;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasWeight;
-(void)setHasWeight:(BOOL)arg1 ;
-(void)setResidency:(unsigned)arg1 ;
-(void)setHasResidency:(BOOL)arg1 ;
-(BOOL)hasResidency;
-(unsigned)residency;
@end

