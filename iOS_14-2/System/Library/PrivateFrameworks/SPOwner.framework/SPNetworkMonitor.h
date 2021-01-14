/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stopMonitoring;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)block;
-(void)startMonitoringWithCallback:(/*^block*/id)arg1 ;
-(BOOL)isMonitoring;
-(void)setBlock:(id)arg1 ;
-(NWPathEvaluator *)evaluator;
-(void)setCachedIsNetworkUp:(BOOL)arg1 ;
-(BOOL)cachedIsNetworkUp;
-(void)notifyNetworkStateChange;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setEvaluator:(NWPathEvaluator *)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isNetworkUp;
@end

