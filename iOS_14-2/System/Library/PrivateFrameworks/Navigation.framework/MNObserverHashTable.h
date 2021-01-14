/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(BOOL)hasObservers;
-(unsigned long long)count;
-(id)description;
-(id)initWithProtocol:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

