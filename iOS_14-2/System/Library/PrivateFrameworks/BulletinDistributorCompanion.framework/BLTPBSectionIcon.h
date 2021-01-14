/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BLTPBSectionIcon : PBCodable <NSCopying> {

	NSMutableArray* _variants;

}

@property (nonatomic,retain) NSMutableArray * variants;              //@synthesize variants=_variants - In the implementation block
+(Class)variantType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)variants;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setVariants:(NSMutableArray *)arg1 ;
-(unsigned long long)variantsCount;
-(void)clearVariants;
-(unsigned long long)hash;
-(void)addVariant:(id)arg1 ;
-(id)variantAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

