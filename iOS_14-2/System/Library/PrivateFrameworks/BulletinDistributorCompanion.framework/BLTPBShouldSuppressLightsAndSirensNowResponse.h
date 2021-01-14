/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BLTPBShouldSuppressLightsAndSirensNowResponse : PBCodable <NSCopying> {

	BOOL _shouldSuppress;
	SCD_Struct_BL1 _has;

}

@property (assign,nonatomic) BOOL hasShouldSuppress; 
@property (assign,nonatomic) BOOL shouldSuppress;                 //@synthesize shouldSuppress=_shouldSuppress - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setShouldSuppress:(BOOL)arg1 ;
-(void)setHasShouldSuppress:(BOOL)arg1 ;
-(BOOL)hasShouldSuppress;
-(BOOL)shouldSuppress;
@end

