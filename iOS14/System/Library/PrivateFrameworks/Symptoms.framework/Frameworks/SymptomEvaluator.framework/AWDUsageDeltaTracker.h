/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@interface AWDUsageDeltaTracker : NSObject {

	int netType;
	int rootCause;
	unsigned long long startValue;
	unsigned long long lastValue;
	unsigned long long flowCount;

}
-(void)dealloc;
-(id)initForNetworkType:(int)arg1 rootCause:(int)arg2 startValue:(unsigned long long)arg3 ;
-(void)recordUsageValue:(unsigned long long)arg1 ;
-(void)recordFlowCount:(unsigned long long)arg1 ;
@end

