/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface BLTPBSectionBulletinList : PBCodable <NSCopying> {

	NSMutableArray* _bulletinIdentifiers;
	NSString* _sectionID;

}

@property (nonatomic,retain) NSString * sectionID;                              //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * bulletinIdentifiers;              //@synthesize bulletinIdentifiers=_bulletinIdentifiers - In the implementation block
+(Class)bulletinIdentifierType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(void)addBulletinIdentifier:(id)arg1 ;
-(unsigned long long)bulletinIdentifiersCount;
-(void)clearBulletinIdentifiers;
-(id)bulletinIdentifierAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)bulletinIdentifiers;
-(void)setBulletinIdentifiers:(NSMutableArray *)arg1 ;
@end

