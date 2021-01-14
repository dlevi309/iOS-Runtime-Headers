/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@protocol SFAnalyticsProtocol <NSObject>
@required
+(id)logger;
-(void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3;
-(void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3 withAttributes:(id)arg4;
-(id)AddMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(/*^block*/id)arg3;
-(id)logSystemMetricsForActivityNamed:(id)arg1 withAction:(/*^block*/id)arg2;
-(id)startLogSystemMetricsForActivityNamed:(id)arg1;

@end

