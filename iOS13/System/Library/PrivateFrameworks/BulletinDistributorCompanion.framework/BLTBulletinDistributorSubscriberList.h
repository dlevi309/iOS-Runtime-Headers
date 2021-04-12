/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSObject*<OS_dispatch_queue>)queue;
-(void)removeSubscriber:(id)arg1 ;
-(NSMutableArray *)subscribers;
-(void)addSubscriber:(id)arg1 ;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)subscriber:(id)arg1 subscribedWithMachServiceName:(id)arg2 ;
-(void)setSubscribers:(NSMutableArray *)arg1 ;
-(BOOL)hasSubscribersForSectionID:(id)arg1 ;
-(void)_removeSubscribersWithMachServiceName:(id)arg1 exceptFor:(id)arg2 ;
-(id)subscribedSectionIDs;
@end

