/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/


@protocol OS_dispatch_queue;
@class NWPathEvaluator, NSObject;

@interface SPNetworkMonitor : NSObject {

	BOOL _cachedIsNetworkUp;
	NWPathEvaluator* _evaluator;
	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NWPathEvaluator * evaluator;                             //@synthesize evaluator=_evaluator - In the implementation block
@property (nonatomic,copy) id block;                                                  //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL cachedIsNetworkUp;                                  //@synthesize cachedIsNetworkUp=_cachedIsNetworkUp - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)block;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBlock:(id)arg1 ;
-(NWPathEvaluator *)evaluator;
-(void)stopMonitoring;
-(void)setEvaluator:(NWPathEvaluator *)arg1 ;
-(BOOL)isMonitoring;
-(BOOL)isNetworkUp;
-(void)startMonitoringWithCallback:(/*^block*/id)arg1 ;
-(void)notifyNetworkStateChange;
-(BOOL)cachedIsNetworkUp;
-(void)setCachedIsNetworkUp:(BOOL)arg1 ;
@end

