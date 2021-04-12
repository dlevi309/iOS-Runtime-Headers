/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@interface HapticCommandConverter : NSObject
-(id)eventForTransientHapticEventType:(unsigned long long)arg1 time:(double)arg2 params:(id)arg3 duration:(double)arg4 ;
-(unsigned long long)nonSustainedEventTypeFromSharpness:(float)arg1 ;
-(unsigned long long)sustainedEventTypeFromSharpness:(float)arg1 ;
-(unsigned long long)eventTypeFromSharpness:(float)arg1 eventType:(int)arg2 ;
-(id)eventForLegacyTransientHapticEventType:(unsigned long long)arg1 time:(double)arg2 params:(id)arg3 duration:(double)arg4 ;
-(id)eventForContinuousHapticEventType:(int)arg1 time:(double)arg2 params:(id)arg3 duration:(double)arg4 ;
-(id)eventForAudioEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4 ;
-(id)eventForSPIEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4 ;
-(id)CHtoAVParameterCurve:(id)arg1 ;
-(id)eventForEventEntry:(id)arg1 engine:(id)arg2 privileged:(BOOL)arg3 ;
-(id)eventForDynamicParameterEntry:(id)arg1 ;
-(id)eventForParameterCurveEntry:(id)arg1 ;
@end

