/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/


@class NSArray;

@interface ASBulletinStore : NSObject {

	NSArray* _bulletins;

}

@property (nonatomic,readonly) NSArray * bulletins;              //@synthesize bulletins=_bulletins - In the implementation block
-(id)init;
-(NSArray *)bulletins;
-(void)removeAllBulletins;
-(void)_persistBulletins;
-(void)addBulletins:(id)arg1 ;
-(void)removeBulletinsMatchingCriteria:(/*^block*/id)arg1 ;
@end

