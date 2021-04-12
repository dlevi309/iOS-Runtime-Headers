/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/BLTPingService.h>

@class BLTBulletinDistributorSubscriber, NSString;

@interface BLTLocalPingSubscriberService : NSObject <BLTPingService> {

	BLTBulletinDistributorSubscriber* _subscriber;

}

@property (nonatomic,retain) BLTBulletinDistributorSubscriber * subscriber;              //@synthesize subscriber=_subscriber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BLTBulletinDistributorSubscriber *)subscriber;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendBulletinSummary:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3 ackAllowedOnLocalConnection:(BOOL)arg4 ;
-(void)unsubscribeFromSectionID:(id)arg1 ;
-(void)subscribeWithMachServiceName:(id)arg1 ;
-(void)setSubscriber:(BLTBulletinDistributorSubscriber *)arg1 ;
@end

