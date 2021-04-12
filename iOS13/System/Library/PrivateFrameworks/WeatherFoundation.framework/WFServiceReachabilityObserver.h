/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSHashTable, NWPathEvaluator;

@interface WFServiceReachabilityObserver : NSObject {

	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableDictionary* _blockObserversForUUID;
	NSHashTable* _observerObjects;
	long long _reachability;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NWPathEvaluator* _serviceReachabilityEvaluator;

}

@property (retain) NSObject*<OS_dispatch_queue> observerQueue;                        //@synthesize observerQueue=_observerQueue - In the implementation block
@property (retain) NSMutableDictionary * blockObserversForUUID;                       //@synthesize blockObserversForUUID=_blockObserversForUUID - In the implementation block
@property (retain) NSHashTable * observerObjects;                                     //@synthesize observerObjects=_observerObjects - In the implementation block
@property (assign,nonatomic) long long reachability;                                  //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (retain) NWPathEvaluator * serviceReachabilityEvaluator;                    //@synthesize serviceReachabilityEvaluator=_serviceReachabilityEvaluator - In the implementation block
@property (readonly) BOOL isServiceAvailable; 
+(id)sharedObserver;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeAllObservers;
-(long long)reachability;
-(void)setReachability:(long long)arg1 ;
-(void)_setupReachability;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isServiceAvailable;
-(void)setBlockObserversForUUID:(NSMutableDictionary *)arg1 ;
-(void)setObserverObjects:(NSHashTable *)arg1 ;
-(NSHashTable *)observerObjects;
-(NSMutableDictionary *)blockObserversForUUID;
-(id)addBlockObserver:(/*^block*/id)arg1 ;
-(BOOL)removeBlockObserverWithHandle:(id)arg1 ;
-(NWPathEvaluator *)serviceReachabilityEvaluator;
-(void)_deliverReachabilityUpdate:(long long)arg1 ;
-(void)setServiceReachabilityEvaluator:(NWPathEvaluator *)arg1 ;
@end

