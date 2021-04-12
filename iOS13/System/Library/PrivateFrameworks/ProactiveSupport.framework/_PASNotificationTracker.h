/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@class NSMutableDictionary;

@interface _PASNotificationTracker : NSObject {

	opaque_pthread_mutex_t _lock;
	unsigned long long _nextNotificationToken;
	NSMutableDictionary* _observers;

}
-(id)init;
-(void)dealloc;
-(id)registerWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_deregisterHandlerWithToken:(id)arg1 waitOnPending:(BOOL)arg2 ;
-(BOOL)deregisterHandlerWithToken:(id)arg1 ;
-(BOOL)deregisterHandlerAsyncWithToken:(id)arg1 ;
-(void)issueNotificationAsyncWithContext:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)issueNotificationAsyncWithContext:(id)arg1 ;
@end

