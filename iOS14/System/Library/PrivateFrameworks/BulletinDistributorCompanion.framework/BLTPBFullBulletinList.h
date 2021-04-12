/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BLTPBFullBulletinList : PBCodable <NSCopying> {

	NSMutableArray* _sectionBulletinLists;

}

@property (nonatomic,retain) NSMutableArray * sectionBulletinLists;              //@synthesize sectionBulletinLists=_sectionBulletinLists - In the implementation block
+(Class)sectionBulletinListType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)sectionBulletinLists;
-(void)addSectionBulletinList:(id)arg1 ;
-(unsigned long long)sectionBulletinListsCount;
-(void)clearSectionBulletinLists;
-(id)sectionBulletinListAtIndex:(unsigned long long)arg1 ;
-(void)setSectionBulletinLists:(NSMutableArray *)arg1 ;
@end

