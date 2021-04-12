/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class BBBulletin;

@interface BLTBulletinDistributorBulletinUpdate : NSObject {

	unsigned long long _updateType;
	BBBulletin* _bulletin;
	unsigned long long _feed;

}

@property (assign,nonatomic) unsigned long long updateType;              //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,retain) BBBulletin * bulletin;                      //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) unsigned long long feed;                    //@synthesize feed=_feed - In the implementation block
+(id)bulletinUpdateWithType:(unsigned long long)arg1 bulletin:(id)arg2 feed:(unsigned long long)arg3 ;
-(void)setFeed:(unsigned long long)arg1 ;
-(BBBulletin *)bulletin;
-(unsigned long long)feed;
-(unsigned long long)updateType;
-(void)setUpdateType:(unsigned long long)arg1 ;
-(void)setBulletin:(BBBulletin *)arg1 ;
@end

