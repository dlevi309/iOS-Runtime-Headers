/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3 ackAllowedOnLocalConnection:(BOOL)arg4 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unsubscribeFromSectionID:(id)arg1 ;
-(void)sendBulletinSummary:(id)arg1 ;
-(void)subscribeWithMachServiceName:(id)arg1 ;
-(void)setSubscriber:(BLTBulletinDistributorSubscriber *)arg1 ;
@end

