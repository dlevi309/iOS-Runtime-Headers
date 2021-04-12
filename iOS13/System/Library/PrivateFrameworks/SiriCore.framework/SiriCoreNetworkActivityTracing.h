/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)_networkActivityStart:(long long)arg1 activate:(BOOL)arg2 ;
-(void)_networkActivityActivate:(long long)arg1 ;
-(void)_networkActivityStop:(long long)arg1 ;
-(void)_networkActivityTracingCancel;
-(void)_networkActivityAddNWConnection:(id)arg1 ;
-(void)_networkActivityRemoveNWConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)networkActivityStart:(long long)arg1 activate:(BOOL)arg2 ;
-(void)networkActivityActivate:(long long)arg1 ;
-(void)networkActivityStop:(long long)arg1 ;
-(void)networkActivityTracingCancel;
-(void)networkActivityAddNWConnection:(id)arg1 ;
-(void)networkActivityRemoveNWConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

