/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@class AKAdaptiveService, NSXPCListenerEndpoint;

@interface AKAuthorizationNotificationService : NSObject {

	AKAdaptiveService* _service;
	NSXPCListenerEndpoint* _daemonEndpoint;

}
+(id)_sharedService;
+(void)startServiceWithNotificationHandler:(id)arg1 ;
-(id)init;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(void)startWithNotificationHandler:(id)arg1 ;
-(void)_configureNotificationService;
@end

