/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

