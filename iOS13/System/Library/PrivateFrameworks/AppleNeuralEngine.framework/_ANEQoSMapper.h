/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
*/


@interface _ANEQoSMapper : NSObject
+(unsigned)aneRealTimeTaskQoS;
+(unsigned)aneUserInteractiveTaskQoS;
+(unsigned)aneUserInitiatedTaskQoS;
+(unsigned)aneDefaultTaskQoS;
+(unsigned)aneUtilityTaskQoS;
+(unsigned)aneBackgroundTaskQoS;
+(unsigned long long)queueIndexForQoS:(unsigned)arg1 ;
+(unsigned long long)realTimeQueueIndex;
+(int)programPriorityForQoS:(unsigned)arg1 ;
+(int)realTimeProgramPriority;
@end

