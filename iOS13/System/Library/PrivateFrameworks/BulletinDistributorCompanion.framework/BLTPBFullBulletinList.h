/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)sectionBulletinLists;
-(void)addSectionBulletinList:(id)arg1 ;
-(unsigned long long)sectionBulletinListsCount;
-(void)clearSectionBulletinLists;
-(id)sectionBulletinListAtIndex:(unsigned long long)arg1 ;
-(void)setSectionBulletinLists:(NSMutableArray *)arg1 ;
@end

