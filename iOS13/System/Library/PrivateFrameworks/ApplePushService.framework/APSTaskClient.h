/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableArray, NSObject, NSString;

@interface APSTaskClient : NSObject {

	NSXPCConnection* _connection;
	NSMutableArray* _outstandingDNSRequests;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSString* _environment;

}
-(void)dealloc;
-(void)_clearOutstandingTasks:(long long)arg1 ;
-(void)_timeoutOutstandingRequests;
-(id)initWithEnvironment:(id)arg1 queue:(id)arg2 ;
-(id)_findDNSRequestForHostname:(id)arg1 ;
-(id)resolveDNS:(id)arg1 ;
@end

