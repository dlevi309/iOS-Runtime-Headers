/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class NSDictionary, CKContainer;

@interface HDCloudSyncRegisterSubscriptionsOperation : HDCloudSyncOperation {

	NSDictionary* _subscriptions;
	CKContainer* _container;

}
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 container:(id)arg3 subscriptions:(id)arg4 ;
-(void)registerSubscriptionsWithIdentifer:(id)arg1 database:(id)arg2 ;
@end

