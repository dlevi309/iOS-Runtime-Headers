/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
*/


@interface _ANEQoSMapper : NSObject
+(unsigned)aneUserInteractiveTaskQoS;
+(unsigned)aneRealTimeTaskQoS;
+(unsigned)aneUserInitiatedTaskQoS;
+(unsigned)aneDefaultTaskQoS;
+(unsigned)aneUtilityTaskQoS;
+(unsigned)aneBackgroundTaskQoS;
+(unsigned long long)queueIndexForQoS:(unsigned)arg1 ;
+(unsigned long long)realTimeQueueIndex;
+(int)programPriorityForQoS:(unsigned)arg1 ;
+(int)realTimeProgramPriority;
@end

