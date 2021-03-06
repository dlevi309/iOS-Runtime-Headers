/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBFullBulletinList;

@interface BLTPBUpdateBulletinListRequest : PBRequest <NSCopying> {

	BLTPBFullBulletinList* _bulletinList;

}

@property (nonatomic,readonly) BOOL hasBulletinList; 
@property (nonatomic,retain) BLTPBFullBulletinList * bulletinList;              //@synthesize bulletinList=_bulletinList - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBulletinList:(BLTPBFullBulletinList *)arg1 ;
-(BOOL)hasBulletinList;
-(BLTPBFullBulletinList *)bulletinList;
@end

