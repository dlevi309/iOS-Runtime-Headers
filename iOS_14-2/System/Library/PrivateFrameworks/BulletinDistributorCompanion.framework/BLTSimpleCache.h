/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
@class NSMutableArray;

@interface BLTSimpleCache : NSObject {

	NSMutableArray* _objects;
	unsigned long long _capacity;
	os_unfair_lock_s _lock;

}
-(id)objects;
-(id)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)cacheObject:(id)arg1 ;
@end

