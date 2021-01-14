/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)deregisterHandlerAsyncWithToken:(id)arg1 ;
-(void)issueNotificationAsyncWithContext:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)registerWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)issueNotificationAsyncWithContext:(id)arg1 ;
-(BOOL)deregisterHandlerWithToken:(id)arg1 ;
-(void)dealloc;
-(BOOL)_deregisterHandlerWithToken:(id)arg1 waitOnPending:(BOOL)arg2 ;
@end

