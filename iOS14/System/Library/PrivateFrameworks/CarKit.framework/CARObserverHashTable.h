/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@protocol OS_dispatch_queue;
#import <CarKit/CarKit-Structs.h>
@class Protocol, NSHashTable, NSObject;

@interface CARObserverHashTable : NSObject {

	Protocol* _protocol;
	NSHashTable* _observers;
	os_unfair_lock_s _observersLock;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (readonly) BOOL hasObservers; 
-(void)addObserver:(id)arg1 ;
-(id)initWithProtocol:(id)arg1 callbackQueue:(id)arg2 ;
-(BOOL)hasObservers;
-(id)description;
-(id)initWithProtocol:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

