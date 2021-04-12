/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol OS_dispatch_queue;
@class Protocol, NSHashTable, geo_isolater, NSObject;

@interface MNObserverHashTable : NSObject {

	Protocol* _protocol;
	NSHashTable* _observers;
	geo_isolater* _observerLock;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) BOOL hasObservers; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)hasObservers;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithProtocol:(id)arg1 ;
@end

