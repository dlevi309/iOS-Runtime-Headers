/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class ASDServiceBroker, NSString;

@interface ASDOcelotStore : NSObject <ASDServiceProvider> {

	ASDServiceBroker* _serviceBroker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
-(void)sbsyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)recordLaunchesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)resetPayoutWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)resetSummaryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sendSummaryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)subscriptionStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)sbsyncWithDuration:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)flushMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)topAppsForAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)subscriptionDetailsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reportAppEvent:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sbsyncIfSubscribedWithAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendPayoutWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getAppPayoutEventsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getAppSummaryEventsWithCompletionBlock:(/*^block*/id)arg1 ;
@end

