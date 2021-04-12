/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSISEngine;

@interface NSISLinearExpression : NSObject <NSFastEnumeration> {

	NSISEngine* engine;
	SCD_Struct_NS73* linExp;

}

@property (assign) double constant; 
@property (readonly) NSISEngine * engine; 
+(void)initialize;
+(id)newExpressionWithCapacity:(unsigned long long)arg1 engine:(id)arg2 ;
+(id)newExpressionWithCapacity:(unsigned long long)arg1 ;
+(id)acquireFromPoolForUseCase:(long long)arg1 ;
+(id)acquireFromPoolForUseCase:(long long)arg1 engine:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)scaleBy:(double)arg1 ;
-(unsigned long long)variableCount;
-(void)addVariable:(id)arg1 coefficient:(double)arg2 ;
-(id)variablesArray;
-(NSISEngine *)engine;
-(double)constant;
-(double)incrementConstant:(double)arg1 ;
-(void)addExpression:(id)arg1 times:(double)arg2 ;
-(id)initWithEngine:(id)arg1 ;
-(void)verifyInternalIntegrity;
-(void)enumerateVariablesAndCoefficients:(/*^block*/id)arg1 ;
-(id)initWithInlineCapacity:(unsigned long long)arg1 engine:(id)arg2 ;
-(void)removeVariable:(id)arg1 ;
-(double)coefficientForVariable:(id)arg1 ;
-(void)setCoefficient:(double)arg1 forVariable:(id)arg2 ;
-(void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3 ;
-(void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(void)setConstant:(double)arg1 ;
-(BOOL)isConstant;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 ;
-(void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(/*^block*/id)arg4 processVariableDroppedFromReceiver:(/*^block*/id)arg5 ;
-(void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(/*^block*/id)arg3 processVariableDroppedFromReceiver:(/*^block*/id)arg4 ;
-(void)enumerateVariables:(/*^block*/id)arg1 ;
-(BOOL)enumerateVariablesAndCoefficientsUntil:(/*^block*/id)arg1 ;
-(void)returnToPool;
-(id)copyContentsAndReturnToPool;
@end

