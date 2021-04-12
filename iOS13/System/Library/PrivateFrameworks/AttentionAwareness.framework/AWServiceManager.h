/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)removeObserver:(id)arg1 ;
+(id)sharedManager;
+(id)invokeWithService:(/*^block*/id)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)invokeWithService:(/*^block*/id)arg1 ;
@end

