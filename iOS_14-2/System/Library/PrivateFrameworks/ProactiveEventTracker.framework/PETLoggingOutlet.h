/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


@protocol PETLoggingOutlet <NSObject>
@required
-(void)logDoubleValue:(double)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
-(void)logErrorForEvent:(id)arg1 featureId:(id)arg2 reason:(id)arg3;
-(void)setUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
-(void)logUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;

@end

