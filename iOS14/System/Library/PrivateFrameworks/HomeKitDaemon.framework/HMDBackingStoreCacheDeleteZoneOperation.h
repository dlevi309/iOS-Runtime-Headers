/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheZone;

@interface HMDBackingStoreCacheDeleteZoneOperation : HMDBackingStoreOperation {

	/*^block*/id _creationBlock;
	HMDBackingStoreCacheZone* _zone;

}

@property (nonatomic,copy) id creationBlock;                               //@synthesize creationBlock=_creationBlock - In the implementation block
@property (nonatomic,retain) HMDBackingStoreCacheZone * zone;              //@synthesize zone=_zone - In the implementation block
-(HMDBackingStoreCacheZone *)zone;
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
-(void)setZone:(HMDBackingStoreCacheZone *)arg1 ;
-(id)mainReturningError;
-(id)initWithZone:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
@end

