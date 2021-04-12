/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)variants;
-(void)setVariants:(NSMutableArray *)arg1 ;
-(unsigned long long)variantsCount;
-(void)clearVariants;
-(void)addVariant:(id)arg1 ;
-(id)variantAtIndex:(unsigned long long)arg1 ;
@end

