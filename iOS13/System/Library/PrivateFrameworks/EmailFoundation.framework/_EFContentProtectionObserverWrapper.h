/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@protocol EFContentProtectionObserver, OS_dispatch_queue;
@class NSObject;

@interface _EFContentProtectionObserverWrapper : NSObject {

	id<EFContentProtectionObserver> _observer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,__weak,readonly) id<EFContentProtectionObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
-(id<EFContentProtectionObserver>)observer;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithObserver:(id)arg1 queue:(id)arg2 ;
@end

