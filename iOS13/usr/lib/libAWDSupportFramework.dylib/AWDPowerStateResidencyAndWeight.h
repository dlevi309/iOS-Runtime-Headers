/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setWeight:(unsigned)arg1 ;
-(unsigned)weight;
-(void)setHasWeight:(BOOL)arg1 ;
-(BOOL)hasWeight;
-(void)setResidency:(unsigned)arg1 ;
-(void)setHasResidency:(BOOL)arg1 ;
-(BOOL)hasResidency;
-(unsigned)residency;
@end

