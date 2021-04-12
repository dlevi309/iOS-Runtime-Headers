/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/BLTBulletinDistributorSubscriberDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface BLTBulletinDistributorSubscriberList : NSObject <BLTBulletinDistributorSubscriberDelegate> {

	NSMutableArray* _subscribers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * subscribers;                      //@synthesize subscribers=_subscribers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(NSMutableArray *)subscribers;
-(void)addSubscriber:(id)arg1 ;
-(void)removeSubscriber:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)setSubscribers:(NSMutableArray *)arg1 ;
-(void)subscriber:(id)arg1 subscribedWithMachServiceName:(id)arg2 ;
-(BOOL)hasSubscribersForSectionID:(id)arg1 ;
-(void)_removeSubscribersWithMachServiceName:(id)arg1 exceptFor:(id)arg2 ;
-(id)subscribedSectionIDs;
@end

