/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/


@class NSArray;

@interface ASBulletinStore : NSObject {

	NSArray* _bulletins;

}

@property (nonatomic,readonly) NSArray * bulletins;              //@synthesize bulletins=_bulletins - In the implementation block
-(id)init;
-(void)removeAllBulletins;
-(void)_persistBulletins;
-(void)addBulletins:(id)arg1 ;
-(void)removeBulletinsMatchingCriteria:(/*^block*/id)arg1 ;
-(NSArray *)bulletins;
@end

