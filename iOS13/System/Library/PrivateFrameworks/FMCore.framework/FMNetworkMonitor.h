/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject {

	NWPathEvaluator* _evaluator;

}

@property (nonatomic,retain) NWPathEvaluator * evaluator;              //@synthesize evaluator=_evaluator - In the implementation block
+(id)sharedInstance;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NWPathEvaluator *)evaluator;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)setEvaluator:(NWPathEvaluator *)arg1 ;
-(BOOL)isMonitoring;
-(BOOL)isNetworkUp;
-(void)registerNetworkMonitorLaunchEvent:(BOOL)arg1 ;
@end

