/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSISEngine;

@interface NSISLinearExpression : NSObject <NSFastEnumeration> {

	NSISEngine* engine;
	SCD_Struct_NS13* linExp;

}

@property (assign) double constant; 
@property (readonly) NSISEngine * engine; 
+(void)initialize;
+(id)acquireFromPoolForUseCase:(long long)arg1 engine:(id)arg2 ;
+(id)newExpressionWithCapacity:(unsigned long long)arg1 engine:(id)arg2 ;
+(id)acquireFromPoolForUseCase:(long long)arg1 ;
+(id)newExpressionWithCapacity:(unsigned long long)arg1 ;
-(double)constant;
-(NSISEngine *)engine;
-(void)setCoefficient:(double)arg1 forVariable:(id)arg2 ;
-(id)variablesArray;
-(void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS10*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(unsigned long long)variableCount;
-(void)addVariable:(id)arg1 coefficient:(double)arg2 ;
-(double)incrementConstant:(double)arg1 ;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 ;
-(void)returnToPool;
-(void)scaleBy:(double)arg1 ;
-(void)addExpression:(id)arg1 times:(double)arg2 ;
-(id)copyContentsAndReturnToPool;
-(void)setConstant:(double)arg1 ;
-(id)description;
-(void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(void)verifyInternalIntegrity;
-(id)initWithEngine:(id)arg1 ;
-(void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(unsigned long long)hash;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(/*^block*/id)arg4 processVariableDroppedFromReceiver:(/*^block*/id)arg5 ;
-(BOOL)isConstant;
-(double)coefficientForVariable:(id)arg1 ;
-(void)enumerateVariables:(/*^block*/id)arg1 ;
-(void)removeVariable:(id)arg1 ;
-(void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3 ;
-(BOOL)enumerateVariablesAndCoefficientsUntil:(/*^block*/id)arg1 ;
-(void)enumerateVariablesAndCoefficients:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

