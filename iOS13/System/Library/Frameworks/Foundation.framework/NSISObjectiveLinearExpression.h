/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSISEngine;

@interface NSISObjectiveLinearExpression : NSObject {

	NSISEngine* _engine;
	SCD_Struct_NS75* _priorityMap;
	SCD_Struct_NS76* _constant;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)variableCount;
-(id)initWithEngine:(id)arg1 ;
-(void)verifyInternalIntegrity;
-(id)initWithLinearExpression:(SCD_Struct_NS77*)arg1 priority:(double)arg2 engine:(id)arg3 ;
-(void)cleanupForReuse;
-(void)addExpression:(SCD_Struct_NS77*)arg1 priority:(double)arg2 times:(double)arg3 processVarNewToReceiver:(/*^block*/id)arg4 processVarDroppedFromReceiver:(/*^block*/id)arg5 ;
-(void)replaceVar:(os_unfair_lock_s)arg1 withVarPlusDelta:(double)arg2 timesVar:(os_unfair_lock_s)arg3 processVarNewToReceiver:(/*^block*/id)arg4 processVarDroppedFromReceiver:(/*^block*/id)arg5 ;
-(void)addVar:(os_unfair_lock_s)arg1 priority:(double)arg2 times:(double)arg3 processVarNewToReceiver:(/*^block*/id)arg4 processVarDroppedFromReceiver:(/*^block*/id)arg5 ;
-(void)leadingPriority:(double*)arg1 andValue:(double*)arg2 forVar:(os_unfair_lock_s)arg3 ;
-(void)removeVar:(os_unfair_lock_s)arg1 ;
-(void)replaceVar:(os_unfair_lock_s)arg1 withExpression:(SCD_Struct_NS77*)arg2 processVarNewToReceiver:(/*^block*/id)arg3 processVarDroppedFromReceiver:(/*^block*/id)arg4 ;
-(BOOL)restrictedVarWithCoefficientOfLargestNegativeMagnitudeOutVar:(os_unfair_lock_s*)arg1 ;
-(BOOL)constantTermIsZero;
-(void)enumerateVars:(/*^block*/id)arg1 ;
-(void)replaceVar:(os_unfair_lock_s)arg1 withVarPlusDelta:(double)arg2 ;
-(void)removeVariable:(id)arg1 ;
-(void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(void)addVar:(os_unfair_lock_s)arg1 priority:(double)arg2 times:(double)arg3 ;
-(void)incrementConstantWithPriority:(double)arg1 value:(double)arg2 ;
-(SCD_Struct_NS78*)priorityVectorForVar:(os_unfair_lock_s)arg1 ;
-(void)setPriorityVector:(SCD_Struct_NS78*)arg1 forKnownAbsentVar:(os_unfair_lock_s)arg2 ;
-(void)incrementConstantWithPriorityVector:(SCD_Struct_NS78*)arg1 timesScalarCoefficient:(double)arg2 ;
-(int)valueRestrictionForVar:(os_unfair_lock_s)arg1 ;
-(void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3 ;
-(id)restrictedVariableWithCoefficientOfLargestNegativeMagnitude;
@end

