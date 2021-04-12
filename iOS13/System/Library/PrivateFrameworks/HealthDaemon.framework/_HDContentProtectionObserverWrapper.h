/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDContentProtectionObserver, OS_dispatch_queue;
@class NSObject;

@interface _HDContentProtectionObserverWrapper : NSObject {

	id<HDContentProtectionObserver> _observer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,__weak,readonly) id<HDContentProtectionObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
-(id)init;
-(id<HDContentProtectionObserver>)observer;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithObserver:(id)arg1 queue:(id)arg2 ;
@end

