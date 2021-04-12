/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_clearOutstandingTasks:(long long)arg1 ;
-(id)resolveDNS:(id)arg1 ;
-(void)_timeoutOutstandingRequests;
-(id)initWithEnvironment:(id)arg1 queue:(id)arg2 ;
-(id)_findDNSRequestForHostname:(id)arg1 ;
-(void)dealloc;
@end

