/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBulletinList:(BLTPBFullBulletinList *)arg1 ;
-(BOOL)hasBulletinList;
-(BLTPBFullBulletinList *)bulletinList;
@end

