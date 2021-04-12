/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSMutableSet;

@interface AWServiceManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSMutableSet* _serviceObservers;

}
+(void)addObserver:(id)arg1 ;
+(id)sharedManager;
+(void)removeObserver:(id)arg1 ;
+(id)invokeWithService:(/*^block*/id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id)invokeWithService:(/*^block*/id)arg1 ;
@end

