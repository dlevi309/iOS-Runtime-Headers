/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@class AKAdaptiveService, NSXPCListenerEndpoint;

@interface AKAuthorizationNotificationService : NSObject {

	AKAdaptiveService* _service;
	NSXPCListenerEndpoint* _daemonEndpoint;

}
+(id)_sharedService;
+(void)startServiceWithNotificationHandler:(id)arg1 ;
+(void)startServiceWithStateBroadcastHandler:(id)arg1 ;
-(id)init;
-(void)startWithNotificationHandler:(id)arg1 ;
-(void)startWithStateBroadcastHandler:(id)arg1 ;
-(void)_configureNotificationService;
-(void)_configureStateBroadcastService;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
@end

