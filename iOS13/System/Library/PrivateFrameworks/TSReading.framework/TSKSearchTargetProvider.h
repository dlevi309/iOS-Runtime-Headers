/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSKSearchTargetProvider <NSObject>
@required
-(unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1;
-(void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(/*^block*/id)arg2;
-(unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4;

@end

