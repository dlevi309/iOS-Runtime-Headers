/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/PerformanceTraceModule.bundle/PerformanceTraceModule
*/


@protocol PTTraceSessionDelegate <NSObject>
@optional
-(void)performanceTraceDidStart:(id)arg1;
-(void)performanceTraceDidStop:(id)arg1;
-(void)performanceTraceDidComplete:(id)arg1 withToken:(id)arg2 withError:(id)arg3;

@end

