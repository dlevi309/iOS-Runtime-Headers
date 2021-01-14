/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setSectionID:(NSString *)arg1 ;
-(NSString *)sectionID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addBulletinIdentifier:(id)arg1 ;
-(unsigned long long)bulletinIdentifiersCount;
-(void)clearBulletinIdentifiers;
-(id)bulletinIdentifierAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)bulletinIdentifiers;
-(void)setBulletinIdentifiers:(NSMutableArray *)arg1 ;
@end

