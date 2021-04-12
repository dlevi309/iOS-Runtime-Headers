/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setShouldSuppress:(BOOL)arg1 ;
-(void)setHasShouldSuppress:(BOOL)arg1 ;
-(BOOL)hasShouldSuppress;
-(BOOL)shouldSuppress;
@end

