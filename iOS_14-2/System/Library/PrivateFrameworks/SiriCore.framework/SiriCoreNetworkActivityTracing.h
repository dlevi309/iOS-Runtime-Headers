/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet;

@interface SiriCoreNetworkActivityTracing : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _activities;
	NSMutableSet* _connections;

}
+(id)sharedNetworkActivityTracing;
-(void)networkActivityStart:(long long)arg1 activate:(BOOL)arg2 ;
-(void)networkActivityAddNWConnection:(id)arg1 ;
-(id)init;
-(void)_networkActivityRemoveNWConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_networkActivityStart:(long long)arg1 activate:(BOOL)arg2 ;
-(void)networkActivityActivate:(long long)arg1 ;
-(void)_networkActivityStop:(long long)arg1 withReason:(long long)arg2 ;
-(void)networkActivityRemoveNWConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_networkActivityActivate:(long long)arg1 ;
-(void)_networkActivityAddNWConnection:(id)arg1 ;
-(void)networkActivityStop:(long long)arg1 withReason:(long long)arg2 ;
-(void)networkActivityTracingCancel;
-(void)currentNetworkActivityTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)_networkActivityTracingCancel;
@end

